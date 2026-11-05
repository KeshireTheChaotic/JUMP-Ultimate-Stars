"""Horizontal frame strip with thumbnails (Unreal Flipbook / Godot SpriteFrames style)."""
from __future__ import annotations

import tkinter as tk
from tkinter import ttk

from PIL import Image, ImageTk

from .. import theme as T


class Filmstrip(tk.Frame):
    def __init__(self, parent, *, thumb=64, on_select=None, on_context=None, **kw):
        super().__init__(parent, bg=T.PANEL, **kw)
        k = T.ui_scale(self)
        self.thumb = int(thumb * k)
        self.cell = self.thumb + int(12 * k)
        self.on_select = on_select
        self.on_context = on_context
        self.canvas = tk.Canvas(self, bg=T.PANEL, highlightthickness=0, height=self.cell + int(18 * k))
        self.bar = ttk.Scrollbar(self, orient='horizontal', command=self._xview)
        self.canvas.configure(xscrollcommand=self.bar.set)
        self.canvas.pack(fill='x', expand=True)
        self.bar.pack(fill='x')
        self.count = 0
        self.current = None
        self._images = {}
        self._provider = None
        self.canvas.bind('<Button-1>', self._click)
        self.canvas.bind('<Button-3>', self._right)
        self.canvas.bind('<MouseWheel>', lambda e: self.canvas.xview_scroll(-1 if e.delta > 0 else 1, 'units'))
        self.canvas.bind('<Configure>', lambda e: self._draw_visible())
        self.canvas.configure(xscrollincrement=self.cell)

    def _xview(self, *args):
        self.canvas.xview(*args)
        self._draw_visible()

    def set_frames(self, count, provider, current=None):
        """``provider(i) -> PIL.Image | None`` renders thumbnail ``i`` lazily."""
        self.count = count
        self._provider = provider
        self._images.clear()
        self.current = current
        self.canvas.configure(scrollregion=(0, 0, max(1, count * self.cell + 8), self.cell))
        self._draw_visible()

    def invalidate(self, i=None):
        if i is None:
            self._images.clear()
        else:
            self._images.pop(i, None)
        self._draw_visible()

    def set_current(self, i):
        self.current = i
        self._draw_visible()
        if i is not None:
            x0 = self.canvas.canvasx(0)
            w = self.canvas.winfo_width()
            x = i * self.cell
            if x < x0 or x + self.cell > x0 + w:
                total = max(1, self.count * self.cell)
                self.canvas.xview_moveto(max(0, (x - w / 2) / total))
                self._draw_visible()

    def _thumb(self, i):
        if i not in self._images:
            img = self._provider(i) if self._provider else None
            if img is not None:
                img = img.copy()
                img.thumbnail((self.thumb, self.thumb), Image.NEAREST)
                bg = Image.new('RGBA', (self.thumb, self.thumb), (0, 0, 0, 0))
                bg.alpha_composite(img, ((self.thumb - img.width) // 2, (self.thumb - img.height) // 2))
                self._images[i] = ImageTk.PhotoImage(bg)
            else:
                self._images[i] = None
        return self._images[i]

    def _draw_visible(self):
        c = self.canvas
        c.delete('all')
        if not self.count:
            c.create_text(10, self.cell // 2, anchor='w', text='No frames', fill=T.MUTED, font=T.UI_FONT)
            return
        x0 = int(c.canvasx(0))
        w = max(c.winfo_width(), 100)
        first = max(0, x0 // self.cell - 1)
        last = min(self.count, (x0 + w) // self.cell + 2)
        for i in range(first, last):
            x = i * self.cell + 4
            cur = i == self.current
            c.create_rectangle(x, 4, x + self.cell - 6, self.cell + 12, fill='#1B1E22' if not cur else '#22364D',
                               outline=T.ACCENT if cur else T.LINE, width=2 if cur else 1)
            ph = self._thumb(i)
            if ph is not None:
                c.create_image(x + (self.cell - 6) // 2, 4 + self.thumb // 2 + 3, image=ph)
            else:
                c.create_text(x + (self.cell - 6) // 2, 4 + self.thumb // 2, text='empty', fill=T.MUTED,
                              font=T.MONO_SMALL)
            c.create_text(x + 4, self.cell + 10, anchor='sw', text=str(i), fill=T.FG if cur else T.MUTED,
                          font=T.MONO_SMALL)

    def _index_at(self, x):
        i = int(self.canvas.canvasx(x) // self.cell)
        return i if 0 <= i < self.count else None

    def _click(self, e):
        i = self._index_at(e.x)
        if i is not None and self.on_select:
            self.on_select(i)

    def _right(self, e):
        i = self._index_at(e.x)
        if i is not None and self.on_select:
            self.on_select(i)
        if self.on_context:
            self.on_context(e, i)
