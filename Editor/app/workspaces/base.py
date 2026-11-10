"""Common shell for the JUS Studio suite workspaces (Koma / Level / Screen).

Every workspace follows the same engine-editor layout used by the Move Lab
(Unity / Godot / Unreal 2D editors):

    ┌ browser (shell's left dock) ┬ viewport ───────────┬ layers / inspector ┐
    │  assets of this workspace   │  zoom/pan canvas    │  property grid     │
    │                             ├─────────────────────┴────────────────────┤
    │                             │ bottom dock: tabs (frames, tiles, raw,   │
    │                             │ problems)                                │
    └─────────────────────────────┴──────────────────────────────────────────┘

The browser frame lives in the shell's left "Project" dock and is swapped in
when the workspace is shown, so the shell owns one consistent resource
column.  Domain parsing stays in ``jus_formats`` / ``jus_package``; a
workspace only holds view state, its undo snapshots and Apply.
"""
from __future__ import annotations

import tkinter as tk
from tkinter import ttk

from .. import theme as T
from ..widgets import Inspector, Viewport
from ..widgets.tabs import TabbedPanel, TextLog


class SuiteWorkspace:
    key = ''
    title = ''
    browser_title = 'Assets'

    def __init__(self, app, host, browser_host, k):
        self.app = app
        self.k = k
        self.browser = ttk.Frame(browser_host)
        self.frame = self.build(host)
        self.build_browser(self.browser)
        self._sashed = False

    # -- layout helpers --------------------------------------------------
    def standard_layout(self, host, *, right_title='Inspector', layers=False, bottom_ratio=0.68,
                        inspector_tabs=False, with_bottom=True):
        """viewport | (layers over) inspector, with a tabbed bottom dock."""
        ws = ttk.PanedWindow(host, orient='vertical')
        upper = ttk.PanedWindow(ws, orient='horizontal')
        ws.add(upper, weight=3)
        self.view_panel = T.Panel(upper, 'Viewport')
        upper.add(self.view_panel, weight=1)
        right = ttk.PanedWindow(upper, orient='vertical')
        upper.add(right, weight=0)
        self.layers_panel = None
        if layers:
            self.layers_panel = T.Panel(right, 'Layers')
            right.add(self.layers_panel, weight=1)
        ins = T.Panel(right, right_title)
        right.add(ins, weight=2)
        if inspector_tabs:
            self.right_tabs = ttk.Notebook(ins.body)
            self.right_tabs.pack(fill='both', expand=True)
            self.right_mission_page = ttk.Frame(self.right_tabs)
            stage_page = ttk.Frame(self.right_tabs)
            self.right_tabs.add(self.right_mission_page, text='Mission / Rewards')
            self.right_tabs.add(stage_page, text='Stage / Map')
            self.inspector = Inspector(stage_page)
        else:
            self.inspector = Inspector(ins.body)
        self.inspector.pack(fill='both', expand=True)
        self.bottom = TabbedPanel(ws) if with_bottom else None
        if self.bottom is not None:
            ws.add(self.bottom, weight=1)
        self._ws, self._upper, self._right = ws, upper, right
        self._bottom_ratio = bottom_ratio
        return ws

    def make_viewport(self, **kw):
        v = Viewport(self.view_panel.body, **kw)
        v.pack(fill='both', expand=True)
        return v

    def problems_page(self, title='Problems'):
        page = self.bottom.add('problems', title)
        log = TextLog(page)
        log.pack(fill='both', expand=True, padx=4, pady=4)
        return log

    def init_sashes(self):
        if getattr(self.app, '_closing', False):
            return
        try:
            self.frame.update_idletasks()
            w = self._upper.winfo_width()
            h = self._ws.winfo_height()
            if w < 400 or h < 200:
                self.app.after(150, self.init_sashes)
                return
            self._upper.sashpos(0, max(int(420 * self.k), w - int(360 * self.k)))
            if self.bottom is not None:
                self._ws.sashpos(0, int(h * self._bottom_ratio))
            if self.layers_panel is not None:
                self._right.sashpos(0, int(self._right.winfo_height() * 0.42))
        except tk.TclError:
            pass

    def browser_tree(self, parent, columns=(), widths=(), headings=None):
        row = ttk.Frame(parent)
        row.pack(fill='x', padx=6, pady=6)
        self.filter_var = tk.StringVar()
        e = ttk.Entry(row, textvariable=self.filter_var)
        e.pack(fill='x')
        T.Tooltip(e, 'Filter')
        tf = ttk.Frame(parent)
        tf.pack(fill='both', expand=True, padx=(6, 0), pady=(0, 6))
        t = ttk.Treeview(tf, columns=columns, show='tree headings' if columns else 'tree', selectmode='browse')
        t.heading('#0', text='Name')
        t.column('#0', width=int(150 * self.k), stretch=True)
        for i, (c, w) in enumerate(zip(columns, widths)):
            t.heading(c, text=headings[i] if headings else c)
            t.column(c, width=int(w * self.k), stretch=False, anchor='e')
        sb = ttk.Scrollbar(tf, command=t.yview)
        t.configure(yscrollcommand=sb.set)
        t.pack(side='left', fill='both', expand=True)
        sb.pack(side='right', fill='y')
        return t

    # -- hooks -----------------------------------------------------------
    def build(self, host):
        raise NotImplementedError

    def build_browser(self, parent):
        pass

    def on_root(self):
        """The data root changed (or was opened)."""

    def on_show(self):
        if not self._sashed:
            self._sashed = True
            self.app.after(60, self.init_sashes)

    def doc(self) -> str | None:
        """Undo document key for the current selection (None = nothing editable)."""
        return None

    def snapshot(self):
        return None

    def restore(self, snap):
        pass

    def apply(self):
        self.app.status.set(f'{self.title}: nothing to apply (read-only workspace).')

    @property
    def dirty(self) -> bool:
        return False

    def checkpoint(self, label):
        d = self.doc()
        s = self.snapshot()
        if d and s is not None:
            self.app.history.push(d, label, s)
            self.app._update_undo_label()
