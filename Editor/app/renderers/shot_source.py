"""Original source-backed editor _draw_shot_source_sprites responsibility (R08)."""
from app import theme as T
from jus_package import dynamicgeometry,effectlinks,shotprojection,spawns

def draw_original_shot_sources(editor, vp, tick, info, hex_id):
    """Real ALMT source frames with optional code-derived repeat projection.

    0216BA2C cardinal repeat events are source-derived; post-birth
    actor XY is a clearly labeled unobstructed constant-velocity model.
    There is no simulated hit, terrain collision or GX pixel synthesis.
    """
    if not editor.show_shot_sources.get() or not editor.index:
        return
    here = [ev for ev in editor._shot_events_current()
            if ev.directly_constructed_animations and ev.nominally_active(tick)]
    count = 0
    now_x, now_y = editor._animation_origin(tick)
    for ev in here:
        # FUN_0216A944 mirrors the authored x offset when actor facing
        # changes. Owner origin is captured at the original shot spawn.
        born_x, born_y = editor._animation_origin(ev.tick)
        facex = -ev.launch_x if editor.facing_left.get() else ev.launch_x
        launch_x = born_x + facex - now_x
        launch_y = born_y + ev.launch_y - now_y
        age = tick - ev.tick
        model = (shotprojection.project_handler01_unobstructed(
            ev.record, age, editor.facing_left.get())
            if editor.show_shot_repeat_model.get() and ev.handler == 1 else None)
        if model is not None:
            instances = tuple((i.animation_id, i.current_dx_q8,
                               i.current_dy_q8, i.age_updates, i.source_field)
                              for i in model.sprites)
            if model.body_emissions:
                info.append(f'shot #{ev.record_index}: {model.body_emissions} '
                            '+0x10 repeat launches (source spacing; XY modeled)')
        else:
            layout = dynamicgeometry.handler1_child_placement_q8(
                ev.record, editor.facing_left.get())
            if layout is None:
                layout = tuple((rid, 0, 0) for rid in ev.directly_constructed_animations)
                if ev.handler not in (0, 5):
                    info.append(f'shot {ev.record_index}: angular child spacing '
                                '(native DS floating-point math unavailable)')
                if ev.handler == 0:
                    info.append('handler00: original +0x0C launch ALMT; '
                                'child XY held at authored shot anchor, native motion unavailable')
            instances = tuple((rid, x, y, age, 'birth source')
                              for rid, x, y in layout)
        for animation_id, dx_raw, dy_raw, child_age, field_role in instances:
            entry = editor._effect_moves.get(animation_id)
            if entry is None:
                info.append(f'shot {ev.record_index}: ALMT {hex_id(animation_id, 6)} '
                            f'{field_role} unavailable')
                continue
            child, names, _path = entry
            shot_tick = effectlinks.effect_frame_tick(child, child_age)
            if shot_tick is None:
                continue
            source_base = (launch_x + dx_raw / 256,
                           launch_y + dy_raw / 256)
            editor._draw_node_sprites(vp, child, shot_tick,
                                    base=source_base, names=names)
            count += 1
            # Handler00 birth animation (record+0x0C) can itself have
            # authored GN GenerateID keys. Cheap Joke's record1 +0x0C
            # 0x5C16C immediately generates 0x5C16B on GN01 tick0.
            # Only show original source pixels at their authored local
            # offsets; no native projectile travel/rot/scale prediction.
            if ev.handler == 0:
                for nested in spawns.keyed_spawns(child, names):
                    nested_age = child_age - nested.tick
                    if nested_age < 0:
                        continue
                    nested_entry = editor._effect_moves.get(nested.effect_id)
                    if nested_entry is None:
                        continue
                    nest_move, nest_names, _nest_path = nested_entry
                    nest_tick = effectlinks.effect_frame_tick(nest_move, nested_age)
                    if nest_tick is None:
                        continue
                    try:
                        node_idx = names.index(nested.node)
                    except ValueError:
                        continue
                    state = spawns.state_at(child, nested.tick).get(node_idx, {})
                    local = state.get('2DPos', [0, 0])
                    editor._draw_node_sprites(
                        vp, nest_move, nest_tick,
                        base=(source_base[0] + local[0], source_base[1] + local[1]),
                        names=nest_names)
                    count += 1
        if ev.handler == 5:
            info.append('handler05: original head ALMT only; '
                        'live D-pad / 128-sample curved path NOT simulated')
        if editor.show_effect_marks.get():
            vp.text(launch_x, launch_y, '+', fill=T.WARN, font=T.MONO_SMALL)
    if count:
        info.append(f'shot ALMT instances: {count} '
                    '(original source visuals; NO contact/terrain/GX physics)')
