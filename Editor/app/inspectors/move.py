"""Original source-backed editor refresh_inspector responsibility (R08)."""
import tkinter as tk
from app import theme as T
from jus_formats import almt,battleinput,padtrace,roster
from jus_formats.chrbin_semantics import REACTION_RESOURCE_PAIRS, native_reaction_route
from app.inspectors.combat import render_move_contacts
from jus_package import effectlinks
from jus_package.project import split

def render_move_inspector(editor, hex_id, focus_value=False):
    ins = editor.inspector
    ins.clear()
    if not editor.move:
        ins.section('Move')
        ins.text('Select a move in the Moves list.' if editor.almt else
                 'This archive has no move table. Use the Sprite workspace (Ctrl+2).')
        return
    m = editor.move
    i = editor.almt.moves.index(m) if m in editor.almt.moves else -1
    ins.section(f'Move {i}', note=split(editor.almt_path)[-1] if editor.almt_path else None)
    editor._mv = {'id': tk.StringVar(value=hex_id(m.id)), 'duration': tk.StringVar(value=str(m.duration)),
                'loop': tk.BooleanVar(value=bool(m.flags & almt.MOVE_FLAG_LOOP))}
    ins.entry('ID', editor._mv['id'], 'Move id (high word: character/effect table)', on_return=editor.apply_move_props)
    ins.spin('Length', editor._mv['duration'], 0, 65535, 'Duration in ticks (60 per second)',
             on_change=editor.apply_move_props)
    ins.check('Loop', editor._mv['loop'], 'Flags bit 0: wrap at the end instead of ending',
              on_change=editor.apply_move_props)
    ins.value('fps', f'{m.fps}  (not read by the game)', colour=T.MUTED)
    ins.value('Flags', hex_id(m.flags, 2), colour=T.MUTED)
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
                ins.section('Original move text', note=f'{source.source} | record {source.record}')
                ins.value('Title', source.display_title or '(blank in supplied BIN)')
                ins.value('BIN title slot', str(source.title_slot),
                          tip=f'{source.source}, word {source.record}*'
                              f'{53 if form in roster.BATTLE_IDS else 9}+{source.title_slot}')
                ins.value('Type', source.type_label or '(blank in supplied BIN)')
                ins.value('Description', source.display_description or '(none in supplied BIN)')
                ins.value('Description slots', ', '.join(map(str, source.description_slots)),
                          colour=T.MUTED)
                ins.evidence('Text', 'Direct', 'original self-relative BIN pointers; '
                             'battle special overlay5 0214E0A4/0214E11C; '
                             'support original overlay5 0214E370/0214E3D4')
            elif form in roster.BATTLE_IDS and m.id & 0xFF in battleinput.MOVE_CONTROLS:
                ins.section('Original move text')
                ins.text('No individual move title is defined by the verified '
                         'bin/chr_b_t.bin special-name accessor for this action. '
                         'The input/control label is code-derived.')
            if source_cards:
                ins.section('Koma references', note='bin/koma.bin +7 roster, +8 size; read-only')
                labels = [f'#{c.index} ({c.size} koma)' for c in source_cards]
                editor._source_card_choice = tk.StringVar(value=labels[0])
                editor._source_card_lookup = dict(zip(labels, (c.index for c in source_cards)))
                ins.combo('Card', editor._source_card_choice, labels,
                          'This ALMT action is available to these original Koma records',
                          width=22)
                ins.buttons(('Open Koma card',
                             lambda: editor.open_koma_card(
                                 editor._source_card_lookup[editor._source_card_choice.get()])))
        elif editor._move_xrefs_error:
            ins.value('Move text lookup', editor._move_xrefs_error, colour=T.WARN)
    if editor._battle_base_table():
        control = battleinput.MOVE_CONTROLS.get(m.id & 0xFF)
        if control:
            ins.value('Control', f'{control[0]} (selector {control[1]})', tip=control[2])
            trace = battleinput.source_trace(m.id)
            if trace:
                mode, predicate, guard, function = trace
                ins.section('Original input to ALMT', note='Code predicate; input acceptance is conditional')
                ins.value('State mode', mode)
                ins.value('Input predicate', predicate)
                ins.value('Condition', guard)
                ins.value('Code source', 'ov06 ' + function)
                ins.value('Selected ALMT offset', hex_id(m.id & 0xFF, 2))
                ins.evidence('Actor input → ALMT', 'Direct',
                             'ov06 0215A720/0215A8C0/0215A8F8 → 02159EF8; '
                             'native actor+0x6C selector, not the raw DS key mask')
                ins.evidence('Physical key → actor input', 'Inferred',
                             'Control-guide-correlated physical name only: '
                             'hardware input 04000130/04000136 → HwPad '
                             'main 0203A610 uses a DIFFERENT mask namespace. '
                             'Intermediate translation to actor+0x6C untraced.')
                if (m.id & 0xFF) == 0x18:
                    ins.value('Physical Select hardware path',
                              'KEYINPUT 0x0004 → HwPad 0x4000 (main 0203A610)')
                    ins.value('Battle ultimate selector',
                              'actor+0x6C bit 0x1000 → selector 11 → ALMT 0x18')
                    ins.value('Translation status',
                              'No verified HwPad 0x4000 → actor 0x1000 bridge',
                              colour=T.WARN)
                ins.text('The actor+0xC0 and +0xC4 masks can block a transition; '
                         'ground/air NoteTrack permissions (+0xF3/+0xF4) and '
                         'follow-up fields (+0xCC/+0xF6/+0xF7) alter eligibility. '
                         'Matching an input mask does NOT prove a successful cancel.')
    if editor._battle_base_table() and (m.id & 0xFF) not in battleinput.MOVE_CONTROLS:
        offset = m.id & 0xFF
        if offset in (0x33, 0x34, 0x35, 0x36):
            ins.section('Grabbed-victim pose')
            ins.text('One of the four source victim reaction poses (user-confirmed). '
                     'Not an independently named attacking move.')
        else:
            ins.section('Unnamed base action')
            ins.value('Original ALMT offset', hex_id(offset, 2))
            ins.text('No individually verified source move title. Code-call '
                     'sites for this numeric resource are cataloged separately; '
                     'a human-facing move name is not inferred from its position.')
    if editor._battle_base_table():
        offset = m.id & 0xFF
        routes = [(route, 'primary' if pair[0] == offset else 'alternate')
                  for route, pair in enumerate(REACTION_RESOURCE_PAIRS)
                  if offset in pair]
        if routes:
            ins.section('Engine-driven reaction assignments',
                        note='Damage response, not an input-button assignment')
            for row_id, role in routes:
                route = native_reaction_route(row_id)
                ins.value(f'Reaction {row_id} ({role})',
                          f'{route.interpretation}\n'
                          f'callback 0x{route.callback_address:08X}')
            ins.evidence('Reaction selector', 'Direct',
                         'ov06 0215AF34, original 16-row ALMT reaction table '
                         '0x021713E8 and callback table 0x021721A0')
        movement = padtrace.ENGINE_MOVEMENT_ACTIONS.get(offset)
        if movement:
            label, function_path = movement
            ins.section('Engine-driven movement state',
                        note='Actor input/state transition, not a direct button assignment')
            ins.value('Source role', label)
            ins.value('Native transition path', function_path)
            ins.evidence('Movement action', 'Direct',
                         'Original ov06 state callbacks, distinct from physical-button selector table')
        sites = battleinput.ENGINE_LITERAL_MOVE_DISPATCH.get(offset, ())
        if sites:
            ins.section('Native internal move dispatch',
                        note='Code references only; these do not establish a button')
            ins.value('Direct call sites', ', '.join('ov06 ' + addr for addr in sites))
            ins.evidence('Literal resource offset', 'Direct',
                         'Original ov06 callers of FUN_02157450; dynamic and indirect '
                         'call sites are not represented')
        if offset not in battleinput.MOVE_CONTROLS and not routes:
            ins.value('Physical button', 'No native input-selector mapping established',
                      colour=T.MUTED)
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
        ins.text('Driven by NoteTrack chara_action 13 (slots from ChrBin chr/effect) and 14 (target). '
                 'The position follow rule is traced to overlay 6 FUN_021618E4 (quarter-distance, '
                 'up to four pixels per axis per update, snap near target). Starting position, '
                 'active A/B state and runtime facing remain scenario assumptions.')
        return
    tr = editor._track()
    if tr is None:
        ins.section('Selection')
        ins.text('Click a track name or key in the Timeline to inspect it. Double-click a key to edit; '
                 'drag a key to retime it; right-click for more.')
        return
    ni, ti = editor.sel_track
    note = almt.FIELD_NOTES.get(tr.field)
    ins.section(f'{editor.almt.node_names[ni]} / {tr.field}', note=note)
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
