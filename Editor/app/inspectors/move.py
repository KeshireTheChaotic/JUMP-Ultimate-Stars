"""Original source-backed editor refresh_inspector responsibility (R08)."""
import tkinter as tk
from app import theme as T
from jus_formats import almt,animroles,battleinput,padtrace,roster
from jus_formats.chrbin_semantics import REACTION_RESOURCE_PAIRS, native_reaction_route
from app.inspectors.combat import render_move_contacts
from jus_package import effectlinks
from jus_package.project import split

def render_move_inspector(editor, hex_id, focus_value=False):
    ins = editor.inspector
    ins.clear()
    if not editor.move:
        ins.section('Move')
        ins.text('Choose an animation from the Moves list.' if editor.almt else
                 'This file contains artwork, but no character animations. Open the Sprite editor instead.')
        return
    m = editor.move
    i = editor.almt.moves.index(m) if m in editor.almt.moves else -1
    ins.section(f'Animation {i}', note=split(editor.almt_path)[-1] if editor.almt_path else None)
    editor._mv = {'id': tk.StringVar(value=hex_id(m.id)), 'duration': tk.StringVar(value=str(m.duration)),
                'loop': tk.BooleanVar(value=bool(m.flags & almt.MOVE_FLAG_LOOP))}
    ins.entry('ID', editor._mv['id'], 'Keep this number when replacing an existing animation.', on_return=editor.apply_move_props)
    ins.spin('Length', editor._mv['duration'], 0, 65535, 'Number of game frames (60 frames per second).',
             on_change=editor.apply_move_props)
    ins.check('Loop', editor._mv['loop'], 'Play the animation again when it reaches the end.',
              on_change=editor.apply_move_props)
    ins.evidence('Other animation settings', 'Limited',
                 f'Playback rate field: {m.fps} (not used by the game); '
                 f'original option bits: {hex_id(m.flags, 2)}')
    # Dynamic read-only source correlation; BIN titles are never written to ALMT.
    form, member = editor._move_source_form()
    if form:
        svc = editor._move_xref()
        if svc:
            # Current ALMT is already parsed, and may contain unapplied
            # edits. Reuse its exact 32-bit IDs rather than decompressing
            # its original archive again on every inspector refresh.
            source_ids = frozenset(clip.id for clip in editor.almt.moves)
            source = svc.text_for_move(form, m.id, almt_member=member,
                                       source_ids=source_ids)
            source_cards = svc.cards_for_move(form, m.id, almt_member=member,
                                               source_ids=source_ids)
            if source:
                ins.section('Move details')
                ins.value('Title', source.display_title or '(No title in game data)')
                ins.value('Type', source.type_label or '(No type specified)')
                ins.value('Description', source.display_description or '(No description in game data)')
                ins.evidence('Text', 'Direct', f'text source {source.source}, entry {source.record}, title slot '
                             f'{source.title_slot}, description slots {source.description_slots}; '
                             'battle special overlay5 0214E0A4/0214E11C; '
                             'support original overlay5 0214E370/0214E3D4')
            elif form in roster.BATTLE_IDS and m.id & 0xFF in battleinput.MOVE_CONTROLS:
                ins.section('Original move text')
                ins.text('This action has no separate title in the game text. Its button label is shown instead.')
            if source_cards:
                ins.section('Available on these Koma')
                labels = [f'#{c.index} ({c.size} koma)' for c in source_cards]
                editor._source_card_choice = tk.StringVar(value=labels[0])
                editor._source_card_lookup = dict(zip(labels, (c.index for c in source_cards)))
                ins.combo('Card', editor._source_card_choice, labels,
                          'Choose a Koma that can use this move.',
                          width=22)
                ins.buttons(('View Koma',
                             lambda: editor.open_koma_card(
                                 editor._source_card_lookup[editor._source_card_choice.get()])))
        elif editor._move_xrefs_error:
            ins.value('Move description', 'Unavailable; check that the game data is complete.',
                          tip=editor._move_xrefs_error, colour=T.WARN)
    if editor._battle_base_table():
        control = battleinput.MOVE_CONTROLS.get(m.id & 0xFF)
        if control:
            ins.value('Buttons', control[0],
                      tip='The game may prevent this move while recovering, stunned, or without enough energy.')
            trace = battleinput.source_trace(m.id)
            if trace:
                mode, predicate, guard, function = trace
                ins.section('How to use this move')
                state = {'ground': 'Standing', 'air': 'In the air',
                         'crouch': 'Crouching'}.get(mode, mode.replace('ground', 'Standing'))
                ins.value('When', state)
                ins.value('Input', control[0])
                if 'meter' in guard or 'size' in guard:
                    ins.text('This move requires the correct Koma size and enough special energy.')
                elif 'scripted' in guard.lower():
                    ins.text('This action starts automatically in certain situations.')
                else:
                    ins.text('The move may be unavailable while another action is finishing.')
                ins.evidence('In-game action mapping', 'Direct',
                             f'Actor+0x6C: {predicate}; {guard}; '
                             f'ov06 {function}; input selector {control[1]}, '
                             f'ALMT offset 0x{m.id & 0xFF:02X}')
                ins.evidence('Physical button names', 'Inferred',
                             'Names follow the original game controls. '
                             'Hardware inputs and actor inputs use different bit fields; '
                             'the final conversion has not been traced.')
                if (m.id & 0xFF) == 0x18:
                    ins.text('Select activates the Ultimate Action. '
                             'The final hardware-to-action mapping is still being verified.')
                    ins.evidence('Select button mapping', 'Inferred',
                                 'KEYINPUT 0x0004 -> HwPad 0x4000 (main 0203A610); '
                                 'actor+0x6C bit 0x1000 -> selector 11 -> ALMT 0x18. '
                                 'No directly verified conversion between these steps.')
    if editor._battle_base_table() and (m.id & 0xFF) not in battleinput.MOVE_CONTROLS:
        offset = m.id & 0xFF
        role = animroles.battle_animation_role(m.id)
        if role.category == 'movement':
            ins.section('D-pad movement / stance')
            ins.value('Original ALMT offset', hex_id(offset, 2))
            ins.value('Source-derived action', role.title)
            if role.note:
                ins.text(role.note)
            ins.evidence('How this movement starts', 'Direct', role.source)
        elif role.category == 'reaction':
            ins.section('Reaction animation')
            ins.value('Original ALMT offset', hex_id(offset, 2))
            ins.value('Source-derived role', role.title)
            if role.note:
                ins.text(role.note)
            ins.evidence('Why this animation plays', 'Direct', role.source)
        else:
            ins.section('Unnamed base action')
            ins.value('Original ALMT offset', hex_id(offset, 2))
            ins.text('This animation has no confirmed name or button assignment. '
                     'You can still view and edit its frames.')
    if editor._battle_base_table():
        offset = m.id & 0xFF
        routes = [(route, 'primary' if pair[0] == offset else 'alternate')
                  for route, pair in enumerate(REACTION_RESOURCE_PAIRS)
                  if offset in pair]
        if routes:
            ins.section('When this reaction plays',
                        note='The game chooses a reaction when a character is hit or grabbed.')
            for row_id, choice in routes:
                route = native_reaction_route(row_id)
                ins.value(f'Reaction situation {row_id + 1}',
                          'Main version' if choice == 'primary' else 'Alternate version')
                ins.evidence(f'Reaction {row_id + 1} details', 'Direct',
                             f'{route.interpretation}; callback 0x{route.callback_address:08X}')
            ins.evidence('Reaction selection', 'Direct',
                         'ov06 0215AF34, original 16-row ALMT reaction table '
                         '0x021713E8 and callback table 0x021721A0')
        movement = padtrace.ENGINE_MOVEMENT_ACTIONS.get(offset)
        if movement and offset not in animroles.D_PAD_MOVEMENT:
            label, function_path = movement
            ins.section('Other state transition',
                        note='Not D-pad-only; state callbacks can reuse reaction animations')
            ins.value('Source role', label)
            ins.evidence('Other movement behavior', 'Direct',
                         function_path + '; original ov06 state callbacks')
        sites = battleinput.ENGINE_LITERAL_MOVE_DISPATCH.get(offset, ())
        if sites:
            ins.evidence('Used by game events', 'Direct',
                         'Automatic animation calls: ' +
                         ', '.join('ov06 ' + addr for addr in sites) +
                         '; this does not establish a button assignment')
        if offset not in battleinput.MOVE_CONTROLS:
            role = animroles.battle_animation_role(m.id)
            if role.category == 'movement':
                ins.value('Triggered by', 'Direction buttons or standing still',
                          colour=T.MUTED)
            elif role.category == 'reaction':
                ins.value('Triggered by', 'Getting hit, grabbed, or recovering',
                          colour=T.MUTED)
            else:
                ins.value('Triggered by', 'Not yet identified', colour=T.MUTED)
        render_move_contacts(editor, ins, form, m)
    if editor.sel_virtual is not None and editor.sel_virtual.get('spawn') is not None:
        editor._inspect_spawn(ins, editor.sel_virtual)
        return
    if editor.sel_virtual is not None and editor.sel_virtual.get('derived') == 'physics' and editor._motion:
        editor._inspect_physics(ins)
        return
    if editor.sel_virtual is not None and editor.sel_virtual.get('derived') == 'sound':
        editor._inspect_sound(ins)
        return
    if editor.sel_virtual is not None and editor.sel_virtual.get('derived') == 'shot':
        editor._inspect_shot_source(ins)
        return
    if editor.sel_virtual is not None:
        row = editor.sel_virtual
        ins.section('Effect (read-only)')
        ins.value('Row', row.get('label', ''))
        if row.get('info'):
            ins.value('Move', hex_id(row['info'][0]))
            ins.value('Table', split(row['info'][1])[-1])
        ev = effectlinks.active_event(editor._pursuer_events, editor.tick)
        if ev:
            ins.value('Active', '; '.join(ev.operations) or '—')
            ins.value('Slots', f'A={ev.slot_a} → {hex_id(ev.move_a, 6) if ev.move_a is not None else "?"}\n'
                               f'B={ev.slot_b} → {hex_id(ev.move_b, 6) if ev.move_b is not None else "?"}')
        ins.text('This effect can follow a target. The preview estimates its '
                 'starting position and direction; results can differ during gameplay.')
        ins.evidence('Effect following behavior', 'Direct',
                     'NoteTrack chara_action 13/14; overlay 6 FUN_021618E4; '
                     'quarter-distance with up to four pixels per axis per update.')
        return
    tr = editor._track()
    if tr is None:
        ins.section('Selection')
        ins.text('Click a track name or key in the Timeline to inspect it. Double-click a key to edit; '
                 'drag a key to retime it; right-click for more.')
        return
    ni, ti = editor.sel_track
    note = almt.FIELD_NOTES.get(tr.field)
    from app import ui_copy
    ins.section(f'{editor.almt.node_names[ni]} / {ui_copy.field_label(tr.field)}',
                note=note)
    if tr.field == 'NoteTrack' and tr.opaque:
        editor._inspect_notes(ins, tr)
        from app.inspectors.events import render_note_event_editors
        render_note_event_editors(editor, ins, tr)
        return
    if tr.opaque:
        ins.value('Body', f'{len(tr.encoded())} raw bytes')
        ins.buttons(('Edit raw…', editor.edit_track))
        return
    from app.inspectors.track_controls import render_track_controls
    render_track_controls(editor, ins, tr, focus_value=focus_value)
