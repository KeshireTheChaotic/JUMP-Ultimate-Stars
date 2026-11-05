"""NoteTrack physics preview: a traced battle integrator with explicit preview assumptions.

Traced functions (battle overlay 6 = ``ov06``, ARM9 main = ``main``):

* ``ov06 FUN_02155688`` — NoteTrack dispatcher.  When the animation's integer
  tick changes it runs every command of the key(s) at that tick through the
  category table ``0x0217200C`` (high byte), then, while the
  ``set_velocity_for`` counter (+0xA0) is non-zero, decrements it and writes
  the stored impulse (+0x9C/+0x9E, non-zero components only) again.
* Physics table ``0x02172020`` (``0x0100``..``0x0107``):

  ====== ============ ===========================================================
  opcode function     effect on the body (character object +0x10 → +0x5C)
  ====== ============ ===========================================================
  0x0100 0x021565C0   stop: velocity +0x24/+0x26 = 0, counter = 0, body flag 0x1000
  0x0101 0x021565F4   arg≠0: body flag bit 1 = **gravity off** (arg 0 turns it back on)
  0x0102 0x02156630   arg≠0: state +0x78 bit 26 (no motion effect traced)
  0x0103 0x0215669C   impulse +0x2C = vx·32 (negated when facing left), +0x2E = vy·−126;
                      zero components are left untouched
  0x0104 0x02156710   same impulse, re-applied for ``frames`` frames by the dispatcher
  0x0105 0x0215676C   arg 0: arm the watch of state +0x78 bits 2/3 (condition only)
  0x0106 0x02156664   arg≠0: state +0x78 bit 17 and save +0x90..+0x93 → +0x98
                      (earlier docs said FUN_0207D11C; the table says otherwise)
  0x0107 0x02156794   arg 0: arm the watch of FUN_020838C4(obj, 0x400) (condition only)
  ====== ============ ===========================================================

* ``main FUN_02082E10`` — per-frame integrator, registered by
  ``BattleMove::Battle_MoveManCreate`` (0x02082A38), which sets gravity
  ``0x29`` (world +0x2C).  Per body and frame::

      vel += impulse (+0x2C) + impulse2 (+0x30)     (skipped for x on ground-lock flags)
      vel clamped to ±maxspeed·0x100                (+0x3E, default 0x20)
      vel -= (friction · vel · 0x100) >> 16         (+0x3C x = 0x20, +0x3D y = 8)
      vy  += gravity unless body flag bit 1         (0x29)
      pos += vel;  impulses = 0;  |vel| < 16 → 0

  Body defaults come from the constructor ``main FUN_02082C34``.
* Units: stage pixels ``<< 8`` are world units (``BattleMapMoveFloorInit``
  0x02085D74), so **256 units = 1 pixel**; +y points down.

Not modelled (shown as notes): collision with floors/walls (the preview can
assume a floor at the start height), velocity carried in from a previous
move, other impulse sources (+0x30), hit-stop, conditional branches and the
watches armed by 0x0105/0x0107.  Whether the integrator runs before or after
the dispatcher in a frame is not traced; the dispatcher is run first.
"""
from __future__ import annotations

import struct
from dataclasses import dataclass, field

from jus_formats import almt, notetrack

GRAVITY = 0x29
FRICTION_X = 0x20
FRICTION_Y = 8
MAX_SPEED = 0x20
UNITS_PER_PIXEL = 256
SNAP = 16                  # |v| < 16 → 0 (v < 0x10 and v > -0x11)

FUNCTIONS = {
    0x0100: 0x021565C0, 0x0101: 0x021565F4, 0x0102: 0x02156630, 0x0103: 0x0215669C,
    0x0104: 0x02156710, 0x0105: 0x0215676C, 0x0106: 0x02156664, 0x0107: 0x02156794,
}
LABELS = {
    0x0100: 'stop', 0x0101: 'gravity off/on', 0x0102: 'state bit 26', 0x0103: 'impulse',
    0x0104: 'impulse for N frames', 0x0105: 'watch state bits 2/3', 0x0106: 'state bit 17 + save',
    0x0107: 'watch flag 0x400',
}


def _s16(v: int) -> int:
    v &= 0xFFFF
    return v - 0x10000 if v & 0x8000 else v


def _damp(v: int, k: int) -> int:
    # (short)((uint)(k * v * 0x100) >> 16) — the 32-bit product, top half, as s16
    return _s16(((k * v * 0x100) & 0xFFFFFFFF) >> 16)


@dataclass
class Params:
    gravity: int = GRAVITY
    friction_x: int = FRICTION_X
    friction_y: int = FRICTION_Y
    max_speed: int = MAX_SPEED
    facing_left: bool = False
    floor: bool = True               # assume a floor at the start height (not traced)
    vx0: int = 0                     # velocity carried in from a previous move
    vy0: int = 0


@dataclass
class Frame:
    tick: int
    x: int                           # world units relative to the start
    y: int
    vx: int
    vy: int
    gravity: bool
    counter: int
    events: list[str] = field(default_factory=list)
    grounded: bool = False

    @property
    def px(self) -> tuple[float, float]:
        return self.x / UNITS_PER_PIXEL, self.y / UNITS_PER_PIXEL


@dataclass
class Motion:
    frames: list[Frame]
    commands: list[tuple[int, str, notetrack.Command]]   # (tick, node, command) physics only
    notes: list[str]

    def at(self, tick: int) -> Frame | None:
        if not self.frames:
            return None
        return self.frames[max(0, min(tick, len(self.frames) - 1))]

    @property
    def has_motion(self) -> bool:
        return any(c.opcode in (0x0100, 0x0103, 0x0104, 0x0101) for _, _, c in self.commands)


def physics_commands(move: almt.Move, node_names: list[str]) -> list[tuple[int, str, notetrack.Command]]:
    out = []
    for ni, node in enumerate(move.nodes):
        if node is None:
            continue
        tr = node.track('NoteTrack')
        if tr is None:
            continue
        try:
            nt = notetrack.parse(tr.encoded())
        except (ValueError, IndexError, struct.error):
            continue
        name = node_names[ni] if ni < len(node_names) else f'N{ni}'
        for key in nt.keys:
            for cmd in key.commands:
                if cmd.opcode >> 8 == 1:
                    out.append((key.tick, name, cmd))
    out.sort(key=lambda t: t[0])          # stable: node order, then stored order
    return out


def simulate(move: almt.Move, node_names: list[str], params: Params | None = None,
             ticks: int | None = None) -> Motion:
    p = params or Params()
    cmds = physics_commands(move, node_names)
    by_tick: dict[int, list] = {}
    for t, n, c in cmds:
        by_tick.setdefault(t, []).append((n, c))
    end = move.duration if ticks is None else ticks
    x = y = 0
    vx, vy = p.vx0, p.vy0
    gravity_off = False
    counter = 0
    store = [0, 0]
    frames: list[Frame] = []
    sign = -1 if p.facing_left else 1
    for t in range(end + 1):
        ix = iy = 0
        events = []
        for node, c in by_tick.get(t, ()):
            v = c.values() or []
            op = c.opcode
            if op == 0x0100:
                vx = vy = 0
                counter = 0
                store = [0, 0]
                events.append('stop')
            elif op == 0x0101:
                gravity_off = bool(v and v[0])
                events.append('gravity off' if gravity_off else 'gravity on')
            elif op == 0x0103 and len(v) >= 2:
                if v[0]:
                    ix = _s16((v[0] << 5) * sign)
                if v[1]:
                    iy = _s16(v[1] * -0x7E)
                events.append(f'impulse ({v[0]}, {v[1]})')
            elif op == 0x0104 and len(v) >= 3:
                counter = v[2] & 0xFF
                if v[0]:
                    store[0] = _s16((v[0] << 5) * sign)
                if v[1]:
                    store[1] = _s16(v[1] * -0x7E)
                events.append(f'impulse ({v[0]}, {v[1]}) × {counter} frames')
            elif op in LABELS:
                events.append(LABELS[op])
        if counter:
            counter -= 1
            if store[0]:
                ix = store[0]
            if store[1]:
                iy = store[1]
        # --- FUN_02082E10 -------------------------------------------------
        vx = _s16(vx + ix)
        vy = _s16(vy + iy)
        lim = p.max_speed * 0x100
        vx = max(-lim, min(lim, vx))
        vy = max(-lim, min(lim, vy))
        vx = _s16(vx - _damp(vx, p.friction_x))
        vy = _s16(vy - _damp(vy, p.friction_y))
        if not gravity_off:
            vy = _s16(vy + p.gravity)
        x += vx
        y += vy
        grounded = False
        if p.floor and y > 0:
            y, vy, grounded = 0, 0, True
        if -SNAP - 1 < vx < SNAP:
            vx = 0
        if -SNAP - 1 < vy < SNAP:
            vy = 0
        frames.append(Frame(t, x, y, vx, vy, not gravity_off, counter, events, grounded))
    notes = ['starts at rest unless an incoming velocity is set; previous moves are not simulated',
             'floor at the start height is assumed (collision not traced)' if p.floor else
             'no floor: the body falls freely',
             'dispatcher before integrator is assumed; stage bounds, body flags and external impulses are omitted',
             f'facing {"left (x impulses negated)" if p.facing_left else "right"}']
    return Motion(frames, cmds, notes)
