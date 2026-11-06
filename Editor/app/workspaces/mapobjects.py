"""Bottom-ribbon object editor for verified stage .mob/.bin field offsets."""
from __future__ import annotations

import tkinter as tk
from tkinter import ttk, messagebox

from jus_formats.stageauthoring import StageObjects
from jus_formats.stagephysics import COLLIDER_TYPES
from .. import theme as T

GROUPS = (
    ('spawns', 'Spawners & item markers', ('spawner', 'item', 'symbol')),
    ('triggers', 'Triggers & gimmicks', ('trigger', 'gimmick')),
    ('collisions', 'Colliders', ('collider',)),
    ('physics', 'Moving platforms & paths', ('floor', 'path', 'conveyor')),
    ('grips', 'Grip points', ('grip',)),
)


class MapObjectsPanel(ttk.Frame):
    """Editors modify staged bytes, never the game data root until Apply."""

    def __init__(self, workspace, parent):
        super().__init__(parent)
        self.ws = workspace
        self.model = StageObjects()
        self.selected: tuple[str, int] | None = None
        self.fields: dict[str, tk.StringVar] = {}
        controls = ttk.Frame(self)
        controls.pack(side='top', fill='x', padx=6, pady=(4, 0))
        for title, var in (('Markers', workspace.preview_markers),
                           ('Dotted paths', workspace.preview_paths),
                           ('Colliders', workspace.preview_collisions)):
            ttk.Checkbutton(controls, text=title, variable=var,
                            command=lambda: workspace.view.redraw()).pack(side='left', padx=5)
        ttk.Button(controls, text='Frame all objects', command=workspace.frame_all_objects).pack(
            side='right', padx=(8, 0))
        listing = ttk.Frame(self)
        listing.pack(side='left', fill='both', expand=True, padx=6, pady=5)
        self.tree = ttk.Treeview(listing, columns=('position',), show='tree headings', height=7)
        self.tree.heading('#0', text='Object')
        self.tree.column('#0', width=int(225 * workspace.k), stretch=True)
        self.tree.heading('position', text='Position')
        self.tree.column('position', width=int(95 * workspace.k), stretch=False)
        sb = ttk.Scrollbar(listing, orient='vertical', command=self.tree.yview)
        self.tree.configure(yscrollcommand=sb.set)
        self.tree.pack(side='left', fill='both', expand=True)
        sb.pack(side='right', fill='y')
        self.tree.bind('<<TreeviewSelect>>', self._selected)
        side = ttk.Frame(self, width=int(260 * workspace.k))
        side.pack(side='right', fill='y', padx=6, pady=5)
        self.header = ttk.Label(side, text='Select an object in the map ribbon.', font=T.UI_BOLD)
        self.header.pack(fill='x', pady=3)
        self.detail = ttk.Frame(side)
        self.detail.pack(fill='x', expand=False)
        actions = ttk.Frame(side)
        actions.pack(fill='x', pady=4)
        ttk.Button(actions, text='Update object', command=self.commit).pack(side='left', padx=(0, 6))
        ttk.Button(actions, text='Clone record', command=self.clone).pack(side='left')
        ttk.Label(side, text='Editing uses verified byte offsets. Cloning is experimental: '
                  'test on a fresh save in melonDS before relying on new objects.',
                  wraplength=int(235 * workspace.k), style='Toolbar.TLabel').pack(fill='x', pady=6)
        self.pack(fill='both', expand=True)

    def load(self, mob: bytes | None, geo: bytes | None):
        self.model = StageObjects(mob, geo)
        self.selected = None
        self.refresh()

    def refresh(self, select=None):
        sel = select if select is not None else self.selected
        self.tree.delete(*self.tree.get_children())
        for group, title, kinds in GROUPS:
            entries = [rec for rec in self.model.records() if rec.kind in kinds]
            parent = self.tree.insert('', 'end', f'group:{group}', text=f'{title} ({len(entries)})', open=True)
            for item in entries:
                iid = f'{item.kind}:{item.index}'
                fields = self.model.fields(item.kind, item.index)
                xy = f'({fields["x"]}, {fields["y"]})' if 'x' in fields and 'y' in fields else '—'
                self.tree.insert(parent, 'end', iid, text=item.label, values=(xy,))
        if sel and self.tree.exists(f'{sel[0]}:{sel[1]}'):
            self.tree.selection_set(f'{sel[0]}:{sel[1]}')
            self.tree.see(f'{sel[0]}:{sel[1]}')
        else:
            self.selected = None
            self._render()

    def _selected(self, _evt=None):
        current = self.tree.selection()
        if not current or current[0].startswith('group:'):
            return
        kind, i = current[0].split(':')
        self.selected = kind, int(i)
        self._render()
        self.ws.focus = 'objects'
        self.ws.app._update_undo_label()
        # Selection is mirrored in the viewport and panned into view if needed.
        self.ws.focus_map_object(kind, int(i))
        self.ws.view.redraw()

    def _render(self):
        for child in self.detail.winfo_children():
            child.destroy()
        self.fields = {}
        if not self.selected:
            self.header.configure(text='Select an object in the map ribbon.')
            return
        kind, i = self.selected
        self.header.configure(text=f'{kind.capitalize()} #{i}')
        for row, (name, value) in enumerate(self.model.fields(kind, i).items()):
            ttk.Label(self.detail, text=name.replace('_', ' ').title()).grid(
                row=row, column=0, sticky='w', pady=2, padx=(0, 6))
            if kind == 'collider' and name == 'type_id':
                # Traced collider types (stagephysics.COLLIDER_TYPES, overlay-6 grid sweep)
                choices = [f'{t} {v[0]}' for t, v in COLLIDER_TYPES.items()]
                var = tk.StringVar(value=next((c for c in choices if c.split()[0] == str(value)), str(value)))
                entry = ttk.Combobox(self.detail, textvariable=var, values=choices, state='readonly', width=26)
                entry.bind('<<ComboboxSelected>>', lambda _e: self.commit())
            else:
                var = tk.StringVar(value=str(value))
                entry = ttk.Entry(self.detail, textvariable=var, width=13)
                entry.bind('<Return>', lambda _e: self.commit())
            entry.grid(row=row, column=1, sticky='ew', pady=2)
            self.fields[name] = var
        if kind == 'collider':
            box = self.model.g.collision_boxes[i]
            t = COLLIDER_TYPES.get(box.type_id)
            r = len(self.model.fields(kind, i))
            if t:
                solid = ', '.join(n for n, on in zip(('sides', 'top', 'below'), t[1:4]) if on) or 'none'
                text = (f'{t[0]}: {t[6]}\nSolid: {solid}' + (' · one-way' if t[4] else '') +
                        ('' if t[5] else ' · not in grid') + f' · evidence {t[7]}')
            else:
                text = f'Type {box.type_id} is not used by the game.'
            if box.wall_index >= 0:
                text += f'\nWall record #{box.wall_index}'
            if box.flag_names:
                text += '\nFlags: ' + '; '.join(box.flag_names)
            text += '\nEdits rewrite the 16 px movement grid cells this collider owns.'
            ttk.Label(self.detail, text=text, wraplength=int(240 * self.ws.k), justify='left',
                      style='Toolbar.TLabel').grid(row=r, column=0, columnspan=2, sticky='w', pady=(4, 0))
        self.detail.columnconfigure(1, weight=1)

    def commit(self):
        if not self.selected:
            return
        kind, i = self.selected
        values = {key: var.get() for key, var in self.fields.items()}
        try:
            trial = StageObjects(*self.model.snapshot())
            trial.edit(kind, i, values)
        except (ValueError, IndexError, OverflowError) as exc:
            messagebox.showerror('Stage object', str(exc))
            return
        if trial.snapshot() == self.model.snapshot():
            return
        self.ws.checkpoint_objects('edit stage ' + kind)
        self.model = trial
        self.ws.objects_changed(f'Edited {kind} #{i} (Apply, then Save).')
        self.refresh(select=(kind, i))

    def clone(self):
        if not self.selected:
            return
        kind, i = self.selected
        if kind not in ('item', 'grip', 'floor', 'trigger', 'gimmick', 'collider'):
            self.ws.app.status.set('Cloning is supported for objects, colliders, platforms and spawn points.')
            return
        try:
            trial = StageObjects(*self.model.snapshot())
            new_index = trial.clone(kind, i)
        except (ValueError, IndexError, OverflowError) as exc:
            messagebox.showerror('Clone stage object', str(exc))
            return
        if not messagebox.askyesno('Experimental structural edit',
              'Clone the full existing record and change stage object counts/offsets? '
              'This changes gameplay and has not been validated in an emulator. '
              'Back up the stage archive before saving.'):
            return
        self.ws.checkpoint_objects('clone stage ' + kind)
        self.model = trial
        self.ws.objects_changed(f'Cloned {kind} #{i} as #{new_index}. Test a fresh save in melonDS.')
        self.refresh(select=(kind, new_index))
