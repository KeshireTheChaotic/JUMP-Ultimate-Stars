"""R08 original EditorApp history path, source-preserving transfer."""
from __future__ import annotations
from jus_formats import almt, dsig as dsigmod, dstx as dstxmod

def _doc(editor):
    if editor.workspace in getattr(editor, 'suite', {}):
        return editor.suite[editor.workspace].doc() or f'{editor.workspace}:'
    if editor.workspace == 'sprite' and editor.sprite_path:
        return 'sprite:' + editor.sprite_path
    return 'almt:' + (editor.almt_path or '')


def _almt_snapshot(editor):
    if editor.almt is None:
        return None
    try:
        idx = editor.almt.moves.index(editor.move) if editor.move in editor.almt.moves else 0
        return (editor.almt.build(), idx, editor.sel_track, editor.sel_key)
    except Exception:  # noqa: BLE001
        return None


def _sprite_snapshot(editor):
    if editor.sprite_d is None:
        return None
    try:
        return (editor.sprite_d.build(), editor.sprite_g.build() if editor.sprite_g else None, editor.frame_i,
                editor.piece_i)
    except Exception:  # noqa: BLE001
        return None


def checkpoint(editor, label, kind='almt', snap=None):
    """Record the state *before* an edit."""
    if kind == 'almt':
        snap = snap if snap is not None else editor._almt_snapshot()
        if snap is not None and editor.almt_path:
            doc = 'almt:' + editor.almt_path
            if not editor.almt_dirty:          # first edit since load/apply: remember the clean bytes
                editor._clean[doc] = snap[0]
            editor.history.push(doc, label, snap)
    else:
        snap = snap if snap is not None else editor._sprite_snapshot()
        if snap is not None and editor.sprite_path:
            doc = 'sprite:' + editor.sprite_path
            if not editor.sprite_dirty:
                editor._clean[doc] = snap[:2]
            editor.history.push(doc, label, snap)
    editor._update_undo_label()


def _restore_almt(editor, snap):
    data, idx, sel_track, sel_key = snap
    editor.almt = almt.parse(data)
    for m in editor.almt.moves:
        m.dirty = True
    # undoing back to the applied/loaded bytes leaves nothing to apply
    editor.almt_dirty = data != editor._clean.get('almt:' + (editor.almt_path or ''))
    editor.populate_moves(select=idx)
    editor.sel_track, editor.sel_key = sel_track, sel_key
    editor.refresh_animation()


def _restore_sprite(editor, snap):
    dbytes, gbytes, fi, pi = snap
    editor.sprite_d = dstxmod.parse(dbytes)
    if gbytes is not None:
        editor.sprite_g = dsigmod.parse(gbytes)
    editor.sprite_dirty = (dbytes, gbytes) != editor._clean.get('sprite:' + (editor.sprite_path or ''))
    editor.populate_frames(select=fi)
    editor.piece_i = pi
    editor.redraw_sprite(thumbs=True)


def undo(editor):
    editor._history_step(editor.history.undo, 'Undo')


def redo(editor):
    editor._history_step(editor.history.redo, 'Redo')


def _history_step(editor, fn, verb):
    doc = editor._doc()
    ws = getattr(editor, 'suite', {}).get(editor.workspace)
    if ws is not None:
        current = ws.snapshot()
        res = fn(doc, current) if current is not None else None
        if res is None:
            editor.status.set(f'Nothing to {verb.lower()}.')
            return
        ws.restore(res[1])
        editor.status.set(f'{verb}: {res[0]}')
        editor.update_dirty()
        return
    current = editor._sprite_snapshot() if doc.startswith('sprite:') else editor._almt_snapshot()
    if current is None:
        return
    res = fn(doc, current)
    if res is None:
        editor.status.set(f'Nothing to {verb.lower()}.')
        return
    label, snap = res
    if doc.startswith('sprite:'):
        editor._restore_sprite(snap)
    else:
        editor._restore_almt(snap)
    editor.status.set(f'{verb}: {label}')
    editor.update_dirty()


def _update_undo_label(editor):
    u, r = editor.history.peek(editor._doc())
    editor.undo_label.configure(text=(f'Undo: {u}' if u else '') + (f'   Redo: {r}' if r else ''))

