"""Read-only stage-runtime projection for the Level workspace.

Uses verified .mob/.bin record semantics.  A projection is deterministic with
explicit player/trigger inputs, not a reconstruction of an unrecorded battle.
Nothing in this module writes game assets.  In particular, sprite, palette and
collision *draw* state remains distinct from collision/physics state.
"""
from __future__ import annotations

from dataclasses import dataclass
from math import ceil, hypot
import random
import struct


@dataclass(frozen=True)
class PreviewFloor:
    index: int
    x: float
    y: float
    solid: bool
    mode: int
    note: str


@dataclass(frozen=True)
class PreviewSpawn:
    kind: str
    index: int
    x: float
    y: float
    label: str


@dataclass(frozen=True)
class PreviewFrame:
    tick: int
    floors: tuple[PreviewFloor, ...]
    spawns: tuple[PreviewSpawn, ...]
    gimmicks: tuple[PreviewSpawn, ...]
    scroll: tuple[tuple[int, float, float], ...]
    bg_sprites: tuple[PreviewSpawn, ...]
    notes: tuple[str, ...]
    parallax: tuple[tuple[int, float, float], ...] = ()
    palette: tuple[tuple[int, str], ...] = ()


def _timeline_token(token: str, *, occupancy: bool):
    """Parse ID@start-end (occupancy) or ID@tick (strikes), with legacy ID at 0."""
    import re
    token = token.strip()
    pattern = (r'(\d+)(?:@(\d+)(?:-(\d+))?)?' if occupancy
               else r'(\d+)(?:@(\d+))?')
    match = re.fullmatch(pattern, token)
    if match is None:
        raise ValueError(f'Invalid {"floor interval" if occupancy else "hit event"}: {token!r}')
    values = tuple(int(v) if v is not None else None for v in match.groups())
    if occupancy:
        identity, start, end = values
        start = 0 if start is None else start
        if end is not None and end < start:
            raise ValueError('An occupancy interval cannot end before it starts')
        return identity, start, end
    identity, tick = values
    return identity, (0 if tick is None else tick)


def parse_occupancy(text: str):
    """Comma-delimited floor IDs or intervals: 2, 3@40-100, 1@130."""
    return tuple(_timeline_token(part, occupancy=True)
                 for part in text.split(',') if part.strip())


def parse_hits(text: str):
    """Comma-delimited switch hits: 2@20, 2@250, 3 (at tick zero)."""
    return tuple(sorted((_timeline_token(part, occupancy=False)
                         for part in text.split(',') if part.strip()), key=lambda hit: hit[1]))


def parallax_at(anim, camera_x: float, camera_y: float):
    """Linear interpolation of traced camera input/output pairs (preview model).

    Runtime clamp/interpolation and screen-origin conventions need ARM9 validation.
    """
    fields = anim.fields()

    def axis(value, source, target):
        a, b = source
        x, y = target
        if a == b:
            return float(x)
        phase = max(0.0, min(1.0, (value - a) / (b - a)))
        return float(x + (y - x) * phase)

    return (axis(camera_x, fields['cam_x'], fields['out_x']),
            axis(camera_y, fields['cam_y'], fields['out_y']))


def palette_at(anims, original, tick: int):
    """Non-destructive RGB555 palette projection from BG type 0/1 scripts.

    Rotation indices and periods use the decoded records. Type-0 interpolation
    and script-to-bank routing are not GPU-verified, so results remain a preview.
    """
    if not original:
        return tuple()
    sizes = [len(bank) for bank in original]
    colors = [value for bank in original for value in bank]
    for anim in anims:
        if anim.kind == 1:
            f = anim.fields()
            start, count = f['start'], f['count']
            if count < 2 or start + count > len(colors):
                continue
            steps = (max(0, int(tick)) // max(1, f['period'] + 1)) * f['step']
            offset = steps % count
            segment = colors[start:start + count]
            if offset:
                colors[start:start + count] = (segment[offset:] + segment[:offset] if f['left']
                                                 else segment[-offset:] + segment[:-offset])
        elif anim.kind == 0:
            f = anim.fields()
            index = f['index']
            n = f['steps']
            if index >= len(colors) or n <= 0:
                continue
            phase = int(tick) % (2 * n)
            weight = min(phase, 2 * n - phase)
            src, dst = colors[index], f['colour']
            out = 0
            for shift in (0, 5, 10):
                a, b = (src >> shift) & 31, (dst >> shift) & 31
                out |= ((a * (n - weight) + b * weight + n // 2) // n) << shift
            colors[index] = out | (src & 0x8000)
    result = []
    off = 0
    for size in sizes:
        result.append(tuple(colors[off:off + size]))
        off += size
    return tuple(result)


def _path(floor, tick):
    """Traverse target/wait commands at the decoded fixed-point floor speed.

    A move command progresses toward the next *absolute* path target, while a
    wait command holds for count+1 ticks. Runtime initializes at (x,y).
    The replay cycles when the command list ends. Invalid/unknown commands
    cannot be guessed, so we preserve the current location and report it.
    """
    speed_raw = getattr(floor, 'speed', None)
    if speed_raw is None:
        speeds = (128, 256, 384)
        i = floor.speed_index
        speed_raw = speeds[i] if 0 <= i < len(speeds) else 0
    speed = speed_raw / 256
    x, y = float(floor.x), float(floor.y)
    commands = tuple(floor.path_commands)
    if not commands or speed <= 0:
        return x, y, 'no path or unknown speed'
    steps = []
    for cmd in commands:
        if cmd.kind == 1:
            steps.append((None, None, max(1, int(cmd.count or 0) + 1)))
        elif cmd.kind == 0 and cmd.x is not None and cmd.y is not None:
            dx, dy = cmd.x - x, cmd.y - y
            n = max(1, ceil(hypot(dx, dy) / speed))
            steps.append((float(cmd.x), float(cmd.y), n))
            x, y = float(cmd.x), float(cmd.y)
        else:
            return floor.x, floor.y, f'unknown path command {cmd.kind}'
    cycle = sum(n for _, _, n in steps)
    # A path cycle starts at the floor's initial position. The final command
    # need not end there; discontinuity at wrap is an explicit preview limit.
    remaining = max(0, int(tick)) % cycle
    x, y = float(floor.x), float(floor.y)
    for tx, ty, duration in steps:
        if remaining < duration:
            if tx is None:
                return x, y, 'path wait'
            frac = min(1.0, remaining / duration)
            return x + (tx - x) * frac, y + (ty - y) * frac, 'path movement'
        remaining -= duration
        if tx is not None:
            x, y = tx, ty
    return x, y, 'path cycle'


def floor_at(floor, tick, index=0, enabled=True, occupied=False, since=0):
    mode = floor.motion_kind
    x, y = float(floor.x), float(floor.y)
    if not enabled:
        return PreviewFloor(index, x, y, True, mode, 'mission disables moving floors')
    if mode in (0, 5):
        x, y, note = _path(floor, tick)
        return PreviewFloor(index, x, y, True, mode, note)
    if mode == 3:
        if occupied:
            x, y, note = _path(floor, max(0, tick - since))
            return PreviewFloor(index, x, y, True, mode, f'pressure-active: {note}')
        return PreviewFloor(index, x, y, True, mode, 'waiting for player occupancy')
    if mode == 2:
        if occupied:
            # Source shows 0.5px/frame down while stood on. The precise
            # maximum depth depends on state/collision and is not projected.
            return PreviewFloor(index, x, y + max(0, tick - since) * 0.5, True, mode,
                                'sink while occupied; maximum depth not simulated')
        return PreviewFloor(index, x, y, True, mode, 'no player occupancy')
    if mode == 4:
        if occupied:
            elapsed = max(0, tick - since)
            solid = elapsed < 360 or elapsed >= 720
            return PreviewFloor(index, x, y, solid, mode,
                                'crumble cycle (occupancy held since tick 0)')
        return PreviewFloor(index, x, y, True, mode, 'crumble requires occupancy')
    if mode == 1:
        return PreviewFloor(index, x, y, True, mode,
                            'blink interval depends on sprite animation completion')
    return PreviewFloor(index, x, y, True, mode, f'unresolved motion mode {mode}')


def _scroll(anim, tick):
    """Project scripted band displacement in units of pixels (12.4 step values)."""
    f = anim.fields()
    steps = f.get('steps', ())
    if not steps:
        return 0.0, 0.0
    if f.get('continuous'):
        dx, dy, _ = steps[0]
        return dx * tick / 4096, dy * tick / 4096
    cycle = sum(max(1, duration + 1) for _, _, duration in steps)
    elapsed = max(0, int(tick))
    rounds, rem = divmod(elapsed, cycle)
    dx = sum(vx * (duration + 1) for vx, _, duration in steps) * rounds
    dy = sum(vy * (duration + 1) for _, vy, duration in steps) * rounds
    for vx, vy, duration in steps:
        n = min(rem, duration + 1)
        dx += vx * n
        dy += vy * n
        rem -= n
        if rem <= 0:
            break
    return dx / 4096, dy / 4096


def _sprite_cell(anim, tick):
    f = anim.fields()
    steps = f.get('steps') or ()
    if not steps:
        return f.get('cell0', 0)
    duration = sum(max(1, frames + 1) for frames, _ in steps)
    off = tick % duration
    for frames, cell in steps:
        if off < frames + 1:
            return cell
        off -= frames + 1
    return steps[-1][1]


def project(mob, geometry, tick, *, environment=True, items_enabled=True,
            occupied_floors=(), struck_gimmicks=(), pickups=(), seed=0):
    """Snapshot at an explicit frame and trigger scenario.

    ``occupied_floors`` identifies floors occupied since frame 0; ``struck_gimmicks``
    identifies switches struck at frame 0; ``pickups`` lists frames when one item
    was removed. Random choices use a seeded local RNG, *not* the game's RNG.
    """
    tick = max(0, int(tick))
    occupied = frozenset(occupied_floors)
    struck = frozenset(struck_gimmicks)
    floors = tuple(floor_at(f, tick, i, environment, i in occupied)
                   for i, f in enumerate(mob.floors))
    spawns, gimmicks, scroll, bg_sprites, notes = [], [], [], [], []
    rng = random.Random(int(seed))

    candidates = tuple(mob.item_candidates)
    config = getattr(mob, 'items', None)
    interval = getattr(config, 'interval', 0) if config is not None else 0
    if items_enabled and candidates:
        # Four starting items and periodic replenishment at free points, up to
        # four alive. Item types/weights are not assigned without the item tables.
        live = {}
        pickup_counts = {}
        for p in pickups:
            p = int(p)
            if p >= 0 and p <= tick:
                pickup_counts[p] = pickup_counts.get(p, 0) + 1
        attempts = {0} | (set(range(interval, tick + 1, interval)) if interval > 0 else set())
        for at in sorted(attempts | set(pickup_counts)):
            for _ in range(pickup_counts.get(at, 0)):
                if live:
                    del live[next(iter(live))]
            if at not in attempts:
                continue
            available = [i for i in range(len(candidates)) if i not in live]
            count = (min(4, len(available)) if at == 0
                     else min(4 - len(live), 1, len(available)))
            for i in rng.sample(available, count):
                live[i] = at
                available.remove(i)
        spawns = [PreviewSpawn('item', i, *candidates[i].pixel_xy, f'item candidate {i} (seeded)')
                  for i in live]
        notes.append(f'Items: {len(spawns)}/4 projected; item selection/weights approximate')
    for i, g in enumerate(mob.gimmicks):
        x, y = (getattr(g, 'pixel_xy', None) or
                tuple(v / 256.0 for v in struct.unpack_from('<ii', g.raw, 4)))
        label = getattr(g, 'label', f'type {g.type_id}')
        gimmicks.append(PreviewSpawn('gimmick', i, x, y, label))
        if not environment:
            continue
        if g.type_id in (4, 5, 6):
            period = 181 if g.type_id == 6 else 121
            count = tick // period
            points = getattr(g, 'points', ())
            for j in range(count):
                if points:
                    px, py = rng.choice(points)
                    # Display only the most recent spawn; hazard lifetime is
                    # combat-dependent and not traced sufficiently to retain it.
                    if j == count - 1:
                        spawns.append(PreviewSpawn('hazard', i, px, py, f'{label} event #{count}'))
        elif g.type_id in (2, 8, 9) and i in struck:
            notes.append(f'Gimmick {i} hit-switch fired: targets {getattr(g, "targets", ())}')
        elif g.type_id == 1 and getattr(g, 'timers', None):
            off, on = g.timers
            period = max(1, off + on + 2)
            notes.append(f'Gimmick {i} timed toggle: phase {tick % period}/{period}')
        elif g.type_id == 10 and getattr(g, 'timers', None):
            interval_frames, duration = g.timers
            period = max(1, interval_frames + 1)
            phase = tick % period
            if phase >= max(0, period - 60):
                notes.append(f'Gimmick {i} stage-event warning, phase {phase}/{period}')
            if phase < duration + 1:
                notes.append(f'Gimmick {i} stage event active, phase {phase}/{period}')
        elif g.type_id == 11:
            if tick % 197 >= 180:
                notes.append(f'Gimmick {i} cannon aiming/firing (approximate repeat)')

    if geometry is not None:
        for layer in getattr(geometry, 'layers', ()):
            for anim in layer.anims:
                if anim.kind == 2:
                    sx, sy = _scroll(anim, tick)
                    scroll.append((layer.index, sx, sy))
                elif anim.kind == 5:
                    f = anim.fields()
                    bg_sprites.append(PreviewSpawn('sprite-cell', layer.index, float(f['x']), float(f['y']),
                                                   f'cell {_sprite_cell(anim, tick)}'))
    if not environment and mob.gimmicks:
        notes.append('Selected mission disables moving-floor and gimmick initialization')
    if occupied or struck:
        notes.append('Manual triggers are a preview scenario, not authored mission events')
    return PreviewFrame(tick, floors, tuple(spawns), tuple(gimmicks), tuple(scroll),
                        tuple(bg_sprites), tuple(notes))