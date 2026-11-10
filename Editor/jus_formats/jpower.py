"""Native J-Power purchase/evolution families in bin/jpower.bin.

Source: ARM9 ov05 02165398 (row identifier), 021653AC (0x130 row,
five groups of three 0x14-byte cells), 02164234 (action status),
0216458C (eligibility), 021646F4 (kind 1 Koma award +4),
02164458 (six u16 resource prices at cell+8), and main 02075F98.
Only kind=1 names a Koma. Other kinds use unrelated save-bit tables.

A row root is a 1-panel Koma; its kind-1 cells name its same-series
larger battle/support Koma. Group/slot are original UI coordinates,
NOT a proven linear prerequisite chain. Unknown bytes remain raw.
"""
from __future__ import annotations

import struct
from dataclasses import dataclass

PATH = 'bin/jpower.bin'
ROW_SIZE = 0x130
CELL_SIZE = 0x14
GROUPS = 5
SLOTS = 3
COSTS = 6


@dataclass(frozen=True)
class PurchaseCell:
    row: int
    group: int
    slot: int
    offset: int
    raw: bytes

    @property
    def active(self) -> bool:
        return any(self.raw)

    @property
    def kind(self) -> int:
        return self.raw[2]

    @property
    def target_id(self) -> int:
        return struct.unpack_from('<H', self.raw, 4)[0]

    @property
    def prices(self) -> tuple[int, ...]:
        return struct.unpack_from('<6H', self.raw, 8)

    @property
    def gate_raw(self) -> int:
        return self.raw[1]

    @property
    def placement_raw(self) -> int:
        return self.raw[0]


@dataclass(frozen=True)
class PurchaseRow:
    index: int
    root_card: int
    cells: tuple[PurchaseCell, ...]

    @property
    def koma_targets(self) -> tuple[PurchaseCell, ...]:
        return tuple(c for c in self.cells if c.kind == 1)


class JPowerCatalog:
    def __init__(self, raw: bytes, rows: tuple[PurchaseRow, ...]):
        self.raw = raw
        self.rows = rows
        self._by_card: dict[int, PurchaseRow] = {}
        for row in rows:
            self._by_card[row.root_card] = row
            for cell in row.koma_targets:
                self._by_card[cell.target_id] = row

    @classmethod
    def parse(cls, raw: bytes) -> 'JPowerCatalog':
        if not raw or len(raw) % ROW_SIZE:
            raise ValueError('J-Power size must be a positive multiple of 0x130')
        rows = []
        for r in range(len(raw) // ROW_SIZE):
            start = r * ROW_SIZE
            root_card = struct.unpack_from('<I', raw, start)[0]
            cells = []
            for group in range(GROUPS):
                for slot in range(SLOTS):
                    off = start + 4 + group * SLOTS * CELL_SIZE + slot * CELL_SIZE
                    cells.append(PurchaseCell(r, group, slot, off, raw[off:off + CELL_SIZE]))
            rows.append(PurchaseRow(r, root_card, tuple(cells)))
        return cls(bytes(raw), tuple(rows))

    def family(self, card_id: int) -> PurchaseRow | None:
        return self._by_card.get(card_id)

    def cell(self, row: int, group: int, slot: int) -> PurchaseCell:
        if not 0 <= row < len(self.rows) or not 0 <= group < GROUPS or not 0 <= slot < SLOTS:
            raise IndexError('J-Power row/group/slot out of range')
        return self.rows[row].cells[group * SLOTS + slot]

    def replace_costs(self, row: int, group: int, slot: int, costs) -> 'JPowerCatalog':
        cell = self.cell(row, group, slot)
        if not cell.active or cell.kind == 0:
            raise ValueError('Cannot change resource costs on an inactive cell')
        values = tuple(int(v) for v in costs)
        if len(values) != COSTS or any(v < 0 or v > 65535 for v in values):
            raise ValueError('Requires six unsigned 16-bit resource amounts')
        patched = bytearray(self.raw)
        patched[cell.offset + 8:cell.offset + CELL_SIZE] = struct.pack('<6H', *values)
        return type(self).parse(bytes(patched))

    def build(self) -> bytes:
        return self.raw

    def validate_cards(self, cards) -> list[str]:
        """Check original-data referential integrity; don't assert runtime prerequisites."""
        warnings = []
        roots, targets = set(), set()
        for row in self.rows:
            source = row.root_card
            if not 0 <= source < len(cards):
                warnings.append(f'row {row.index} root card {source} outside koma.bin')
                continue
            if source in roots:
                warnings.append(f'duplicate family root {source}')
            roots.add(source)
            for cell in row.koma_targets:
                dest = cell.target_id
                if not 0 <= dest < len(cards):
                    warnings.append(f'row {row.index} group {cell.group} slot {cell.slot}: invalid Koma {dest}')
                    continue
                if dest in targets:
                    warnings.append(f'duplicate Koma evolution target {dest}')
                targets.add(dest)
                if cards[source].raw[4] != cards[dest].raw[4]:
                    warnings.append(f'family {source} → {dest}: series mismatch')
        if roots & targets:
            warnings.append(f'{len(roots & targets)} Koma cards are both family roots and targets')
        return warnings


def parse(data: bytes) -> JPowerCatalog:
    return JPowerCatalog.parse(data)
