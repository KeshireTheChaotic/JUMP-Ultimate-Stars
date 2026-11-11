"""Source-backed JUS _inspect_shot_source presenter (R08). No native behavior simulated."""
from app import theme as T
from jus_package import dynamicgeometry,shotprojection,spawns,steeredtrail,timelineprojection

def render_shot_source_inspector(editor, ins, hex_id):
    """Inspector for a selected shot timeline entry."""
    events = editor._shot_events_current()
    ins.section('Shot source', note='Original chr/shot table; runtime != static preview')
    if not events:
        ins.text('This animation does not create a projectile.')
        return
    for ev in timelineprojection.shot_events_for_inspector(events, editor.tick):
        ins.section(f'Projectile {ev.record_index + 1} — frame {ev.tick}')
        from app.widgets.shot_editor import ShotEditor
        from jus_package.project import join
        form, _ = editor._move_source_form()
        if form:
            path = join('chr/ChrBin.aar', f'chr/shot/{form}.bin')
            ins.buttons(('Edit projectile settings…', lambda path=path, i=ev.record_index: ShotEditor(editor, path, i)))
        ins.value('Behavior', ev.record.handler_behavior)
        ins.evidence('Projectile behavior type', 'Direct',
                     f'Handler 0x{ev.handler:02X} at {ev.record.handler_address}')
        ins.value('Starting position', f'X {ev.launch_x}, Y {ev.launch_y}')
        ins.value('Preview length', f'Up to {ev.record.effective_lifetime} frames '
                  f'(the game may end it earlier)')
        if ev.handler == 0:
            ins.section('Projectile start and finish')
            ins.value('Starting animation', hex_id(ev.record.reference0, 6))
            ins.value('Ending animation',
                      (hex_id(ev.record.optional_reference, 6)
                       if ev.record.optional_reference else '(none)') +
                      (' · conditional on shot retirement, flags bit0'
                       if ev.record.flags & 1 else ' · flag0 not set'))
            ins.evidence('How the start and end effects play', 'Direct',
                         'FUN_0216EB8C selects source+0x0C; '
                         'FUN_0216E5A0 uses work+0x1C on teardown')
            ins.text('The preview uses the original starting artwork. '
                     'The projectile path and collision behavior may differ during gameplay.')
        if ev.handler05_timer_exemption_is_code_proven:
            ins.section('D-pad controlled projectile')
            for field,resource,role in ev.handler05_source_roles:
                ins.value('Trail animation', f'{field} {hex_id(resource,6)}')
                ins.evidence('Trail part details', 'Direct', role)
            ins.value('Controls', 'Use the D-pad to steer the projectile.')
            ins.evidence('Direction values', 'Direct',
                         'Up: Y-0x40; Down: Y+0x40; Left: X-0x40; Right: X+0x40')
            ins.value('Trail history', '128 saved positions and directions')
            ins.value('Trail pieces', 'Up to 12 (head, body, and end)')
            ins.evidence('Steering behavior', 'Direct',
                         'FUN_0216BE0C and FUN_0216C028; '
                         'timer exemption via work+0x26 bit1 from FUN_0216B910')
            if ev.move_id == 0x0009832C:
                ins.section('Status changes and ending')
                ins.value('Move name', 'True Dragon of the Darkness Flame (original BIN)')
                ins.value('Projectile timing', 'Starts at frame 34; end commands at frames 82 and 112')
                ins.value('Possible self-effect', 'Triggered by a command at frame 112')
                ins.evidence('Exact status behavior', 'Limited',
                             'frame 112 chara_action(10,18); DAT_0217215C[18]=0x24; '
                             'FUN_021593E8 writes fighter+0xBC=0x140 on start')
                ins.text('The game describes a power effect that can affect the user. '
                         'Its exact conditions are not yet confirmed.')
            if editor.tick >= ev.tick:
                trail = steeredtrail.hiei_handler05_source_plan(
                    ev.record, editor.tick-ev.tick)
                ins.value('Visible trail pieces (estimated)',str(len(trail.sources)))
                ins.evidence('Trail history position', 'Direct',
                             str(trail.history_write_index))
                ins.value('Ending animation',
                          'May be shown' if trail.terminal_bodies else 'Not shown in this preview')
            ins.text('The D-pad steers this projectile; it does not automatically follow '
                     'an enemy. The preview cannot show your actual button inputs '
                     'or predict collisions.')
        if ev.handler01_timer_exemption_is_code_proven:
            ins.value('Repeated effects preview', 'On (estimated straight-line movement) '
                      if editor.show_shot_repeat_model.get() else 'Off')
            model = (shotprojection.project_handler01_unobstructed(
                ev.record, max(0, editor.tick-ev.tick), editor.facing_left.get())
                if editor.tick >= ev.tick else None)
            if model:
                ins.value('Pieces created', str(model.body_emissions))
                ins.value('Visible pieces',str(len(model.sprites)))
                ins.evidence('Trail spacing and speed', 'Direct',
                             f'Counter: {model.next_spacing_q8}; speed: {model.velocity_q8} (q8 units)')
                ins.text('Trail positions are estimates. They do not include collisions, '
                         'moving targets, or changes in direction.')
            ins.evidence('How repeated effects end', 'Direct',
                         'Handler01 sets work+0x26 flag2 in 0216B4F4; '
                         '0216AF04 skips countdown. Retirement depends on contact state.')
            ins.section('Repeated projectile parts')
            for field, resource, behavior in ev.handler1_source_roles:
                ins.value(f'{field}  {hex_id(resource,6)}',behavior)
            ins.evidence('How repeat parts appear', 'Direct',
                         'Original 0216B514 constructs +0x0C at launch; '
                         '0216BA2C reads +0x10 and creates repeated body pieces '
                         'when spacing counter 0x1800 crosses threshold.')

        ins.value('Related animations', ', '.join(hex_id(v, 6) for v in ev.references))
        ins.evidence('Other effect options', 'Limited',
                     f'Original option bits: {hex_id(ev.record.flags)}')
        primary = editor._effect_moves.get(ev.record.reference0)
        if primary:
            source_move, source_names, source_path = primary
            ins.section('Primary source animation')
            ins.value('ALMT', f'{hex_id(ev.record.reference0, 6)}  {source_path}')
            for st in spawns.state_at(source_move, 0).values():
                if 'TextureID' not in st:
                    continue
                tid, bound = st['TextureID'], st.get('BoundsIndex')
                original = editor.index.sprite(tid) if editor.index else None
                ins.value('Image', f'{hex_id(tid, 6)}, frame {bound}')
                if original:
                    dstx, spr_source = original
                    ins.evidence('Graphics format', 'Direct',
                                 f'DSIG 0x{spr_source.mode:02X} - '
                                 + ('GX textured atlas' if spr_source.is_atlas else
                                    'DS OBJ/tile source' if spr_source.is_obj else 'other source'))
                    if isinstance(bound, int) and 0 <= bound < len(dstx.frames):
                        ins.value('DSTX pieces',str(len(dstx.frames[bound].pieces)))
                    ins.text('The preview uses the original artwork. Rotation, stretching, '
                             'and overlap can differ during gameplay.')
                break
        else:
            ins.value('Primary ALMT', f'{hex_id(ev.record.reference0, 6)} '
                      '(not in current character/common catalog)',colour=T.WARN)
        ins.evidence('Other projectile values', 'Limited',
                     f'Original direction byte 0x{ev.record.byte1:02X}; '
                     f'work parameter +0x04 = {ev.record.work_param}')
        profile = dynamicgeometry.shot_dynamic_path(ev.handler)
        ins.section('Original dynamic geometry', note='Code-backed mechanism, not a simulated hit')
        ins.value('Movement family', profile.geometry_family)
        ins.evidence('Projectile movement calculation', 'Direct',
                     str(profile.per_frame_update) + '; ov06 0x02172864 constructor / '
                     '0x0217278C updater')
        ins.evidence('Drawing the effect', 'Limited', profile.visual_model)
        ins.evidence('Movement path details', 'Limited', profile.position_model)
        ins.text('The preview uses the original images. Movement may depend '
                 'on your inputs, timing, and collisions.')
        ins.evidence('Movement conditions', 'Limited', ', '.join(profile.runtime_dependencies))
        ins.evidence('Movement references', 'Direct', ', '.join(profile.native_functions))
        if profile.uses_trig_direction_byte:
            unit = dynamicgeometry.cardinal_direction_q8(
                ev.record.byte1, editor.facing_left.get())
            ins.evidence('Direction formula', 'Direct',
                         f'0x{ev.record.byte1:02X} via FUN_0216E898 (256-angle cycle)')
            if unit and profile.uses_speed_param_u16:
                ins.evidence('Calculated speed', 'Inferred',
                             f'{dynamicgeometry.native_velocity_q8(ev.record.work_param, unit)} '
                             'in 24.8 units before stage/hit adjustments')
            elif profile.uses_speed_param_u16:
                ins.evidence('Calculated speed', 'Inferred',
                             '(u16 shot+4 * signed_q8_trig(shot+1, facing)) >> 8; '
                             'runtime rounding and collisions not shown')
        arrangement = dynamicgeometry.handler1_child_placement_q8(
            ev.record, editor.facing_left.get()) if ev.handler == 1 else None
        if arrangement:
            ins.section('Proven source child spacing', note='ov06 0216B514/0216C5F0')
            for rid, x, y in arrangement:
                ins.value(f'ALMT {hex_id(rid, 6)}',
                          f'({x / 256:g}, {y / 256:g}) px relative to launch')
        if ev.directly_constructed_animations:
            for rid in ev.directly_constructed_animations:
                child = editor._effect_moves.get(rid)
                ins.value('Constructed ALMT', f'{hex_id(rid, 6)}: '
                          + (child[2] if child else 'source animation missing'))
                if child:
                    ins.value('ALMT duration', str(child[0].duration)
                              + (' (loop)' if child[0].flags & 1 else ''))
                    for st in spawns.state_at(child[0], 0).values():
                        if 'TextureID' in st:
                            ref = editor.index.sprite_ref(st['TextureID']) if editor.index else None
                            ins.value('Rendered texture',
                                      f'{hex_id(st["TextureID"], 6)} '
                                      + (ref.dstx_path if ref else 'DSTX missing'))
                            break
            ins.text('The preview shows the projectile’s starting artwork, not its '
                     'full travel path, rotation, or collision behavior.')
            ins.evidence('Projectile creation details', 'Direct',
                         'FUN_0216B514 calls FUN_0216C5F0 for +0x14 then +0x0C; '
                         'TextureID/BoundsIndex choose frames; +0x10 is used separately.')
        else:
            ins.text('There is not enough information to preview this projectile reliably.')
    ins.evidence('Projectile source', 'Direct',
                 'ov06 FUN_02157A44(2) ? FUN_02158470 ? FUN_0216A944 ? '
                 'FUN_0216ACC8; handler1 FUN_0216B514 ? FUN_0216C5F0')
