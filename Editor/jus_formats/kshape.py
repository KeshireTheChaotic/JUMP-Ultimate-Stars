"""Koma card shapes: ``bin/kshape.bin`` (shape dictionary) + ``bin/koma.bin`` (cards).

Ported from the 2026-11-05 trace package (``koma_layout.py``); validated on
the shipped files (both rebuild byte-for-byte).

``kshape.bin`` (1,648 bytes)::

    +0x00 u32 start[8]    first global shape index of each size group (1..8 cells)
    +0x20 u32 count[8]    group lengths [1, 2, 6, 12, 14, 14, 13, 4] = 66 shapes
    +0x40 shape[66], 24 bytes each:
          u8 cell[20]     5 columns × 4 rows, row-major (the deck board's width;
                          ARM9 FUN_02076E38 walks row*5 + col); 0 = empty,
                          1..n = which 48×48 art panel sits in that cell
          u32 mask        bit (row*5 + col) set exactly when cell != 0

``koma.bin`` (10,680 bytes = 890 cards × 12 bytes)::

    +0x00 u16 index       == record number (checked)
    +0x04 u8  series id   art prefix = ARM9 table 0x0209E840 (roster.KOMA_SERIES_PREFIXES)
    +0x05 u8  art index   koma/<prefix>_<NN>.dtx  (FUN_020790F0, template koma/??_??.dtx)
    +0x06 u8  type        0 battle koma, 1 support koma, 2 other (FUN_02076E38)
    +0x07 u8  character   chr_b.bin / chr_s.bin record (type 0 / 1)
    +0x08 u8  size - 1    selects the size group
    +0x09 u8  variant     index inside that group
    other bytes           unknown; preserved

Known shipped anomaly: global shape 59 (size 7, variant 10) labels panel 4
twice and omits 5; card 678 uses it.  It is reported, never renumbered.
"""
from __future__ import annotations

import struct
from dataclasses import dataclass

COLS, ROWS = 5, 4          # deck board / shape grid: 5 columns × 4 rows
SHAPE_SIZE = 24
CARD_SIZE = 12


@dataclass(frozen=True)
class Shape:
    index: int          # global shape number (0..65)
    size: int           # occupied cells = art panels (1..8)
    variant: int        # index inside the size group
    cells: tuple[int, ...]
    mask: int

    def coordinates(self) -> tuple[tuple[int, int, int], ...]:
        """(col, row, panel label) of every occupied cell."""
        return tuple((i % COLS, i // COLS, n) for i, n in enumerate(self.cells) if n)

    def problems(self) -> list[str]:
        labels = sorted(n for n in self.cells if n)
        if labels != list(range(1, self.size + 1)):
            dup = sorted({n for n in labels if labels.count(n) > 1})
            miss = [n for n in range(1, self.size + 1) if n not in labels]
            return [f'shape {self.index}: panel label(s) {dup} repeated, {miss} missing (shipped data)']
        return []

    @property
    def bounds(self) -> tuple[int, int]:
        """(columns, rows) actually used."""
        co = self.coordinates()
        return (max(c for c, _, _ in co) + 1, max(r for _, r, _ in co) + 1) if co else (0, 0)


@dataclass
class Card:
    index: int
    raw: bytearray

    @property
    def series_id(self) -> int:
        return self.raw[4]

    @property
    def art_index(self) -> int:
        return self.raw[5]

    @property
    def size(self) -> int:
        return self.raw[8] + 1

    @property
    def variant(self) -> int:
        return self.raw[9]


class ShapeTable:
    def __init__(self, groups: list[list[Shape]], raw: bytes | None = None):
        self.groups = groups
        self.raw = raw

    @property
    def shapes(self) -> list[Shape]:
        return [s for g in self.groups for s in g]

    def get(self, size: int, variant: int) -> Shape:
        if not 1 <= size <= len(self.groups) or not 0 <= variant < len(self.groups[size - 1]):
            raise ValueError(f'no koma shape for size {size}, variant {variant}')
        return self.groups[size - 1][variant]

    @classmethod
    def parse(cls, data: bytes) -> 'ShapeTable':
        if len(data) < 0x40 or (len(data) - 0x40) % SHAPE_SIZE:
            raise ValueError('kshape.bin: expected a 64-byte index and 24-byte shape records')
        starts = struct.unpack_from('<8I', data, 0)
        counts = struct.unpack_from('<8I', data, 0x20)
        total = (len(data) - 0x40) // SHAPE_SIZE
        if starts[0] != 0 or sum(counts) != total or any(starts[i] + counts[i] != starts[i + 1] for i in range(7)):
            raise ValueError('kshape.bin: invalid size index or shape counts')
        groups = []
        for n in range(1, 9):
            group = []
            for v in range(counts[n - 1]):
                gi = starts[n - 1] + v
                off = 0x40 + SHAPE_SIZE * gi
                cells = tuple(data[off:off + 20])
                mask = struct.unpack_from('<I', data, off + 20)[0]
                if sum(1 << i for i, c in enumerate(cells) if c) != mask or sum(c != 0 for c in cells) != n:
                    raise ValueError(f'kshape.bin: inconsistent occupancy at shape {gi}')
                if any(c > n for c in cells):
                    raise ValueError(f'kshape.bin: out-of-range panel label at shape {gi}')
                group.append(Shape(gi, n, v, cells, mask))
            groups.append(group)
        return cls(groups, bytes(data))

    def build(self) -> bytes:
        starts, counts, start = [], [], 0
        for g in self.groups:
            starts.append(start)
            counts.append(len(g))
            start += len(g)
        out = bytearray(struct.pack('<16I', *starts, *counts))
        for g in self.groups:
            for s in g:
                out += bytes(s.cells) + struct.pack('<I', s.mask)
        return bytes(out)


class CardTable:
    def __init__(self, cards: list[Card]):
        self.cards = cards

    @classmethod
    def parse(cls, data: bytes, shapes: ShapeTable | None = None) -> 'CardTable':
        if len(data) % CARD_SIZE:
            raise ValueError('koma.bin: expected 12-byte records')
        cards = []
        for i in range(len(data) // CARD_SIZE):
            raw = bytearray(data[CARD_SIZE * i:CARD_SIZE * (i + 1)])
            if struct.unpack_from('<H', raw)[0] != i:
                raise ValueError(f'koma.bin record {i}: index field {struct.unpack_from("<H", raw)[0]}')
            card = Card(i, raw)
            if shapes is not None:
                shapes.get(card.size, card.variant)      # validates the selector
            cards.append(card)
        return cls(cards)

    def build(self) -> bytes:
        return b''.join(bytes(c.raw) for c in self.cards)

    def set_shape(self, index: int, size: int, variant: int, shapes: ShapeTable) -> None:
        """Change only bytes +0x08/+0x09 of one card; everything else is preserved."""
        shapes.get(size, variant)
        card = self.cards[index]
        card.raw[8] = size - 1
        card.raw[9] = variant

    def by_series(self) -> dict[int, list[Card]]:
        out: dict[int, list[Card]] = {}
        for c in self.cards:
            out.setdefault(c.series_id, []).append(c)
        for v in out.values():
            v.sort(key=lambda c: c.art_index)
        return out
