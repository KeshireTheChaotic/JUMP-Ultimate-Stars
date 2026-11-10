"""Atlas-specific frame PNG import, without rewriting R08's preserved OBJ path."""
from __future__ import annotations

from pathlib import Path
from tkinter import filedialog, messagebox

from jus_formats import sprite
from jus_package import images, spriteedit
from . import apply_ops


def import_frame(editor, append: bool) -> None:
    d, g = editor.sprite_d, editor.sprite_g
    if d is None or g is None:
        return
    if not sprite.SpriteSource(g).is_atlas:
        return apply_ops.import_frame(editor, append)
    if append:
        messagebox.showinfo(
            'Atlas sprite',
            'Appending requires atlas texture-cell references. To replace '
            'existing art, select its frame and choose Replace from PNG.')
        return
    i = editor.frame_i
    if i is None:
        return
    filename = filedialog.askopenfilename(
        title=f'Replace atlas frame {i}',
        filetypes=[('PNG image', '*.png')])
    if not filename:
        return
    try:
        origin = editor._ask_png_origin(filename)
        if origin is None:
            return
        warnings: list[str] = []
        img = images.load_png(Path(filename), g.palettes,
                              origin[0], origin[1], warnings)
        plan = spriteedit.plan_atlas_frame_image(d, g, i, img)
        if not plan.changed_bytes and plan.replacement_frame is None:
            editor.status.set(f'Frame {i}: image already matches atlas')
            return
        if plan.shared_frames:
            shown = ', '.join(map(str, plan.shared_frames[:15]))
            extra = (f' and {len(plan.shared_frames) - 15} more'
                     if len(plan.shared_frames) > 15 else '')
            if not messagebox.askyesno(
                    'Shared atlas texture cells',
                    f'The pixels for frame {i} are also referenced by frame(s) '
                    f'{shown}{extra}.\n\n'
                    'Those frames may change too, including alternate palette '
                    'variants. Continue with this replacement?',
                    parent=editor):
                return
        # Complete validation and consent precede any mutation.
        snap = editor._sprite_snapshot()
        g.set_pixels(plan.data)
        if plan.replacement_frame is not None:
            d.frames[i] = plan.replacement_frame
            d.frame_refs = None
    except Exception as exc:  # noqa: BLE001
        messagebox.showerror('Replace atlas frame', str(exc))
        return

    editor.checkpoint('replace atlas frame', kind='sprite', snap=snap)
    editor.mark_sprite()
    editor.populate_frames(select=i)  # invalidates all affected thumbnails
    editor.status.set(
        f'Frame {i}: patched {plan.changed_bytes} atlas bytes'
        + ('; extended frame layout' if plan.replacement_frame is not None else '')
        + (f'; {len(plan.shared_frames)} shared frames'
           if plan.shared_frames else ''))
    if warnings:
        messagebox.showwarning('Replace atlas frame', '\n'.join(warnings[:20]))
