"""Original-source R08 phase7 sprite_ui implementation, no fabricated state."""
from __future__ import annotations
import tkinter as tk
from app import theme as T
from jus_formats import dsig as dsigmod,sprite
from jus_package import images,spriteedit
from jus_package.project import split

def _frame_sprite_if_needed(editor):
    if getattr(editor, '_need_sframe', False) and editor.sview.canvas.winfo_width() > 100:
        editor._need_sframe = False
        editor.frame_sprite()


def populate_frames(editor, select=None):
    d = editor.sprite_d
    editor.sprite_info.configure(text=spriteedit.describe(d, editor.sprite_g) if d else '')
    n = len(d.frames) if d else 0
    editor.frame_i = None if not n else max(0, min(n - 1, select if select is not None else 0))
    editor.filmstrip.set_frames(n, editor._thumb_for, editor.frame_i)
    editor.redraw_sprite()


def _bank(editor):
    g = editor.sprite_g
    b = None if editor.bank_override.get() == 'Auto' else int(editor.bank_override.get())
    return None if (b is None or g is None or b >= g.banks) else b


def _compose(editor, i, canvas=None):
    d, g = editor.sprite_d, editor.sprite_g
    if d is None or g is None or not (0 <= i < len(d.frames)) or not d.frames[i].pieces:
        return None
    img = sprite.compose(d.frames[i], sprite.SpriteSource(g), editor._bank(), canvas=canvas)
    return img, images.to_rgba(img, g.palettes)


def _thumb_for(editor, i):
    try:
        res = editor._compose(i)
    except (ValueError, IndexError):
        return None
    return res[1] if res else None


def select_frame(editor, i):
    if not editor.sprite_d or not editor.sprite_d.frames:
        return
    i = max(0, min(len(editor.sprite_d.frames) - 1, i))
    if i != editor.frame_i:
        editor.piece_i = None
    editor.frame_i = i
    editor.filmstrip.set_current(i)
    editor.redraw_sprite()


def _piece(editor):
    d = editor.sprite_d
    if d is None or editor.frame_i is None or editor.piece_i is None:
        return None
    pieces = d.frames[editor.frame_i].pieces
    return pieces[editor.piece_i] if 0 <= editor.piece_i < len(pieces) else None


def redraw_sprite(editor, thumbs=False):
    if thumbs:
        editor.filmstrip.invalidate()
    if editor.workspace == 'sprite':
        editor.sview.redraw()
    editor.refresh_details()
    title = f'Frame {editor.frame_i}' if editor.frame_i is not None else 'Frame'
    if editor.sprite_path:
        title += f'  —  {split(editor.sprite_path)[-1]}'
    editor.sprite_title.set_title(title)


def frame_sprite(editor):
    d = editor.sprite_d
    if d and d.frames:
        editor.sview.frame_rect(sprite.frame_extent(d))
    else:
        editor.sview.frame_origin()


def _hit_piece(editor, wx, wy):
    d = editor.sprite_d
    if d is None or editor.frame_i is None:
        return None
    pieces = d.frames[editor.frame_i].pieces
    order = range(len(pieces)) if editor.sprite_g is None or sprite.SpriteSource(editor.sprite_g).is_obj \
        else reversed(range(len(pieces)))
    for k in order:
        p = pieces[k]
        try:
            w, h = p.size
        except ValueError:
            continue
        if p.x <= wx < p.x + w and p.y <= wy < p.y + h:
            return k
    return None


def _sprite_press(editor, wx, wy, e):
    k = editor._hit_piece(wx, wy)
    editor.piece_i = k
    editor._piece_drag = (wx, wy, editor._piece().x, editor._piece().y, editor._sprite_snapshot()) if k is not None else None
    editor.redraw_sprite()


def _sprite_drag(editor, wx, wy, e):
    if not editor._piece_drag:
        return
    x0, y0, px, py, _ = editor._piece_drag
    p = editor._piece()
    nx = max(-128, min(127, px + round(wx - x0)))
    ny = max(-128, min(127, py + round(wy - y0)))
    if (nx, ny) != (p.x, p.y):
        p.x, p.y = nx, ny
        editor.sview.redraw()


def _sprite_release(editor, wx, wy, e):
    drag, editor._piece_drag = editor._piece_drag, None
    if not drag:
        return
    p = editor._piece()
    if p is not None and (p.x, p.y) != (drag[2], drag[3]):
        editor.checkpoint('move piece', kind='sprite', snap=drag[4])
        editor._after_piece_edit()


def nudge_piece(editor, dx, dy):
    p = editor._piece()
    if p is None:
        return
    nx, ny = max(-128, min(127, p.x + dx)), max(-128, min(127, p.y + dy))
    if (nx, ny) == (p.x, p.y):
        return
    editor.checkpoint('nudge piece', kind='sprite')
    p.x, p.y = nx, ny
    editor._after_piece_edit()


def _palette_widget(editor, parent):
    g = editor.sprite_g
    k = T.ui_scale(editor)
    cell = int(12 * k)
    banks = g.palettes[:32]
    c = tk.Canvas(parent, bg=T.PANEL, highlightthickness=0, height=len(banks) * (cell + 2) + 4,
                  width=16 * cell + int(40 * k))
    cur = editor._piece().bank if editor._piece() is not None else None
    for b, bank in enumerate(banks):
        y = b * (cell + 2) + 2
        c.create_text(2, y + cell // 2, anchor='w', text=str(b), fill=T.ACCENT if b == cur else T.MUTED,
                      font=T.MONO_SMALL)
        for i, v in enumerate(bank):
            r, gg, bb = dsigmod.rgb555_to_rgb(v)
            x = int(26 * k) + i * cell
            c.create_rectangle(x, y, x + cell, y + cell, fill=f'#{r:02X}{gg:02X}{bb:02X}',
                               outline=T.ACCENT if b == cur else ('#000000' if i else '#FF00FF'))

    def click(e):
        b = int((e.y - 2) // (cell + 2))
        if 0 <= b < len(banks) and editor._piece() is not None:
            editor._pv['bank'].set(str(b))
            editor.apply_piece()
    c.bind('<Button-1>', click)
    return c


def toggle_flipbook(editor):
    if editor.flip_playing:
        editor._stop_flipbook()
    elif editor.sprite_d and editor.sprite_d.frames:
        editor.flip_playing = True
        editor.flip_btn.configure(text='❚❚')
        editor._flip_step()


def _stop_flipbook(editor):
    editor.flip_playing = False
    if hasattr(editor, 'flip_btn'):
        editor.flip_btn.configure(text='▶')


def _flip_step(editor):
    if not editor.flip_playing or not editor.sprite_d:
        return
    n = len(editor.sprite_d.frames)
    editor.select_frame(((editor.frame_i or 0) + 1) % n)
    fps = max(1, min(60, editor._int(editor.flip_fps.get(), 12)))
    editor.after(int(1000 / fps), editor._flip_step)


def _film_context(editor, e, i):
    menu = tk.Menu(editor, tearoff=False)
    menu.add_command(label='Replace from PNG…', command=lambda: editor.import_frame(False))
    menu.add_command(label='Append from PNG…', command=lambda: editor.import_frame(True))
    menu.add_command(label='Re-layout pieces', command=editor.relayout_frame)
    menu.add_command(label='Delete frame', command=editor.delete_frame)
    menu.tk_popup(e.x_root, e.y_root)

