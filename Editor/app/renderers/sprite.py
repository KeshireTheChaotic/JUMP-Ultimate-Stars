"""Exact source-frame DSTX/DSIG sprite renderer."""
from __future__ import annotations
from app import theme as T
from jus_formats import sprite

def draw_sprite(editor,vp):
    d, g = editor.sprite_d, editor.sprite_g
    if d is None or editor.frame_i is None:
        vp.hud.configure(text='No sprite loaded')
        return
    fr = d.frames[editor.frame_i]
    ext = sprite.frame_extent(d)
    vp.rect(*ext, outline='#3B4652', dash=(2, 4))
    if g is None:
        vp.hud.configure(text='No image (DSIG) found for this sprite')
        return
    if editor.show_sprite_onion.get() and editor.frame_i > 0:
        try:
            prev = editor._compose(editor.frame_i - 1)
            if prev:
                img, pil = prev
                pil = pil.copy()
                pil.putalpha(pil.getchannel('A').point(lambda v: int(v * 0.3)))
                vp.add_image(pil, img.left, img.top)
        except (ValueError, IndexError):
            pass
    try:
        res = editor._compose(editor.frame_i)
        if res:
            img, pil = res
            vp.add_image(pil, img.left, img.top)
    except Exception as exc:  # noqa: BLE001
        vp.canvas.create_text(10, 10, text=str(exc), fill=T.BAD, anchor='nw')
    if editor.show_pieces.get():
        for k, p in enumerate(fr.pieces):
            try:
                w, h = p.size
            except ValueError:
                continue
            sel = k == editor.piece_i
            vp.rect(p.x, p.y, p.x + w, p.y + h, outline=T.ACCENT if sel else '#5B8DB8',
                    width=2 if sel else 1, dash=() if sel else (3, 2))
            vp.text(p.x + 1, p.y, str(k), anchor='nw', fill=T.ACCENT if sel else '#7FA8CC', font=T.MONO_SMALL)
    n = len(fr.pieces)
    vp.hud.configure(text=f'frame {editor.frame_i}/{len(d.frames) - 1}   {n} pieces   '
                          f'click a piece to select · drag to move · arrows nudge')

