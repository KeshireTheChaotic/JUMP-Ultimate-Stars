"""Source-preserving Tk navigation and documentation helpers (R08 Phase 11)."""
from __future__ import annotations

import os
import sys
from pathlib import Path
from tkinter import messagebox

HERE=Path(__file__).resolve().parents[2]

def _set_roster_clips(editor, hidden=True):
    """Roster tree replaces the redundant internal move-list pane."""
    if not hasattr(editor, '_animation_clips'):
        return
    panes = editor._upper.panes()
    child = str(editor._animation_clips)
    if hidden and child in panes:
        editor._upper.forget(editor._animation_clips)
    elif not hidden and child not in panes:
        editor._upper.insert(0, editor._animation_clips, weight=0)

def _arrow(editor, dx, dy, e, big=False):
    if editor.workspace == 'animation':
        if dx:
            if big:
                editor.jump_key(dx)
            else:
                editor.set_tick(editor.tick + dx)
    elif editor.workspace == 'sprite':
        if editor.piece_i is not None and editor._piece() is not None:
            step = 8 if big else 1
            editor.nudge_piece(dx * step, dy * step)
        elif dx and editor.sprite_d:
            editor.select_frame(max(0, min(len(editor.sprite_d.frames) - 1, (editor.frame_i or 0) + dx)))

def _open_doc(editor, name):
    p = HERE / 'docs' / name
    if p.is_file():
        os.startfile(str(p)) if sys.platform == 'win32' else None
    else:
        messagebox.showinfo('Docs', f'{p} not found')
