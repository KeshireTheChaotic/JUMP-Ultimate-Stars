"""GenerateID effect spawns and their visual projection (no GUI dependencies).

Evidence (see docs/03_VERIFIED_TECHNICAL_FINDINGS in the studio handoff):

* ``GenerateID`` spawns when playback lands *exactly* on a keyed tick
  (20.12 fixed-point equality at ``0x02016220``).  Two keys with the same ID
  are two spawns, so a spawn is identified by ``(node, key index, occurrence)``
  and never deduplicated by ID.
* A spawned effect's move id resolves either in the character's own move
  tables (``*_e0.amt``…) or in the common effect archives
  (``efc/comm_b.aar`` / ``efc/comm_c.aar``).  On the shipped data every
  GenerateID resolves to one of those.
* ``EffectFlags`` (``CommonEffect+0x80``) and ``ParentLink`` are read from the
  spawning node at the spawn tick.  Bit 0x0008 means "screen-referenced
  position when unlinked"; the editor has no camera, so such instances are
  drawn relative to the character origin and flagged.

What this module does NOT model (shown as provenance, never as fact):
Marker loops/branches revisiting spawn ticks, runtime facing/mirroring,
``LifeType`` policies, complete ParentLink transforms (rotation/scale/facing)
and conditional NoteTrack branches. Translation-only owner following is an
explicitly marked preview derived from ARM9 ``0x0206CA8C``.  The projection is the authored, straight-through
timeline ("Visual Playback" of the nominal path).
"""
from __future__ import annotations

from dataclasses import dataclass, field
import struct
from typing import Callable, Mapping

from jus_formats import almt, notetrack

from .effectlinks import effect_frame_tick

FLAG_KEEP_X_UNMIRRORED = 0x0001
FLAG_NO_FACING_INHERIT = 0x0002
FLAG_UNCLASSIFIED_4 = 0x0004
FLAG_SCREEN_REFERENCE = 0x0008
FLAG_RECONCILE_FACING = 0x0010

EFFECT_FLAG_NAMES = {
    FLAG_KEEP_X_UNMIRRORED: 'keep X unmirrored',
    FLAG_NO_FACING_INHERIT: 'no facing inherit',
    FLAG_UNCLASSIFIED_4: 'bit 2 (unclassified)',
    FLAG_SCREEN_REFERENCE: 'screen-referenced, lower priority',
    FLAG_RECONCILE_FACING: 'reconcile linked facing',
}

#: (move, node names, resource path) for an effect move id.
CatalogEntry = tuple[almt.Move, list[str], str]


def state_at(move: almt.Move, tick: int) -> dict[int, dict]:
    """Step-interpolated value of every decoded track per node at ``tick``."""
    out: dict[int, dict] = {}
    for ni, node in enumerate(move.nodes):
        if node is None:
            continue
        st: dict = {}
        for tr in node.tracks:
            if tr.opaque:
                continue
            if not tr.keyed:
                st[tr.field] = tr.value
                continue
            cur = None
            for k in tr.keys:
                if k.tick > tick:
                    break
                cur = k.value
            if cur is not None:
                st[tr.field] = cur
        out[ni] = st
    return out


def describe_flags(flags: int) -> str:
    if not flags:
        return 'none'
    parts = [name for bit, name in EFFECT_FLAG_NAMES.items() if flags & bit]
    rest = flags & ~sum(EFFECT_FLAG_NAMES)
    if rest:
        parts.append(f'other 0x{rest:04X}')
    return ', '.join(parts)


@dataclass(frozen=True)
class Spawn:
    """One keyed GenerateID occurrence in a move."""
    node_index: int
    node: str
    key_index: int
    tick: int
    effect_id: int
    occurrence: int          # n-th key with this id in the move (0-based)

    @property
    def key(self) -> tuple[int, int, int]:
        return (self.node_index, self.key_index, self.occurrence)


def keyed_spawns(move: almt.Move, node_names: list[str]) -> list[Spawn]:
    """All keyed non-zero GenerateID keys, ordered by tick then node."""
    found: list[tuple[int, int, int, int]] = []
    for ni, node in enumerate(move.nodes):
        if node is None:
            continue
        tr = node.track('GenerateID')
        if tr is None or tr.opaque or not tr.keyed:
            continue
        for ki, k in enumerate(tr.keys):
            if k.value:
                found.append((k.tick, ni, ki, k.value))
    found.sort()
    seen: dict[int, int] = {}
    out = []
    for tick, ni, ki, eid in found:
        occ = seen.get(eid, 0)
        seen[eid] = occ + 1
        name = node_names[ni] if ni < len(node_names) else f'N{ni}'
        out.append(Spawn(ni, name, ki, tick, eid, occ))
    return out


@dataclass(frozen=True)
class ReferenceEvent:
    """Battle chara_action(4/5) affecting references to GN child objects.

    ARM9 overlay 6 FUN_02157A44 dispatches actions 4 and 5 to main
    FUN_0206C650/0206C760. Those functions call virtual +8 on selected
    GN01..GN09 children. On the effect widget vtable, +8 resolves to
    Thumb FUN_020102D0, which *increments* the reference count; it is not
    the object destructor or a timed effect kill.

    The caller's retained references, later releases and execution under
    Marker/NoteTrack branches are not simulated in the preview.
    """
    tick: int
    node: str
    kind: str        # 'all GN children' or 'first eligible GN child'
    action: int


def reference_events(move: almt.Move, node_names: list[str]) -> tuple[ReferenceEvent, ...]:
    """Extract the traced child-reference actions without altering lifetimes."""
    events: list[ReferenceEvent] = []
    for ni, node in enumerate(move.nodes):
        if node is None:
            continue
        tr = node.track('NoteTrack')
        if tr is None:
            continue
        try:
            keys = notetrack.parse(tr.encoded()).keys
        except (ValueError, IndexError, struct.error):
            continue
        for key in keys:
            for cmd in key.commands:
                if cmd.opcode != 0x0300:
                    continue
                args = cmd.values()
                if not args or args[0] not in (4, 5):
                    continue
                action = args[0]
                events.append(ReferenceEvent(key.tick,
                            node_names[ni] if ni < len(node_names) else f'N{ni}',
                            'all GN children' if action == 4 else 'first eligible GN child',
                            action))
    return tuple(sorted(events, key=lambda ev: (ev.tick, ev.node)))


@dataclass
class EffectInstance:
    """A spawned effect as it appears at one parent tick."""
    spawn: Spawn
    move: almt.Move
    names: list[str]
    path: str
    age: int                     # parent ticks since the spawn
    sub_tick: int                # tick inside the effect move
    anchor: tuple[int, int]      # world position of the effect origin
    flags: int
    parent_link: int
    depth: int = 0
    parent: 'EffectInstance | None' = None
    draw_prio: int | None = None # spawning node DrawPrio (20.12); visual occlusion unverified
    notes: list[str] = field(default_factory=list)

    @property
    def chain(self) -> tuple:
        """Stable identity including every ancestor spawn."""
        own = (self.spawn.effect_id,) + self.spawn.key
        return (self.parent.chain + own) if self.parent else own

    @property
    def label(self) -> str:
        return f'{self.spawn.effect_id:06X} #{self.spawn.occurrence} ← {self.spawn.node}@{self.spawn.tick}'


@dataclass
class Projection:
    instances: list[EffectInstance]
    missing: list[Spawn]         # GenerateID with no ALMT move in the catalog
    spawns: list[Spawn]


@dataclass(frozen=True)
class NominalLifetime:
    """Offline timeline status, not proof an engine object survived combat.

    Non-looping animations are drawable through their authored terminal tick;
    the animation controller transitions to its end path once its clock
    advances *past* duration (ARM9 FUN_0201BDEC). A looping ALMT supplies no
    independent death tick. Owner deletion, combat collision, scene changes,
    animation retargeting and hardware visibility require runtime state.
    """
    phase: str
    age: int
    frame_tick: int | None
    scheduled_end: int | None
    runtime_dependent: bool = True


def nominal_lifetime(spawn: Spawn, child: almt.Move, tick: int) -> NominalLifetime:
    age = tick - spawn.tick
    if age < 0:
        return NominalLifetime('not-spawned', age, None, None if child.flags & almt.MOVE_FLAG_LOOP
                               else spawn.tick + child.duration)
    sub = effect_frame_tick(child, age)
    if sub is None:
        return NominalLifetime('past-authored-end', age, None, spawn.tick + child.duration)
    return NominalLifetime('looping-until-runtime-removal' if child.flags & almt.MOVE_FLAG_LOOP
                           else 'within-authored-span', age, sub,
                           None if child.flags & almt.MOVE_FLAG_LOOP else spawn.tick + child.duration)


def effect_span(spawn: Spawn, child: almt.Move, horizon: int) -> tuple[int, int, bool]:
    """(first, last, open-ended) parent ticks during which the effect plays."""
    if child.flags & almt.MOVE_FLAG_LOOP:
        return spawn.tick, max(spawn.tick, horizon), True
    return spawn.tick, spawn.tick + max(0, child.duration), False


def project(move: almt.Move, node_names: list[str], tick: int,
            catalog: Mapping[int, CatalogEntry] | Callable[[int], CatalogEntry | None],
            base: tuple[int, int] = (0, 0), depth: int = 0, max_depth: int = 3,
            parent: EffectInstance | None = None, limit: int = 64,
            *, follow_parent: bool = False,
            origin_at: Callable[[int], tuple[float, float]] | None = None,
            _timeline_start: int = 0, _world_tick: int | None = None,
            _parent_world_at: Callable[[int], tuple[float, float]] | None = None) -> Projection:
    """Project nominal GenerateID effects, optionally following owner translation.

    ``follow_parent`` implements the two offset branches in the ARM9
    CommonEffect spawner at 0x0206CA8C: ParentLink=0 captures the owner's
    position at birth, while ParentLink!=0 retains a local offset relative to
    the owner at playback time. ``origin_at`` supplies the preview's assumed
    world-space owner position; when omitted the owner is stationary.

    This is *translation only*, not full engine attachment. ARM9
    0x02022060 links the widget and its transform controller to the owner;
    0x0202AA28 evaluates the inherited transform matrix. Scale, facing,
    rotation, owner bone selection, screen-reference and repeated Marker loops
    still require further runtime traces. Positions returned for the editor
    are relative to ``origin_at(_world_tick)`` because the main viewport
    applies the actor's current root-motion translation itself.
    """
    lookup = catalog if callable(catalog) else catalog.get
    spawns = keyed_spawns(move, node_names)
    out: list[EffectInstance] = []
    missing: list[Spawn] = []
    world_now = (_timeline_start + tick) if _world_tick is None else _world_tick
    if follow_parent:
        owner_at = _parent_world_at
        if owner_at is None:
            def owner_at(frame: int) -> tuple[float, float]:
                pos = origin_at(frame) if origin_at else (0, 0)
                return (base[0] + pos[0], base[1] + pos[1])
        current_root = origin_at(world_now) if origin_at else (0, 0)
    for sp in spawns:
        if sp.tick > tick or len(out) >= limit:
            continue
        entry = lookup(sp.effect_id)
        if entry is None:
            missing.append(sp)
            continue
        child, names, path = entry
        age = tick - sp.tick
        sub = effect_frame_tick(child, age)
        if sub is None:
            continue
        pst = state_at(move, sp.tick).get(sp.node_index, {})
        pos = pst.get('2DPos', [0, 0])
        flags = int(pst.get('EffectFlags', 0) or 0)
        link = int(pst.get('ParentLink', 0) or 0)
        prio = pst.get('DrawPrio')
        if follow_parent:
            birth = _timeline_start + sp.tick
            # The source node's 2DPos is captured at the GenerateID key.
            # Runtime ParentLink is Boolean (vtable 02099DA4 slots 8/9);
            # at 0206CA8C the linked branch supplies this offset without
            # adding the owner's position, unlike the unlinked branch.
            def effect_world_at(frame: int, *, owner=owner_at,
                                anchor=tuple(pos), linked=bool(link), born=birth):
                ox, oy = owner(frame if linked else born)
                return (ox + anchor[0], oy + anchor[1])
            wx, wy = effect_world_at(world_now)
            anchor = (wx - current_root[0], wy - current_root[1])
        else:
            effect_world_at = None
            anchor = (base[0] + pos[0], base[1] + pos[1])
        inst = EffectInstance(sp, child, names, path, age, sub, anchor,
                              flags, link, depth, parent, prio if isinstance(prio, int) else None)
        if follow_parent:
            inst.notes.append('ParentLink translation preview: owner ' +
                              ('follows each tick' if link else 'position captured at spawn'))
            inst.notes.append('Runtime uses transform hierarchy (0x02022060); rotation/scale/facing not previewed')
        else:
            inst.notes.append('anchored at the spawning node 2DPos on the spawn tick (legacy preview)')
            if link:
                inst.notes.append(f'ParentLink={link}: attached-owner movement not simulated')
        if flags & FLAG_SCREEN_REFERENCE and not link:
            inst.notes.append('EffectFlags 0x0008: screen-referenced; camera transform not simulated')
        out.append(inst)
        if depth + 1 < max_depth:
            sub_proj = project(child, names, sub, lookup,
                               anchor if not follow_parent else (0, 0),
                               depth + 1, max_depth, inst, limit - len(out),
                               follow_parent=follow_parent, origin_at=origin_at,
                               _timeline_start=_timeline_start + sp.tick,
                               _world_tick=world_now,
                               _parent_world_at=effect_world_at)
            out.extend(sub_proj.instances)
            missing.extend(sub_proj.missing)
    return Projection(out, missing, spawns)


def build_catalog(tables: list[tuple[str, almt.AlmtFile]],
                  catalog: dict[int, CatalogEntry] | None = None) -> dict[int, CatalogEntry]:
    """Index moves by id; earlier tables win (character before common effects)."""
    catalog = {} if catalog is None else catalog
    for path, table in tables:
        for m in table.moves:
            catalog.setdefault(m.id, (m, table.node_names, path))
    return catalog
