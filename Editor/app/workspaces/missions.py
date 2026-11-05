"""J-Galaxy mission browser and lossless objective reward editor.

In-game progression node IDs, mission/battle IDs and goal counts remain fixed.
Only the verified Koma reward ID / six resource quantities and the ASCII
mission/battle definition title are writable. All other fields are read-only.
"""
from __future__ import annotations

import tkinter as tk
from tkinter import ttk, messagebox

from jus_formats.progression import DefinitionTable, GalaxyGraph
from jus_formats.roster import KOMA_SERIES_PREFIXES
from jus_package import progression as prog

from .. import theme as T
from .base import SuiteWorkspace


class MissionWorkspace(SuiteWorkspace):
    key = 'missions'
    title = 'Missions'
    browser_title = 'J-Galaxy progression'

    def __init__(self, app, host, browser_host, k):
        self.catalog: prog.ProgressionCatalog | None = None
        self.load_error = ''
        self.node_id: int | None = None
        self.slot: int | None = None
        self._original: tuple[bytes, bytes, bytes] | None = None
        self.kind_var = tk.StringVar(value='Koma')
        self.koma_var = tk.StringVar()
        self.resources = [tk.StringVar(value='0') for _ in range(6)]
        self.title_var = tk.StringVar()
        super().__init__(app, host, browser_host, k)

    def build(self, host):
        main = ttk.Frame(host)
        toolbar = ttk.Frame(main)
        toolbar.pack(fill='x', padx=8, pady=8)
        ttk.Label(toolbar, text='Story progression and rewards', font=T.UI_BOLD).pack(side='left')
        ttk.Button(toolbar, text='Apply changes', style='Accent.TButton', command=self.apply).pack(side='right', padx=3)
        ttk.Button(toolbar, text='Reload selection', command=self.refresh).pack(side='right', padx=3)
        ttk.Label(main, text='Mission/battle IDs, progression nodes, objective counts and condition codes are fixed. '
                            'Reward records are used only for newly cleared objectives.',
                  wraplength=850, justify='left').pack(fill='x', padx=10, pady=(0, 8))
        self.heading = ttk.Label(main, text='Open a game data root to browse J-Galaxy missions.', font=T.UI_BOLD)
        self.heading.pack(fill='x', padx=10, pady=(0, 8))
        data = ttk.Frame(main)
        data.pack(fill='x', padx=10)
        ttk.Label(data, text='Definition type / ID:').grid(row=0, column=0, sticky='w', pady=3)
        self.type_label = ttk.Label(data, text='—')
        self.type_label.grid(row=0, column=1, sticky='w', padx=5)
        ttk.Label(data, text='Planet:').grid(row=1, column=0, sticky='w', pady=3)
        self.planet_label = ttk.Label(data, text='—')
        self.planet_label.grid(row=1, column=1, sticky='w', padx=5)
        ttk.Label(data, text='Goal slots / flags:').grid(row=2, column=0, sticky='w', pady=3)
        self.flags_label = ttk.Label(data, text='—')
        self.flags_label.grid(row=2, column=1, sticky='w', padx=5)
        ttk.Label(data, text='Definition title:').grid(row=3, column=0, sticky='w', pady=3)
        self.title_entry = ttk.Entry(data, textvariable=self.title_var, width=45)
        self.title_entry.grid(row=3, column=1, sticky='ew', padx=5)
        ttk.Button(data, text='Rename definition', command=self.rename_definition).grid(row=3, column=2, padx=4)
        data.columnconfigure(1, weight=1)
        ttk.Label(main, text='Objective rewards', font=T.UI_BOLD).pack(anchor='w', padx=10, pady=(12, 3))
        table_frame = ttk.Frame(main)
        table_frame.pack(fill='both', expand=True, padx=10)
        columns = ('code', 'kind', 'detail')
        self.goals = ttk.Treeview(table_frame, columns=columns, show='tree headings', height=7, selectmode='browse')
        self.goals.heading('#0', text='Slot')
        self.goals.heading('code', text='Raw goal code')
        self.goals.heading('kind', text='Reward type')
        self.goals.heading('detail', text='Reward')
        self.goals.column('#0', width=60, stretch=False)
        self.goals.column('code', width=120, stretch=False)
        self.goals.column('kind', width=105, stretch=False)
        self.goals.column('detail', width=400)
        sb = ttk.Scrollbar(table_frame, command=self.goals.yview)
        self.goals.configure(yscrollcommand=sb.set)
        self.goals.pack(side='left', fill='both', expand=True)
        sb.pack(side='right', fill='y')
        self.goals.bind('<<TreeviewSelect>>', self.select_goal)
        edit = T.Panel(main, 'Selected reward')
        edit.pack(fill='x', padx=10, pady=9)
        row = ttk.Frame(edit.body)
        row.pack(fill='x', padx=8, pady=4)
        ttk.Label(row, text='Grant:').pack(side='left', padx=(0, 6))
        kind = ttk.Combobox(row, textvariable=self.kind_var, values=('Koma', 'Resources'), state='readonly', width=12)
        kind.pack(side='left')
        kind.bind('<<ComboboxSelected>>', lambda _e: self._update_kind())
        ttk.Label(row, text='Koma ID:').pack(side='left', padx=(14, 4))
        self.koma_entry = ttk.Entry(row, textvariable=self.koma_var, width=8)
        self.koma_entry.pack(side='left')
        self.koma_info = ttk.Label(row, text='')
        self.koma_info.pack(side='left', padx=8)
        self.koma_var.trace_add('write', lambda *_: self._update_koma_info())
        line = ttk.Frame(edit.body)
        line.pack(fill='x', padx=8, pady=4)
        self.resource_entries = []
        for i, var in enumerate(self.resources):
            ttk.Label(line, text=f'R{i}:').pack(side='left', padx=(6 if i else 0, 3))
            entry = ttk.Entry(line, width=7, textvariable=var)
            entry.pack(side='left')
            self.resource_entries.append(entry)
        foot = ttk.Frame(edit.body)
        foot.pack(fill='x', padx=8, pady=(2, 8))
        ttk.Label(foot, text='R0–R5 are the six native resource quantities (types not yet verified).').pack(side='left')
        ttk.Button(foot, text='Update reward', command=self.update_reward).pack(side='right')
        self.detail = ttk.Label(main, text='Select a mission, then an objective slot.', wraplength=850, justify='left')
        self.detail.pack(fill='x', padx=10, pady=(3, 9))
        self._update_kind()
        return main

    def build_browser(self, parent):
        self.tree = self.browser_tree(parent, ('definition',), (82,), ('ID',))
        self.tree.bind('<<TreeviewSelect>>', self._browse)
        self.filter_var.trace_add('write', lambda *_: self.populate())

    def on_root(self):
        self.catalog = None
        self._original = None
        self.load_error = ''
        self.node_id = None
        self.slot = None
        root = self.app.root_data
        if root and root.exists(prog.GRAPH) and root.exists(prog.MISSIONS) and root.exists(prog.BATTLES):
            try:
                self.catalog = prog.ProgressionCatalog.load(root)
                self._original = self._blobs()
            except (OSError, ValueError, IndexError, KeyError) as exc:
                self.load_error = str(exc)
        elif root:
            self.load_error = 'jgalaxy/jgalaxy.aar (mission, battle, graph) not found in data root'
        self.populate()
        self.refresh()

    def _blobs(self):
        c = self.catalog
        return c.graph.build(), c.missions.build(), c.battles.build()

    def populate(self):
        tree = self.tree
        selected = self.node_id
        tree.delete(*tree.get_children())
        c = self.catalog
        if not c:
            return
        flt = self.filter_var.get().casefold().strip()
        for planet_id in range(c.graph.planet_count):
            planet = c.graph.planet_name(planet_id) or f'Planet {planet_id}'
            matching = []
            for i in range(c.graph.node_count):
                node = c.graph.get(i)
                if node.planet_id != planet_id:
                    continue
                title = c.definition(node).name
                label = f'{i:03d}  {title}'
                if flt and not any(flt in x.casefold() for x in (label, planet, str(i))):
                    continue
                matching.append((i, label, node))
            if not matching:
                continue
            parent = tree.insert('', 'end', iid=f'p:{planet_id}', text=f'{planet_id:02d} {planet}',
                                 open=bool(flt or (selected is not None and
                                                   c.graph.get(selected).planet_id == planet_id)))
            for idx, label, node in matching:
                tree.insert(parent, 'end', iid=f'n:{idx}', text=label,
                            values=(('M' if node.mission else 'B') + str(node.definition_id),))
        if selected is not None and tree.exists(f'n:{selected}'):
            tree.selection_set(f'n:{selected}')
            tree.see(f'n:{selected}')

    def _browse(self, _event=None):
        selected = self.tree.selection()
        if not selected or not selected[0].startswith('n:'):
            return
        node_id = int(selected[0][2:])
        if node_id != self.node_id:
            self.node_id = node_id
            self.slot = None
            self.refresh()

    def refresh(self):
        c = self.catalog
        if c is None:
            self.heading.configure(text=self.load_error or 'Open a data root with J-Galaxy files.')
            self.goals.delete(*self.goals.get_children())
            self.detail.configure(text='Mission reward editing requires jgalaxy/jgalaxy.aar and bin/koma.bin.')
            return
        if self.node_id is None:
            self.heading.configure(text=f'{c.graph.node_count} progression nodes · {c.missions.count} missions · '
                                        f'{c.battles.count} battles · {c.card_count} Koma records')
            self.goals.delete(*self.goals.get_children())
            self.detail.configure(text='Select a progression node on the left to view its linked mission and rewards.')
            return
        n = c.graph.get(self.node_id)
        d = c.definition(n)
        typ = 'Mission' if n.mission else 'Battle'
        self.heading.configure(text=f'Node {n.index:03d} — {d.name}')
        self.type_label.configure(text=f'{typ} #{d.index} · record stride 0xA4')
        self.planet_label.configure(text=f'#{n.planet_id:02d} {c.graph.planet_name(n.planet_id)}')
        self.flags_label.configure(text=f'{n.goal_count}/6 goals · flags 0x{n.flags:02X} (only bit 0x04 typed)')
        self.title_var.set(d.name)
        old_slot = self.slot
        self.goals.delete(*self.goals.get_children())
        for reward in n.rewards:
            detail = (f'Koma #{reward.koma_id}' if reward.is_koma else
                      ', '.join(f'R{i}={v}' for i, v in enumerate(reward.resources)))
            self.goals.insert('', 'end', iid=f's:{reward.slot}', text=f'{reward.slot + 1}',
                              values=(f'0x{reward.goal_code:04X}',
                                      'Koma' if reward.is_koma else 'Resources', detail))
        self.slot = None
        if old_slot is not None and old_slot < n.goal_count:
            self.goals.selection_set(f's:{old_slot}')
            self.select_goal()
        elif n.goal_count:
            self.goals.selection_set('s:0')
            self.select_goal()
        self.detail.configure(text='Edit only reward type/ID or six resource quantities. Goal condition codes, '
                                   'node identifiers, level setup and unknown record fields are preserved byte-for-byte.')

    def select_goal(self, _event=None):
        selected = self.goals.selection()
        if not selected or self.catalog is None or self.node_id is None:
            self.slot = None
            return
        slot = int(selected[0][2:])
        reward = self.catalog.graph.get(self.node_id).rewards[slot]
        self.slot = slot
        self.kind_var.set('Koma' if reward.is_koma else 'Resources')
        self.koma_var.set(str(max(0, reward.koma_id)))
        for var, quantity in zip(self.resources, reward.resources):
            var.set(str(quantity))
        self._update_kind()

    def _update_kind(self):
        is_koma = self.kind_var.get() == 'Koma'
        if hasattr(self, 'koma_entry'):
            self.koma_entry.configure(state='normal' if is_koma else 'disabled')
            for entry in self.resource_entries:
                entry.configure(state='disabled' if is_koma else 'normal')
        self._update_koma_info()

    def _update_koma_info(self):
        if not hasattr(self, 'koma_info'):
            return
        if self.catalog is None or self.kind_var.get() != 'Koma':
            self.koma_info.configure(text='')
            return
        try:
            id_ = self._number(self.koma_var.get())
            if not 0 <= id_ < self.catalog.card_count:
                raise ValueError
        except ValueError:
            self.koma_info.configure(text=f'Valid IDs: 0–{self.catalog.card_count - 1}')
        else:
            try:
                raw = self.app.root_data.read(prog.CARD_TABLE)
                card = raw[id_ * 12:id_ * 12 + 12]
                series = (KOMA_SERIES_PREFIXES[card[4]]
                          if card[4] < len(KOMA_SERIES_PREFIXES) else f'series {card[4]}')
                typ = ('Battle', 'Support', 'Other')[min(card[6], 2)]
                self.koma_info.configure(text=f'{series} art {card[5]:02d} · {typ} · {card[8] + 1} panels')
            except (OSError, KeyError, IndexError):
                self.koma_info.configure(text='Existing Koma record')

    @staticmethod
    def _number(value):
        value = str(value).strip()
        return int(value, 0) if value.lower().startswith(('0x', '0b', '0o')) else int(value, 10)

    def update_reward(self):
        if self.catalog is None or self.node_id is None or self.slot is None:
            self.app.status.set('Missions: select an objective first.')
            return
        try:
            if self.kind_var.get() == 'Koma':
                arg = self._number(self.koma_var.get())
                if self.catalog.graph.get(self.node_id).rewards[self.slot].koma_id == arg:
                    return
                if not 0 <= arg < self.catalog.card_count:
                    raise ValueError(f'Koma ID must be in 0..{self.catalog.card_count - 1}')
                self.checkpoint('change Koma reward')
                self.catalog.graph.grant_koma(self.node_id, self.slot, arg,
                                              card_count=self.catalog.card_count)
            else:
                quantities = tuple(self._number(v.get()) for v in self.resources)
                reward = self.catalog.graph.get(self.node_id).rewards[self.slot]
                if reward.koma_id == -1 and reward.resources == quantities:
                    return
                if len(quantities) != 6 or any(not 0 <= x <= 0xFFFF for x in quantities):
                    raise ValueError('Resource values must be between 0 and 65535')
                self.checkpoint('change resource reward')
                self.catalog.graph.grant_resources(self.node_id, self.slot, quantities)
            self.refresh()
            self.app.update_dirty()
            self.app.status.set(f'Node {self.node_id} objective {self.slot + 1}: reward updated in memory; '
                                'Apply (Ctrl+Enter), then Save (Ctrl+S).')
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Reward validation', str(exc))

    def rename_definition(self):
        if self.catalog is None or self.node_id is None:
            return
        node = self.catalog.graph.get(self.node_id)
        table = self.catalog.missions if node.mission else self.catalog.battles
        title = self.title_var.get().strip()
        if title == table.get(node.definition_id).name:
            return
        try:
            # Validate on copy, so malformed titles never create an undo entry.
            check = DefinitionTable.parse(table.build())
            check.rename(node.definition_id, title)
        except ValueError as exc:
            messagebox.showerror('Mission title', str(exc))
            return
        self.checkpoint('rename mission definition')
        table.rename(node.definition_id, title)
        self.populate()
        self.refresh()
        self.app.update_dirty()
        self.app.status.set(f'Renamed {"mission" if node.mission else "battle"} definition #{node.definition_id}. '
                            'All world nodes referencing this definition share its title.')

    def doc(self):
        return 'missions:galaxy' if self.catalog is not None else None

    def snapshot(self):
        return self._blobs() if self.catalog is not None else None

    def restore(self, snap):
        g, m, b = snap
        self.catalog.graph = GalaxyGraph.parse(g)
        self.catalog.missions = DefinitionTable.parse(m)
        self.catalog.battles = DefinitionTable.parse(b)
        self.populate()
        self.refresh()

    @property
    def dirty(self):
        return self.catalog is not None and self._blobs() != self._original

    def apply(self):
        if self.catalog is None or not self.dirty:
            self.app.status.set('Missions: nothing to apply.')
            return
        c = self.catalog
        blobs = self._blobs()
        try:
            graph, missions, battles = GalaxyGraph.parse(blobs[0]), DefinitionTable.parse(blobs[1]), DefinitionTable.parse(blobs[2])
            problems = graph.validate_references(missions, battles, c.card_count)
            if problems:
                raise ValueError('; '.join(problems[:8]))
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Missions', f'Cannot Apply progression edits: {exc}')
            return
        files = (prog.GRAPH, prog.MISSIONS, prog.BATTLES)
        changed = []
        for path, current, previous in zip(files, blobs, self._original):
            if current != previous:
                self.app.root_data.write(path, current)
                changed.append(path.rsplit('|', 1)[-1])
        self._original = blobs
        self.app.update_dirty()
        self.app.resources_applied()
        self.app.status.set('Applied ' + ', '.join(changed) + ' into jgalaxy.aar. Save (Ctrl+S) to write archive.')
