"""Code-sourced *symbolic* dynamic geometry for JUS battle effects.

No gameplay names are invented, no runtime positions are fabricated. A shot
record's handler byte selects a native overlay6 constructor; this module
exposes its known object/geometry/update path, input dependencies and limited
exact integer transforms. Move textures still come from original ALMT tracks.

EVIDENCE: original ARM9 overlay6 FUN_0216ACC8 dispatches via 0x02172864;
the other functions listed here are direct Ghidra decompiled witnesses.
Original shot work and 24.8 actor positions are not a fully emulated engine.
"""
from __future__ import annotations

from dataclasses import dataclass
from typing import Iterable

from jus_formats.chrbin import SHOT_HANDLERS, ShotRecord

# Original ARM9 overlay6 read-only ROM array at 0x0217278C: 26 updates,
# indexed by same handler byte as original constructor table at 0x02172864.
# Verified from original overlay bytes and FUN_0216AF04 pointer-table call.
SHOT_UPDATE_HANDLERS: tuple[int, ...] = (
    0x0216F398, 0x0216BA2C, 0x0216BB08, 0x0216BA2C, 0x0216BA2C,
    0x0216BE0C, 0x0216DA3C, 0x0216E1C0, 0x0217016C, 0x0216B3E8,
    0x0216DC30, 0x0216F79C, 0x0216D44C, 0x0216FDCC, 0x0216BC24,
    0x0216F398, 0x0216DC50, 0x021706C8, 0x0216DC70, 0x02170850,
    0x0216D44C, 0x0216F7AC, 0x0216F8D8, 0x0216C328, 0x02170A00,
    0x0216C430,
)
assert len(SHOT_UPDATE_HANDLERS) == len(SHOT_HANDLERS) == 26


@dataclass(frozen=True)
class DynamicPath:
    handler_id: int
    constructor: str                      # original overlay6 callback
    geometry_family: str                  # mechanical, not gameplay title
    native_functions: tuple[str, ...]      # code-decompiled source addresses
    position_model: str                   # source operational formula / branch
    visual_model: str                     # source ALMT/renderer path
    runtime_dependencies: tuple[str, ...] # cannot know from ALMT alone
    uses_trig_direction_byte: bool = False
    uses_speed_param_u16: bool = False
    observed_original_records: bool = True

    @property
    def per_frame_update(self) -> str:
        return f'FUN_{SHOT_UPDATE_HANDLERS[self.handler_id]:08X}'

    def describe(self, record: ShotRecord) -> tuple[str, ...]:
        result = [
            f'handler 0x{self.handler_id:02X} -> {self.constructor}',
            f'native update: {self.per_frame_update}',
            f'geometry: {self.geometry_family}',
            'position: '+self.position_model,
            'render: '+self.visual_model,
            'source functions: '+', '.join(self.native_functions),
            'unknown runtime inputs: '+', '.join(self.runtime_dependencies),
        ]
        if self.uses_trig_direction_byte:
            result.append(f'source shot byte+0x01 = 0x{record.byte1:02X} '
                          '(FUN_0216ACC8 temporary+0x24 -> FUN_0216E898; '
                          'full 256-step angle, native float rounding unreplicated)')
        if self.uses_speed_param_u16:
            result.append(f'shot u16+0x04={record.work_param}; velocity work '
                          'in 24.8 is (speed*trig_direction_q8)>>8 where this '
                          'native branch writes actor+0x24/+0x26')
        return tuple(result)


# Source callback groups are deliberately separate even when IDs share code.
# Every name is a reference to an original numeric function, not a recovered
# C symbol or a claimed canonical move name.
def _path(h: int, family: str, functions: tuple[str, ...], pos: str,
          render: str, requirements: tuple[str, ...],
          trig: bool = False, speed: bool = False,
          observed: bool = True) -> DynamicPath:
    return DynamicPath(
        h, f'FUN_{SHOT_HANDLERS[h]:08X}', family, functions, pos, render,
        requirements, trig, speed, observed,
    )


_PATHS: dict[int, DynamicPath] = {}

def _add(ids: Iterable[int], family: str, functions: tuple[str, ...],
         pos: str, render: str, requirements: tuple[str, ...],
         trig: bool = False, speed: bool = False):
    for h in ids:
        assert h not in _PATHS
        _PATHS[h] = _path(h, family, functions, pos, render,
                          requirements, trig, speed,
                          observed=h not in (2, 3, 4, 8, 14, 24))


_add((0, 15, 21, 22), 'actor-velocity projectile constructor',
     ('0216eef4', '0216f100', '0216e3d0', '0216f398', '0216ea84'),
     'FUN_0216F100 seeds actor velocity components from '
     'u16 shot+0x04 × FUN_0216E898 direction; ongoing updates/deflection '
     'depend on work flags and collision state',
     'FUN_0216E3D0 constructs the ALMT at source +0x0C; '
     'optional +0x10/+0x14 alter callbacks and visual side paths',
     ('owner position/facing', 'floor and walls', 'collision flags',
      'hit targets/team', 'active actor state', 'optional secondary work'),
     True, True)

_add((1, 2, 3, 4), 'two-child aligned shot work and attachment',
     ('0216b4f4', '0216b514', '0216ba2c', '0216c5f0', '0216cb04',
      '0216c958', '0216cd10', '0216cd9c', '0216ce6c',
      '0216ceec', '0216cfa4', '0216af04'),
     'FUN_0216B514 creates work slots and calls the child constructor '
     'for +0x14 (when present) and +0x0C immediately, before contact. '
     'ROM update table 0x0217278C selects FUN_0216BA2C for handler01: '
     'that callback creates +0x10 repeated segments when its 0x1800 '
     '24.8 spacing counter crosses the travel threshold and stops '
     'that creation on the hit-state branch. '
     'FUN_0216C5F0 applies 24.8 0x1800/0x100 direction '
     'steps between consecutive children. FUN_0216CE6C shifts '
     'active children by parent 24.8 X/Y delta. Alternate updates '
     '0216CEEC/0216CFA4 modify one axis or a 128-point work array.',
     'ALMT child TextureID/BoundsIndex select authentic frames; '
     'FUN_0216CB04 applies native sprite rotation. Handler01 forms '
     'a repeat-segment body via successive ALMT objects, NOT a '
     'code-proven single stretched GX polygon. The +0x0C moving '
     'child is spawned before collision, NOT hit-only by construction.',
     ('shot work slot allocation', 'native angle float precision',
      'owner motion and contact', 'animation resource lifetime',
      'which installed per-frame update variant is live'),
     True, True)

_add((5,), 'D-pad steered 128-sample trail with 12 child ALMT instances',
     ('0216b910', '0216be0c', '0216c028', '0216cfa4',
      '0216c5f0', '0216cd9c', '0216ed30'),
     'FUN_0216B910 calls shared B514 source +0x0C child constructor, '
     'allocates 128 samples of 12 bytes (XY in 24.8 and native rotation). '
     'FUN_0216BE0C reads live D-pad bits1/2/4/8 and changes direction '
     'work+0x4A/-0x4A/+0x48/-0x48 by 0x40 before 0216C028 '
     'normalizes direction with DS float and advances history. '
     '0216BE0C can create up to 11 more ALMT children (maximum '
     '12 including the original): ordinary iterations select record+0x10, '
     'the final added segment selects record+0x18. Each trail segment '
     'follows an older ring-buffer position/rotation sample. This is '
     'USER-STEERED, not an opponent-seeking homing update.',
     'Source +0x0C initial head, +0x10 repeated history segments, '
     '+0x18 final segment. Native 0216C028 copies historical XY '
     'and rotation to each child; 0216CFA4 translates the history '
     'with owner displacement.',
     ('actual D-pad states at each update', 'live target/self contact flags',
      'actor+0x14 controller link', 'native DS float normalization/rotation',
      '128-entry ring buffer and child history indexes', 'stage/owner motion'),
     True, True)

_add((14,), 'special owner-following work clamp (unused in originals)',
     ('0216b768', '0216b514', '0216ceec'),
     'FUN_0216B768 clamps shot X against source actor bounds, '
     'resolves stage Y and installs X-only FUN_0216CEEC follow '
     'callback; selected work slot follows source attachment.',
     'Shared ALMT child constructor 0216B514, callback-specific '
     'collision/ownership geometry.',
     ('runtime owner bounds', 'stage query', 'facing', 'work slot allocation'),
     True, True)

_add((17,), 'source ALMT child with trig direction / actor positioning',
     ('02170500', '02170600', '0216e3d0', '0216e898'),
     'FUN_02170500 builds source child ALMT, stores 24.8 '
     'trigonometric direction and a facing-adjusted angle byte; '
     'the physics consumer must still be located for true travel.',
     'Original source +0x0C ALMT child with object transform '
     'and work flag propagation.',
     ('actor owner/team', 'angle/mirror', 'work/collision state'),
     True)

_add((25,), 'shared two-child work with immediate alternative callback',
     ('0216b9d8', '0216b514', '0216ce6c'),
     'FUN_0216B9D8 creates shared B514 child source objects, '
     'then marks a 32-slot work region and invokes 020282F4 '
     'on an update controller. Exact subsequent output unknown.',
     'Original ALMT +0x14 and +0x0C child sources (when present).',
     ('work slot and callback state', 'live owner delta', 'stage contact'),
     True, True)

_add((6, 10, 16, 18), 'target-aware rotation / redirected work',
     ('0216d88c', '0216d99c', '0216d9dc', '0216d9f8', '0216de40',
      '0216dc70', '0216e9d0'),
     'FUN_0216E9D0 chooses nearest eligible combatant (if any); '
     'FUN_0216D88C seeds directional work, FUN_0216DE40 updates '
     'sprite angle from current velocity; 0216DC70 can retarget '
     'velocity toward a stored coordinate over a remaining timer.',
     'FUN_0216E3D0 constructs source +0x0C ALMT; 0216DE40 '
     'passes motion-derived orientation to sprite transform.',
     ('target roster/team', 'distance to moving target', 'stage contact',
      'time countdown', 'runtime facing'),
     True, True)

_add((7,), 'stage-relative collision-traced shot',
     ('0216df50', '0216e780', '0216e6d4', '0216e3d0'),
     'FUN_0216DF50 probes stage solid geometry at 24.8 positions; '
     'flags0x400 and0x8000 select owner correction and Y/collision '
     'retirement branches. Initial positions can change before spawn.',
     'Source +0x0C ALMT actor; native stage and facing state affect '
     'position/visible instance.',
     ('stage geometry and floor', 'owner position',
      'flags0x400/0x8000', 'contact result', 'combat facing'))

_add((8,), 'stage-bounded shot constructor',
     ('02170044', '0216e780', '0216e3d0'),
     'Position corrected through stage query and actor collision flags.',
     'Source +0x0C ALMT effect with stage-relative offset.',
     ('stage geometry', 'owner position', 'runtime facing'))

_add((9,), 'battle actor slot-linked object',
     ('0216b2c8', '0216e3d0', '0216eb8c'),
     'Shot constructor selects actor slot and collision exclusions; '
     'position is bound to runtime actor/target context.',
     'Source +0x0C ALMT effect actor.',
     ('actor slot occupancy', 'team/collision masks', 'position/facing'))

_add((11,), 'target-directed projectile / conditional launch delay',
     ('0216ef7c', '0216eef4', '0216f100',
      '0216f398', '0216f9d0', '0216e9d0'),
     'Finds nearest valid target; if shot+0x1E nonzero, '
     'FUN_0216F9D0 stops velocity until that many updates have '
     'elapsed, then changes animation and transitions to '
     'FUN_0216F398. Otherwise uses regular contact/velocity work.',
     'Source +0x0C ALMT actor; optional alternate source +0x18 '
     'is installed on delayed transition.',
     ('live target positions', 'timer from shot+0x1E',
      'stage collision', 'team/actor flags', 'owner facing'),
     True, True)

_add((12, 20), 'multi-phase curved trajectory',
     ('0216d05c', '0216d0c8', '0216d1cc',
      '0216d4e8', '0216d6ac', '0216d82c'),
     'FUN_0216D1CC computes initial 24.8 directional vector. '
     'FUN_0216D4E8 integrates an acceleration term and checks '
     'target/arc phase transition. FUN_0216D6AC interpolates '
     'toward a moving target, adds side residual and ends into '
     'FUN_0216D82C. Handler0x0C and0x14 have distinct arc presets.',
     'Source +0x0C ALMT effect; dynamically changing position, '
     'rotation and stage/target response.',
     ('original floating-point arc math', 'moving target',
      'stage collision', 'per-frame phase state', 'facing'),
     True, True)

_add((13,), 'independent child actor and BattleNoteTrack',
     ('0216fb10', '0216e6d4', '0216fdb8'),
     'FUN_0216FB10 chooses start position from owner or stage '
     'geometry (flags0x400/0x200), constructs a child actor '
     'with its own BattleNoteTrack and copies team fields. '
     'Child can change state independently of parent move.',
     'Source +0x0C ALMT child actor; independent NoteTrack can '
     'spawn additional effects/modify motion.',
     ('live stage', 'owner location', 'child NoteTrack state',
      'target collision', 'actor allocation'))

_add((19,), 'repositioned actor / owner state',
     ('0217061c', '02170500', '021706b4', '02170600'),
     'FUN_0217061C repositions child to the owner, then to '
     'spawn coordinates and updates previous XY state; sets '
     '0x100 transform/work flag in child.',
     'FUN_0216E3D0 renders source +0x0C ALMT actor.',
     ('owner live position', 'spawn point', 'orientation', 'stage response'),
     True)

_add((23,), 'shot-work alternate state',
     ('0216b9b0', '0216b514', '0216ce6c'),
     'Calls shared slot/child constructor 0216B514 and sets '
     'alternate slot state.',
     'Shares ALMT children source +0x0C/+0x14 where present.',
     ('slot work', 'owner/target position', 'callback selection'),
     True, True)

_add((24,), 'scatter/generation work with random displacement',
     ('02170900', '02170b84', '0216e898'),
     'FUN_02170B84 generates +/-3-pixel 24.8 X/Y jitter '
     'from live PRNG and builds actor children (not deterministic '
     'from static source); actor velocity depends on chosen direction.',
     'Source +0x0C ALMT child actor; randomized start position '
     'and child visual cannot be exact without seeded RNG.',
     ('game PRNG state', 'slot allocation', 'stage/target state'),
     True, True)

# All 26 original dispatch bytes are represented; those with zero original
# records remain enumerated but their runtime behavior is NOT observed.
assert set(_PATHS) == set(range(len(SHOT_HANDLERS)))

def shot_dynamic_path(handler_or_record: int | ShotRecord) -> DynamicPath:
    h = handler_or_record.handler_id if isinstance(handler_or_record, ShotRecord) else handler_or_record
    return _PATHS[h]


def all_dynamic_paths() -> tuple[DynamicPath, ...]:
    return tuple(_PATHS[i] for i in range(len(SHOT_HANDLERS)))


def parent_translation_delta_raw(
    previous_xy: tuple[int, int], current_xy: tuple[int, int]
) -> tuple[int, int]:
    """FUN_0216CE6C/FUN_0216CFA4 work in original signed 24.8 position."""
    return current_xy[0] - previous_xy[0], current_xy[1] - previous_xy[1]


def apply_parent_delta_to_active_children(
    children: Iterable[tuple[int, int, int]],
    delta_raw: tuple[int, int],
) -> tuple[tuple[int, int, int], ...]:
    """FUN_0216CE6C: active bit0 and NOT exclusion bit2 receive X/Y delta.

    Each item (child_x24_8, child_y24_8, slot_flag_u8). No interpolation,
    camera or guessed rotation. Inactive/excluded slots pass unchanged.
    """
    dx, dy = delta_raw
    out = []
    for x, y, flags in children:
        out.append((x + dx, y + dy, flags)
                   if (flags & 1) and not (flags & 4)
                   else (x, y, flags))
    return tuple(out)


def translate_128_geometry_points(
    points: Iterable[tuple[int, int, int]],
    delta_raw: tuple[int, int],
) -> tuple[tuple[int, int, int], ...]:
    """FUN_0216CFA4 shifts exactly 128 3-word work entries' first two words.

    Does not assert those entries are actual render vertices vs actor history;
    the Ghidra function only proves their 12-byte stride and XY translation.
    """
    original = tuple(points)
    if len(original) != 0x80:
        raise ValueError('Native 0216CFA4 work region is 128 x 12 bytes')
    dx, dy = delta_raw
    return tuple((x + dx, y + dy, z) for x, y, z in original)


def cardinal_direction_q8(angle_byte: int, mirrored: bool = False
                          ) -> tuple[int, int] | None:
    """Known exact cardinal cases of native FUN_0216E898 trig direction.

    Non-cardinal angles deliberately return None: the DS floating-point
    rounding cannot be asserted from only a float approximation.
    """
    d = {0: (256, 0), 64: (0, 256), 128: (-256, 0), 192: (0, -256)}.get(
        angle_byte & 0xFF)
    return ((-d[0], d[1]) if mirrored else d) if d is not None else None


def native_velocity_q8(speed_u16: int, direction_q8: tuple[int, int]
                       ) -> tuple[int, int]:
    """FUN_0216F100/FUN_0216C958: exact signed short velocity formula.

    Source writes short((uint16(speed) * int16(unit_component)) >> 8).
    The resulting pair represents 24.8 actor velocity, not a guarantee
    the actor will move each tick (contact/stage/target state intervene).
    """
    def s16(x: int) -> int:
        x &= 0xFFFF
        return x - 0x10000 if x >= 0x8000 else x
    return tuple(s16(((speed_u16 & 0xFFFF) * s16(v)) >> 8)
                 for v in direction_q8)


def handler1_child_placement_q8(
    record: ShotRecord, mirrored: bool,
) -> tuple[tuple[int, int, int], ...] | None:
    """Source-only 0216B514 + 0216C5F0 *initial* two-child arrangement.

    No movement beyond birth is simulated. The 0x1800 work stepping uses
    source direction; child +0x14 (if nonzero) spawns at offset0, and
    child +0x0C spawns at offset -24px for angle0 facing-right.
    Other angles return None unless cardinal (exact) instead of faking.
    """
    if record.handler_id != 1:
        return None
    direction = cardinal_direction_q8(record.byte1)
    if direction is None:
        return None
    x, y = direction
    x_step = (x * 0x1800) >> 8
    y_step = (abs(y) * 0x1800) >> 8
    signed_x = -x_step if mirrored else x_step
    signed_y = -y_step if y < 0 else y_step
    out = []
    if record.optional_reference:
        out.append((record.optional_reference, 0, 0))
    # B514 increments spacing after each C5F0 call; the +0x0C
    # child is first if there is no +0x14 secondary source.
    shift = 1 if record.optional_reference else 0
    out.append((record.reference0, -signed_x * shift, -signed_y * shift))
    return tuple(out)
