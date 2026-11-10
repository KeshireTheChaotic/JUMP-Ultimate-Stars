"""JUS native input provenance: hardware scan and battle actor are distinct domains.

Native proof:
- ARM7 037FEC3C packs 04000136 (EXTKEYIN) into shared 027FFFA8.
- ARM9 main 0203A610 (jus_HwPad::vfunc_05) reads KEYINPUT 04000130,
  ORs shared EXTKEYIN, inverts 0x2FFF, then maps physical keys into
  its OWN input-state ring-buffer word at pad+0x18+4*ring_index.
- ARM9 ov06 0215A720/0215A8C0/0215A8F8 read a DIFFERENT field,
  battle-actor+0x6C, and translate its bits into ALMT selectors.
- ARM9 ov06 02156DDC sends battle input bits 0x4000/0x8000 to
  gameplay hotkey slots 1/2 via main 02077BB4.

The missing pad-buffer -> actor+0x6C translation MUST NOT be assumed
identity. It demonstrably cannot be identity for B/Y or Select/L/R.
Any physical button names attached to battle actions are control-guide
corroboration, not a source-traced end-to-end hardware mapping.
"""
from __future__ import annotations

from dataclasses import dataclass

KEYINPUT = 0x04000130
EXTKEYIN = 0x04000136
EXTKEY_SHARED = 0x027FFFA8
HW_PRESSED_MASK = 0x2FFF


@dataclass(frozen=True)
class HardwareInput:
    """One original hardware pad bit to first-stage pad-buffer bit."""
    label: str
    hardware_pressed_bit: int
    pad_buffer_bit: int
    domain: str
    evidence: str


# Hardware input bits use NDS REG_KEYINPUT/EXTKEYIN assignments;
# all OUTPUT values below are read directly from original main 0203A610.
HARDWARE_TO_PAD = (
    HardwareInput('A',      0x0001, 0x0010, 'KEYINPUT', 'main 0203A610'),
    HardwareInput('B',      0x0002, 0x0020, 'KEYINPUT', 'main 0203A610'),
    HardwareInput('Select', 0x0004, 0x4000, 'KEYINPUT', 'main 0203A610'),
    HardwareInput('Start',  0x0008, 0x8000, 'KEYINPUT', 'main 0203A610'),
    HardwareInput('Right',  0x0010, 0x0004, 'KEYINPUT', 'main 0203A610'),
    HardwareInput('Left',   0x0020, 0x0008, 'KEYINPUT', 'main 0203A610'),
    HardwareInput('Up',     0x0040, 0x0001, 'KEYINPUT', 'main 0203A610'),
    HardwareInput('Down',   0x0080, 0x0002, 'KEYINPUT', 'main 0203A610'),
    HardwareInput('R',      0x0100, 0x0200, 'KEYINPUT', 'main 0203A610'),
    HardwareInput('L',      0x0200, 0x0100, 'KEYINPUT', 'main 0203A610'),
    HardwareInput('X',      0x0400, 0x0040, 'EXTKEYIN', 'ARM7 037FEC3C; main 0203A610'),
    HardwareInput('Y',      0x0800, 0x0080, 'EXTKEYIN', 'ARM7 037FEC3C; main 0203A610'),
)
# EXTKEYIN bit3 (0x2000 after ARM7 shift) is a lid sensor state; not
# a physical key or an input assignment. Do not label as another button.


def hardware_pad_bits(pressed_bits: int) -> int:
    """Simulate only the proven first-stage hardware-to-HwPad bit mapper.

    pressed_bits are already active-high: the caller has inverted the
    combined 04000130/027FFFA8 sample with XOR 0x2FFF.
    """
    if not isinstance(pressed_bits, int) or pressed_bits < 0 or pressed_bits & ~HW_PRESSED_MASK:
        raise ValueError('Hardware pressed bits must fit original 0x2FFF mask')
    out = 0x2000 if pressed_bits & 0x2000 else 0
    for route in HARDWARE_TO_PAD:
        if pressed_bits & route.hardware_pressed_bit:
            out |= route.pad_buffer_bit
    return out


@dataclass(frozen=True)
class ActorInput:
    """Battle-actor input semantics. NOT a verified hardware button crosswalk."""
    mask: int
    purpose: str
    code_source: str
    physical_guide: str | None = None


BATTLE_ACTOR_INPUTS = (
    ActorInput(0x0001, 'Up input predicate in ground specials', 'ov06 0215A720', 'D-pad Up'),
    ActorInput(0x0002, 'Guard/down movement state; crouch attacks', 'ov06 0215E9A0/0215A8F8', 'D-pad Down'),
    ActorInput(0x0004, 'Facing-direction predicate (one horizontal side)', 'ov06 0215A824', 'D-pad Right'),
    ActorInput(0x0008, 'Facing-direction predicate (other horizontal side)', 'ov06 0215A824', 'D-pad Left'),
    ActorInput(0x0010, 'Jump state activation; double-jump activation', 'ov06 0215DB50/0215E1D0', 'A'),
    ActorInput(0x0020, 'Jump duration/velocity branch while input held', 'ov06 0215DBA4', 'A held'),
    ActorInput(0x0040, 'Special selector and guarded special response', 'ov06 0215A720/0215EAEC', 'X'),
    ActorInput(0x0080, 'Weak attack selector: 1/3/5/7/9', 'ov06 0215A720/0215A8C0/0215A8F8', 'B'),
    ActorInput(0x0100, 'Strong attack selector: 2/4/6/8/10', 'ov06 0215A720/0215A8C0/0215A8F8', 'Y'),
    ActorInput(0x1000, 'Ultimate action selector 11', 'ov06 0215A720/0215A8F8', 'Select'),
    ActorInput(0x4000, 'Koma hotkey slot 1', 'ov06 02156DDC; main 02077BB4', 'L hotkey'),
    ActorInput(0x8000, 'Koma hotkey slot 2', 'ov06 02156DDC; main 02077BB4', 'R hotkey'),
)

ACTOR_MASK_TO_INPUT = {route.mask: route for route in BATTLE_ACTOR_INPUTS}

# These ALMT sources have native code paths, not one-button assignments.
# A single resource can appear in multiple state paths.
ENGINE_MOVEMENT_ACTIONS: dict[int, tuple[str, str]] = {
    0x03: ('Guard/down state', 'ov06 0215E9A0 (actor mask 0x02) -> 0215EAEC -> 02157450(3)'),
    0x04: ('Jump/airborne state', 'ov06 0215DB50 (mask 0x10) -> 0215DBA4; also 0215DF18/0215E2DC'),
    0x05: ('Airborne state variant', 'ov06 0215DF18 (airborne flag/timer) -> 02157450(5)'),
    0x06: ('Airborne state variant', 'ov06 0215DBA4/0215DF18 -> 02157450(6)'),
    0x08: ('Jump start/landing/motion state', 'ov06 0215DBA4/0215D3B4/0215E2DC -> 02157450(8)'),
}


def actor_button_proof(mask: int) -> tuple[str, str, str | None] | None:
    """Return (source predicate, source function, guide label if known)."""
    rec = ACTOR_MASK_TO_INPUT.get(mask)
    return (rec.purpose, rec.code_source, rec.physical_guide) if rec else None


def mapping_gap() -> str:
    return ('The original HwPad stores a distinct bitfield from battle actor+0x6C. '
            'No end-to-end source path from HwPad buffer to actor+0x6C is verified; '
            'do not equate their numeric mask bits.')
