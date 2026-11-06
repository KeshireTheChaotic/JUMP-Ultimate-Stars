"""J-Galaxy mission panel (hosted by the Level workspace's bottom dock).

A mission is a progression node in ``jgalaxy.bin`` that points at a 0xA4-byte
mission/battle definition; definition ``+0x75`` is the battle stage index
(``FUN_0207538C`` → battle object +0x160 → stage table 0x02092D08), so every
mission belongs to one stage of ``stage/stage.aar``.  The Level workspace
lists missions next to stages and loads the mission's stage when one is
selected.

Progression nodes and mission/battle definitions support experimental fresh-save
structural cloning/deletion with reference validation. Shared stage references,
planet placement, known battle fields, raw goal codes and rewards can be edited.
Unknown bytes and flags are retained; runtime validation remains required.
"""
from __future__ import annotations

import tkinter as tk
from tkinter import ttk, messagebox

from jus_formats import roster
from jus_formats.progression import DefinitionTable, GalaxyGraph
from jus_formats.roster import KOMA_SERIES_PREFIXES
from jus_package import progression as prog

from .. import theme as T

DOC = 'missions:galaxy'


def _number(value):
    value = str(value).strip()
    return int(value, 0) if value.lower().startswith(('0x', '0b', '0o')) else int(value, 10)


class MissionPanel:
    """Mission data, reward editor and its undo/apply state (no browser of its own)."""

    def __init__(self, workspace, parent):
        self.ws = workspace
        self.app = workspace.app
        self.catalog: prog.ProgressionCatalog | None = None
        self.load_error = ''
        self.node_id: int | None = None
        self.slot: int | None = None
        self._original: tuple[bytes, bytes, bytes] | None = None
        self.kind_var = tk.StringVar(value='Koma')
        self.koma_var = tk.StringVar()
        self.resources = [tk.StringVar(value='0') for _ in range(6)]
        self.title_var = tk.StringVar()
        self.planet_var = tk.StringVar()
        self.node_kind_var = tk.StringVar(value='Mission')
        self.definition_var = tk.StringVar()
        self.stage_var = tk.StringVar()
        self.environment_var = tk.BooleanVar(value=False)
        self.goal_code_var = tk.StringVar()
        self.prune_definition_var = tk.StringVar()
        self.frame = self._build(parent)

    # ------------------------------------------------------------ layout
    def _build(self, parent):
        """Narrow scrollable mission/reward inspector (not a bottom-dock page)."""
        main = ttk.Frame(parent)
        main.pack(fill='both', expand=True)
        canvas = tk.Canvas(main, bg=T.PANEL, bd=0, highlightthickness=0)
        scroll = ttk.Scrollbar(main, orient='vertical', command=canvas.yview)
        canvas.configure(yscrollcommand=scroll.set)
        scroll.pack(side='right', fill='y')
        canvas.pack(side='left', fill='both', expand=True)
        body = ttk.Frame(canvas)
        window = canvas.create_window(0, 0, window=body, anchor='nw')
        body.bind('<Configure>', lambda _e: canvas.configure(scrollregion=canvas.bbox('all')))
        canvas.bind('<Configure>', lambda e: canvas.itemconfigure(window, width=e.width))
        self._scroll_canvas = canvas

        actions = ttk.Frame(body)
        actions.pack(fill='x', padx=8, pady=(8, 2))
        ttk.Button(actions, text='Stage / tile inspector', command=self.ws.show_stage_inspector).pack(side='left')
        self.heading = ttk.Label(body, text='Open a data root to browse missions.',
                                 font=T.UI_BOLD, wraplength=int(300 * self.ws.k))
        self.heading.pack(fill='x', padx=8, pady=(4, 5))
        summary = ttk.LabelFrame(body, text='Mission details')
        summary.pack(fill='x', padx=8, pady=4)
        self.type_label = ttk.Label(summary, text='—', wraplength=int(280 * self.ws.k))
        self.type_label.pack(fill='x', padx=6, pady=(5, 1))
        self.planet_label = ttk.Label(summary, text='—', wraplength=int(280 * self.ws.k))
        self.planet_label.pack(fill='x', padx=6, pady=(1, 5))
        title_row = ttk.Frame(summary)
        title_row.pack(fill='x', padx=6, pady=4)
        ttk.Label(title_row, text='Name').pack(anchor='w')
        self.title_entry = ttk.Entry(title_row, textvariable=self.title_var)
        self.title_entry.pack(side='left', fill='x', expand=True)
        ttk.Button(title_row, text='Rename', command=self.rename_definition).pack(side='left', padx=(3, 0))

        link = ttk.LabelFrame(body, text='Progression node / battle stage')
        link.pack(fill='x', padx=8, pady=4)
        a = ttk.Frame(link)
        a.pack(fill='x', padx=6, pady=4)
        ttk.Label(a, text='World ID').pack(side='left')
        ttk.Entry(a, textvariable=self.planet_var, width=5).pack(side='left', padx=(3, 10))
        ttk.Label(a, text='Type').pack(side='left')
        ttk.Combobox(a, textvariable=self.node_kind_var, values=('Mission', 'Battle'),
                     width=9, state='readonly').pack(side='left', padx=3)
        b = ttk.Frame(link)
        b.pack(fill='x', padx=6, pady=4)
        ttk.Label(b, text='Definition').pack(side='left')
        ttk.Entry(b, textvariable=self.definition_var, width=6).pack(side='left', padx=3)
        ttk.Button(b, text='Reassign node', command=self.reassign_node).pack(side='right')
        c = ttk.Frame(link)
        c.pack(fill='x', padx=6, pady=4)
        ttk.Label(c, text='Stage index').pack(side='left')
        ttk.Entry(c, textvariable=self.stage_var, width=6).pack(side='left', padx=3)
        ttk.Checkbutton(c, text='Physics', variable=self.environment_var).pack(side='left', padx=3)
        ttk.Button(link, text='Update shared stage definition',
                   command=self.update_stage).pack(fill='x', padx=6, pady=(0, 5))
        ttk.Label(link, text='Definition edits affect every node that references it.',
                  style='Toolbar.TLabel', wraplength=int(280 * self.ws.k)).pack(fill='x', padx=6)
        struct_row = ttk.Frame(link)
        struct_row.pack(fill='x', padx=6, pady=4)
        ttk.Button(struct_row, text='Duplicate', command=self.duplicate_node).pack(side='left')
        ttk.Button(struct_row, text='Delete node', command=self.delete_node).pack(side='left', padx=4)
        ttk.Label(link, text='Unused definition ID (new save only)').pack(anchor='w', padx=6)
        prune = ttk.Frame(link)
        prune.pack(fill='x', padx=6, pady=(0, 5))
        ttk.Entry(prune, textvariable=self.prune_definition_var, width=6).pack(side='left')
        ttk.Button(prune, text='Delete unused definition',
                   command=self.delete_unused_definition).pack(side='left', padx=4)
        ttk.Label(link, text='Structural edits require a fresh game save and emulator testing.',
                  style='Toolbar.TLabel', wraplength=int(280 * self.ws.k)).pack(fill='x', padx=6, pady=(1, 6))

        goals = ttk.LabelFrame(body, text='Objectives / rewards')
        goals.pack(fill='x', padx=8, pady=4)
        table = ttk.Frame(goals)
        table.pack(fill='x', padx=5, pady=5)
        self.goals = ttk.Treeview(table, columns=('code', 'kind', 'detail'),
                                  show='tree headings', height=5, selectmode='browse')
        for col, caption, width, stretch in (('#0', '#', 28, False),
                                              ('code', 'Code', 65, False),
                                              ('kind', 'Reward', 65, False),
                                              ('detail', 'Grant', 155, True)):
            self.goals.heading(col, text=caption)
            self.goals.column(col, width=int(width * self.ws.k), stretch=stretch)
        sb = ttk.Scrollbar(table, command=self.goals.yview)
        self.goals.configure(yscrollcommand=sb.set)
        self.goals.pack(side='left', fill='x', expand=True)
        sb.pack(side='right', fill='y')
        self.goals.bind('<<TreeviewSelect>>', self.select_goal)
        reward = ttk.LabelFrame(body, text='Selected reward')
        reward.pack(fill='x', padx=8, pady=4)
        row = ttk.Frame(reward)
        row.pack(fill='x', padx=6, pady=4)
        ttk.Label(row, text='Grant').pack(side='left')
        kind = ttk.Combobox(row, textvariable=self.kind_var, values=('Koma', 'Resources'),
                            state='readonly', width=10)
        kind.pack(side='left', padx=3)
        kind.bind('<<ComboboxSelected>>', lambda _e: self._update_kind())
        ttk.Label(row, text='Koma ID').pack(side='left', padx=(7, 3))
        self.koma_entry = ttk.Entry(row, textvariable=self.koma_var, width=6)
        self.koma_entry.pack(side='left')
        self.koma_info = ttk.Label(reward, text='', wraplength=int(280 * self.ws.k))
        self.koma_info.pack(fill='x', padx=6)
        self.koma_var.trace_add('write', lambda *_: self._update_koma_info())
        self.resource_entries = []
        for start in (0, 3):
            line = ttk.Frame(reward)
            line.pack(fill='x', padx=6, pady=3)
            for i in range(start, start + 3):
                ttk.Label(line, text=f'R{i}').pack(side='left', padx=(0, 2))
                entry = ttk.Entry(line, textvariable=self.resources[i], width=6)
                entry.pack(side='left', padx=(0, 7))
                self.resource_entries.append(entry)
        ttk.Label(reward, text='R0–R5: six quantities; resource types remain unverified.',
                  style='Toolbar.TLabel', wraplength=int(280 * self.ws.k)).pack(fill='x', padx=6)
        ttk.Button(reward, text='Update reward', command=self.update_reward).pack(
            fill='x', padx=6, pady=5)
        ttk.Label(reward, text='Raw objective condition').pack(anchor='w', padx=6)
        goal_row = ttk.Frame(reward)
        goal_row.pack(fill='x', padx=6, pady=4)
        ttk.Entry(goal_row, textvariable=self.goal_code_var, width=9).pack(side='left')
        ttk.Button(goal_row, text='Set code', command=self.update_goal_code).pack(side='left', padx=4)
        goal_actions = ttk.Frame(reward)
        goal_actions.pack(fill='x', padx=6, pady=(0, 5))
        ttk.Button(goal_actions, text='Activate next slot', command=self.add_goal).pack(side='left')
        ttk.Button(goal_actions, text='Deactivate last', command=self.remove_goal).pack(side='left', padx=4)
        ttk.Label(reward, text='Objective semantics unverified; original six slots are preserved.',
                  style='Toolbar.TLabel', wraplength=int(280 * self.ws.k)).pack(fill='x', padx=6, pady=(0, 6))
        self._update_kind()
        return main

    # ------------------------------------------------------------ data
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
        self.refresh()

    def _blobs(self):
        c = self.catalog
        return c.graph.build(), c.missions.build(), c.battles.build()

    def definition(self, node_id):
        return self.catalog.definition(self.catalog.graph.get(node_id))

    def stage_of(self, node_id) -> str | None:
        """Stage stem the node's battle runs on (definition +0x75 → stage table)."""
        return roster.stage_stem(self.definition(node_id).stage_index)

    def nodes_by_stage(self) -> dict[str, list[int]]:
        out: dict[str, list[int]] = {}
        if self.catalog is not None:
            for i in range(self.catalog.graph.node_count):
                stem = self.stage_of(i)
                if stem:
                    out.setdefault(stem, []).append(i)
        return out

    def node_label(self, i):
        return f'{i:03d}  {self.definition(i).name}'

    # ------------------------------------------------------------ view
    def select_node(self, node_id):
        if node_id != self.node_id:
            self.node_id = node_id
            self.slot = None
        self.refresh()

    def refresh(self):
        c = self.catalog
        self.goals.delete(*self.goals.get_children())
        if c is None:
            self.heading.configure(text=self.load_error or 'Open a data root with J-Galaxy files.')
            return
        if self.node_id is None:
            self.heading.configure(text=f'{c.graph.node_count} progression nodes · {c.missions.count} missions · '
                                        f'{c.battles.count} battles · {c.card_count} Koma records — '
                                        'select a mission in the browser')
            self.type_label.configure(text='—')
            self.planet_label.configure(text='—')
            self.title_var.set('')
            self.planet_var.set('')
            self.definition_var.set('')
            self.stage_var.set('')
            self.goal_code_var.set('')
            return
        n = c.graph.get(self.node_id)
        d = c.definition(n)
        typ = 'Mission' if n.mission else 'Battle'
        stem = roster.stage_stem(d.stage_index) or f'stage {d.stage_index} (not in table)'
        self.heading.configure(text=f'Node {n.index:03d} — {d.name}')
        self.type_label.configure(text=f'{typ} #{d.index} · stage {stem} · rule {d.rule} · '
                                       f'{d.opponents} opponent(s)')
        location = c.graph.planet_location_id(n.planet_id)
        location_label = (c.graph.location_name(location) if location < c.graph.location_count
                          else 'unknown')
        self.planet_label.configure(text=f'#{n.planet_id:02d} {c.graph.planet_name(n.planet_id)} '
                                         f'→ location #{location:02d} {location_label} · '
                                         f'{n.goal_count}/6 goals · flags 0x{n.flags:02X}')
        self.title_var.set(d.name)
        self.planet_var.set(str(n.planet_id))
        self.node_kind_var.set(typ)
        self.definition_var.set(str(n.definition_id))
        self.stage_var.set(str(d.stage_index))
        self.environment_var.set(bool(d.data[0x7C] & 0x02))
        old_slot = self.slot
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

    def select_goal(self, _event=None):
        selected = self.goals.selection()
        if not selected or self.catalog is None or self.node_id is None:
            self.slot = None
            return
        slot = int(selected[0][2:])
        reward = self.catalog.graph.get(self.node_id).rewards[slot]
        self.slot = slot
        self.goal_code_var.set(f'0x{reward.goal_code:04X}')
        self.kind_var.set('Koma' if reward.is_koma else 'Resources')
        self.koma_var.set(str(max(0, reward.koma_id)))
        for var, quantity in zip(self.resources, reward.resources):
            var.set(str(quantity))
        self._update_kind()

    def _update_kind(self):
        is_koma = self.kind_var.get() == 'Koma'
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
            id_ = _number(self.koma_var.get())
            if not 0 <= id_ < self.catalog.card_count:
                raise ValueError
        except ValueError:
            self.koma_info.configure(text=f'Valid IDs: 0–{self.catalog.card_count - 1}')
            return
        try:
            card = self.app.root_data.read(prog.CARD_TABLE)[id_ * 12:id_ * 12 + 12]
            series = (KOMA_SERIES_PREFIXES[card[4]]
                      if card[4] < len(KOMA_SERIES_PREFIXES) else f'series {card[4]}')
            typ = ('Battle', 'Support', 'Other')[min(card[6], 2)]
            self.koma_info.configure(text=f'{series} art {card[5]:02d} · {typ} · {card[8] + 1} panels')
        except (OSError, KeyError, IndexError):
            self.koma_info.configure(text='Existing Koma record')

    # ------------------------------------------------------------ edits
    def checkpoint(self, label):
        snap = self.snapshot()
        if snap is not None:
            self.ws.focus = 'mission'
            self.app.history.push(DOC, label, snap)
            self.app._update_undo_label()

    def _edited(self, status):
        self.ws.focus = 'mission'
        self.ws.mission_changed()
        self.app.update_dirty()
        self.app.status.set(status)

    def update_reward(self):
        if self.catalog is None or self.node_id is None or self.slot is None:
            self.app.status.set('Missions: select an objective first.')
            return
        try:
            reward = self.catalog.graph.get(self.node_id).rewards[self.slot]
            if self.kind_var.get() == 'Koma':
                arg = _number(self.koma_var.get())
                if reward.koma_id == arg:
                    return
                if not 0 <= arg < self.catalog.card_count:
                    raise ValueError(f'Koma ID must be in 0..{self.catalog.card_count - 1}')
                self.checkpoint('change Koma reward')
                self.catalog.graph.grant_koma(self.node_id, self.slot, arg, card_count=self.catalog.card_count)
            else:
                quantities = tuple(_number(v.get()) for v in self.resources)
                if reward.koma_id == -1 and reward.resources == quantities:
                    return
                if len(quantities) != 6 or any(not 0 <= x <= 0xFFFF for x in quantities):
                    raise ValueError('Resource values must be between 0 and 65535')
                self.checkpoint('change resource reward')
                self.catalog.graph.grant_resources(self.node_id, self.slot, quantities)
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Reward validation', str(exc))
            return
        self.refresh()
        self._edited(f'Node {self.node_id} objective {self.slot + 1}: reward updated in memory; '
                     'Apply (Ctrl+Enter), then Save (Ctrl+S).')

    def rename_definition(self):
        if self.catalog is None or self.node_id is None:
            return
        node = self.catalog.graph.get(self.node_id)
        table = self.catalog.missions if node.mission else self.catalog.battles
        title = self.title_var.get().strip()
        if title == table.get(node.definition_id).name:
            return
        try:
            # Validate on a copy, so malformed titles never create an undo entry.
            DefinitionTable.parse(table.build()).rename(node.definition_id, title)
        except ValueError as exc:
            messagebox.showerror('Mission title', str(exc))
            return
        self.checkpoint('rename mission definition')
        table.rename(node.definition_id, title)
        self.refresh()
        self._edited(f'Renamed {"mission" if node.mission else "battle"} definition #{node.definition_id}. '
                     'All world nodes referencing this definition share its title.')

    # ------------------------------------------------------------ bounded graph authoring
    def reassign_node(self):
        if self.catalog is None or self.node_id is None:
            return
        try:
            c = self.catalog
            planet = _number(self.planet_var.get())
            definition = _number(self.definition_var.get())
            mission = self.node_kind_var.get() == 'Mission'
            check = GalaxyGraph.parse(c.graph.build())
            check.place_node(self.node_id, planet_id=planet, definition_id=definition,
                             mission=mission, missions=c.missions, battles=c.battles)
            if check.build() == c.graph.build():
                return
        except (ValueError, IndexError) as exc:
            messagebox.showerror('J-Galaxy node', str(exc))
            return
        self.checkpoint('reassign progression node')
        c.graph = check
        self._edited('J-Galaxy node reassigned (fixed node ID preserved). Apply, then Save.')
        self.ws.select_mission(self.node_id)

    def update_stage(self):
        if self.catalog is None or self.node_id is None:
            return
        c = self.catalog
        node = c.graph.get(self.node_id)
        table = c.missions if node.mission else c.battles
        try:
            index = _number(self.stage_var.get())
            if roster.stage_stem(index) is None:
                raise ValueError(f'Stage ID {index} is absent from the verified stage table')
            trial = DefinitionTable.parse(table.build())
            trial.set_stage(node.definition_id, index)
            trial.set_environment(node.definition_id, self.environment_var.get())
            if trial.build() == table.build():
                return
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Stage definition', str(exc))
            return
        linked = sum(1 for i in range(c.graph.node_count)
                     if (other := c.graph.get(i)).mission == node.mission
                     and other.definition_id == node.definition_id)
        if linked > 1 and not messagebox.askyesno('Shared definition',
                f'This definition is referenced by {linked} J-Galaxy nodes. '
                'Changing its stage/gate changes all of them. Continue?'):
            return
        self.checkpoint('edit shared battle stage')
        if node.mission:
            c.missions = trial
        else:
            c.battles = trial
        self._edited('Shared battle definition stage/gate updated in memory. Apply, then Save.')
        self.ws.select_mission(self.node_id)

    def update_goal_code(self):
        if self.catalog is None or self.node_id is None or self.slot is None:
            return
        try:
            code = _number(self.goal_code_var.get())
            check = GalaxyGraph.parse(self.catalog.graph.build())
            check.set_goal_code(self.node_id, self.slot, code)
            if check.build() == self.catalog.graph.build():
                return
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Raw objective code', str(exc))
            return
        if not messagebox.askyesno('Unclassified condition',
                'The objective code is raw/unclassified. It may change how mission clear '
                'conditions are evaluated in-game. Write this code?'):
            return
        self.checkpoint('edit raw objective code')
        self.catalog.graph = check
        self.refresh()
        self._edited('Raw objective code updated. Validate mission conditions in melonDS.')

    def add_goal(self):
        if self.catalog is None or self.node_id is None:
            return
        try:
            code = _number(self.goal_code_var.get())
            koma_id = _number(self.koma_var.get())
            trial = GalaxyGraph.parse(self.catalog.graph.build())
            slot = trial.append_goal(self.node_id, code, koma_id=koma_id,
                                     card_count=self.catalog.card_count)
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Activate objective slot', str(exc))
            return
        if not messagebox.askyesno('Activate objective slot',
                f'Activate fixed objective slot {slot + 1} with raw condition 0x{code:04X}? '
                'Condition semantics are not fully decoded; test in melonDS before using a save.'):
            return
        self.checkpoint('activate fixed objective slot')
        self.catalog.graph = trial
        self.slot = slot
        self.refresh()
        self._edited(f'Activated objective slot {slot + 1} (no node IDs shifted). Apply, then Save.')

    def remove_goal(self):
        if self.catalog is None or self.node_id is None:
            return
        trial = GalaxyGraph.parse(self.catalog.graph.build())
        try:
            slot = trial.remove_last_goal(self.node_id)
        except ValueError as exc:
            messagebox.showerror('Deactivate objective slot', str(exc))
            return
        if not messagebox.askyesno('Deactivate last objective',
                f'Deactivate objective slot {slot + 1}? Its 20 raw bytes will be retained, '
                'and no other objective will be renumbered.'):
            return
        self.checkpoint('deactivate final objective slot')
        self.catalog.graph = trial
        self.slot = max(0, slot - 1) if slot else None
        self.refresh()
        self._edited('Last objective deactivated without erasing its bytes. Apply, then Save.')

    # ------------------------------------------------------------ fresh-save structural edits
    def duplicate_node(self):
        """Duplicate the selected J-Galaxy node and its definition atomically."""
        c = self.catalog
        if c is None or self.node_id is None:
            return
        node = c.graph.get(self.node_id)
        old_definition = c.definition(node)
        try:
            trial_graph = GalaxyGraph.parse(c.graph.build())
            trial_missions = DefinitionTable.parse(c.missions.build())
            trial_battles = DefinitionTable.parse(c.battles.build())
            trial_table = trial_missions if node.mission else trial_battles
            # Keep ASCII name termination within the fixed-size name field.
            name = old_definition.name[:100] + ' Copy'
            new_definition = trial_table.clone_definition(node.definition_id, name)
            new_node = trial_graph.append_clone_node(
                self.node_id, definition_id=new_definition,
                missions=trial_missions, battles=trial_battles)
            errors = trial_graph.validate_references(trial_missions, trial_battles, c.card_count)
            if errors:
                raise ValueError('; '.join(errors[:5]))
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Duplicate mission', str(exc))
            return
        if not messagebox.askyesno('Experimental fresh-save operation',
                f'Append a J-Galaxy node #{new_node} and {"mission" if node.mission else "battle"} '
                f'definition #{new_definition}, cloned from this node? This changes progression '
                'table counts. Old saves are not supported; map enumeration requires melonDS testing.'):
            return
        self.checkpoint('duplicate mission node and definition')
        c.graph, c.missions, c.battles = trial_graph, trial_missions, trial_battles
        self._edited(f'Added J-Galaxy node {new_node} and definition {new_definition}. '
                     'Use a fresh save after Apply/Save.')
        self.ws.select_mission(new_node)

    def delete_node(self):
        c = self.catalog
        if c is None or self.node_id is None:
            return
        doomed = self.node_id
        trial = GalaxyGraph.parse(c.graph.build())
        try:
            trial.remove_node(doomed)
            errors = trial.validate_references(c.missions, c.battles, c.card_count)
            if errors:
                raise ValueError('; '.join(errors[:5]))
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Delete J-Galaxy node', str(exc))
            return
        if not messagebox.askyesno('Delete progression node (NEW SAVE ONLY)',
                f'Permanently remove node {doomed}? All higher node IDs will shift by one; '
                'existing saves are incompatible. Back up the data and test the J-Galaxy '
                'map in melonDS before distribution.'):
            return
        self.checkpoint('delete progression node')
        c.graph = trial
        self.node_id = None
        self.slot = None
        self._edited('Node removed and planet table relocated. Start a fresh save.')
        self.ws.select_mission(min(doomed, trial.node_count - 1))

    def delete_unused_definition(self):
        c = self.catalog
        if c is None:
            return
        mission = self.node_kind_var.get() == 'Mission'
        try:
            definition_id = _number(self.prune_definition_var.get())
            trial_graph = GalaxyGraph.parse(c.graph.build())
            trial_missions = DefinitionTable.parse(c.missions.build())
            trial_battles = DefinitionTable.parse(c.battles.build())
            table = trial_missions if mission else trial_battles
            trial_graph.remove_definition_references(mission=mission, index=definition_id)
            table.remove_definition(definition_id)
            errors = trial_graph.validate_references(trial_missions, trial_battles, c.card_count)
            if errors:
                raise ValueError('; '.join(errors[:5]))
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Delete unused definition', str(exc))
            return
        if not messagebox.askyesno('Delete unused definition (NEW SAVE ONLY)',
                f'Delete unused {"mission" if mission else "battle"} definition '
                f'#{definition_id} and compact all higher definition IDs?'):
            return
        self.checkpoint('delete unused definition')
        c.graph, c.missions, c.battles = trial_graph, trial_missions, trial_battles
        self.node_id = None
        self.slot = None
        self._edited('Unused definition deleted; references compacted. Start a fresh save.')
        self.ws.select_mission(0)

    # ------------------------------------------------------------ undo / apply
    def snapshot(self):
        return self._blobs() if self.catalog is not None else None

    def restore(self, snap):
        g, m, b = snap
        self.catalog.graph = GalaxyGraph.parse(g)
        self.catalog.missions = DefinitionTable.parse(m)
        self.catalog.battles = DefinitionTable.parse(b)
        self.refresh()
        self.ws.mission_changed()

    @property
    def dirty(self):
        return self.catalog is not None and self._blobs() != self._original

    def apply(self) -> list[str] | None:
        """Write changed progression files; returns their names, or None on a validation error."""
        if not self.dirty:
            return []
        blobs = self._blobs()
        try:
            graph = GalaxyGraph.parse(blobs[0])
            problems = graph.validate_references(DefinitionTable.parse(blobs[1]), DefinitionTable.parse(blobs[2]),
                                                 self.catalog.card_count)
            if problems:
                raise ValueError('; '.join(problems[:8]))
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Missions', f'Cannot Apply progression edits: {exc}')
            return None
        changed = []
        for path, current, previous in zip((prog.GRAPH, prog.MISSIONS, prog.BATTLES), blobs, self._original):
            if current != previous:
                self.app.root_data.write(path, current)
                changed.append(path.rsplit('|', 1)[-1])
        self._original = blobs
        return changed
