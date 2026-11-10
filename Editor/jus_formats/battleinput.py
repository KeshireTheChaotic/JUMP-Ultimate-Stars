"""Battle input selectors: which control plays which move of a battle character.

Verified 2026-11-06 against overlay 6:

* ``FUN_0215A720`` / ``FUN_0215A8C0`` / ``FUN_0215A8F8`` (picked through the
  3-entry table 0x02172178 by ground/air/crouch mode) test the actor input
  word ``actor+0x6C`` and return a selector index;
* ``FUN_02159EF8`` reads the 12-byte row ``0x021712B8 + 12*selector`` whose
  first word is the move's offset inside the character's resource block
  (move id = res_base & 0xFFFF00 | offset); specials add 2 per koma size.

Input bits in the *battle actor* at +0x6C: 0x01 Up, 0x02 Down,
0x04/0x08 facing-dependent horizontal directions, 0x10/0x20 jump state,
0x40 special, 0x80 weak, 0x100 strong, 0x1000 ultimate, and
0x4000/0x8000 Koma hotkey slots 1/2. Physical labels come from original
control guides, not from equating numeric masks with the hardware pad.
ARM9 main 0203A610 proves a DISTINCT KEYINPUT/EXTKEYIN-to-HwPad mapping;
the intervening HwPad-to-battle-actor+0x6C mapping has not been traced.
See jus_formats/padtrace.py for both source-backed namespaces.
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
    0x18: ('Select (guide-corroborated) — ultimate', 11,
           'battle actor input 0x1000; original physical Select-to-actor conversion untraced'),
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

# Original actor+0x6C bitmask predicates, 0x0215A720 (ground), 0x0215A8C0
# (air), 0x0215A8F8 (crouch). These are raw input masks, NOT invented
# movement/move names. Physical labels are guide-derived; bit0x1000's
# physical identity at actor+0x6C remains unverified; consult padtrace.py.
SOURCE_INPUT_CONDITIONS = {
    0x1E: ('ground', 'input & 0x80', 'facing-forward predicate false', '0215A720'),
    0x1F: ('ground', 'input & 0x100', 'facing-forward predicate false', '0215A720'),
    0x20: ('ground', 'input & 0x80', 'facing-forward predicate true', '0215A720'),
    0x21: ('ground', 'input & 0x100', 'facing-forward predicate true', '0215A720'),
    0x22: ('ground', '(input & 0x81) == 0x81', 'facing-forward predicate false; checked before plain B/Y', '0215A720'),
    0x23: ('ground', '(input & 0x101) == 0x101', 'facing-forward predicate false; checked before plain B/Y', '0215A720'),
    0x24: ('crouch', '(input & 0x82) == 0x82', 'state handler mode2', '0215A8F8'),
    0x25: ('crouch', '(input & 0x102) == 0x102', 'state handler mode2', '0215A8F8'),
    0x26: ('air', 'input & 0x80', 'state handler mode1', '0215A8C0'),
    0x27: ('air', 'input & 0x100', 'state handler mode1', '0215A8C0'),
    0x18: ('ground/crouch', 'input & 0x1000',
           'physical button not independently identified; no alternate name assigned', '0215A720/0215A8F8'),
    0x28: ('ground', 'actor+0xD1 != 0',
           'scripted action, NOT a physical button', '0215A720'),
}
for _size in range(4, 9):
    _base = 0x29 + 2 * (_size - 4)
    SOURCE_INPUT_CONDITIONS[_base] = (
        f'ground (size {_size})', 'input & 0x40',
        'needs deployed battle koma size and meter gate FUN_0207834C', '0215A720')
    SOURCE_INPUT_CONDITIONS[_base + 1] = (
        f'ground (size {_size})', '(input & 0x41) == 0x41',
        'Up+X tested before plain X; requires size/meter gate', '0215A720')


def source_trace(move_id: int) -> tuple[str, str, str, str] | None:
    """(mode, exact raw predicate, extra runtime condition, original function).

    Input selectors are code-authenticated; this is NOT a transition graph.
    The actor+0xC0 restriction mask and dynamic+0xC4 mask can veto playback,
    and a NoteTrack follow-up permission is distinct from accepting the input.
    """
    return SOURCE_INPUT_CONDITIONS.get(move_id & 0xff)


# Exact ov06 literal dispatch call sites to FUN_02157450, original Ghidra
# functions_layout/arm9_ov06/arm9_ov06_*.c. This is a source-call index,
# NOT a button map. Dynamic args and indirect dispatch cannot be named here.
ENGINE_LITERAL_MOVE_DISPATCH: dict[int, tuple[str, ...]] = {
    0x00: ('0215D2E4',),
    0x01: ('0215D760',),
    0x02: ('0215D91C',),
    0x03: ('0215EAEC',),
    0x04: ('0215DBA4', '0215DF18', '0215E2DC', '0215E4AC'),
    0x05: ('0215DF18',),
    0x06: ('0215DD48', '0215DF18'),
    0x07: ('0215BF70', '0215D2E4'),
    0x08: ('0215BD50', '0215D2E4', '0215D3B4', '0215DBA4', '0215E2DC', '0215E94C'),
    0x0A: ('0215C488',),
    0x0B: ('0215AF34', '0215C2F8'),
    0x0C: ('0215B72C', '0215B7CC', '0215C824'),
    0x0E: ('0215BEA8',),
    0x0F: ('0215B818', '0215BB34', '0215C090', '0215C488', '0215C824', '0215CD2C'),
    0x10: ('0215C824',),
    0x13: ('0215BA40',),
    0x14: ('0215E5C0',),
    0x15: ('0215E724',),
    0x16: ('0215BD18', '0215E854'),
    0x17: ('0215BB9C', '0215BC44', '0215CC54'),
}
