"""Small global tables from ``bin/*.bin`` and ``deck/Deck.aar`` (read-only).

Text tables are self-relative u32 offsets (entry i at 4*i + value) to
NUL-terminated CP932 strings; the first offset gives the table size.  Some
tables interleave numeric words with the text pointers, so they are read as
fixed groups and only the text slots are decoded (docs/Research, 2026-11-06,
re-checked on the shipped data):

* ``bin/komatxt.bin``  890 × 3 words: word 0 = Koma name (one per bin/koma.bin card)
* ``bin/chr_s_t.bin``  193 × 9 text slots per support character
* ``bin/ability_t.bin`` 57 × 3 text slots per ability
* ``bin/rulemess.bin``  22 × 4 words: three messages + one number
* ``bin/title.bin``, ``bin/infoname.bin``  plain lists (42 series names each)

Deck presets ``deck/Deck.aar|deck/<set>/NNN.bin``: ``FUN_02070A28`` copies 0x5C
bytes: 16 slots of {u16 Koma id (0xFFFF = empty), u16 placement} and a 28-byte
CP932 name.  Placement bits 0–3 / 4–7 are the column 0–4 and row 0–3 on the
5×4 deck board: with each card's bin/kshape.bin shape, all 1,788 cards in the
295 presets fit on the board (no cell outside it, one overlapping cell).
Bits 8–11 and 12 are kept raw (not traced).
"""
from __future__ import annotations

import struct
from dataclasses import dataclass


def text_table(blob: bytes) -> list[str]:
    """Every string of a homogeneous self-relative text table."""
    if len(blob) < 4:
        return []
    first = struct.unpack_from('<I', blob, 0)[0]
    if first % 4 or not 0 < first <= len(blob):
        raise ValueError('not a self-relative text table')
    return [_string(blob, i) for i in range(first // 4)]


def _string(blob: bytes, i: int) -> str:
    o = 4 * i + struct.unpack_from('<I', blob, 4 * i)[0]
    if not 0 <= o < len(blob):
        raise ValueError(f'text entry {i} points outside the table')
    end = blob.find(b'\0', o)
    return blob[o:end if end >= 0 else len(blob)].decode('cp932', 'replace')


def grouped_text(blob: bytes, group: int, text_slots: tuple[int, ...]) -> list[list[str]]:
    """Fixed groups of ``group`` words; only ``text_slots`` are text pointers."""
    first = struct.unpack_from('<I', blob, 0)[0]
    words = first // 4
    if words % group:
        raise ValueError(f'table of {words} words is not a multiple of {group}')
    return [[_string(blob, g * group + s) for s in text_slots] for g in range(words // group)]


GROUPED = {
    'bin/komatxt.bin': (3, (0,)),
    'bin/chr_s_t.bin': (9, tuple(range(9))),
    'bin/ability_t.bin': (3, (0, 1, 2)),
    'bin/rulemess.bin': (4, (0, 1, 2)),
}


def koma_names(root) -> list[str]:
    """Koma card names (komatxt word 0), indexed like bin/koma.bin."""
    if not root.exists('bin/komatxt.bin'):
        return []
    return [g[0] for g in grouped_text(root.read('bin/komatxt.bin'), 3, (0,))]


@dataclass(frozen=True)
class DeckSlot:
    koma: int          # bin/koma.bin index, 0xFFFF = empty
    placement: int

    @property
    def empty(self) -> bool:
        return self.koma == 0xFFFF

    @property
    def column(self) -> int:
        return self.placement & 0xF

    @property
    def row(self) -> int:
        return (self.placement >> 4) & 0xF

    @property
    def extra(self) -> int:       # bits 8–11, not traced
        return (self.placement >> 8) & 0xF

    @property
    def flag(self) -> bool:       # bit 12, not traced
        return bool(self.placement & 0x1000)


@dataclass(frozen=True)
class DeckPreset:
    name: str
    slots: tuple[DeckSlot, ...]

    @property
    def cards(self) -> list[DeckSlot]:
        return [s for s in self.slots if not s.empty]


def parse_deck(blob: bytes) -> DeckPreset:
    if len(blob) != 0x5C:
        raise ValueError('deck preset must be 0x5C bytes (the 0x40-byte p*.bin files are another format)')
    slots = tuple(DeckSlot(*struct.unpack_from('<HH', blob, 4 * i)) for i in range(16))
    name = blob[0x40:0x5C].split(b'\0')[0].decode('cp932', 'replace')
    return DeckPreset(name, slots)
