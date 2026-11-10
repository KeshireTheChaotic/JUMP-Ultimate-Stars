"""Original-source spawned effect, physics, sound, and NoteTrack Inspector panels."""
from __future__ import annotations
import re
import struct
from app import theme as T
from jus_formats import almt,eventops,notetrack
from jus_package import motion,sounds,spawns
from jus_package.draworder import submission_note

def _inspect_spawn(editor, ins, row, hex_id):
    sp = row['spawn']
    ins.section('Spawned effect', note='GenerateID — read-only here; edit the key on the node track')
    ins.value('Effect id', hex_id(sp.effect_id, 6), colour=T.EFFECT)
    ins.value('Spawned by', f'{sp.node}, GenerateID key {sp.key_index}')
    ins.value('Spawn tick', f'{sp.tick}  (exact key time)')
    ins.value('Occurrence', f'#{sp.occurrence} of this id in the move')
    entry = editor._effect_moves.get(sp.effect_id)
    if entry is None:
        ins.value('Move', 'not found in character or efc/ archives', colour=T.BAD)
        return
    child, names, path = entry
    ins.value('Table', path)
    ins.value('Length', f'{child.duration}{"  ⟳ loops" if child.flags & almt.MOVE_FLAG_LOOP else ""}')
    ins.value('Spawn lifetime control', '-1 (FUN_0206CA8C → +0xDC / 0x02025278)')
    lifetime = spawns.nominal_lifetime(sp, child, editor.tick)
    ins.value('Nominal state', lifetime.phase)
    ins.value('Authored end tick', str(lifetime.scheduled_end) if lifetime.scheduled_end is not None
              else 'not defined: loop / owner-controlled')
    kill = getattr(editor, '_teardowns', {}).get(sp.key)
    if kill is not None:
        ins.value('Torn down', f'tick {kill.tick} by chara_action({kill.action})'
                  f' — {"all GN effects" if kill.action == 4 else "oldest live GN effect"}', colour=T.BAD)
    elif child.flags & almt.MOVE_FLAG_LOOP:
        ins.value('Torn down', 'not in this move: the loop outlives the move until a later '
                  'chara_action(4/5) or the owner\'s teardown', colour=T.MUTED)
    ins.text('Lifecycle (ARM9): a loop wrap only fires event 6 (0x02027B14) and keeps playing; a '
             'one-shot ends after its length (0x0201BDEC → 0x02028868). Effects spawned by GN01..GN09 '
             'are torn down by NoteTrack chara_action(4) (all) and (5) (oldest live): '
             '0x0206C650 / 0x0206C760 → handle +0x08 = 0x02049460 → 0x02027560. '
             'Same-tick order (action before spawn) is inferred from the data.')
    ins.text('Not simulated: branches, combat hits, and effects carried over from a previous move.')
    live = [i for i in editor.spawn_projection().instances if i.spawn == sp]
    if live:
        inst = live[0]
        ins.section('At playhead')
        ins.value('Effect tick', str(inst.sub_tick))
        frame_state = spawns.state_at(inst.move, inst.sub_tick)
        for child_state in frame_state.values():
            if 'TextureID' in child_state and 'BoundsIndex' in child_state:
                tex_id = int(child_state['TextureID'])
                ins.value('Active sprite', f"texture 0x{tex_id:06X}, frame {child_state['BoundsIndex']}")
                sprite_entry = editor.index.sprite(tex_id) if editor.index else None
                if sprite_entry is not None:
                    _dstx, sprite_source = sprite_entry
                    if sprite_source.is_atlas:
                        ins.value('Image path', f'DSIG 0x{sprite_source.mode:02X} — GX textured atlas')
                        ins.text('Preview uses indexed-pixel RGBA on a Tk canvas. '
                                 'The DS submits atlas pieces through GX, with polygon alpha, '
                                 'depth and material state. Overlap in this preview is NOT a '
                                 'pixel-accurate hardware composite.')
                    elif sprite_source.is_obj:
                        ins.value('Image path', f'DSIG 0x{sprite_source.mode:02X} — OBJ/tile source')
                break
        ins.value('Anchor', f'({inst.anchor[0]}, {inst.anchor[1]})')
        ins.value('EffectFlags', f'{hex_id(inst.flags, 4)}  {spawns.describe_flags(inst.flags)}')
        ins.value('ParentLink', f'{inst.parent_link} ({"attached" if inst.parent_link else "snapshot"})')
        ins.value('DrawPrio', '—' if inst.draw_prio is None else
                  f'{inst.draw_prio / 4096:g}  (raw {inst.draw_prio})')
        ins.value('Renderer link priority', submission_note(inst.draw_prio))
        dynamic_tracks = sorted({
            tr.field for node in child.nodes if node
            for tr in node.tracks if tr.keyed and len(tr.keys) > 1
        })
        ins.section('Authored dynamic geometry (GenerateID)')
        ins.value('Keyed child fields',
                  ', '.join(dynamic_tracks) if dynamic_tracks else
                  'None: static authored child ALMT')
        ins.text('FUN_0206CA8C / 02022060 create linked effects; '
                 'FUN_0202AA28 evaluates inherited transforms. '
                 'Animated 2DPos, BoundsIndex, Alpha, DrawPrio and '
                 'runtime camera/GX transforms are distinct from shots.')
        ins.text('Verified: DrawPrio setter → sorted list → high-first draw callbacks. '
                 'DS depth, alpha and BG/OBJ rules still determine visible front/back.')
        for n in inst.notes:
            ins.text('• ' + n)
    else:
        ins.text('Outside the nominal authored span. This does not identify an observed runtime death.')
    ins.buttons(('Open effect move', lambda: editor.open_effect_move(sp.effect_id, path), 'Accent.TButton'))
    ins.text('Projection follows the authored timeline straight through. Marker loops, branches, facing '
             'and LifeType are not simulated.')


def _inspect_physics(editor, ins):
    mo = editor._motion
    f = mo.at(editor.tick) if mo else None
    ins.section('Physics (NoteTrack 0x01xx)', note='Traced integrator with preview assumptions; '
                'read-only here — edit the NoteTrack commands.')
    if f:
        ins.value('Offset', f'({f.px[0]:.2f}, {f.px[1]:.2f}) px from the start')
        ins.value('Velocity', f'({f.vx / 256:.2f}, {f.vy / 256:.2f}) px/frame  raw ({f.vx}, {f.vy})')
        ins.value('Gravity', 'on' if f.gravity else 'off (0x0101)', colour=None if f.gravity else T.WARN)
        if f.counter:
            ins.value('Impulse frames', f'{f.counter} left (0x0104)')
        if f.grounded:
            ins.value('Floor', 'resting on the assumed floor', colour=T.MUTED)
    here = [(n, c) for t, n, c in mo.commands if t == editor.tick]
    if here:
        ins.section(f'Commands @ {editor.tick}')
        for n, c in here:
            ins.value(f'0x{c.opcode:04X}', f'{motion.LABELS.get(c.opcode, "?")} {c.values()}\n'
                                           f'{n} · ov06 0x{motion.FUNCTIONS.get(c.opcode, 0):08X}')
    ins.section('Preview')
    ins.check('Facing left', editor.facing_left, 'x impulses are negated when the character faces left',
              on_change=editor._motion_changed)
    ins.check('Assume floor', editor.motion_floor, 'Collision is not traced: stop falling at the start height',
              on_change=editor._motion_changed)
    ins.check('Root motion', editor.root_motion, 'Move the character along the simulated path',
              on_change=editor.redraw_view)
    ins.check('Trajectory', editor.show_motion, on_change=editor.redraw_view)
    ins.section('Model')
    ins.value('Gravity', f'0x{motion.GRAVITY:02X} /frame²', tip='BattleMove::Battle_MoveManCreate 0x02082A38')
    ins.value('Friction', f'x {motion.FRICTION_X}/256, y {motion.FRICTION_Y}/256 per frame',
              tip='body defaults, main FUN_02082C34')
    ins.value('Max speed', f'±0x{motion.MAX_SPEED * 0x100:X} ({motion.MAX_SPEED} px/frame)')
    ins.value('Units', '256 per pixel, +y down', tip='BattleMapMoveFloorInit 0x02085D74: pixels << 8')
    ins.evidence('Step', 'Direct', 'main FUN_02082E10 integrator; ov06 FUN_02155688 dispatcher')
    ins.evidence('Defaults', 'Direct', 'gravity 0x29, friction 0x20/8, max 0x20; per-state overrides not traced')
    ins.evidence('Floor/walls', 'Unknown', 'collision response not modelled')
    for n in mo.notes:
        ins.text('• ' + n)


def _inspect_sound(editor, ins):
    ins.section('Sound cues (NoteTrack 0x04xx)', note='FUN_0207342C(ssar, seq) on the SE player. '
                'Decoded SSAR sequences with instrument/wave playback; preview synthesis is approximate.')
    t = editor.tick
    cur = [(c, p) for c, p in sounds.dedupe_same_frame(editor._cues) if c.tick == t]
    if cur:
        ins.section(f'At tick {t}')
    for c, played in cur:
        ins.value(f'0x{c.opcode:04X} [{c.seq}]', c.label +
                  (f'\n{c.ssar_name} (SSAR {c.ssar})' if c.ssar is not None else '') +
                  (f'\n{c.note}' if c.note else '') + ('' if played or c.ssar is None else '\nduplicate: ignored'),
                  tip=f'ov06 0x{sounds.FUNCTIONS[c.opcode]:08X} → main 0x{sounds.PLAY:08X}',
                  colour=T.GOOD if c.ssar is not None else T.MUTED)
    if cur:
        ins.buttons(('▶ Play cues at this tick', editor._audition_tick, 'Accent.TButton'))
    ins.check('Sound enabled', editor.sound_enabled, on_change=editor._sound_changed)
    for c, _ in cur:
        if editor._audio:
            ins.value('Audio', editor._audio.status(c))
    forms = editor._sounds.forms(editor.container) if editor._sounds else []
    if editor._sound_koma_card is not None and editor.roster_browser.index is not None:
        c = editor.roster_browser.index.cards.cards[editor._sound_koma_card]
        if c.raw[6] == 0 and editor.sound_form.get() == f'{c.size}-cell':
            ins.value('Selected Koma', f'#{c.index} · {c.size}-cell · '
                      f'{editor.roster_browser.index.card_label(c)}',
                      tip='Original bin/koma.bin card byte+7 and +8; sound form '
                          'chr_b.bin record +0x32 + 2*(size-4)')
        elif c.raw[6] == 1:
            ins.value('Selected Koma', f'#{c.index} · {c.size}-cell (support source)',
                      tip='Original bin/chr_s.bin +0x10/0x12, NoteTrack +0xA6')
    if forms and not re.search(r'_[bs]_\d{2}_\d+\.aar', editor.container or ''):
        ins.section('Koma size (0x0402)', note='0x0402 plays the special-move bank of the koma the character '
                    'was deployed with (form record +0x20 = chr_b.bin +0x32 + (size − 4)·2, main '
                    '0x02077C0C). Base-archive moves are shared by every koma, so the deck decides. Auto '
                    'resolves only when koma.bin has one size for this character; pick a size to audition '
                    '(preview only, nothing is saved).')
        values = ['Auto'] + [f'{k}-cell' for k in forms]
        if editor.sound_form.get() not in values:
            editor.sound_form.set('Auto')
        ins.combo('Deployed as', editor.sound_form, values, on_change=editor._motion_changed, width=10)
        m = re.search(r'([a-z]{2}_[bs]_\d{2})', editor.container or '')
        slots = editor._sounds.slots(m.group(1)) if m else None
        if slots:
            for k in forms:
                v = slots.get(k, 0)
                ins.value(f'{k}-cell', editor._sounds._name(v) if v else 'silent (slot 0)',
                          colour=T.GOOD if v else T.MUTED)
    char = re.search(r'([a-z]{2}_b_\d{2})', editor.container or '')
    if char and editor._sounds and editor._sounds.display_name(char.group(1)):
        ins.value('Character', f'{editor._sounds.display_name(char.group(1))}  (chr_b record '
                  f'{editor._sounds.roster.index(char.group(1))})', colour=T.MUTED)
    ins.section(f'All cues ({len(editor._cues)})')
    for c in editor._cues[:40]:
        ins.value(f'@{c.tick}', f'0x{c.opcode:04X} {c.label}',
                  colour=T.GOOD if c.ssar is not None else T.MUTED)
    ins.section('Evidence')
    ins.evidence('0x0400', 'Direct', 'SSAR 0x7A SEQ_BATTLE (ov06 0x021569CC)')
    ins.evidence('0x0401/0x0402', 'Cross-checked', '+0xA4/+0xA6 from the deck koma form record (main '
                 '0x02077C0C battle, 0x02077CB8 support); slots name SEQ_<CHAR>[_size] on all 429 entries')
    ins.evidence('Deck choice', 'Unknown', 'base-archive 0x0402 when the character has koma of several sizes; '
                                           'support 0x0401 (own vs owner record not traced)')
    ins.evidence('Same-frame repeats', 'Direct', 'FUN_0207342C skips a repeated (ssar, seq)')


def _inspect_notes(editor, ins, tr):
    try:
        nt = notetrack.parse(tr.encoded())
    except ValueError as exc:
        ins.value('Error', str(exc), colour=T.BAD)
        return
    total = sum(len(k.commands) for k in nt.keys)
    ins.value('Events', f'{total} in {len(nt.keys)} keys (fire when playback crosses the tick)')
    t = editor.sel_key if editor.sel_key is not None else editor.tick
    here = [c for k in nt.keys if k.tick == t for c in k.commands]
    ins.section(f'Events @ {t}')
    if not here:
        ins.text('No events at this tick.')
    for c in here:
        col = T.EVENT_COLOURS.get(c.opcode >> 8, T.FG)
        ins.value(eventops.category(c.opcode).split(' /')[0], editor.command_text(c), colour=col)
    ins.buttons(('⚑ Add event here', editor.add_note_event, 'Accent.TButton'),
                ('Edit events…', editor.edit_note_events))
    ins.buttons(('Edit as text…', editor.edit_track), ('Delete @ tick', editor.delete_selected_key))


# ------------------------------------------------------------ inline event editing
def render_note_event_editors(editor, ins, tr):
    """Inline editors for every NoteTrack event at the selected tick (after _inspect_notes)."""
    try:
        nt = notetrack.parse(tr.encoded())
    except ValueError:
        return
    t = editor.sel_key if editor.sel_key is not None else editor.tick
    here = [loc for loc in eventops.list_events(nt) if loc.tick == t]
    if not here:
        return
    ins.section(f'Edit events @ {t}', note='Branch targets list this move\'s Marker labels; '
                'each Apply is one undo step.')
    labels = _marker_labels(editor)
    for n, loc in enumerate(here):
        _event_editor(editor, ins, tr, loc, n, labels)
_RANGES = {'b': (-128, 127), 'B': (0, 255), 'h': (-32768, 32767), 'H': (0, 65535),
           'i': (-2**31, 2**31 - 1), 'I': (0, 2**32 - 1)}


def _marker_labels(editor) -> list[int]:
    """Marker values in the current move: the labels a branch target can seek to."""
    out = set()
    move = getattr(editor, 'move', None)
    for node in (move.nodes if move else ()):
        for track in (node.tracks if node else ()):
            if track.field == 'Marker' and not track.opaque:
                vals = [k.value for k in track.keys] if track.keyed else [track.value]
                out.update(v for v in vals if isinstance(v, int))
    return sorted(out)


def target_choices(labels, signed=True) -> dict[str, int]:
    """Branch-target dropdown: -1 (none) plus this move's Marker labels that fit the byte."""
    lo, hi = (-128, 127) if signed else (0, 255)
    out = {'-1 — no branch': -1} if signed else {}
    for v in labels:
        if lo <= v <= hi and v != -1:
            out[f'{v} — Marker label {v}'] = v
    return out


def _commit(editor, track, data, label):
    """Validate and store an edited NoteTrack as one undoable step."""
    for ev in eventops.list_events(data):
        eventops.validate_event(data, ev, editor.move.duration)
    raw = data.build()
    notetrack.parse(raw)
    if raw == track.encoded():
        return
    snap = editor._almt_snapshot()
    track.raw = raw
    track.opaque = True
    track.keyed = True
    track.touch()
    editor._track_done(label, snap)


def _event_editor(editor, ins, track, loc, n, labels):
    import tkinter as tk
    from tkinter import messagebox
    cmd = loc.command
    col = T.EVENT_COLOURS.get(cmd.opcode >> 8, T.FG)
    ins.value(f'#{n + 1} {eventops.category(cmd.opcode).split(" /")[0]}', editor.command_text(cmd), colour=col)
    opcodes = {eventops.opcode_label(op): op for op in sorted(notetrack.OPCODES)}
    op_var = tk.StringVar(master=ins, value=eventops.opcode_label(cmd.opcode))
    values = cmd.values()

    def change_opcode():
        op = opcodes.get(op_var.get())
        if op is None or op == cmd.opcode:
            return
        data = notetrack.parse(track.encoded())
        new = notetrack.Command.from_values(op, [0] * len(eventops.argument_types(op)))
        if op >> 8 == 0:              # branches start with "no branch" targets
            vals = new.values()
            for i in eventops.branch_target_args(op):
                if eventops.argument_types(op)[i] == 'b':
                    vals[i] = -1
            new = notetrack.Command.from_values(op, vals)
        eventops.change_event(data, loc.key_index, loc.command_index, loc.tick, new)
        _commit(editor, track, data, f'Change event to {notetrack.OPCODES[op].name}')

    ins.combo('Event', op_var, list(opcodes), 'Opcode (category: branch, physics/state, presentation, '
              'character action, audio)', on_change=change_opcode, width=30)
    if values is None:
        ins.value('Arguments', cmd.args.hex(' ') or '(none)', colour=T.MUTED)
        return
    kinds = eventops.argument_types(cmd.opcode)
    names = eventops.argument_labels(cmd.opcode)
    targets = set(eventops.branch_target_args(cmd.opcode))
    readers = []
    for i, (kind, name, value) in enumerate(zip(kinds, names, values)):
        choices = None
        if i in targets:
            choices = target_choices(labels, signed=kind == 'b')
            name = 'Label' if cmd.opcode == 0x0013 else ('Branch target' if len(targets) == 1 else f'Target ({name})')
        else:
            choices = eventops.argument_choices(cmd.opcode, i, values)
        if choices is not None:
            current = next((k for k, v in choices.items() if v == value), None)
            if current is None:
                current = f'{value} — custom'
                choices = {**choices, current: value}
            var = tk.StringVar(master=ins, value=current)
            ins.combo(name[:1].upper() + name[1:], var, list(choices), width=30,
                      tip='Marker labels of this move (target n seeks to Marker value n)' if i in targets else None)
            readers.append(lambda var=var, choices=choices: choices[var.get()])
        else:
            lo, hi = _RANGES.get(kind, (-2**31, 2**31 - 1))
            var = tk.StringVar(master=ins, value=str(value))
            ins.spin(name[:1].upper() + name[1:], var, lo, hi)
            readers.append(lambda var=var: int(var.get(), 0))
    if cmd.opcode == 0x0300 and values:
        ins.value('Meaning', eventops.chara_action_text(values), colour=T.MUTED)

    def apply():
        try:
            new_values = [read() for read in readers]
            if new_values == values:
                return
            data = notetrack.parse(track.encoded())
            typed = notetrack.Command.from_values(cmd.opcode, new_values)
            need = struct.calcsize('<' + cmd.info.args)
            # keep the original reserved/padding bytes after the typed arguments
            new = notetrack.Command(cmd.opcode, typed.args[:need] + cmd.args[need:])
            eventops.change_event(data, loc.key_index, loc.command_index, loc.tick, new)
            _commit(editor, track, data, f'Edit {cmd.name}')
        except (ValueError, OverflowError, KeyError) as exc:
            messagebox.showerror('NoteTrack event', str(exc), parent=ins.winfo_toplevel())

    ins.buttons((f'Apply #{n + 1}', apply, 'Accent.TButton'))

