"""Zoom/pan scene viewport (engine-editor style 2D view).

* Mouse wheel zooms about the cursor (¼×, ½×, then integer pixel scales 1×–12×).
* Middle-drag, or Space+left-drag, pans; Home / "Frame" recentres the origin.
* Checkerboard backdrop, world grid and origin cross are drawn underneath.

The owner supplies ``on_draw(viewport)`` and draws with :meth:`to_screen`
and :meth:`add_image`; pointer callbacks receive world (sprite-space) coords.
"""
from __future__ import annotations

import tkinter as tk
from contextlib import contextmanager

from PIL import Image, ImageTk

from .. import theme as T


ZOOMS = (0.25, 0.5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12)


def _snap(z):
    return min(ZOOMS, key=lambda v: abs(v - z))


class Viewport(tk.Frame):
    def __init__(self, parent, *, on_draw=None, on_press=None, on_drag=None, on_release=None,
                 origin_frac=(0.5, 0.72), zoom=3, **kw):
        super().__init__(parent, bg=T.CANVAS_BG, **kw)
        self.canvas = tk.Canvas(self, bg=T.CANVAS_BG, highlightthickness=0, bd=0, cursor='crosshair')
        self.canvas.pack(fill='both', expand=True)
        self.on_draw = on_draw
        self.on_press = on_press
        self.on_drag = on_drag
        self.on_release = on_release
        self.zoom = zoom
        self.origin_frac = origin_frac
        self.pan = [0.0, 0.0]
        self._translation = (0.0, 0.0)
        self.show_grid = tk.BooleanVar(value=True)
        self.show_checker = tk.BooleanVar(value=True)
        self._images = []
        self._pan_start = None
        self._space = False
        self._checker_cache = None
        c = self.canvas
        c.bind('<Configure>', lambda e: self.redraw())
        c.bind('<MouseWheel>', self._wheel)
        c.bind('<ButtonPress-2>', self._pan_begin)
        c.bind('<B2-Motion>', self._pan_move)
        c.bind('<ButtonRelease-2>', self._pan_end)
        c.bind('<ButtonPress-1>', self._press)
        c.bind('<B1-Motion>', self._move)
        c.bind('<ButtonRelease-1>', self._release)
        c.bind('<KeyPress-space>', lambda e: self._set_space(True))
        c.bind('<KeyRelease-space>', lambda e: self._set_space(False))
        self.hud = tk.Label(self, bg=T.CANVAS_BG, fg=T.MUTED, font=T.MONO_SMALL, anchor='w', justify='left')
        self.hud.place(x=8, rely=1.0, y=-6, anchor='sw')
        self.zoom_label = tk.Label(self, bg=T.CANVAS_BG, fg=T.MUTED, font=T.MONO_SMALL)
        self.zoom_label.place(relx=1.0, x=-8, y=6, anchor='ne')

    # ----------------------------------------------------------- transform
    def origin(self):
        w, h = max(self.canvas.winfo_width(), 50), max(self.canvas.winfo_height(), 50)
        return w * self.origin_frac[0] + self.pan[0], h * self.origin_frac[1] + self.pan[1]

    def to_screen(self, x, y):
        ox, oy = self.origin()
        dx, dy = self._translation
        return ox + (x + dx) * self.zoom, oy + (y + dy) * self.zoom

    def to_world(self, sx, sy):
        ox, oy = self.origin()
        dx, dy = self._translation
        return (sx - ox) / self.zoom - dx, (sy - oy) / self.zoom - dy

    @contextmanager
    def translated(self, x, y):
        previous = self._translation
        self._translation = (previous[0] + x, previous[1] + y)
        try:
            yield self
        finally:
            self._translation = previous

    def set_zoom(self, z):
        self.zoom = _snap(max(ZOOMS[0], min(ZOOMS[-1], z)))
        self.redraw()

    def frame_origin(self):
        self.pan = [0.0, 0.0]
        self.redraw()

    def frame_rect(self, rect):
        """Centre and zoom so that the world rectangle (l, t, r, b) is visible."""
        l, t, r, b = rect
        w, h = max(self.canvas.winfo_width(), 50), max(self.canvas.winfo_height(), 50)
        zw = (w - 40) / max(1, r - l)
        zh = (h - 40) / max(1, b - t)
        fit = min(zw, zh)
        self.zoom = max([v for v in ZOOMS if v <= fit] or [ZOOMS[0]])
        ox0, oy0 = w * self.origin_frac[0], h * self.origin_frac[1]
        cx, cy = (l + r) / 2, (t + b) / 2
        self.pan = [w / 2 - (ox0 + cx * self.zoom), h / 2 - (oy0 + cy * self.zoom)]
        self.redraw()

    # ------------------------------------------------------------- drawing
    def add_image(self, pil: Image.Image, wx, wy, tags=()):
        """Draw a PIL image whose top-left is at world (wx, wy), scaled by zoom."""
        if self.zoom != 1:
            size = (max(1, int(pil.width * self.zoom)), max(1, int(pil.height * self.zoom)))
            pil = pil.resize(size, Image.NEAREST if self.zoom >= 1 else Image.BILINEAR)
        ph = ImageTk.PhotoImage(pil)
        self._images.append(ph)
        sx, sy = self.to_screen(wx, wy)
        return self.canvas.create_image(sx, sy, image=ph, anchor='nw', tags=tags)

    def rect(self, l, t, r, b, **kw):
        x0, y0 = self.to_screen(l, t)
        x1, y1 = self.to_screen(r, b)
        return self.canvas.create_rectangle(x0, y0, x1, y1, **kw)

    def text(self, wx, wy, text, **kw):
        sx, sy = self.to_screen(wx, wy)
        return self.canvas.create_text(sx, sy, text=text, **kw)

    def _draw_checker(self, w, h):
        cell = 16
        key = (w, h)
        if self._checker_cache is None or self._checker_cache[0] != key:
            img = Image.new('RGB', (w, h), T.CHECK_A)
            tile = Image.new('RGB', (cell * 2, cell * 2), T.CHECK_A)
            tile.paste(T.CHECK_B, (0, 0, cell, cell))
            tile.paste(T.CHECK_B, (cell, cell, cell * 2, cell * 2))
            for y in range(0, h, cell * 2):
                for x in range(0, w, cell * 2):
                    img.paste(tile, (x, y))
            self._checker_cache = (key, ImageTk.PhotoImage(img))
        self.canvas.create_image(0, 0, image=self._checker_cache[1], anchor='nw')

    def redraw(self):
        c = self.canvas
        c.delete('all')
        self._images = []
        w, h = max(c.winfo_width(), 50), max(c.winfo_height(), 50)
        if self.show_checker.get():
            self._draw_checker(w, h)
        ox, oy = self.origin()
        if self.show_grid.get():
            step = 8 * self.zoom
            if step >= 8:
                x = ox % step
                while x < w:
                    c.create_line(x, 0, x, h, fill='#2C3035' if (x - ox) % (step * 4) else '#353A40')
                    x += step
                y = oy % step
                while y < h:
                    c.create_line(0, y, w, y, fill='#2C3035' if (y - oy) % (step * 4) else '#353A40')
                    y += step
        c.create_line(0, oy, w, oy, fill='#55606B')
        c.create_line(ox, 0, ox, h, fill='#55606B')
        if self.on_draw:
            self.on_draw(self)
        c.create_oval(ox - 3, oy - 3, ox + 3, oy + 3, outline=T.ACCENT)
        self.zoom_label.configure(text=f'{self.zoom:g}×')

    # --------------------------------------------------------------- input
    def _wheel(self, e):
        wx, wy = self.to_world(e.x, e.y)
        i = ZOOMS.index(_snap(self.zoom))
        new = ZOOMS[max(0, min(len(ZOOMS) - 1, i + (1 if e.delta > 0 else -1)))]
        if new == self.zoom:
            return
        self.zoom = new
        sx, sy = self.to_screen(wx, wy)
        self.pan[0] += e.x - sx
        self.pan[1] += e.y - sy
        self.redraw()

    def _set_space(self, on):
        self._space = on
        self.canvas.configure(cursor='fleur' if on else 'crosshair')

    def _pan_begin(self, e):
        self._pan_start = (e.x, e.y, self.pan[0], self.pan[1])

    def _pan_move(self, e):
        if self._pan_start:
            x0, y0, px, py = self._pan_start
            self.pan = [px + e.x - x0, py + e.y - y0]
            self.redraw()

    def _pan_end(self, _e):
        self._pan_start = None

    def _press(self, e):
        self.canvas.focus_set()
        if self._space:
            self._pan_begin(e)
            return
        if self.on_press:
            self.on_press(*self.to_world(e.x, e.y), e)

    def _move(self, e):
        if self._space and self._pan_start:
            self._pan_move(e)
            return
        if self.on_drag:
            self.on_drag(*self.to_world(e.x, e.y), e)

    def _release(self, e):
        if self._pan_start:
            self._pan_end(e)
            return
        if self.on_release:
            self.on_release(*self.to_world(e.x, e.y), e)
