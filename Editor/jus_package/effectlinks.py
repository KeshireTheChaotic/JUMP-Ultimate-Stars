"""BattleCharaPursuer effect links derived from ALMT NoteTrack and ChrBin.

Overlay 6 FUN_02157A44 case 0x0D calls FUN_021617A0 with the two
chara_action arguments.  That routine indexes a table of 8-byte records
at controller data +0x14; ChrBin.aar chr/effect/<character>.bin supplies the
records.  Case 0x0E calls FUN_0216186C to set target x/y (and snap flag).
FUN_021618E4 selects one of the IDs and plays it on a persistent pursuer.
This path is distinct from ALMT GenerateID and must be shown separately.

Offline replay CANNOT determine which pursuer state wins at each frame nor
its position during follow smoothing without previous runtime state.  We
therefore expose BOTH state IDs, the target position, and exact command ticks.
"""
from __future__ import annotations

from dataclasses import dataclass
import struct

from jus_formats import notetrack, almt


@dataclass(frozen=True)
class EffectRecord:
    slot: int
    move_id: int
    metadata: int


@dataclass(frozen=True)
class PursuerEvent:
    tick: int
    slot_a: int | None
    slot_b: int | None
    move_a: int | None
    move_b: int | None
    target_xy: tuple[int, int] | None
    snap: bool | None
    node: str
    operations: tuple[str, ...]

    @property
    def animation_ids(self) -> tuple[int, ...]:
        return tuple(dict.fromkeys(v for v in (self.move_a, self.move_b) if v is not None))


def parse_effect_records(raw: bytes) -> tuple[EffectRecord, ...]:
    """Read 8-byte records; keep the second u32 for future controller research."""
    if len(raw) % 8:
        raise ValueError(f'Character effect table is not 8-byte aligned ({len(raw)} bytes)')
    return tuple(EffectRecord(i, *struct.unpack_from('<II', raw, i * 8))
                 for i in range(len(raw) // 8))


def pursuer_events(move: almt.Move, node_names: list[str],
                   records: tuple[EffectRecord, ...]) -> tuple[PursuerEvent, ...]:
    """Resolve NoteTrack chara_action subcodes 13/14 into controller events.

    An event is an intended pursuer-state/target update, not proof of an
    immediate spawned sprite.  State persists across move boundaries in the
    game, so slots are initially unknown instead of implicitly zero.
    """
    commands: list[tuple[int, int, int, str, int, list[int]]] = []
    for ni, node in enumerate(move.nodes):
        if node is None:
            continue
        tr = node.track('NoteTrack')
        if tr is None:
            continue
        try:
            notes = notetrack.parse(tr.encoded())
        except (ValueError, IndexError, struct.error):
            continue
        for key in notes.keys:
            for order, cmd in enumerate(key.commands):
                if cmd.opcode != 0x0300:
                    continue
                values = cmd.values()
                if values and values[0] in (13, 14):
                    commands.append((key.tick, ni, order,
                                     node_names[ni] if ni < len(node_names) else f'N{ni}',
                                     values[0], values))
    commands.sort(key=lambda c: (c[0], c[1], c[2]))
    slots: tuple[int | None, int | None] = (None, None)
    xy: tuple[int, int] | None = None
    snap: bool | None = None
    result: list[PursuerEvent] = []
    for tick in sorted({c[0] for c in commands}):
        operations = []
        node = ''
        for _, _, _, node, sub, vals in (c for c in commands if c[0] == tick):
            if sub == 13:
                slots = (vals[1], vals[2])
                operations.append(f'select slots {slots[0]}/{slots[1]}')
            elif sub == 14:
                xy = (vals[1], vals[2])
                snap = bool(vals[3])
                operations.append(f'target ({xy[0]}, {xy[1]}), snap={int(snap)}')
        def rid(slot: int | None) -> int | None:
            return records[slot].move_id if slot is not None and 0 <= slot < len(records) else None
        result.append(PursuerEvent(tick, slots[0], slots[1], rid(slots[0]),
                                   rid(slots[1]), xy, snap, node, tuple(operations)))
    return tuple(result)


def active_event(events: tuple[PursuerEvent, ...], tick: int) -> PursuerEvent | None:
    return next((ev for ev in reversed(events) if ev.tick <= tick), None)


def effect_frame_tick(animation: almt.Move, age: int) -> int | None:
    """Relative position in a pursuer sub-animation, or None after a one-shot."""
    if age < 0:
        return None
    if animation.duration <= 0:
        return 0 if age == 0 else None
    if animation.flags & almt.MOVE_FLAG_LOOP:
        return age % animation.duration
    return age if age <= animation.duration else None


# Overlay 6 FUN_021618E4 (BattleCharaPursuer per-frame update): the controller
# stores x/y as signed 24.8 values at +0x0C/+0x10.  For a target, it computes
# (target - current) / 4 with truncation toward zero, clamps each component
# to +/-0x400 (four pixels), and snaps if BOTH step magnitudes are <0x100
# (one pixel).  FUN_0216186C/02161888 force an immediate snap on request.
# This is position replay only: runtime facing animation and its A/B choice
# depend on the controller and combat state, not just the authored move.

from typing import Callable


@dataclass(frozen=True)
class PursuerPosition:
    tick: int
    xy_raw: tuple[int, int]
    target_raw: tuple[int, int]
    initial_position_assumed: bool
    snapped_on_update: bool

    @property
    def xy(self) -> tuple[float, float]:
        return (self.xy_raw[0] / 256.0, self.xy_raw[1] / 256.0)

    @property
    def target(self) -> tuple[float, float]:
        return (self.target_raw[0] / 256.0, self.target_raw[1] / 256.0)


def _quarter_toward_zero(delta: int) -> int:
    """Match ARM signed division by four, including negative remainders."""
    return (abs(delta) // 4) * (1 if delta >= 0 else -1)


def pursuer_step_raw(current: tuple[int, int], target: tuple[int, int],
                     *, snap: bool = False) -> tuple[int, int]:
    """One overlay-6 controller update, in signed 24.8 fixed-point units.

    Only the position calculation is reproduced. This does not decide the
    pursuer's active move or the facing state selected by the game.
    """
    if snap:
        return target
    sx, sy = (_quarter_toward_zero(t - p) for p, t in zip(current, target))
    if abs(sx) < 0x100 and abs(sy) < 0x100:
        return target
    def advance(pos: int, goal: int, step: int) -> int:
        step = max(-0x400, min(0x400, step))
        result = pos + step
        # Defensive parity with the ARM9 sign/overshoot checks.
        return min(result, goal) if step > 0 else max(result, goal) if step < 0 else result
    return (advance(current[0], target[0], sx), advance(current[1], target[1], sy))


def pursuer_position_at(events: tuple[PursuerEvent, ...], tick: int,
                        actor_position: Callable[[int], tuple[float, float]],
                        *, facing_left: bool = False,
                        seed: str = 'first_target') -> PursuerPosition | None:
    """Replay the tracked pursuer target/follow instructions through ``tick``.

    ``actor_position`` is the *world* character position in pixels per tick.
    The first known pursuer position cannot be recovered from an isolated move;
    seed='first_target' (default) anchors it to the earliest known target,
    whereas seed='origin' assumes world (0,0). Both are labelled assumptions.
    """
    if seed not in ('first_target', 'origin'):
        raise ValueError('seed must be first_target or origin')
    events = tuple(sorted(events, key=lambda e: e.tick))
    if not events or tick < events[0].tick:
        return None
    position: tuple[int, int] | None = None
    target: tuple[int, int] | None = None
    active: PursuerEvent | None = None
    ix = 0
    snapped = False
    for frame in range(events[0].tick, tick + 1):
        target_changed = False
        while ix < len(events) and events[ix].tick == frame:
            active = events[ix]
            target_changed = any(op.startswith('target ') for op in active.operations)
            ix += 1
        if active is None or active.target_xy is None:
            continue
        x, y = actor_position(frame)
        dx, dy = active.target_xy
        if facing_left:
            dx = -dx
        target = (round((x + dx) * 256), round((y + dy) * 256))
        snap = target_changed and bool(active.snap)
        if position is None:
            position = target if seed == 'first_target' else (0, 0)
        position = pursuer_step_raw(position, target, snap=snap)
        snapped = snap
    if position is None or target is None:
        return None
    return PursuerPosition(tick, position, target, True, snapped)
