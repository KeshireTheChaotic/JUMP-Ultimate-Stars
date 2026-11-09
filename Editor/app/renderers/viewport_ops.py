"""Original-source UI coordination extracted from EditorApp — R08 Phase 10.
Source/engine unknowns remain unknown; do not infer native runtime physics.
"""
from __future__ import annotations

from jus_formats import sprite
from jus_package import images
from app import theme as T


def refresh_animation(editor):
    """Rebuild timeline rows, inspector, viewport and labels."""
    dur = editor.move.duration if editor.move else 0
    editor.dur_label.configure(text=f'/ {dur}')
    editor.tick = min(editor.tick, dur)
    editor.tick_var.set(str(editor.tick))
    editor.timeline.set_data(editor._timeline_rows(), dur)
    if editor.sel_track is not None and editor.sel_key is not None:
        editor.timeline.select(('trk',) + tuple(editor.sel_track), editor.sel_key)
    editor.timeline.set_tick(editor.tick)
    editor.refresh_inspector()
    editor.redraw_view()


def _frame_image(editor, tid, frame):
    key = (tid & 0xFFFFFF, frame)
    if key not in editor._frame_cache:
        res = None
        spr = editor.index.sprite(tid) if editor.index else None
        if spr is not None:
            d, src = spr
            if 0 <= frame < len(d.frames) and d.frames[frame].pieces:
                try:
                    img = sprite.compose(d.frames[frame], src)
                    res = (images.to_rgba(img, src.dsig.palettes), img.left, img.top)
                except (ValueError, IndexError):
                    res = None
        if len(editor._frame_cache) > 600:
            editor._frame_cache.clear()
        editor._frame_cache[key] = res
    return editor._frame_cache[key]


def fit_timeline(editor):
    """Zoom the timeline so the whole move fits (like Unity's 'F' in the dope sheet)."""
    if not editor.move:
        return
    avail = editor.timeline.canvas.winfo_width() - editor.timeline.HEADER_W - 40
    if avail > 50:
        editor.timeline.xoff = 0
        editor.timeline.set_zoom(max(3.0, min(40.0 * T.ui_scale(editor), avail / max(8, editor.move.duration + 2))))
