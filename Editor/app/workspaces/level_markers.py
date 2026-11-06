"""Stage-marker dock for the Level workspace.

Edits coordinate fields verified in stagephysics.parse_mob; no opaque trigger
logic, item tables or archive structure is re-encoded.
"""
from __future__ import annotations

import tkinter as tk
from tkinter import messagebox, ttk

from jus_formats import stageauthoring, stagephysics

from .. import theme as T


class LevelMarkersMixin:
    def _build_marker_ribbon(self, key, title, kinds):
        page = self.bottom.add(key, title)
        bar = ttk.Frame(page)
        bar.pack(fill='x', padx=6, pady=4)
        kind = tk.StringVar(value=kinds[0])
        x, y = tk.StringVar(), tk.StringVar()
        ttk.Label(bar, text='Records').pack(side='left')
        choice = ttk.Combobox(bar, textvariable=kind, values=kinds, width=11,
                              state='readonly')
        choice.pack(side='left', padx=(3, 10))
        choice.bind('<<ComboboxSelected>>', lambda _e, k=key: self._refresh_marker_ribbon(k))
        ttk.Label(bar, text='X').pack(side='left')
        ttk.Entry(bar, textvariable=x, width=12).pack(side='left', padx=(2, 6))
        ttk.Label(bar, text='Y').pack(side='left')
        ttk.Entry(bar, textvariable=y, width=12).pack(side='left', padx=(2, 6))
        ttk.Button(bar, text='Move marker',
                   command=lambda k=key: self._edit_marker(k)).pack(side='left', padx=3)
        ttk.Button(bar, text='Frame',
                   command=lambda k=key: self._frame_marker(k)).pack(side='left', padx=3)
        ttk.Label(page, text='Verified XY fields only. Trigger rules, item probabilities '
                  'and record counts are preserved.', style='Toolbar.TLabel').pack(fill='x', padx=8)
        frame = ttk.Frame(page)
        frame.pack(fill='both', expand=True, padx=6, pady=(3, 5))
        tree = ttk.Treeview(frame, columns=('name', 'x', 'y'),
                            show='tree headings', height=5, selectmode='browse')
        for col, label, width in (('#0', '#', 48), ('name', 'Type', 200),
                                  ('x', 'X (px)', 120), ('y', 'Y (px)', 120)):
            tree.heading(col, text=label)
            tree.column(col, width=int(width * self.k), stretch=col == 'name')
        scroll = ttk.Scrollbar(frame, orient='vertical', command=tree.yview)
        tree.configure(yscrollcommand=scroll.set)
        tree.pack(side='left', fill='both', expand=True)
        scroll.pack(side='right', fill='y')
        tree.bind('<<TreeviewSelect>>', lambda _e, k=key: self._marker_selected(k))
        self._ribbons[key] = {'kind': kind, 'x': x, 'y': y, 'tree': tree}

    def _refresh_markers(self):
        for key in self._ribbons:
            self._refresh_marker_ribbon(key)

    def _refresh_marker_ribbon(self, key):
        panel = self._ribbons[key]
        tree = panel['tree']
        previous = tree.selection()
        tree.delete(*tree.get_children())
        if self._stage_mob is None:
            panel['x'].set('')
            panel['y'].set('')
            return
        for i, name, x, y in stageauthoring.point_rows(self._stage_mob, panel['kind'].get()):
            tree.insert('', 'end', iid=f'pt:{i}', text=str(i), values=(name, x, y))
        for iid in previous:
            if tree.exists(iid):
                tree.selection_set(iid)
                break

    def _marker_selected(self, key):
        panel = self._ribbons[key]
        selected = panel['tree'].selection()
        if not selected or self._stage_mob is None:
            return
        i = int(selected[0][3:])
        rows = stageauthoring.point_rows(self._stage_mob, panel['kind'].get())
        if i >= len(rows):
            return
        _, _, x, y = rows[i]
        panel['x'].set(x)
        panel['y'].set(y)
        self._active_marker = (panel['kind'].get(), i)
        self.view.redraw()

    def _edit_marker(self, key):
        if self._stage_mob is None or not self._mob_working:
            self.app.status.set('No decoded stage .mob marker data available.')
            return
        panel = self._ribbons[key]
        selected = panel['tree'].selection()
        if not selected:
            self.app.status.set('Select one stage marker in the bottom ribbon.')
            return
        kind, index = panel['kind'].get(), int(selected[0][3:])
        try:
            patched = stageauthoring.patch_point(
                self._mob_working, kind, index, panel['x'].get(), panel['y'].get())
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Stage marker coordinates', str(exc))
            return
        if patched == self._mob_working:
            return
        self.checkpoint(f'move {kind} marker {index}')
        self._mob_working = patched
        self._stage_mob = stagephysics.parse_mob(patched)
        self._stage_frame_cache.clear()
        self._preview_changed(redraw=False)
        self._refresh_markers()
        self.view.redraw()
        self.app.update_dirty()
        self.app.status.set(f'{kind} #{index} moved; Apply and Save to write stage .mob.')

    def _frame_marker(self, key):
        panel = self._ribbons[key]
        if not panel['tree'].selection():
            return
        try:
            x, y = float(panel['x'].get()), float(panel['y'].get())
        except ValueError:
            return
        self.view.frame_rect((x - 96, y - 72, x + 96, y + 72))

    def _draw_marker_anchors(self, vp):
        if not self.show_markers.get() or self._stage_mob is None:
            return
        for kind, colour in (('floor', '#72BBF7'), ('grip', '#8EE4EF'),
                             ('item', '#9FEAB0'), ('symbol', '#F4C673'),
                             ('gimmick', '#F0989A')):
            for index, _label, px, py in stageauthoring.point_rows(self._stage_mob, kind):
                x, y = float(px), float(py)
                selected = self._active_marker == (kind, index)
                rad = 5 if selected else 2
                vp.rect(x - rad, y - rad, x + rad, y + rad, outline=colour,
                        width=2 if selected else 1)
                if selected:
                    vp.text(x + 8, y, f'{kind} #{index}', anchor='w', fill=colour)
