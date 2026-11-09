"""Original-source projection/framing adapters extracted from EditorApp (R08 Phase 8).
Source shots are launch evidence only, not simulated projectile trajectories.
"""
from __future__ import annotations

from jus_formats import chrbin
from jus_package import effectlinks, shotvisuals, spawns, spritegeometry
from jus_package.project import join


def frame_view(editor):
    # A Koma special can generate sprites well outside the base character
    # pose. Frame the authored move *and* its source-resolved children
    # across the key span rather than only tick 0 (Goku Cheap Joke,
    # 0x5C12A, spawns two original 24-tick children at tick 7).
    rect = editor._move_scope_extent()
    if rect:
        editor.view.frame_rect(rect)
    else:
        editor.view.frame_origin()


def _move_scope_extent(editor):
    if not editor.move:
        return None
    if not editor.show_spawns.get() or not editor.index:
        return editor._move_extent()
    candidates = {0, editor.tick}
    # Original character frame keys; include move extremes where available.
    for node in editor.move.nodes:
        if node is None:
            continue
        for tr in node.tracks:
            if tr.field in ('BoundsIndex', 'TextureID', '2DPos', 'CollisionRect0') and tr.keyed:
                candidates.update(k.tick for k in tr.keys if 0 <= k.tick <= editor.move.duration)
    for sp in spawns.keyed_spawns(editor.move, editor.almt.node_names):
        if sp.tick > editor.move.duration:
            continue
        candidates.add(sp.tick)
        child = editor._effect_moves.get(sp.effect_id)
        if child is not None:
            last = min(child[0].duration - 1, editor.move.duration - sp.tick)
            if last > 0:
                candidates.add(sp.tick + last)
                candidates.add(sp.tick + last // 2)
    ticks = sorted(candidates)
    if len(ticks) > 48:
        # Deterministic sampling bounded for long/many-effect attacks.
        ticks = sorted({ticks[round(i * (len(ticks)-1)/47)] for i in range(48)}
                       | {0, editor.tick})
    save_tick = editor.tick
    extents = []
    try:
        for t in ticks:
            editor.tick = t
            bounds = editor._move_extent()
            if bounds:
                extents.append(bounds)
    finally:
        editor.tick = save_tick
    # The original NoteTrack can also launch shot objects (action2).
    # These are not GN GenerateID children of the parent and would be
    # omitted from an otherwise complete effect-aware viewport frame.
    extents.extend(editor._handler00_launch_extents())
    if not extents:
        return None
    return (min(v[0] for v in extents), min(v[1] for v in extents),
            max(v[2] for v in extents), max(v[3] for v in extents))


def _handler00_launch_extents(editor):
    """Only original shot birth sprites and their authored 1-level GN keys.

    Uses original shot launch XY and image pixels. Deliberately excludes
    native projectile travel, contact termination and conditional exit.
    """
    if not editor.show_shot_sources.get() or not editor.index:
        return []
    bounds = []
    for ev in editor._shot_events_current():
        if ev.handler != 0:
            continue
        origin_x, origin_y = editor._animation_origin(ev.tick)
        base_x = origin_x + (-ev.launch_x if editor.facing_left.get() else ev.launch_x)
        base_y = origin_y + ev.launch_y
        for rid in ev.directly_constructed_animations:
            entry = editor._effect_moves.get(rid)
            if entry is None:
                continue
            child, child_names, _child_path = entry
            ages = {0, max(0, child.duration // 2), max(0, child.duration - 1)}
            for age in ages:
                tick = effectlinks.effect_frame_tick(child, age)
                if tick is None:
                    continue
                bounds.extend(spritegeometry.sprite_bounds(
                    editor._state(child, tick).values(),
                    editor._frame_image, (base_x, base_y)))
            for nested in spawns.keyed_spawns(child, child_names):
                nxt = editor._effect_moves.get(nested.effect_id)
                if nxt is None or nested.tick >= child.duration:
                    continue
                nm, _nnames, _path = nxt
                at_tick = effectlinks.effect_frame_tick(nm, 0)
                if at_tick is None:
                    continue
                try:
                    ni = child_names.index(nested.node)
                except ValueError:
                    continue
                pos = spawns.state_at(child, nested.tick).get(ni, {}).get('2DPos', [0, 0])
                bounds.extend(spritegeometry.sprite_bounds(
                    editor._state(nm, at_tick).values(), editor._frame_image,
                    (base_x + pos[0], base_y + pos[1])))
    return bounds


def _move_extent(editor):
    if not editor.move:
        return None
    xs = []
    st = editor._state(editor.move, editor.tick)
    for s in st.values():
        xs.extend(spritegeometry.sprite_bounds((s,), editor._frame_image))
        pos = s.get('2DPos', [0, 0])
        for field, value in s.items():
            if field.startswith('CollisionRect') and isinstance(value, list):
                xs.append((pos[0] + value[0], pos[1] + value[1],
                           pos[0] + value[2], pos[1] + value[3]))
    if editor.show_spawns.get() and editor.index:
        for inst in editor._visible_spawn_instances(editor.spawn_projection()):
            xs.extend(spritegeometry.sprite_bounds(
                editor._state(inst.move, inst.sub_tick).values(),
                editor._frame_image, inst.anchor))
    dx, dy = editor._animation_origin(editor.tick)
    xs = [(l + dx, t + dy, r + dx, b + dy) for l, t, r, b in xs]
    if editor.show_motion.get() and editor._motion and editor._motion.commands:
        xs.extend((f.px[0], f.px[1], f.px[0], f.px[1]) for f in editor._motion.frames)
    if not xs:
        return None
    return (min(r[0] for r in xs) - 8, min(r[1] for r in xs) - 8, max(r[2] for r in xs) + 8,
            max(r[3] for r in xs) + 8)


def _animation_origin(editor, tick):
    if editor.root_motion.get() and editor._motion and editor._motion.commands:
        frame = editor._motion.at(tick)
        if frame:
            return frame.px
    return (0.0, 0.0)


def spawn_projection(editor, tick=None):
    if not editor.move or not editor.almt:
        return spawns.Projection([], [], [])
    return spawns.project(editor.move, editor.almt.node_names, editor.tick if tick is None else tick,
                          editor._effect_moves, follow_parent=editor.parent_link_preview.get(),
                          origin_at=editor._animation_origin,
                          apply_teardown=editor.effect_teardown.get())


def _shot_events_current(editor):
    """All original 0x0300/action2 shot invocations for this base battle AMT."""
    if not editor.move or not editor.almt or not editor.root_data or not editor._battle_base_table():
        return ()
    form, _ = editor._move_source_form()
    if form is None:
        return ()
    member = join('chr/ChrBin.aar', f'chr/shot/{form}.bin')
    if not editor.root_data.exists(member):
        return ()
    try:
        table = chrbin.parse(editor.root_data.read(member), f'chr/shot/{form}.bin')
        return shotvisuals.source_shots(editor.move, editor.almt.node_names, table)
    except (ValueError, OSError, KeyError) as exc:
        editor._shot_source_error = str(exc)
        return ()


def _visible_spawn_instances(editor, projection):
    if not editor.isolate_selected_spawn.get():
        return projection.instances
    hot = editor.sel_virtual.get('spawn') if editor.sel_virtual else None
    return [i for i in projection.instances if hot is not None and i.spawn == hot]
