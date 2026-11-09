"""Original ARM9 verified mechanical ChrBin semantics, separate from R08 output.

Do not turn these into canonical move names: collision byte0 is a precedence
code, byte1 indexes the 16-entry defender reaction state machine, and shot
flags are meaningful only in their actual constructor/update call families.

Sources: reverse_engineering/functions_layout/arm9_main/arm9_main_0207fbd0.c,
arm9_main_02080f14.c, arm9_main_020823e4.c and
arm9_ov06/arm9_ov06_0215af34.c, 0216af04.c, 0216f100.c, 0216f398.c.
"""
from __future__ import annotations
from dataclasses import dataclass

# Original ov06 ROM at 0x021713E8: pairs of ALMT resource move offsets,
# with per-reaction handler pointer at 0x021721A0.
# See GRABBED_REACTION_ROM_16_STATE_TABLE_20261106.csv.
REACTION_RESOURCE_PAIRS: tuple[tuple[int, int], ...] = (
    (0x0B,0x0E), (0x0A,0x0E), (0x0C,0x0E), (0x0C,0x0E),
    (0x0F,0x0F), (0x10,0x12), (0x10,0x12), (0x0D,0x0E),
    (0x0D,0x0E), (0x33,0x33), (0x34,0x34), (0x35,0x35),
    (0x36,0x36), (0x0B,0x0B), (0x0A,0x0A), (0x0A,0x0A),
)
REACTION_CALLBACKS: tuple[int, ...] = (
    0x0215B6A0,0x0215B6A0,0x0215B6A0,0x0215B72C,
    0x0215B7CC,0x0215B870,0x0215BA40,0x0215B6A0,
    0x0215B68C,0x0215B568,0x0215B568,0x0215B568,
    0x0215B568,0x0215B568,0x0215B568,0x0215B568,
)
assert len(REACTION_RESOURCE_PAIRS)==len(REACTION_CALLBACKS)==16


@dataclass(frozen=True)
class ReactionRoute:
    index: int
    primary_resource: int
    alternate_resource: int
    callback_address: int
    interpretation: str
    evidence: str


def native_reaction_route(index: int) -> ReactionRoute:
    """Byte1 is a defender reaction index; 9..12 have proven grabbed poses."""
    if not 0<=index<16:
        raise ValueError('Original reaction index must be 0..15')
    a,b=REACTION_RESOURCE_PAIRS[index]
    if 9<=index<=12:
        label=f'grabbed victim single-pose ALMT resource 0x{a:02X}'
        evidence='ov06 0215AF34/0215B568 + original 74-form terminal ALMT resources'
    elif index in (0,1,2,7):
        label='reactive impulse + primary/alternate ALMT selection (not a named hit type)'
        evidence='ov06 0215B6A0: actor velocity deltas +0x30/+0x32 and 02157450'
    elif index==3:
        label='reactive impulse + forced ALMT 0x0C + timed follow-up'
        evidence='ov06 0215B72C -> 0215B784 (timer and orientation loop)'
    elif index==4:
        label='ALMT 0x0C + clear actor state flags 0x10000000/0x20000000'
        evidence='ov06 0215B7CC -> 0215B818'
    elif index==5:
        label='reaction animation with impulse and timed response callback'
        evidence='ov06 0215B870 -> 0215B910'
    elif index==6:
        label='forced ALMT 0x13 with impulse and timed response callback (overrides ROM pair)'
        evidence='ov06 0215BA40 -> 0215BAB8'
    elif index==8:
        label='joint-attachment release/wait callback; no immediate ALMT selection'
        evidence='ov06 0215B68C -> 0215B648 checks actor joint pointer+0x28'
    elif index==13:
        label='ALMT 0x0B with FUN_0215F334 follow-up (not a verified move name)'
        evidence='ov06 0215B568 reaction13 branch'
    elif index in (14,15):
        label='ALMT 0x0A with FUN_0215B204 follow-up (not a verified move name)'
        evidence='ov06 0215B568 reaction14/15 branch'
    else:
        label='defender reaction state; gameplay name not established'
        evidence='ov06 0215AF34 native dispatch'
    return ReactionRoute(index,a,b,REACTION_CALLBACKS[index],label,evidence)


@dataclass(frozen=True)
class NativeShotFlag:
    mask: int
    explanation: str
    source: str


# These are *additional* native code paths. The earlier R08 formatter's
# known_flags/unknown_flags are immutable compatibility contracts.
# Only attribute flags to handler IDs that actually reach the cited code.
_GENERIC = (0x00,0x0B,0x0F,0x15,0x16)
_EVIDENCE: dict[int, list[NativeShotFlag]] = {i:[] for i in range(26)}

def _register(ids: tuple[int,...], mask: int, explanation: str, source: str):
    for i in ids:
        assert not any(f.mask==mask for f in _EVIDENCE[i])
        _EVIDENCE[i].append(NativeShotFlag(mask,explanation,source))

_register(tuple(range(26)),0x00002000,
          'If native update returns zero, enter manager-controlled 8-step effect fade before work cleanup',
          'ov06 0216AF04 L73-L109')
_register(_GENERIC,0x00000002,
          'Build auxiliary child/visual work via FUN_0216ECE4 from source +0x18',
          'ov06 0216F100 L29-L36')
_register(_GENERIC,0x00000004,
          'Clear child motion flag 2 through FUN_0216EC88 at initialization',
          'ov06 0216F100 L83-L91; 0216EC88 L10-L16')
_register(_GENERIC,0x00000010,
          'Suppress automatic facing update on creation and contact bounce',
          'ov06 0216E3D0 L41-L42; 0216EA84 L39-L41')
_register(_GENERIC,0x00000020,
          'Store +0x10/+0x14 source IDs as alternate impact/animation work paths',
          'ov06 0216F100 L19-L26; 0216F398 L52-L68')
_register(_GENERIC,0x00000100,
          'Set native shot state bit0x10 in FUN_0216EC88',
          'ov06 0216F100 L88-L92; 0216EC88 L23-L25')
_register(_GENERIC,0x00000200,
          'Carry owner position delta into projectile movement while owner link persists',
          'ov06 0216F398 L95-L105')
_register(_GENERIC,0x00000800,
          'Reverse horizontal trajectory on stage contact unless already bounced',
          'ov06 0216EA84 L20-L47')
_register(_GENERIC,0x00001000,
          'Force retirement on detected stage/physics contact in native update',
          'ov06 0216F398 L72-L85')
_register(_GENERIC,0x00020000,
          'Terminate when linked owner is gone or enters native contact state',
          'ov06 0216F398 L90-L110')
_register(_GENERIC,0x00400000,
          'Track joint attachment; retire after a previously attached joint disappears',
          'ov06 0216F398 L111-L122')
_register((0x07,),0x00000080,
          'Stop after the child collision feedback sets work flag0x80',
          'ov06 0216E1C0 L12-L19')
_register((0x07,),0x00000800,
          'Apply native X reversal on stage contact, shared FUN_0216EA84',
          'ov06 0216E1C0 L19-L25; 0216EA84 L20-L47')
_register((0x07,),0x00001000,
          'End tracked shot on stage-contact condition',
          'ov06 0216E1C0 L20-L26')
_register((0x07,),0x00020000,
          'Retire tracked shot on lost owner/owner contact state',
          'ov06 0216E1C0 L52-L61')
_register((0x09,),0x00000200,
          'Update actor-slot-linked child position from moving target delta',
          'ov06 0216B3E8 L12-L32')
_register((0x0D,),0x00200000,
          'Follow active owner position delta for independent NoteTrack child',
          'ov06 0216FDCC L31-L39')
_register((0x01,),0x00001000,
          'Switch repeat-child collision/stage response in native beam setup and update',
          'ov06 0216C5F0 L105-L111; 0216C958 L24-L33')


def native_shot_flags(handler_id: int, flags: int) -> tuple[NativeShotFlag,...]:
    if not 0<=handler_id<26:
        return ()
    return tuple(item for item in _EVIDENCE[handler_id] if flags & item.mask)


def native_shot_trace_mask(handler_id: int, flags: int) -> int:
    out=0
    for e in native_shot_flags(handler_id, flags):
        out |= e.mask
    return out
