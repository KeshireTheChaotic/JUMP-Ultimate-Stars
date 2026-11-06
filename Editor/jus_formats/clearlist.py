"""J-Galaxy mission goals: ``bin/clearlst.bin`` text and ``bin/clear.bin`` predicates.

Traced chain (verified 2026-11-06 against the shipped data and executables):

* A J-Galaxy node slot's s16 at ``node + 0x10 + slot*0x14`` is a **clear-list
  id**.  ov01 ``JGalaxyClearList_Create`` (0x0214E6E8) shows its text through
  ``FUN_02075284`` (self-relative u32 string table, ``ClearlstData_Create``
  0x020751D4 loads ``bin/clearlst.bin``); −1 shows a fallback string
  (0x0216BC5C).  ov01 0x0214D3D4 copies the ids, **as bytes**, into the
  battle's goal list 0x020AFF29.
* ov06 ``FUN_02160A48`` evaluates each goal through ``bin/clear.bin``: one
  4-byte record per id ``{u8 predicate, u8 param, u16 value}``; the predicate
  indexes the 31-entry callback table 0x02172290.

Text is ASCII with ``|`` between words (kept as stored).  Ids with identical
text are kept apart: their predicate records can differ.
"""
from __future__ import annotations

import struct
from dataclasses import dataclass

CLEARLST = 'bin/clearlst.bin'
CLEAR = 'bin/clear.bin'

#: predicate → (callback address, operational meaning or None).  Meanings are
#: given only where the callback body was read; the rest are identified by the
#: goal text that uses them.
PREDICATES = {
    0x00: (0x02160B38, None), 0x01: (0x02160B40, 'player counter[param] ≥ value'),
    0x02: (0x02160B60, None), 0x03: (0x02160B80, None), 0x04: (0x02160B9C, None),
    0x05: (0x02160BE0, None), 0x06: (0x02160C24, None), 0x07: (0x02160C48, None),
    0x08: (0x02160C6C, 'stage clock ≤ value'), 0x09: (0x02160D00, None), 0x0A: (0x02160D20, None),
    0x0B: (0x02160D40, None), 0x0C: (0x02160D6C, None), 0x0D: (0x02160D98, None),
    0x0E: (0x02160DC4, None), 0x0F: (0x02160DF0, None), 0x10: (0x02160E1C, None),
    0x11: (0x02160E78, 'best enemy score < value'), 0x12: (0x02160ECC, 'own score ≥ value'),
    0x13: (0x02160EF0, None), 0x14: (0x02160F34, None), 0x15: (0x02160F80, None),
    0x16: (0x02160FC8, None), 0x17: (0x02160FEC, None), 0x18: (0x02161010, None),
    0x19: (0x02161034, None), 0x1A: (0x02161060, None), 0x1B: (0x02161088, None),
    0x1C: (0x021610AC, None), 0x1D: (0x02160C98, 'battle time ≤ value × 60 frames'),
    0x1E: (0x02160CCC, 'battle time ≥ value × 60 frames'),
}


@dataclass(frozen=True)
class Goal:
    id: int
    text: str                 # as stored, '|' between words
    predicate: int | None     # clear.bin byte 0
    param: int | None         # byte 1
    value: int | None         # u16 at +2

    @property
    def display(self) -> str:
        return self.text.replace('|', ' ')

    @property
    def rule(self) -> str:
        if self.predicate is None:
            return 'no clear.bin record'
        cb, meaning = PREDICATES.get(self.predicate, (None, None))
        where = f'0x{cb:08X}' if cb else 'not in the callback table'
        what = meaning.replace('param', str(self.param)).replace('value', str(self.value)) if meaning \
            else f'param {self.param}, value {self.value}'
        return f'predicate 0x{self.predicate:02X} ({where}): {what}'

    def label(self) -> str:
        return f'0x{self.id:04X} {self.display}'


class ClearGoals:
    def __init__(self, clearlst: bytes, clear: bytes | None = None):
        if len(clearlst) < 4:
            raise ValueError('clearlst.bin is too short')
        first = struct.unpack_from('<I', clearlst, 0)[0]
        if first % 4 or not 0 < first <= len(clearlst):
            raise ValueError('clearlst.bin: unexpected string table size')
        texts = []
        for i in range(first // 4):
            o = 4 * i + struct.unpack_from('<I', clearlst, 4 * i)[0]
            if not 0 <= o < len(clearlst):
                raise ValueError(f'clearlst.bin: string {i} points outside the file')
            end = clearlst.find(b'\0', o)
            texts.append(clearlst[o:end if end >= 0 else len(clearlst)].decode('ascii', 'replace'))
        if clear is not None and len(clear) % 4:
            raise ValueError('clear.bin is not a whole number of 4-byte records')
        recs = [struct.unpack_from('<BBH', clear, 4 * i) for i in range(len(clear) // 4)] if clear else []
        self.goals = [Goal(i, t, *(recs[i] if i < len(recs) else (None, None, None)))
                      for i, t in enumerate(texts)]

    @classmethod
    def load(cls, root) -> 'ClearGoals | None':
        if not root.exists(CLEARLST):
            return None
        return cls(root.read(CLEARLST), root.read(CLEAR) if root.exists(CLEAR) else None)

    def __len__(self) -> int:
        return len(self.goals)

    def get(self, goal_id: int) -> Goal | None:
        goal_id = goal_id - 0x10000 if goal_id >= 0x8000 else goal_id
        return self.goals[goal_id] if 0 <= goal_id < len(self.goals) else None

    def describe(self, goal_id: int) -> str:
        if goal_id in (-1, 0xFFFF):
            return '−1: fallback text (0x0216BC5C)'
        g = self.get(goal_id)
        return g.label() if g else f'0x{goal_id:04X} (not in clearlst.bin)'

    def validate(self, goal_id: int) -> str | None:
        """Problem with using ``goal_id`` in a node slot, or None."""
        if goal_id in (-1, 0xFFFF):
            return None
        if self.get(goal_id) is None:
            return f'goal 0x{goal_id:04X} is outside clearlst.bin (0..{len(self) - 1})'
        if goal_id > 0xFF:
            return 'the battle keeps goal ids as bytes (ov01 0x0214D3D4); ids above 255 are truncated'
        return None
