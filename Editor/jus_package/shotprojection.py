"""Source-constrained handler01 straight-projectile projection for Editor diagnostics.

In the original ARM9 overlay6:
 - FUN_0216B514 places optional +0x14 source and initial +0x0C source;
 - FUN_0216BA2C per-frame updater subtracts a signed q8 directional step
   from signed-short accumulators+0x58/+0x5A, allocates a free child on
   a threshold crossing and builds the +0x10 source via FUN_0216C5F0;
 - FUN_0216C5F0 increments accumulators by +0x5C/+0x5E on each
   unanchored child creation;
 - FUN_0216C958 retires unprotected children when their age > 0x20,
   unless stage/actor/contact callbacks retire them sooner.

The *event count, source IDs, initial placement and spacing accumulators*
are code-derived for exact cardinal directions. Actor positions after
creation use an explicitly modeled NO-COLLISION, STATIONARY-OWNER linear
velocity integration, not an exact emulator/DS physics trace. Real hit,
terrain, owner movement, cancel/Marker paths and GPU transforms are not
known. No source image is stretched or generated.
"""
from __future__ import annotations

from dataclasses import dataclass
from jus_formats.chrbin import ShotRecord
from jus_package.dynamicgeometry import (
    cardinal_direction_q8, handler1_child_placement_q8, native_velocity_q8,
)


def signed16(value: int) -> int:
    value &= 0xFFFF
    return value - 0x10000 if value & 0x8000 else value


def signed32(value: int) -> int:
    value &= 0xFFFFFFFF
    return value - 0x100000000 if value & 0x80000000 else value


@dataclass(frozen=True)
class SourceShotSprite:
    animation_id: int
    source_field: str
    born_update: int
    age_updates: int
    initial_dx_q8: int
    initial_dy_q8: int
    current_dx_q8: int
    current_dy_q8: int
    slot: int

    @property
    def position_px(self) -> tuple[float, float]:
        return self.current_dx_q8 / 256, self.current_dy_q8 / 256


@dataclass(frozen=True)
class Handler01SourceProjection:
    update_count: int
    sprites: tuple[SourceShotSprite, ...]
    body_emissions: int
    next_spacing_q8: tuple[int, int]
    direction_q8: tuple[int, int]
    velocity_q8: tuple[int, int]
    maximum_slots: int
    geometry_certainty: str
    assumptions: tuple[str, ...]

    def instances_for(self, source_field: str) -> tuple[SourceShotSprite, ...]:
        return tuple(s for s in self.sprites if s.source_field == source_field)


@dataclass
class _Live:
    ref: int
    field: str
    born: int
    x: int
    y: int
    slot: int
    protected: bool


def project_handler01_unobstructed(
    record: ShotRecord,
    updates: int,
    mirrored: bool = False,
    *,
    maximum_slots: int = 32,
) -> Handler01SourceProjection | None:
    """Predict source instances in the **no-contact straight-path scenario**.

    Input is elapsed *native update count*, not ALMT parent tick.
    Source event t=0 has constructor children; first BA2C update is t=1.
    This distinction is essential when NoteTrack Marker seeks or hit
    events alter update scheduling.

    Returns None unless the direction is an original-record-observed
    cardinal case (0 or 192); DS float trig and other angles remain unverified. A viewer may still render
    the unprojected static source frame in those cases.
    """
    if record.handler_id != 1:
        raise ValueError('native 0216BA2C model is only for shot handler01')
    if updates < 0:
        raise ValueError('elapsed native updates must be >= 0')
    if not 1 <= maximum_slots <= 32:
        raise ValueError('original child table has 32 slots')
    unit = cardinal_direction_q8(record.byte1, mirrored)
    if unit is None:
        return None
    vx, vy = native_velocity_q8(record.work_param, unit)
    placement = handler1_child_placement_q8(record, mirrored)
    assert placement is not None
    # 0216B514 stores absolute Y and direction signs separately, and
    # facing is applied via work+0x61 (NOT by negating the spacing counter).
    # Cardinal source byte0/192 are actually used in original handler01
    # records. Other cardinal 64/128 are not author-observed.
    if record.byte1 not in (0, 192):
        return None
    spacing_x = signed16(abs(unit[0] * 0x1800) >> 8)
    spacing_y = signed16(abs(unit[1] * 0x1800) >> 8)
    placement_sign_x = -1 if mirrored else 1
    placement_sign_y = -1 if unit[1] < 0 else 1
    accumulator_x = 0
    accumulator_y = 0
    live: list[_Live] = []
    free_slots = list(range(maximum_slots))
    for i, (ref, px, py) in enumerate(placement):
        if not free_slots:
            break
        slot = free_slots.pop(0)
        protected = i == 0 and bool(record.optional_reference)
        live.append(_Live(ref, '+0x14' if protected else '+0x0C',
                          0, px, py, slot, protected))
        if not protected:
            accumulator_x = signed16(accumulator_x + spacing_x)
            accumulator_y = signed16(accumulator_y + spacing_y)
    emissions = 0
    for t in range(1, updates + 1):
        # Native C958 removes the ordinary child after its previous
        # age exceeded 0x20. A fresh slot becomes available thereafter.
        # Under the no-contact/no-stage assumption, upper bound is
        # 33 updates of occupancy; true teardown can be earlier.
        live = [s for s in live if s.protected or t - s.born <= 33]
        occupied={s.slot for s in live}
        free_slots=[n for n in range(maximum_slots) if n not in occupied]
        # Native accumulators use the unsigned magnitude of work+0x48/
        # work+0x4A; facing and the negative-Y sign live separately.
        sx, sy = abs(vx), abs(vy)
        accumulator_x=signed16(accumulator_x - sx)
        accumulator_y=signed16(accumulator_y - sy)
        if accumulator_x - sx < 0 or accumulator_y - sy < 0:
            if free_slots and record.reference1:
                slot=free_slots[0]
                live.append(_Live(record.reference1,'+0x10',t,
                                  -accumulator_x*placement_sign_x,
                                  -accumulator_y*placement_sign_y,slot,False))
                accumulator_x=signed16(accumulator_x + spacing_x)
                accumulator_y=signed16(accumulator_y + spacing_y)
                emissions+=1
        # FUN_0216CD10/C958 updates child positions from actor physics
        # after the source constructor; collision-free motion is modeled.
    sprites=[]
    for s in sorted(live,key=lambda x:(x.born,x.slot)):
        age=updates-s.born
        dx=s.x + (0 if s.protected else vx*age)
        dy=s.y + (0 if s.protected else vy*age)
        sprites.append(SourceShotSprite(
            s.ref,s.field,s.born,age,s.x,s.y,dx,dy,s.slot))
    return Handler01SourceProjection(
        updates,tuple(sprites),emissions,(accumulator_x,accumulator_y),
        unit,(vx,vy),maximum_slots,'source counter/ID exact for cardinal direction; XY estimated',
        ('single shot born once at t0, exactly one update per simulated step',
         'fixed source owner/facing and free global effect actor allocation',
         'no contact, stage geometry, target deflection or Marker branch',
         '24.8 constant-velocity XY integration; native physics ordering not emulated',
         'source sprite duration/frame clock follows child age and source ALMT',
         'slot expiry follows ordinary C958 age threshold, ignores early collision teardown'))
