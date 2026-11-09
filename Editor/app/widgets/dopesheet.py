"""Dope-sheet timeline (Unity Animation window / Godot AnimationPlayer style).

Layout::

    +--------------------+------------------------------------------+
    | (header column)    | ruler  0    4    8   12 ...  ▼ playhead   |
    +--------------------+------------------------------------------+
    | ▾ SP01             | group summary keys                        |
    |     BoundsIndex    | ◆   ◆   ◆                                  |
    |     NoteTrack      | ⚑       ⚑⚑                                 |
    | ▾ Effects          |                                          |
    |     ↳ 04C150 ...   | ◆ ◆ ◆ (read-only, green)                   |
    +--------------------+------------------------------------------+

The widget only draws rows supplied by the controller and reports user
intent through callbacks; it never mutates ALMT data itself.

Row dict keys: ``id`` (hashable, None for group headers), ``label``, ``kind``
('group' | 'track' | 'static' | 'events' | 'virtual'), ``keys`` (list of
(tick, payload) tuples), ``colour``, ``editable`` (bool), ``indent`` (int),
``collapsed`` (group only), ``arcs`` (list of (from_tick, to_tick, style)),
``tooltip`` (callable(tick, payload) -> str) and ``flags`` (event colours).
"""
from __future__ import annotations

import tkinter as tk
from tkinter import ttk

from .. import theme as T


class DopeSheet(tk.Frame):
    HEADER_W = 230
    RULER_H = 26
    ROW_H = 20

    def __init__(self, parent, *, on_scrub=None, on_select=None, on_move_key=None,
                 on_context=None, on_activate=None, on_toggle_group=None, **kw):
        super().__init__(parent, bg=T.PANEL, **kw)
        k = T.ui_scale(self)
        self.HEADER_W = int(self.HEADER_W * k)
        self.RULER_H = int(self.RULER_H * k)
        self.ROW_H = int(self.ROW_H * k)
        self.on_scrub = on_scrub
        self.on_select = on_select
        self.on_move_key = on_move_key
        self.on_context = on_context
        self.on_activate = on_activate
        self.on_toggle_group = on_toggle_group
        self.rows: list[dict] = []
        self.duration = 0
        self.tick = 0
        self.px_per_tick = 10.0 * k
        self.selected: tuple | None = None          # (row_id, tick)
        self._drag = None
        self._hover = None
        self.canvas = tk.Canvas(self, bg=T.CANVAS_BG, highlightthickness=0, bd=0)
        self.vbar = ttk.Scrollbar(self, orient='vertical', command=self._yview)
        self.hbar = ttk.Scrollbar(self, orient='horizontal', command=self._xview)
        self.canvas.grid(row=0, column=0, sticky='nsew')
        self.vbar.grid(row=0, column=1, sticky='ns')
        self.hbar.grid(row=1, column=0, sticky='ew')
        self.grid_rowconfigure(0, weight=1)
        self.grid_columnconfigure(0, weight=1)
        self.xoff = 0
        self.yoff = 0
        c = self.canvas
        c.bind('<Configure>', lambda e: self.redraw())
        c.bind('<Button-1>', self._press)
        c.bind('<B1-Motion>', self._motion)
        c.bind('<ButtonRelease-1>', self._release)
        c.bind('<Double-Button-1>', self._double)
        c.bind('<Button-3>', self._context)
        c.bind('<Motion>', self._hover_motion)
        c.bind('<Leave>', lambda e: self._set_hover(None))
        c.bind('<MouseWheel>', self._wheel)
        c.bind('<Shift-MouseWheel>', self._hwheel)
        c.bind('<Control-MouseWheel>', self._zoom_wheel)
        self._tip = None

    # ------------------------------------------------------------------ model
    def set_data(self, rows: list[dict], duration: int):
        self.rows = rows
        self.duration = max(0, duration)
        if self.selected and not any(r.get('id') == self.selected[0] for r in rows):
            self.selected = None
        self._clamp_scroll()
        self.redraw()

    def set_tick(self, tick: int):
        self.tick = tick
        self._draw_playhead()
        self._ensure_visible(tick)

    def set_zoom(self, px_per_tick: float):
        self.px_per_tick = max(2.0, min(48.0, px_per_tick))
        self._clamp_scroll()
        self.redraw()

    def select(self, row_id, tick):
        self.selected = (row_id, tick) if row_id is not None else None
        self.redraw()

    # ------------------------------------------------------------- geometry
    def tick_x(self, t):
        return self.HEADER_W + 12 + t * self.px_per_tick - self.xoff

    def x_tick(self, x):
        return round((x - self.HEADER_W - 12 + self.xoff) / self.px_per_tick)

    def row_y(self, i):
        return self.RULER_H + i * self.ROW_H - self.yoff

    def _content_width(self):
        last = max([self.duration] + [t for r in self.rows for t, _ in r.get('keys', [])])
        return int(24 + (last + 8) * self.px_per_tick)

    def _content_height(self):
        return len(self.rows) * self.ROW_H + 8

    def _clamp_scroll(self):
        vis_w = max(1, self.canvas.winfo_width() - self.HEADER_W)
        vis_h = max(1, self.canvas.winfo_height() - self.RULER_H)
        self.xoff = max(0, min(self.xoff, self._content_width() - vis_w))
        self.yoff = max(0, min(self.yoff, self._content_height() - vis_h))
        cw, ch = self._content_width(), self._content_height()
        self.hbar.set(self.xoff / cw if cw else 0, min(1.0, (self.xoff + vis_w) / cw) if cw else 1)
        self.vbar.set(self.yoff / ch if ch else 0, min(1.0, (self.yoff + vis_h) / ch) if ch else 1)

    def _xview(self, *args):
        cw = self._content_width()
        if args[0] == 'moveto':
            self.xoff = float(args[1]) * cw
        elif args[0] == 'scroll':
            self.xoff += int(args[1]) * (self.px_per_tick * 4 if args[2] == 'units' else
                                         self.canvas.winfo_width() * 0.8)
        self._clamp_scroll()
        self.redraw()

    def _yview(self, *args):
        ch = self._content_height()
        if args[0] == 'moveto':
            self.yoff = float(args[1]) * ch
        elif args[0] == 'scroll':
            self.yoff += int(args[1]) * (self.ROW_H if args[2] == 'units' else self.canvas.winfo_height() * 0.8)
        self._clamp_scroll()
        self.redraw()

    def _ensure_visible(self, tick):
        x = self.tick_x(tick)
        w = self.canvas.winfo_width()
        if x < self.HEADER_W + 10 or x > w - 10:
            self.xoff = max(0, tick * self.px_per_tick - (w - self.HEADER_W) / 2)
            self._clamp_scroll()
            self.redraw()

    # --------------------------------------------------------------- drawing
    def _grid_step(self):
        for step in (1, 2, 4, 5, 10, 20, 40, 50, 100):
            if step * self.px_per_tick >= 34:
                return step
        return 200

    def redraw(self):
        c = self.canvas
        c.delete('all')
        w, h = max(c.winfo_width(), 50), max(c.winfo_height(), 50)
        self._clamp_scroll()
        step = self._grid_step()
        # rows background
        for i, row in enumerate(self.rows):
            y = self.row_y(i)
            if y + self.ROW_H < self.RULER_H or y > h:
                continue
            group = row.get('kind') == 'group'
            bg = '#1F2328' if group else (T.CANVAS_BG if i % 2 else '#1A1D21')
            if self.selected and row.get('id') == self.selected[0] and row.get('id') is not None:
                bg = '#1F2C3B'
            c.create_rectangle(self.HEADER_W, y, w, y + self.ROW_H, fill=bg, outline='')
        # end-of-move shading and grid
        end_x = self.tick_x(self.duration)
        if end_x < w:
            c.create_rectangle(max(end_x, self.HEADER_W), self.RULER_H, w, h, fill='#121416', outline='',
                               stipple='gray50')
        first = max(0, self.x_tick(self.HEADER_W) // step * step)
        t = first
        while True:
            x = self.tick_x(t)
            if x > w:
                break
            if x >= self.HEADER_W:
                major = t % (step * 4) == 0
                c.create_line(x, self.RULER_H, x, h, fill='#2A3036' if major else '#22272C')
            t += step
        # keys, arcs
        for i, row in enumerate(self.rows):
            y = self.row_y(i)
            if y + self.ROW_H < self.RULER_H or y > h:
                continue
            self._draw_row_keys(row, y, w)
        for i, row in enumerate(self.rows):
            y = self.row_y(i)
            if y + self.ROW_H < self.RULER_H - 30 or y > h + 30:
                continue
            for a, b, style in row.get('arcs', []):
                self._draw_arc(a, b, y, style)
        # header column (drawn over keys)
        c.create_rectangle(0, self.RULER_H, self.HEADER_W, h, fill=T.PANEL, outline='')
        for i, row in enumerate(self.rows):
            y = self.row_y(i)
            if y + self.ROW_H < self.RULER_H or y > h:
                continue
            self._draw_header(row, y)
        c.create_line(self.HEADER_W, 0, self.HEADER_W, h, fill=T.LINE)
        # ruler
        c.create_rectangle(0, 0, w, self.RULER_H, fill=T.PANEL2, outline='')
        c.create_text(10, self.RULER_H // 2, anchor='w', text=f'{self.duration} ticks', fill=T.MUTED,
                      font=T.UI_FONT)
        t = first
        while True:
            x = self.tick_x(t)
            if x > w:
                break
            if x >= self.HEADER_W:
                major = t % (step * 4) == 0 or step >= 10
                c.create_line(x, self.RULER_H - (9 if major else 5), x, self.RULER_H, fill=T.MUTED)
                if major or step * self.px_per_tick >= 50:
                    c.create_text(x + 3, 3, anchor='nw', text=str(t), fill=T.FG if major else T.MUTED,
                                  font=T.MONO_SMALL)
            t += step
        if self.HEADER_W <= end_x <= w:
            c.create_line(end_x, 0, end_x, h, fill=T.WARN, dash=(3, 3))
        c.create_line(0, self.RULER_H, w, self.RULER_H, fill=T.LINE)
        self._draw_playhead()

    def _draw_header(self, row, y):
        c = self.canvas
        kind = row.get('kind')
        indent = row.get('indent', 0) * 14
        mid = y + self.ROW_H / 2
        sel = self.selected and row.get('id') == self.selected[0] and row.get('id') is not None
        if kind == 'group':
            c.create_rectangle(0, y, self.HEADER_W, y + self.ROW_H,
                               fill=T.SELECT if sel else '#2B3036', outline='')
            arrow = '▸' if row.get('collapsed') else '▾'
            c.create_text(6 + indent, mid, anchor='w', text=arrow, fill=T.MUTED, font=T.UI_FONT)
            c.create_text(20 + indent, mid, anchor='w', text=row['label'], fill=T.FG, font=T.UI_BOLD)
            return
        sel = self.selected and row.get('id') == self.selected[0] and row.get('id') is not None
        if sel:
            c.create_rectangle(0, y, self.HEADER_W, y + self.ROW_H, fill=T.SELECT, outline='')
        colour = row.get('colour', T.FG)
        c.create_rectangle(10 + indent, mid - 4, 16 + indent, mid + 4, fill=colour, outline='')
        label = row['label']
        maxch = max(6, int((self.HEADER_W - 26 - indent) / 7))
        if len(label) > maxch:
            label = label[:maxch - 1] + '…'
        fg = T.FG if row.get('editable', True) else T.MUTED
        c.create_text(22 + indent, mid, anchor='w', text=label, fill=fg, font=T.UI_FONT)
        badge = row.get('badge')
        if badge:
            c.create_text(self.HEADER_W - 6, mid, anchor='e', text=badge, fill=T.MUTED, font=T.MONO_SMALL)

    def _draw_row_keys(self, row, y, w):
        c = self.canvas
        mid = y + self.ROW_H / 2
        kind = row.get('kind')
        colour = row.get('colour', T.ACCENT)
        r = max(4, self.ROW_H * 0.26)
        if kind == 'static':
            x0, x1 = self.tick_x(0), self.tick_x(self.duration)
            c.create_rectangle(max(x0, self.HEADER_W), mid - 2, x1, mid + 2, fill=colour, outline='',
                               stipple='gray50')
            return
        # clip bars (spawned sub-animations), drawn under the keys
        for a, b, col, text in row.get('spans', []):
            xa, xb = self.tick_x(a), self.tick_x(b)
            if xb < self.HEADER_W or xa > w:
                continue
            x0 = max(xa, self.HEADER_W)
            c.create_rectangle(x0, mid - r + 1, max(x0 + 2, xb), mid + r - 1, fill=col, outline='',
                               stipple='gray50')
            if text and xb - x0 > 40:
                c.create_text(x0 + r + 4, mid, anchor='w', text=text, fill=T.FG, font=T.MONO_SMALL)
        keys = row.get('keys', [])
        # hold bars between consecutive keys (step interpolation)
        if kind == 'track' and len(keys) > 1:
            ticks = sorted({t for t, _ in keys})
            for a, b in zip(ticks, ticks[1:]):
                xa, xb = self.tick_x(a), self.tick_x(b)
                if xb < self.HEADER_W or xa > w:
                    continue
                c.create_line(max(xa, self.HEADER_W), mid, xb, mid, fill='#3A4148', width=2)
        drawn = set()
        flags = row.get('flags') or {}
        for t, _payload in keys:
            if t in drawn and kind != 'events':
                continue
            drawn.add(t)
            x = self.tick_x(t)
            if x < self.HEADER_W - r or x > w + r:
                continue
            selected = self.selected == (row.get('id'), t)
            fill = '#FFFFFF' if selected else colour
            outline = T.ACCENT if selected else '#0E1013'
            if kind == 'group':
                c.create_rectangle(x - r * 0.6, mid - r * 0.6, x + r * 0.6, mid + r * 0.6, fill='#6C7680',
                                   outline='')
            elif kind == 'events':
                cols = flags.get(t, [colour])
                for j, col in enumerate(cols[:4]):
                    yy = mid - r + j * 2
                    c.create_line(x, mid + r, x, yy - r, fill=fill if selected else col, width=2)
                    c.create_polygon(x, yy - r, x + r * 1.5, yy - r * 0.4, x, yy + r * 0.2,
                                     fill=fill if selected else col, outline='')
                if len(cols) > 1:
                    c.create_text(x + r * 1.7, mid + 1, anchor='w', text=str(len(cols)), fill=T.MUTED,
                                  font=T.MONO_SMALL)
            else:
                c.create_polygon(x, mid - r, x + r, mid, x, mid + r, x - r, mid, fill=fill, outline=outline,
                                 width=1)
        for t, text, col in row.get('labels', []):
            x = self.tick_x(t)
            if self.HEADER_W <= x <= w:
                c.create_text(x + r + 2, y + 1, anchor='nw', text=text, fill=col, font=T.MONO_SMALL)

    def _draw_arc(self, a, b, y, style):
        c = self.canvas
        xa, xb = self.tick_x(a), self.tick_x(b) if b is not None else None
        top = y + 2
        if style == 'missing' or xb is None:
            c.create_text(xa + 6, y + self.ROW_H / 2, anchor='w', text='⚠ no label', fill=T.BAD,
                          font=T.MONO_SMALL)
            return
        col = T.WARN if style == 'jump' else '#C9A0FF'
        dash = () if style == 'jump' else (4, 3)
        mid_y = top - 6 if style == 'jump' else y + self.ROW_H - 2
        c.create_line(xa, y + self.ROW_H / 2, xa, mid_y, xb, mid_y, xb, y + self.ROW_H / 2,
                      fill=col, width=2, dash=dash, arrow=tk.LAST, arrowshape=(7, 8, 3))

    def _draw_playhead(self):
        c = self.canvas
        c.delete('playhead')
        x = self.tick_x(self.tick)
        if x < self.HEADER_W:
            return
        h = max(c.winfo_height(), 50)
        c.create_line(x, self.RULER_H, x, h, fill=T.ACCENT, width=2, tags='playhead')
        c.create_polygon(x - 6, 2, x + 6, 2, x + 6, self.RULER_H - 9, x, self.RULER_H - 2,
                         x - 6, self.RULER_H - 9, fill=T.ACCENT, outline='', tags='playhead')
        c.create_text(x, 8, text=str(self.tick), fill='#0B1220', font=T.MONO_SMALL, tags='playhead')

    # ------------------------------------------------------------ hit tests
    def _row_at(self, y):
        if y < self.RULER_H:
            return None
        i = int((y - self.RULER_H + self.yoff) // self.ROW_H)
        return i if 0 <= i < len(self.rows) else None

    def _key_at(self, x, y):
        i = self._row_at(y)
        if i is None or x < self.HEADER_W:
            return None, None
        row = self.rows[i]
        best = None
        for t, payload in row.get('keys', []):
            d = abs(self.tick_x(t) - x)
            if d <= max(6, self.px_per_tick / 2) and (best is None or d < best[0]):
                best = (d, t, payload)
        return i, (best[1], best[2]) if best else None

    # -------------------------------------------------------------- events
    def _press(self, e):
        self.canvas.focus_set()
        if e.y < self.RULER_H and e.x >= self.HEADER_W:
            self._drag = ('scrub',)
            self._scrub(e.x)
            return
        i = self._row_at(e.y)
        if i is None:
            return
        row = self.rows[i]
        if e.x < self.HEADER_W:
            if (row.get('kind') == 'group' and self.on_toggle_group
                    and (e.x < 20 + row.get('indent', 0) * 14
                         or row.get('id', (None,))[0] != 'node')):
                self.on_toggle_group(row)
                return
            self.selected = (row.get('id'), None)
            if self.on_select:
                self.on_select(row, None, None)
            self.redraw()
            return
        _, hit = self._key_at(e.x, e.y)
        if hit:
            t, payload = hit
            self.selected = (row.get('id'), t)
            if self.on_select:
                self.on_select(row, t, payload)
            self.redraw()
            if row.get('editable') and row.get('kind') in ('track', 'events'):
                self._drag = ('key', row, t, t)
            return
        self.selected = (row.get('id'), None)
        if self.on_select:
            self.on_select(row, None, None)
        self._drag = ('scrub',)
        self._scrub(e.x)

    def _motion(self, e):
        if not self._drag:
            return
        if self._drag[0] == 'scrub':
            self._scrub(e.x)
        elif self._drag[0] == 'key':
            _, row, start, cur = self._drag
            t = max(0, min(0xFFFE, self.x_tick(e.x)))
            if t != cur:
                self._drag = ('key', row, start, t)
                self.redraw()
                x = self.tick_x(t)
                y = self.row_y(self.rows.index(row)) + self.ROW_H / 2
                self.canvas.create_oval(x - 5, y - 5, x + 5, y + 5, outline=T.ACCENT, width=2)
                self.canvas.create_text(x, y - 12, text=f'{start}→{t}', fill=T.ACCENT, font=T.MONO_SMALL)

    def _release(self, e):
        drag, self._drag = self._drag, None
        if drag and drag[0] == 'key' and drag[2] != drag[3] and self.on_move_key:
            _, row, start, end = drag
            if self.on_move_key(row, start, end):
                self.selected = (row.get('id'), end)
        self.redraw()

    def _scrub(self, x):
        t = max(0, min(self.duration, self.x_tick(x)))
        if self.on_scrub:
            self.on_scrub(t)

    def _double(self, e):
        i = self._row_at(e.y)
        if i is None or not self.on_activate:
            return
        _, hit = self._key_at(e.x, e.y)
        self.on_activate(self.rows[i], hit[0] if hit else None)

    def _context(self, e):
        if not self.on_context:
            return
        i = self._row_at(e.y)
        row = self.rows[i] if i is not None else None
        tick = max(0, self.x_tick(e.x)) if e.x >= self.HEADER_W else None
        _, hit = self._key_at(e.x, e.y)
        if hit and row is not None:
            self.selected = (row.get('id'), hit[0])
            self.redraw()
        self.on_context(e, row, tick, hit[0] if hit else None)

    def _wheel(self, e):
        self.yoff -= (e.delta / 120) * self.ROW_H * 2
        self._clamp_scroll()
        self.redraw()

    def _hwheel(self, e):
        self.xoff -= (e.delta / 120) * self.px_per_tick * 6
        self._clamp_scroll()
        self.redraw()

    def _zoom_wheel(self, e):
        anchor_tick = (e.x - self.HEADER_W - 12 + self.xoff) / self.px_per_tick
        self.px_per_tick = max(2.0, min(48.0, self.px_per_tick * (1.15 if e.delta > 0 else 1 / 1.15)))
        self.xoff = anchor_tick * self.px_per_tick - (e.x - self.HEADER_W - 12)
        self._clamp_scroll()
        self.redraw()

    def _hover_motion(self, e):
        if self._drag:
            return
        i, hit = self._key_at(e.x, e.y)
        self._set_hover((i, hit[0], e.x_root, e.y_root) if hit else None, hit)

    def _set_hover(self, h, hit=None):
        if self._tip:
            self._tip.destroy()
            self._tip = None
        if not h:
            return
        i, t, xr, yr = h
        row = self.rows[i]
        fn = row.get('tooltip')
        text = fn(t, hit[1]) if fn else f'{row["label"]}  t={t}'
        if not text:
            return
        self._tip = tk.Toplevel(self)
        self._tip.wm_overrideredirect(True)
        self._tip.wm_geometry(f'+{xr + 14}+{yr + 12}')
        tk.Label(self._tip, text=text, bg='#11151A', fg=T.FG, font=T.MONO, justify='left', padx=6, pady=3,
                 relief='solid', bd=1).pack()
