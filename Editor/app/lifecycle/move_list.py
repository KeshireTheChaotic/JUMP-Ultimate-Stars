"""Source-preserving original EditorApp workflows (R08 Phase 9).
Actual ALMT/BIN authority and Tk selection behavior are unchanged.
"""
from __future__ import annotations

from tkinter import messagebox
from jus_formats import almt


def populate_moves(editor, keep=False, select=None, *, hx):
    t = editor.moves_tree
    cur = editor.almt.moves.index(editor.move) if keep and editor.move in (editor.almt.moves if editor.almt else []) else select
    t.delete(*t.get_children())
    if not editor.almt:
        editor.move = None
        editor.refresh_animation()
        return
    flt = editor.move_filter.get().strip().lower()
    for i, m in enumerate(editor.almt.moves):
        control = editor._move_control_and_title(m)
        if flt and flt not in str(i) and flt not in hx(m.id).lower() and flt not in control.lower():
            continue
        t.insert('', 'end', str(i), values=(i, hx(m.id, 6), m.duration, '⟳' if m.flags & 1 else '', control))
    target = str(cur if cur is not None else 0)
    if t.exists(target):
        t.selection_set(target)
        t.focus(target)
        t.see(target)
    elif not keep:
        editor.move = None
    editor.on_move_select()


def on_move_select(editor, _e=None):
    # Roster owns move selection. Its old Moves Treeview remains an internal
    # model for Undo/Timeline but is hidden; queued Tk selection events from
    # that hidden widget must not trigger another expensive redraw.
    if (_e is not None and hasattr(editor, '_animation_clips') and
            not editor._animation_clips.winfo_ismapped()):
        return
    sel = editor.moves_tree.focus()
    new = editor.almt.moves[int(sel)] if editor.almt and sel else None
    changed = new is not editor.move
    if changed:
        editor._stop_play()
        editor._need_frame = True
        editor.sel_track = editor.sel_key = editor.sel_virtual = None
    editor.move = new
    if changed:
        editor.after(5, editor.fit_timeline)
    editor._refresh_pursuer_links()
    editor.tick = min(editor.tick, editor.move.duration) if editor.move else 0
    if _e is not None:
        editor.tick = 0
    editor.refresh_animation()
    editor.after(10, editor.frame_view_if_needed)


def _move_row(editor, i, *, hx):
    m = editor.almt.moves[i]
    if editor.moves_tree.exists(str(i)):
        editor.moves_tree.item(str(i), values=(i, hx(m.id, 6), m.duration, '⟳' if m.flags & 1 else '', editor._move_control_and_title(m)))


def duplicate_move(editor, *, hx):
    if not editor.move:
        return
    editor.checkpoint('duplicate move')
    d = almt.move_to_dict(editor.move, editor.almt.node_names)
    new = almt.move_from_dict(d, editor.almt.node_names)
    new.id = max(m.id for m in editor.almt.moves) + 1
    editor.almt.moves.append(new)
    editor.mark_almt()
    editor.move_filter.set('')
    editor.populate_moves(select=len(editor.almt.moves) - 1)
    editor.status.set(f'Duplicated move as {hx(new.id)}')


def delete_move(editor, *, hx):
    if not editor.move or len(editor.almt.moves) <= 1:
        return
    if messagebox.askyesno('Delete move', f'Delete move {hx(editor.move.id)}?'):
        editor.checkpoint('delete move')
        i = editor.almt.moves.index(editor.move)
        editor.almt.moves.remove(editor.move)
        editor.mark_almt()
        editor.populate_moves(select=max(0, i - 1))
