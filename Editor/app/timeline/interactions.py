"""Original-source R08 phase7 timeline implementation, no fabricated state."""
from __future__ import annotations
import json
import tkinter as tk
from tkinter import messagebox
from app.dialogs import TrackDialog
from app.note_event_editor import NoteEventEditor
from app.parsing import parse_int
from jus_formats import almt,eventops,notetrack

def command_text(editor, c: notetrack.Command, short=False):
    text = c.text()
    if c.opcode == 0x0300:
        v = c.values()
        if v:
            text += f'  — {eventops.chara_action_text(v)}'
    if c.opcode in (0x0400, 0x0401, 0x0402) and editor._sounds is not None:
        v = c.values()
        if v:
            selection = editor.sound_form.get()
            deployed_size = (int(selection.split('-')[0])
                             if selection.endswith('-cell') else None)
            cue = editor._sounds.resolve(
                c.opcode, v[0], editor.container, form=deployed_size,
                card_index=editor._sound_koma_card if deployed_size is not None else None)
            if cue.ssar is not None:
                text += f' = {cue.label}'
            elif cue.evidence == 'Unknown':
                text += f'  (unresolved: {cue.note})'
            else:
                text += f'  (silent: {cue.note})'
    if short and len(text) > 48:
        text = text[:46] + '…'
    return text


def notes_to_text(editor, raw: bytes):
    nt = notetrack.parse(raw)
    lines = ['# tick opcode args...   (one command per line; same tick = same key)',
             '# args are the decoded values; unknown opcodes take hex bytes: tick 0xNNNN hex:aabb']
    for k in nt.keys:
        for c in k.commands:
            v = c.values()
            args = ' '.join(str(x) for x in v) if v is not None else 'hex:' + c.args.hex()
            lines.append(f'{k.tick} 0x{c.opcode:04X} {args}    # {editor.command_text(c)}')
        if not k.commands:
            lines.append(f'{k.tick} -')
    if nt.tail:
        lines.append(f'# tail {nt.tail.hex()}')
    return '\n'.join(lines)


def _track(editor, sel=None):
    sel = sel if sel is not None else editor.sel_track
    if not sel or not editor.move:
        return None
    ni, ti = sel
    node = editor.move.nodes[ni] if ni < len(editor.move.nodes) else None
    if node is None or ti >= len(node.tracks):
        return None
    return node.tracks[ti]


def _track_done(editor, label='edit track', snap=None):
    if snap is not None:
        editor.checkpoint(label, snap=snap)
    if editor.move:
        editor.move.touch()
    editor.mark_almt()
    editor._refresh_pursuer_links()
    editor.refresh_animation()


def edit_track(editor):
    tr = editor._track()
    if tr is None:
        editor.status.set('Select a track in the timeline first.')
        return
    ni = editor.sel_track[0]
    if tr.field == 'NoteTrack':
        editor._note_dialog(ni, tr, editor.tick)
        return
    snap = editor._almt_snapshot()
    TrackDialog(editor, editor.almt, editor.move, ni, tr, lambda: editor._track_done('edit track', snap),
                editor.notes_to_text, editor.text_to_notes)


def add_track(editor):
    if not editor.move:
        return
    snap = editor._almt_snapshot()
    ni = editor.sel_track[0] if editor.sel_track else 0
    TrackDialog(editor, editor.almt, editor.move, ni, None, lambda: editor._track_done('add track', snap),
                editor.notes_to_text, editor.text_to_notes)


def delete_track(editor):
    tr = editor._track()
    if tr is None:
        return
    ni, ti = editor.sel_track
    if messagebox.askyesno('Delete track', f'Delete {editor.almt.node_names[ni]} / {tr.field}?'):
        editor.checkpoint('delete track')
        del editor.move.nodes[ni].tracks[ti]
        if not editor.move.nodes[ni].tracks and ni != 0:
            editor.move.nodes[ni] = None
        editor.sel_track = editor.sel_key = None
        editor._track_done()


def _active_value(editor, tr, tick):
    if not tr.keyed:
        return tr.value
    cur = None
    for k in tr.keys:
        if k.tick <= tick:
            cur = k.value
    if cur is None and tr.keys:
        cur = tr.keys[0].value
    return cur


def add_key_at_playhead(editor):
    tr = editor._track()
    if tr is None or not editor.move:
        editor.status.set('Select a keyed track first (click its name in the timeline).')
        return
    if tr.field == 'NoteTrack':
        editor.add_note_event()
        return
    if tr.opaque or not tr.keyed:
        editor.status.set(f'{tr.field} is static; edit its value in the Inspector.')
        return
    if any(k.tick == editor.tick for k in tr.keys):
        editor.sel_key = editor.tick
        editor.refresh_inspector()
        return
    value = editor._active_value(tr, editor.tick)
    if value is None:
        kind = almt.value_kind(tr.field)
        value = [0, 0] if kind == 's16x2' else [0, 0, 0, 0] if kind == 's16x4' else 0
    editor.checkpoint(f'add {tr.field} key')
    tr.keys.append(almt.Key(editor.tick, json.loads(json.dumps(value))))
    tr.keys.sort(key=lambda k: k.tick)
    tr.touch()
    editor.sel_key = editor.tick
    editor._track_done()


def delete_selected_key(editor):
    tr = editor._track()
    if tr is None or editor.sel_key is None:
        return
    t = editor.sel_key
    if tr.field == 'NoteTrack' and tr.opaque:
        nt = notetrack.parse(tr.encoded())
        n = sum(len(k.commands) for k in nt.keys if k.tick == t)
        if n > 1 and not messagebox.askyesno('Delete events', f'Delete all {n} events at tick {t}?'):
            return
        editor.checkpoint('delete events')
        nt.keys = [k for k in nt.keys if k.tick != t]
        tr.raw = nt.build()
        tr.touch()
    elif tr.keyed and not tr.opaque:
        editor.checkpoint(f'delete {tr.field} key')
        tr.keys = [k for k in tr.keys if k.tick != t]
        tr.touch()
    else:
        return
    editor.sel_key = None
    editor._track_done()


def set_key(editor, tick_text, value_text):
    tr = editor._track()
    if tr is None:
        return
    try:
        value = TrackDialog.parse_value(value_text, tr.field)
        if tr.keyed:
            new_tick = parse_int(tick_text)
            if not 0 <= new_tick <= 0xFFFE:
                raise ValueError('tick must be 0–65534')
            if new_tick != editor.sel_key and any(k.tick == new_tick for k in tr.keys):
                raise ValueError(f'{tr.field} already has a key at tick {new_tick}')
    except (ValueError, json.JSONDecodeError) as exc:
        messagebox.showerror('Key', str(exc))
        return
    editor.checkpoint(f'set {tr.field}')
    if not tr.keyed:
        tr.value = value
    else:
        for k in tr.keys:
            if k.tick == editor.sel_key:
                k.tick, k.value = new_tick, value
                break
        tr.keys.sort(key=lambda k: k.tick)
        editor.sel_key = new_tick
    tr.touch()
    editor._track_done()


def _note_track_for_selection(editor, create=False):
    if not editor.move or not editor.almt:
        return None, None
    chosen = editor._track()
    if chosen is not None and chosen.field == 'NoteTrack':
        return editor.sel_track[0], chosen
    ni = editor.sel_track[0] if editor.sel_track else None
    if ni is not None and editor.move.nodes[ni] and editor.move.nodes[ni].track('NoteTrack'):
        return ni, editor.move.nodes[ni].track('NoteTrack')
    for j, node in enumerate(editor.move.nodes):
        if node and node.track('NoteTrack'):
            return j, node.track('NoteTrack')
    if not create:
        return None, None
    ni = editor.almt.node_names.index('SP01') if 'SP01' in editor.almt.node_names else 0
    track = almt.Track('NoteTrack', True, raw=notetrack.NoteTrack().build(), opaque=True)
    return ni, track


def _note_dialog(editor, ni, track, tick, operation='edit'):
    if track is None or editor.move is None:
        return
    snap = editor._almt_snapshot()

    def commit_changes():
        node = editor.move.nodes[ni]
        if node is None:
            node = editor.move.nodes[ni] = almt.NodeAnim()
        if not any(existing is track for existing in node.tracks):
            editor.almt.field_index('NoteTrack')
            node.tracks.append(track)
        editor._track_done('edit NoteTrack events', snap)
    NoteEventEditor(editor, editor.almt.node_names[ni], track, editor.move.duration,
                    initial_tick=max(0, min(editor.move.duration, tick)),
                    operation=operation, format_command=editor.command_text, on_done=commit_changes)


def edit_note_events(editor):
    ni, track = editor._note_track_for_selection(create=False)
    if track is not None:
        editor._note_dialog(ni, track, editor.tick)
    else:
        messagebox.showinfo('NoteTrack', 'No NoteTrack on this move. Use “⚑ Event” to create one.')


def add_note_event(editor):
    if not editor.move:
        return
    ni, track = editor._note_track_for_selection(create=True)
    if track is not None:
        editor._note_dialog(ni, track, editor.tick, operation='add')


def _timeline_select(editor, row, tick, payload):
    if row.get('kind') == 'group':
        return
    if row.get('sel'):
        editor.sel_track = row['sel']
        editor.sel_virtual = None
    else:
        editor.sel_track = None
        editor.sel_virtual = row
    editor.sel_key = tick
    if tick is not None:
        editor.set_tick(tick)
    editor.refresh_inspector()
    editor.redraw_view()


def _timeline_move_key(editor, row, start, end):
    if not row.get('sel') or not row.get('editable'):
        return False
    tr = editor._track(row['sel'])
    if tr is None or end > 0xFFFE:
        return False
    if row.get('kind') == 'events':
        nt = notetrack.parse(tr.encoded())
        moving = [k for k in nt.keys if k.tick == start]
        if not moving:
            return False
        editor.checkpoint('retime events')
        target = next((k for k in nt.keys if k.tick == end), None)
        if target is not None:
            target.commands.extend(c for k in moving for c in k.commands)
            nt.keys = [k for k in nt.keys if k.tick != start]
        else:
            for k in moving:
                k.tick = end
        nt.keys.sort(key=lambda k: k.tick)
        tr.raw = nt.build()
    else:
        if any(k.tick == end for k in tr.keys):
            editor.status.set(f'{tr.field} already has a key at tick {end}.')
            return False
        editor.checkpoint(f'retime {tr.field} key')
        for k in tr.keys:
            if k.tick == start:
                k.tick = end
        tr.keys.sort(key=lambda k: k.tick)
    tr.touch()
    editor.sel_track, editor.sel_key = row['sel'], end
    editor._track_done()
    editor.status.set(f'Moved {tr.field} key {start} → {end}')
    return True


def _timeline_context(editor, e, row, tick, key_tick):
    menu = tk.Menu(editor, tearoff=False)
    if row is not None and row.get('sel'):
        editor.sel_track = row['sel']
        tr = editor._track()
        if key_tick is not None:
            editor.sel_key = key_tick
        if tick is not None and key_tick is None:
            editor.set_tick(min(tick, editor.move.duration))
        editor.refresh_inspector()
        if row.get('kind') == 'events':
            menu.add_command(label=f'Add event at tick {editor.tick}', command=editor.add_note_event)
            menu.add_command(label='Edit events…', command=editor.edit_note_events)
            if key_tick is not None:
                menu.add_command(label=f'Delete events at tick {key_tick}', command=editor.delete_selected_key)
        elif tr is not None and tr.keyed and not tr.opaque:
            menu.add_command(label=f'Add key at tick {editor.tick}', command=editor.add_key_at_playhead)
            if key_tick is not None:
                menu.add_command(label=f'Delete key at tick {key_tick}', command=editor.delete_selected_key)
        menu.add_separator()
        menu.add_command(label='Edit track as text…', command=editor.edit_track)
        menu.add_command(label='Delete track', command=editor.delete_track)
    else:
        if tick is not None:
            editor.set_tick(min(tick, editor.move.duration if editor.move else 0))
        menu.add_command(label='Add track…', command=editor.add_track)
        menu.add_command(label=f'Add NoteTrack event at tick {editor.tick}', command=editor.add_note_event)
    menu.add_separator()
    menu.add_command(label='Expand all groups', command=lambda: editor._set_collapsed(set()))
    menu.add_command(label='Collapse all groups',
                     command=lambda: editor._set_collapsed({r['id'] for r in editor.timeline.rows
                                                          if r.get('kind') == 'group'}))
    menu.tk_popup(e.x_root, e.y_root)


def _timeline_activate(editor, row, key_tick):
    if row.get('kind') == 'group':
        editor._toggle_group(row)
        return
    if not row.get('sel'):
        info = row.get('info')
        if info:
            editor.open_effect_move(*info)
        return
    editor.sel_track = row['sel']
    tr = editor._track()
    if tr is not None and tr.field == 'NoteTrack':
        editor._note_dialog(editor.sel_track[0], tr, key_tick if key_tick is not None else editor.tick)
    elif key_tick is not None or (tr is not None and not tr.keyed):
        editor.sel_key = key_tick
        editor.refresh_inspector(focus_value=True)
    else:
        editor.edit_track()


def _toggle_group(editor, row):
    gid = row['id']
    editor._collapsed.symmetric_difference_update({gid})
    editor.timeline.set_data(editor._timeline_rows(), editor.move.duration if editor.move else 0)


def _set_collapsed(editor, s):
    editor._collapsed = set(s)
    editor.timeline.set_data(editor._timeline_rows(), editor.move.duration if editor.move else 0)


def jump_key(editor, direction):
    if not editor.move:
        return
    ticks = sorted({t for r in editor.timeline.rows if r.get('kind') != 'group' for t, _ in r.get('keys', [])}
                   | {0, editor.move.duration})
    if direction > 0:
        nxt = next((t for t in ticks if t > editor.tick), None)
    else:
        nxt = next((t for t in reversed(ticks) if t < editor.tick), None)
    if nxt is not None:
        editor.set_tick(nxt)


def set_tick(editor, t):
    dur = editor.move.duration if editor.move else 0
    editor.tick = max(0, min(int(t), dur))
    editor.tick_var.set(str(editor.tick))
    editor.timeline.set_tick(editor.tick)
    editor.redraw_view()
    if (editor.sel_track is not None and editor._track() is not None and editor._track().field == 'NoteTrack'
            or editor.sel_virtual is not None and editor.sel_virtual.get('derived') in ('physics', 'sound')):
        editor.refresh_inspector()

