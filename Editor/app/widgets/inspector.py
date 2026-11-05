"""Property-grid inspector (Unity Inspector / Godot Inspector / Unreal Details).

Sections hold labelled rows; :meth:`Inspector.clear` rebuilds the panel for
the current selection.  Fields are bound to ``tk.Variable`` objects owned by
the caller so it can read edits back on Apply.
"""
from __future__ import annotations

import tkinter as tk
from tkinter import ttk

from .. import theme as T


class Inspector(ttk.Frame):
    def __init__(self, parent, **kw):
        super().__init__(parent, **kw)
        self.canvas = tk.Canvas(self, bg=T.PANEL, highlightthickness=0, bd=0)
        self.bar = ttk.Scrollbar(self, orient='vertical', command=self.canvas.yview)
        self.inner = ttk.Frame(self.canvas)
        self.inner.bind('<Configure>', lambda e: self.canvas.configure(scrollregion=self.canvas.bbox('all')))
        self._win = self.canvas.create_window(0, 0, window=self.inner, anchor='nw')
        self.canvas.bind('<Configure>', lambda e: self.canvas.itemconfigure(self._win, width=e.width))
        self.canvas.configure(yscrollcommand=self.bar.set)
        self.canvas.pack(side='left', fill='both', expand=True)
        self.bar.pack(side='right', fill='y')
        self.canvas.bind('<Enter>', lambda e: self.canvas.bind_all('<MouseWheel>', self._wheel))
        self.canvas.bind('<Leave>', lambda e: self.canvas.unbind_all('<MouseWheel>'))
        self._grid = None
        self._row = 0

    def _wheel(self, e):
        self.canvas.yview_scroll(-1 if e.delta > 0 else 1, 'units')

    def clear(self):
        for w in self.inner.winfo_children():
            w.destroy()
        self._grid = None
        self._row = 0

    def section(self, title, note=None):
        ttk.Label(self.inner, text=title.upper(), style='Section.TLabel').pack(fill='x', padx=10, pady=(8, 0))
        tk.Frame(self.inner, height=1, bg=T.LINE).pack(fill='x', padx=10)
        if note:
            ttk.Label(self.inner, text=note, style='Muted.TLabel', wraplength=int(280 * T.ui_scale(self)),
                      justify='left').pack(fill='x', padx=10, pady=(3, 0))
        self._grid = ttk.Frame(self.inner)
        self._grid.pack(fill='x', padx=10, pady=4)
        self._grid.columnconfigure(1, weight=1)
        self._row = 0
        return self._grid

    def _label(self, text, tip=None):
        lab = ttk.Label(self._grid, text=text, style='Muted.TLabel')
        lab.grid(row=self._row, column=0, sticky='w', padx=(0, 8), pady=2)
        if tip:
            T.Tooltip(lab, tip)

    def value(self, label, text, tip=None, colour=None):
        self._label(label, tip)
        v = ttk.Label(self._grid, text=text, style='Value.TLabel', wraplength=int(220 * T.ui_scale(self)),
                      justify='left')
        if colour:
            v.configure(foreground=colour)
        v.grid(row=self._row, column=1, sticky='w', pady=2)
        self._row += 1
        return v

    def evidence(self, label, grade, note=None):
        """Evidence badge row: Direct / Cross-checked / Inferred / Unknown (tooltip = note)."""
        return self.value(label, f'● {grade}' + (f' — {note}' if note else ''),
                          tip=note, colour=T.EVIDENCE.get(grade, T.MUTED))

    def entry(self, label, var, tip=None, width=14, on_return=None):
        self._label(label, tip)
        e = ttk.Entry(self._grid, textvariable=var, width=width, font=T.MONO)
        e.grid(row=self._row, column=1, sticky='ew', pady=2)
        if on_return:
            e.bind('<Return>', lambda _e: on_return())
        self._row += 1
        return e

    def spin(self, label, var, lo, hi, tip=None, on_change=None):
        self._label(label, tip)
        s = ttk.Spinbox(self._grid, from_=lo, to=hi, textvariable=var, width=8, font=T.MONO,
                        command=on_change)
        s.grid(row=self._row, column=1, sticky='w', pady=2)
        if on_change:
            s.bind('<Return>', lambda _e: on_change())
        self._row += 1
        return s

    def check(self, label, var, tip=None, on_change=None):
        self._label(label, tip)
        c = ttk.Checkbutton(self._grid, variable=var, command=on_change)
        c.grid(row=self._row, column=1, sticky='w', pady=2)
        self._row += 1
        return c

    def combo(self, label, var, values, tip=None, on_change=None, width=22):
        self._label(label, tip)
        c = ttk.Combobox(self._grid, textvariable=var, values=values, state='readonly', width=width)
        c.grid(row=self._row, column=1, sticky='ew', pady=2)
        if on_change:
            c.bind('<<ComboboxSelected>>', lambda _e: on_change())
        self._row += 1
        return c

    def buttons(self, *specs):
        row = ttk.Frame(self.inner)
        row.pack(fill='x', padx=10, pady=(2, 6))
        out = []
        for spec in specs:
            text, cmd = spec[0], spec[1]
            style = spec[2] if len(spec) > 2 else 'TButton'
            b = ttk.Button(row, text=text, command=cmd, style=style)
            b.pack(side='left', padx=(0, 4))
            out.append(b)
        return out

    def widget(self, factory):
        """Place an arbitrary widget built by ``factory(parent)`` full-width."""
        w = factory(self.inner)
        w.pack(fill='x', padx=10, pady=4)
        return w

    def text(self, text):
        ttk.Label(self.inner, text=text, style='Muted.TLabel', wraplength=int(290 * T.ui_scale(self)),
                  justify='left').pack(fill='x', padx=10, pady=(2, 4))
