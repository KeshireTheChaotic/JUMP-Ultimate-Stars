"""Hiei's original Yu Yu Hakusho D-pad controlled history-trail shot.

Source identity from chr_b_t.bin: yh_b_03, special resource 0x0009832C,
"True Dragon of the Darkness Flame". NoteTrack at tick34 selects
chr/shot/yh_b_03.bin record2, native handler0x05.

FUN_0216B910 constructor calls B514 and attaches FUN_0216CFA4.
ROM update table 0x0217278C selects FUN_0216BE0C, which:
- consumes controller D-pad bits 1/2/4/8, changing signed q8 work vector
  +/-0x40 per pressed direction;
- calls FUN_0216C028, which NORMALIZES via DS math, writes a
  128-entry (x24.8,y24.8,rotation) history ring, and places existing
  child ALMT objects at earlier history samples;
- spawns ordinary trail bodies from source record+0x10 and the last
  additional ALMT from record+0x18 when count reaches 12;
- changes behavior after collision/teardown flags; this script cannot
  infer original live D-pad samples, native floating-point rounding, or
  whether/when the dragon contacts Hiei himself or an opponent.

This is a symbolic source-events inspector; it NEVER fabricates a curved
route or interpolated rendered game image.
"""
from __future__ import annotations

from dataclasses import dataclass
from jus_formats.chrbin import ShotRecord


def short16(v: int) -> int:
    v &= 0xFFFF
    return v-0x10000 if v&0x8000 else v


HISTORY_ENTRY_COUNT = 128
HISTORY_ENTRY_STRIDE = 12
MAX_ALMT_CHILDREN = 12
STEER_STEP_Q8 = 0x40
UP = 0x01
DOWN = 0x02
RIGHT = 0x04
LEFT = 0x08


def dpad_velocity_direction_delta_q8(mask: int) -> tuple[int,int]:
    """Exact pre-normalization native update in FUN_0216BE0C.

    Mask source is a live, owner-associated controller object at shot+0x14.
    No assumption about normalized length or movement when held.
    """
    return ((STEER_STEP_Q8 if mask & RIGHT else 0)
            - (STEER_STEP_Q8 if mask & LEFT else 0),
            (STEER_STEP_Q8 if mask & DOWN else 0)
            - (STEER_STEP_Q8 if mask & UP else 0))


def apply_raw_steer(q8: tuple[int,int], mask: int) -> tuple[int,int]:
    dx,dy=dpad_velocity_direction_delta_q8(mask)
    return short16(q8[0]+dx),short16(q8[1]+dy)


@dataclass(frozen=True)
class TrailSource:
    birth_update: int
    source_field: str
    animation_id: int
    ordinal: int


@dataclass(frozen=True)
class HieiTrailPlan:
    updates: int
    sources: tuple[TrailSource,...]
    next_spacing_q8: int
    history_samples_written: int
    history_write_index: int
    source_mode: str
    unknowns: tuple[str,...]

    @property
    def ordinary_bodies(self) -> int:
        return sum(1 for e in self.sources if e.source_field == '+0x10')

    @property
    def terminal_bodies(self) -> int:
        return sum(1 for e in self.sources if e.source_field == '+0x18')


def hiei_handler05_source_plan(
    record: ShotRecord, updates: int, *, slots_available: bool=True
) -> HieiTrailPlan:
    """Count code-path child events; no D-pad trajectory is invented.

    Restricts exact source event plan to *the shipped Hiei record* (handler05,
    no +0x14, initial direction byte0). Other future handler05 resources
    would need their own B514 initialization verification.
    """
    if record.handler_id != 5:
        raise ValueError('Original 0216BE0C source plan requires handler05')
    if updates < 0:
        raise ValueError('updates must be nonnegative')
    if record.optional_reference or record.byte1 != 0:
        raise ValueError('only original observed Hiei handler05 setup is modeled')
    if not record.reference0 or not record.reference1 or not record.handler05_terminal_animation:
        raise ValueError('Hiei source AMT head, body, terminal IDs required')
    # B514 after original +0x0C child increments spacing counter; B910
    # explicitly forces +0x5C = 0x1800 (one trail sample interval).
    spacing=0x1800
    sources=[TrailSource(0,'+0x0C',record.reference0,0)]
    speed=record.work_param
    for step in range(1,updates+1):
        if len(sources)>=MAX_ALMT_CHILDREN:
            continue
        # Native 0216BE0C subtracts speed BEFORE looking for a free
        # slot. A failed allocation does not undo the accumulated step.
        spacing=short16(spacing-speed)
        if spacing-speed < 0 and slots_available:
            ordinal=len(sources)
            final=ordinal==MAX_ALMT_CHILDREN-1
            sources.append(TrailSource(
                step, '+0x18' if final else '+0x10',
                record.handler05_terminal_animation if final else record.reference1,
                ordinal))
            spacing=short16(spacing+0x1800)
    return HieiTrailPlan(
        updates,tuple(sources),spacing,
        min(updates,HISTORY_ENTRY_COUNT),(updates%HISTORY_ENTRY_COUNT),
        'native 0216BE0C source events with free slots and no collision',
        ('live D-pad bits read each update from shot+0x14',
         'DS float normalization / direction rotation in 0216C028',
         'history XY/angle samples require live actor and owner transforms',
         'self-hit vs opponent contact and subsequent status effect',
         'all 12 child ALMTs are source selections, NOT spatially simulated'))
