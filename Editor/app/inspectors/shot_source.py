"""Source-backed JUS _inspect_shot_source presenter (R08). No native behavior simulated."""
from app import theme as T
from jus_package import dynamicgeometry,shotprojection,spawns,steeredtrail,timelineprojection

def render_shot_source_inspector(editor, ins, hex_id):
    """Inspector for a selected shot timeline entry."""
    events = editor._shot_events_current()
    ins.section('Shot source (read-only)', note='Original chr/shot table; runtime != static preview')
    if not events:
        ins.text('No source shot commands in this ALMT.')
        return
    for ev in timelineprojection.shot_events_for_inspector(events, editor.tick):
        ins.section(f'Shot #{ev.record_index} @ tick {ev.tick}')
        ins.value('Handler', f'0x{ev.handler:02X}, {ev.record.handler_address}')
        ins.value('Behavior', ev.record.handler_behavior)
        ins.value('Source event', f'chara_action(2) record {ev.record_index} '
                  f'offset ({ev.launch_x}, {ev.launch_y})')
        ins.value('Source preview window', f'{ev.record.effective_lifetime} ticks; '
                  f'preview cap tick {ev.nominal_end} (NOT runtime expiry)')
        if ev.handler == 0:
            ins.section('Handler00 — native launch and exit phases',
                        note='Original actor constructor, not a collision simulation')
            ins.value('Launch ALMT (+0x0C)',
                      hex_id(ev.record.reference0, 6) + ' via 0216EEF4 → 0216E3D0 → 0216F100')
            ins.value('End ALMT (+0x14)',
                      (hex_id(ev.record.optional_reference, 6)
                       if ev.record.optional_reference else '(none)') +
                      (' · conditional on shot retirement, flags bit0'
                       if ev.record.flags & 1 else ' · flag0 not set'))
            ins.value('Native launch visual', 'FUN_0216EB8C selects source+0x0C')
            ins.value('Native terminal visual', 'FUN_0216E5A0 uses work+0x1C on teardown')
            ins.text('The viewport shows real +0x0C birth ALMT sprite frames '
                     'and one level of authored GenerateID children at the '
                     'original launch anchor. Dynamic projectile travel, '
                     'collisions, and the conditional +0x14 exit are '
                     'not reconstructed or presented as guaranteed.')
        if ev.handler05_timer_exemption_is_code_proven:
            ins.section('Handler05 - D-pad controlled history trail',
                        note='Native 0216B910/0216BE0C/0216C028; no live input playback')
            for field,resource,role in ev.handler05_source_roles:
                ins.value(f'{field} {hex_id(resource,6)}',role)
            ins.value('D-pad raw steering',
                      'Up: Y-0x40; Down: Y+0x40; Left: X-0x40; Right: X+0x40')
            ins.value('History region', '128 positions + rotations, stride 12 bytes')
            ins.value('Trail instance cap', '12 total (head + 10 body + terminal)')
            ins.value('Native update', 'FUN_0216BE0C with FUN_0216C028')
            ins.value('Native timer', 'exempt via work+0x26 bit1 from FUN_0216B910')
            if ev.move_id == 0x0009832C:
                ins.section('Authored status/teardown cues',
                            note='Original NoteTrack events, not guaranteed runtime branch')
                ins.value('Move name', 'True Dragon of the Darkness Flame (original BIN)')
                ins.value('Shot source', 'tick 34: record2 handler05; '
                          'tick 82/112: chara_action(3) shot cleanup')
                ins.value('Original status event', 'tick 112: chara_action(10,18)')
                ins.value('Original ROM byte mapping',
                          'DAT_0217215C[18] = 0x24')
                ins.value('Original status callback',
                          'FUN_021593E8 (writes fighter+0xBC = 0x140 on start)')
                ins.text('Original move text describes a self-hit power effect, '
                         'but whether that status event is conditional on '
                         'self-contact, Marker branch selection or another '
                         'live runtime flag is not proven by static sources.')
            if editor.tick >= ev.tick:
                trail = steeredtrail.hiei_handler05_source_plan(
                    ev.record, editor.tick-ev.tick)
                ins.value('No-contact source child count',str(len(trail.sources)))
                ins.value('Native history write index',str(trail.history_write_index))
                ins.value('Terminal source instanced',
                          'yes (conditional)' if trail.terminal_bodies else
                          'not yet (in uninterrupted model)')
            ins.text('The original text says Use D-Pad to control. This is '
                     'direct steering, NOT automatic enemy homing. No '
                     'D-pad sequence, target hit, self-hit, native DS '
                     'float normalization, historical path or physical '
                     'contact is reproduced by a static ALMT preview.')
        if ev.handler01_timer_exemption_is_code_proven:
            ins.value('Repeat projection', 'Unobstructed cardinal source model '
                      if editor.show_shot_repeat_model.get() else 'Disabled')
            model = (shotprojection.project_handler01_unobstructed(
                ev.record, max(0, editor.tick-ev.tick), editor.facing_left.get())
                if editor.tick >= ev.tick else None)
            if model:
                ins.value('Total +0x10 launches',str(model.body_emissions)
                          + ' (source 0216BA2C counter path)')
                ins.value('Modeled child objects',str(len(model.sprites)))
                ins.value('Native spacing counter (q8)',str(model.next_spacing_q8))
                ins.value('Constant-velocity seed (q8)',str(model.velocity_q8))
                ins.text('Child XY after birth assumes linear unobstructed '
                         'actor movement, NOT an observed game trajectory. '
                         'Live collision, owner movement, GX transform '
                         'and interrupted slot allocation remain unknown.')
            ins.text('Native handler01 sets work+0x26 flag2 in 0216B4F4. '
                     'Scheduler 0216AF04 skips its usual countdown for '
                     'this flag. True retirement is hit/work-state dependent.')
            ins.section('Handler01 field roles (verified native code)')
            for field, resource, behavior in ev.handler1_source_roles:
                ins.value(f'{field}  {hex_id(resource,6)}',behavior)
            ins.text('Original 0216B514 unconditionally calls the +0x0C '
                     'child constructor on launch. Thus +0x0C is NOT '
                     'constructed exclusively on impact. '
                     'ROM update callback 0216BA2C reads +0x10 '
                     'to construct repeated body segments when the '
                     'source 0x1800 spacing counter crosses its threshold.')

        ins.value('References', ', '.join(hex_id(v, 6) for v in ev.references))
        ins.value('Flags', hex_id(ev.record.flags))
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
                ins.value('Original texture', f'{hex_id(tid, 6)}, BoundsIndex {bound}')
                if original:
                    dstx, spr_source = original
                    ins.value('Original renderer',
                              f'DSIG 0x{spr_source.mode:02X} - '
                              + ('GX textured atlas' if spr_source.is_atlas else
                                 'DS OBJ/tile source' if spr_source.is_obj else 'other source'))
                    if isinstance(bound, int) and 0 <= bound < len(dstx.frames):
                        ins.value('DSTX pieces',str(len(dstx.frames[bound].pieces)))
                    ins.text('Original sprite pixels are source data; native rotation, '
                             'stretch, transform inheritance and occlusion are '
                             'runtime GPU state, NOT collision rectangle geometry.')
                break
        else:
            ins.value('Primary ALMT', f'{hex_id(ev.record.reference0, 6)} '
                      '(not in current character/common catalog)',colour=T.WARN)
        ins.value('Raw source byte +0x01', f'0x{ev.record.byte1:02X}')
        ins.value('Speed work +0x04', f'{ev.record.work_param} (raw u16)')
        profile = dynamicgeometry.shot_dynamic_path(ev.handler)
        ins.section('Original dynamic geometry', note='Code-backed mechanism, not a simulated hit')
        ins.value('Movement family', profile.geometry_family)
        ins.value('Native per-frame callback', profile.per_frame_update)
        ins.value('ROM dispatch tables', 'ov06 0x02172864 constructor / 0x0217278C updater')
        ins.value('Renderer', profile.visual_model)
        ins.value('Position logic', profile.position_model)
        ins.value('Required runtime state', ', '.join(profile.runtime_dependencies))
        ins.value('Native functions', ', '.join(profile.native_functions))
        if profile.uses_trig_direction_byte:
            unit = dynamicgeometry.cardinal_direction_q8(
                ev.record.byte1, editor.facing_left.get())
            ins.value('Native direction argument',
                      f'0x{ev.record.byte1:02X} via FUN_0216E898 (256-angle cycle)')
            if unit and profile.uses_speed_param_u16:
                ins.value('Cardinal source velocity',
                          f'{dynamicgeometry.native_velocity_q8(ev.record.work_param, unit)}'
                          ' raw 24.8, BEFORE stage/hit adjustments')
            elif profile.uses_speed_param_u16:
                ins.value('Native velocity formula',
                          '(u16 shot+4 * signed_q8_trig(shot+1, facing)) >> 8'
                          ' (live DS FP rounding and collision required)')
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
            ins.text('Direct original handler 1 FUN_0216B514 calls FUN_0216C5F0 '
                     'for +0x14 (if nonzero), then +0x0C. Those IDs are ALMT '
                     'animations whose own TextureID/BoundsIndex choose the '
                     'original sprite frames. This viewport holds their '
                     'authored shot launch anchor fixed: NOT a reconstructed '
                     'full-length beam, moving projectile, or repeated/rotated '
                     'DS geometry. Stored +0x10 has a separate consumer.')
        else:
            ins.text('Handler has no individually traced static source-sprite '
                     'constructor in this diagnostic; no visual guess rendered.')
    ins.evidence('Projectile source', 'Direct',
                 'ov06 FUN_02157A44(2) ? FUN_02158470 ? FUN_0216A944 ? '
                 'FUN_0216ACC8; handler1 FUN_0216B514 ? FUN_0216C5F0')
