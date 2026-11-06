"""Battle input selectors: which control plays which move of a battle character.

Verified 2026-11-06 against overlay 6:

* ``FUN_0215A720`` / ``FUN_0215A8C0`` / ``FUN_0215A8F8`` (picked through the
  3-entry table 0x02172178 by ground/air/crouch mode) test the actor input
  word ``actor+0x6C`` and return a selector index;
* ``FUN_02159EF8`` reads the 12-byte row ``0x021712B8 + 12*selector`` whose
  first word is the move's offset inside the character's resource block
  (move id = res_base & 0xFFFF00 | offset); specials add 2 per koma size.

Input bits as the code tests them: 0x01 Up, 0x02 Down, 0x04 Left, 0x08 Right,
0x40 X, 0x80 B, 0x100 Y, 0x1000 (probably Select).  The code proves the
combinations; the button names (B weak, Y strong, X special, Up+X second
special, Select ultimate) come from the game's control guides, and 0x1000 =
Select is provisional.
"""
from __future__ import annotations

#: offset → (control, selector, how the code reaches it)
MOVE_CONTROLS = {
    0x1E: ('B (neutral)', 1, 'input 0x80, not facing-forward'),
    0x1F: ('Y (neutral)', 2, 'input 0x100, not facing-forward'),
    0x20: ('Forward + B', 3, 'input 0x80, direction = facing (FUN_0215A824)'),
    0x21: ('Forward + Y', 4, 'input 0x100, direction = facing'),
    0x22: ('Up + B', 5, 'input 0x81'),
    0x23: ('Up + Y', 6, 'input 0x101'),
    0x24: ('Down + B', 7, 'crouch mode, input 0x82'),
    0x25: ('Down + Y', 8, 'crouch mode, input 0x102'),
    0x26: ('Air B', 9, 'air mode, input 0x80'),
    0x27: ('Air Y', 10, 'air mode, input 0x100'),
    0x18: ('Select (probable) — ultimate', 11, 'input 0x1000; physical key provisional'),
    0x28: ('Scripted follow-up', 12, 'actor +0xD1 set; not a button'),
}
for _size in range(4, 9):
    _off = 0x29 + 2 * (_size - 4)
    MOVE_CONTROLS[_off] = (f'X — special A ({_size} koma)', 13 if _size == 4 else 15 + 2 * (_size - 5),
                           'input 0x40, needs SP; offset steps by 2 per koma size')
    MOVE_CONTROLS[_off + 1] = (f'Up + X — special B ({_size} koma)', 14 if _size == 4 else 16 + 2 * (_size - 5),
                               'input 0x41, needs SP; offset steps by 2 per koma size')

SELECTOR_TABLE = 0x021712B8


def control_for(move_id: int) -> str | None:
    """Control label for a move of a battle character's base table (by its offset)."""
    entry = MOVE_CONTROLS.get(move_id & 0xFF)
    return entry[0] if entry else None
