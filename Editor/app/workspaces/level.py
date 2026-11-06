"""J-Space hierarchy and stage/mission Level workspace.

J-Galaxy missions occupy the left browser and load their assigned stage.
The central viewport displays editable ALTM tiles plus projected stage events.
The bottom ribbon edits verified stage markers, triggers and spawns, and hosts tile tools.
Mission properties and objective rewards are edited in the right inspector.

Stages and missions are linked by the battle stage index: mission/battle
definition ``+0x75`` → battle object +0x160 → stage table 0x02092D08
(``jus_formats.roster.STAGES``).  Selecting a mission loads its stage.

ALTM tiles, J-Galaxy mission definitions and known progression fields are editable.
Fresh-save-only mission/graph resizing is experimental. Decoded .mob/.bin
physics, spawns, BG scripts and gimmicks remain read-only projections;
collision geometry and inferred combat responses are not fully modeled.
"""
from __future__ import annotations

import tkinter as tk
from pathlib import Path
from tkinter import filedialog, messagebox, ttk

from PIL import Image, ImageTk, ImageChops

from jus_formats import altm as altmmod
from jus_formats import roster, stagephysics, stageauthoring, itemprob
from jus_package import scenes, tilemap, stagepreview
from jus_package.project import split

from .. import theme as T
from ..widgets.layers import LayerList
from ..widgets.tabs import TextLog
from .base import SuiteWorkspace
from .missions import DOC as MISSION_DOC, MissionPanel

OVERLAYS = (('cam', 'Camera (unverified)', '.cam'), ('mob', 'Stage physics & spawns (.mob)', '.mob'),
            ('bin', 'Stage BG animation/collision (.bin)', '.bin'), ('collision', 'Collision descriptors', None),
            ('gimmick', 'Gimmick assets', None))


class LevelWorkspace(SuiteWorkspace):
    key = 'level'
    title = 'Level'
    browser_title = 'J-Space / galaxies / worlds / missions'

    def __init__(self, app, host, browser_host, k):
        self.stage: scenes.StageSet | None = None
        self.layers: list[scenes.Layer] = []
        self.visible: dict[str, bool] = {}
        self.images: dict[str, Image.Image | None] = {}
        self.sel_layer: scenes.Layer | None = None
        self.sel_tile: tuple[int, int] | None = None
        self.show_bounds = tk.BooleanVar(value=True)
        self.tool = tk.StringVar(value='select')
        self.brush = 0
        self.bank = tk.IntVar(value=0)
        self.flip_h = tk.BooleanVar(value=False)
        self.flip_v = tk.BooleanVar(value=False)
        self._stroke = False
        self._original_maps: dict[str, bytes] = {}
        self._dsig_cache = {}
        self._sets: list[scenes.StageSet] = []
        self._probs = []
        self._by_stage: dict[str, list[int]] = {}
        self.focus = 'level'           # edit history target
        self.nav_kind = 'root'
        self.nav_id = None
        self._active_marker = None
        self._ribbons = {}
        self._original_mob = b''
        self._mob_working = b''
        self.show_markers = tk.BooleanVar(value=True)
        self.stage_tick = tk.IntVar(value=0)
        self.preview_objects = tk.BooleanVar(value=True)
        self.preview_items = tk.BooleanVar(value=True)
        self.preview_pressure = tk.StringVar(value='')  # 0@12-90, 1@200
        self.preview_hits = tk.StringVar(value='')      # 2@60, 2@290
        self.preview_wall_hits = tk.StringVar(value='')  # 0@120:20
        self.preview_collisions = tk.BooleanVar(value=False)
        self.camera_x = tk.StringVar(value='0')
        self.camera_y = tk.StringVar(value='0')
        self.preview_palette = tk.BooleanVar(value=False)
        self._item_prob = None
        self._stage_mob = None
        self._stage_geo = None
        self._stage_frame = None
        self._stage_frame_cache = {}
        self._stage_playing = False
        self._stage_play_job = None
        super().__init__(app, host, browser_host, k)

    # ------------------------------------------------------------ layout
    def build(self, host):
        ws = self.standard_layout(host, layers=True, bottom_ratio=0.7)
        h = self.view_panel.header
        for key, title in (('picker', 'Picker'), ('pencil', 'Paint'), ('select', 'Select')):
            ttk.Radiobutton(h, text=title, value=key, variable=self.tool,
                            style='ToolToggle.TRadiobutton').pack(side='left', padx=2)
        ttk.Checkbutton(h, text='Layer bounds', variable=self.show_bounds, style='Toolbar.TCheckbutton',
                        command=lambda: self.view.redraw()).pack(side='right', padx=6)
        ttk.Button(h, text='Frame', style='Tool.TButton', command=self.frame_view).pack(side='right', padx=6)
        ttk.Checkbutton(h, text='Physics/spawns', variable=self.preview_objects,
                        command=self._preview_changed).pack(side='right', padx=3)
        ttk.Checkbutton(h, text='Markers', variable=self.show_markers,
                        command=lambda: self.view.redraw()).pack(side='right', padx=3)
        ttk.Label(h, text='Stage tick').pack(side='right', padx=(9, 2))
        self.stage_spin = ttk.Spinbox(h, from_=0, to=36000, width=6,
                                      textvariable=self.stage_tick, command=self._preview_changed)
        self.stage_spin.pack(side='right')
        self.stage_spin.bind('<Return>', self._preview_changed)
        self.stage_spin.bind('<FocusOut>', self._preview_changed)
        self.stage_play_button = ttk.Button(h, text='Play stage', command=self._toggle_stage_play)
        self.stage_play_button.pack(side='right', padx=4)
        self.view = self.make_viewport(on_draw=self._draw, on_press=self._press,
                                       on_drag=self._drag, on_release=self._release,
                                       origin_frac=(0.05, 0.08), zoom=1)
        self.view.show_grid.set(False)
        self.view.canvas.bind('<Motion>', self._hover, add='+')
        self.layer_list = LayerList(self.layers_panel.body, on_select=self._select_layer, on_toggle=self._toggle)
        self.layer_list.pack(fill='both', expand=True, padx=4, pady=4)
        self.missions = MissionPanel(self, self.inspector.master)
        self.missions.frame.pack_forget()
        self._inspector_mode = 'stage'
        for key, title, kinds in (('markers', 'Map markers', ('floor', 'grip')),
                                  ('triggers', 'Triggers / gimmicks', ('gimmick',)),
                                  ('spawns', 'Spawns', ('item', 'symbol'))):
            self._build_marker_ribbon(key, title, kinds)
        tiles = self.bottom.add('tiles', 'Tile set')
        self.tile_canvas = tk.Canvas(tiles, bg=T.CANVAS_BG, highlightthickness=0, height=int(150 * self.k))
        tsb = ttk.Scrollbar(tiles, orient='horizontal', command=self.tile_canvas.xview)
        self.tile_canvas.configure(xscrollcommand=tsb.set)
        self.tile_canvas.pack(fill='both', expand=True, padx=4, pady=(4, 0))
        self.tile_canvas.bind('<Button-1>', self._choose_tile)
        opts = ttk.Frame(tiles)
        opts.pack(fill='x', padx=6, pady=3)
        ttk.Label(opts, text='Palette bank').pack(side='left')
        ttk.Combobox(opts, textvariable=self.bank, values=list(range(16)), width=3,
                     state='readonly').pack(side='left', padx=6)
        ttk.Checkbutton(opts, text='H flip', variable=self.flip_h).pack(side='left', padx=4)
        ttk.Checkbutton(opts, text='V flip', variable=self.flip_v).pack(side='left', padx=4)
        ttk.Label(opts, text='Click a source tile, then Paint on the viewport.', style='Toolbar.TLabel').pack(side='left', padx=8)
        tsb.pack(fill='x', padx=4)
        raw = self.bottom.add('raw', 'Stage data (read-only)')
        self.raw_log = TextLog(raw)
        self.raw_log.pack(fill='both', expand=True, padx=4, pady=4)
        sim = self.bottom.add('runtime', 'Stage runtime')
        controls = ttk.Frame(sim)
        controls.pack(fill='x', padx=6, pady=4)
        ttk.Checkbutton(controls, text='Item candidates/spawns', variable=self.preview_items,
                        command=self._preview_changed).pack(side='left')
        ttk.Label(controls, text='Floor intervals:').pack(side='left', padx=(12, 2))
        ttk.Entry(controls, width=12, textvariable=self.preview_pressure).pack(side='left')
        ttk.Label(controls, text='Hit timeline:').pack(side='left', padx=(12, 2))
        ttk.Entry(controls, width=12, textvariable=self.preview_hits).pack(side='left')
        ttk.Button(controls, text='Project', command=self._preview_changed).pack(side='left', padx=6)
        camera_bar = ttk.Frame(sim)
        camera_bar.pack(fill='x', padx=6)
        ttk.Label(camera_bar, text='Camera X/Y:').pack(side='left', padx=(2, 2))
        ttk.Entry(camera_bar, textvariable=self.camera_x, width=7).pack(side='left')
        ttk.Entry(camera_bar, textvariable=self.camera_y, width=7).pack(side='left', padx=(3, 0))
        ttk.Checkbutton(camera_bar, text='Palette preview (CPU)', variable=self.preview_palette,
                        command=self._preview_changed).pack(side='left', padx=8)
        ttk.Checkbutton(camera_bar, text='Collision boxes', variable=self.preview_collisions,
                        command=self._preview_changed).pack(side='left', padx=6)
        ttk.Label(camera_bar, text='Wall damage:').pack(side='left', padx=(6, 2))
        ttk.Entry(camera_bar, textvariable=self.preview_wall_hits, width=18).pack(side='left')
        ttk.Label(camera_bar, text='ID@tick:damage', style='Toolbar.TLabel').pack(side='left', padx=4)
        ttk.Label(camera_bar, text='Inputs: floor ID@start-end, hit ID@tick; bare IDs start at tick 0',
                  style='Toolbar.TLabel').pack(side='left', padx=8)
        self.runtime_log = TextLog(sim)
        self.runtime_log.pack(fill='both', expand=True, padx=4, pady=4)
        self.problems = self.problems_page()
        t = self.bottom.tools
        T.tool_button(t, 'Export layer PNG…', self.export_layer, 'Save the selected background layer as a PNG')
        T.tool_button(t, 'Export composite…', self.export_composite, 'Save all visible layers as one PNG')
        self.bottom.on_change = self._tab_changed
        return ws

    def _tab_changed(self, name):
        # Dock tabs select a stage editing tool; mission undo scope is controlled
        # by MissionPanel.checkpoint, not by the active ribbon tab.
        self.app._update_undo_label()

    def show_mission_inspector(self):
        if self.missions.catalog is None or self.missions.node_id is None:
            return
        self.inspector.pack_forget()
        self.missions.frame.pack(fill='both', expand=True)
        self._inspector_mode = 'mission'
        self.missions.refresh()

    def show_stage_inspector(self):
        self.missions.frame.pack_forget()
        self.inspector.pack(fill='both', expand=True)
        self._inspector_mode = 'stage'
        self.refresh_inspector()


    def build_browser(self, parent):
        self.tree = self.browser_tree(parent, ('kind',), (78,), ('Content',))
        self.tree.bind('<<TreeviewSelect>>', self._browse)
        self.filter_var.trace_add('write', lambda *_: self.populate())

    # ------------------------------------------------------------ browser
    def on_root(self):
        self._stop_stage_play()
        self._sets = []
        if self.app.root_data:
            try:
                self._sets = scenes.stage_sets(self.app.root_data)
            except (OSError, ValueError, KeyError) as exc:
                self.app.status.set(f'stage.aar: {exc}')
        self.missions.on_root()
        self._by_stage = self.missions.nodes_by_stage()
        self.stage = None
        self.populate()
        if self.missions.catalog is not None and self.missions.catalog.graph.node_count:
            self.select_mission(0)
            if self.tree.exists('n:0'):
                self.tree.selection_set('n:0')
                self.tree.see('n:0')
        self.refresh_inspector()

    def populate(self):
        """Render the verified J-Space → galaxy → world → mission hierarchy.

        Mission->world is decoded. Galaxy->world parent references have not yet
        been traced; never invent them. For multi-galaxy data, worlds appear in
        a clearly labelled unresolved bucket until that relationship is proved.
        """
        t = self.tree
        selected = t.selection()
        t.delete(*t.get_children())
        flt = self.filter_var.get().strip().casefold()
        c = self.missions.catalog
        root = t.insert('', 'end', 'js:0', text='J-SPACE', values=('Map',), open=True)
        if c is None:
            return
        for galaxy_id in range(c.graph.galaxy_count):
            galaxy = c.graph.galaxy_name(galaxy_id) or f'Galaxy {galaxy_id}'
            t.insert(root, 'end', f'g:{galaxy_id}',
                     text=f'{galaxy_id:02d}  {galaxy}', values=('Galaxy',),
                     open=(c.graph.galaxy_count == 1 or bool(flt)))
        parent = 'g:0' if c.graph.galaxy_count == 1 else None
        for planet_id in range(c.graph.planet_count):
            world = c.graph.planet_name(planet_id) or f'World {planet_id}'
            loc_id = c.graph.planet_location_id(planet_id)
            location = (c.graph.location_name(loc_id) if loc_id < c.graph.location_count
                        else f'Location {loc_id}')
            nodes = []
            for node_id in range(c.graph.node_count):
                node = c.graph.get(node_id)
                if node.planet_id != planet_id:
                    continue
                title = self.missions.node_label(node_id)
                stage = self.missions.stage_of(node_id) or ''
                if (not flt or any(flt in text.casefold()
                                   for text in (world, location, title, stage))):
                    nodes.append((node_id, title, stage, node))
            if not nodes:
                continue
            if parent is None:
                parent = t.insert(root, 'end', 'g:unresolved',
                                  text='Worlds (galaxy parents unverified)',
                                  values=('Unresolved',), open=True)
            node = self.missions.node_id
            expanded = bool(flt) or (node is not None and
                                      node < c.graph.node_count and
                                      c.graph.get(node).planet_id == planet_id)
            wid = t.insert(parent, 'end', f'p:{planet_id}',
                           text=f'{planet_id:02d}  {world}',
                           values=(f'World / loc {loc_id:02d}',), open=expanded)
            for node_id, title, stage, nd in nodes:
                t.insert(wid, 'end', f'n:{node_id}', text=title,
                         values=(('M' if nd.mission else 'B') +
                                 f'{nd.definition_id} · {stage[3:]}',))
        for iid in selected:
            if t.exists(iid):
                t.selection_set(iid)
                t.see(iid)
                break

    def _browse(self, _e=None):
        sel = self.tree.selection()
        if not sel:
            return
        iid = sel[0]
        if iid.startswith('n:'):
            self.select_mission(int(iid[2:]))
            return
        if iid == 'js:0':
            self.nav_kind, self.nav_id = 'root', None
        elif iid.startswith('g:'):
            self.nav_kind = 'galaxy'
            self.nav_id = None if iid == 'g:unresolved' else int(iid[2:])
        elif iid.startswith('p:'):
            self.nav_kind, self.nav_id = 'world', int(iid[2:])
        else:
            return
        self.show_stage_inspector()
        self.refresh_inspector()
        self.view.redraw()

    def select_mission(self, node_id):
        """Select one mission, load its battle stage, and show its inspector."""
        self._stop_stage_play()
        self.nav_kind, self.nav_id = 'mission', node_id
        self.missions.select_node(node_id)
        stem = self.missions.stage_of(node_id)
        if stem and (not self.stage or self.stage.stem != stem):
            if any(s.stem == stem for s in self._sets):
                self.load(stem)
        self.show_mission_inspector()
        self._preview_changed()
        self.refresh_inspector()

    def mission_changed(self):
        """Keep the hierarchy and shared stage-reference list in sync."""
        self._by_stage = self.missions.nodes_by_stage()
        self.populate()
        self.refresh_inspector()
        if self._inspector_mode == 'mission':
            self.missions.refresh()

    def load(self, stem):
        if self.stage and self.stage.stem != stem and (self.maps_dirty or self.mob_dirty):
            if not messagebox.askyesno('Level', 'Discard unapplied tile-map edits before switching stages?'):
                return
        self.stage = next((s for s in self._sets if s.stem == stem), None)
        self._stroke = False
        self.sel_overlay = None
        self._original_maps = {}
        self._dsig_cache = {}
        self._stage_mob, self._stage_geo, self._stage_frame = None, None, None
        self._original_mob, self._mob_working = b'', b''
        self._active_marker = None
        self._item_prob = None
        self._stage_frame_cache = {}
        self.layers, self.images, self.sel_layer, self.sel_tile = [], {}, None, None
        probs = []
        for role in ('layers', 'floor'):
            if self.stage and role in self.stage.members:
                try:
                    self.layers += scenes.find_layers(self.app.root_data, self.stage.members[role])
                except (ValueError, KeyError) as exc:
                    probs.append((f'{role}: {exc}', 'bad'))
        if self.stage:
            for role, parse, dest in (('mob', stagephysics.parse_mob, '_stage_mob'),
                                      ('bin', stagephysics.parse_stage_bin, '_stage_geo')):
                path = self.stage.members.get(role)
                if path:
                    try:
                        blob = self.app.root_data.read(path)
                        setattr(self, dest, parse(blob))
                        if role == 'mob':
                            self._original_mob = self._mob_working = blob
                    except (ValueError, IndexError, KeyError, OSError) as exc:
                        probs.append((f'{role} parser: {exc}', 'warn'))
        if self.stage:
            for ipath in ('item/itemprob.ipf', 'bin/item/itemprob.ipf'):
                if self.app.root_data.exists(ipath):
                    try:
                        self._item_prob = itemprob.ItemProb.parse(self.app.root_data.read(ipath))
                    except (ValueError, KeyError, OSError) as exc:
                        probs.append((f'Item probability table {ipath}: {exc}', 'warn'))
                    break
        for l in self.layers:
            self._original_maps[l.atm_path] = self.app.root_data.read(l.atm_path)
            img, p = scenes.render_layer(self.app.root_data, l)
            self.images[l.name] = img
            probs += [(f'{l.name}: {x}', 'warn') for x in l.problems + p]
            # alternates without their own tiles (e.g. *_sud) start hidden so they don't cover the main layer
            self.visible.setdefault(l.name, l.borrowed is None)
        shown = [l for l in self.layers if self.visible.get(l.name)]
        self.sel_layer = (shown or self.layers or [None])[-1]
        if self.sel_layer and self.sel_layer.map.entries:
            self._set_brush(self.sel_layer.map.entries[0])
        self._probs = probs
        self._preview_changed(redraw=False)
        self.refresh(frame=True)
        self.app.status.set(f'{stem}: {len(self.layers)} background layers')

    # ------------------------------------------------------------ view
    def _layer_rows(self):
        rows = [{'id': 'bg', 'name': 'Backgrounds', 'kind': 'group'}]
        # Draw/display priority is recorded in the stage BG records; editor layer toggles remain local.
        for l in self.layers:
            w, h = l.map.width, l.map.height
            rows.append({'id': 'L:' + l.name, 'parent': 'bg', 'name': l.name, 'kind': 'ALTM',
                         'visible': self.visible.get(l.name, True),
                         'status': f'{w}×{h} {"packed" if l.map.packed else "raw"}'})
        rows.append({'id': 'ro', 'name': 'Read-only overlays', 'kind': 'group'})
        for key, name, ext in OVERLAYS:
            have = bool(self.stage and key in self.stage.members) if ext or key == 'gimmick' else False
            rows.append({'id': 'O:' + key, 'parent': 'ro', 'name': name, 'kind': 'overlay', 'readonly': True,
                          'available': key in ('mob', 'bin') and (self._stage_mob is not None
                              if key == 'mob' else self._stage_geo is not None),
                          'visible': self.preview_objects.get(),
                          'status': ('runtime inspector' if key in ('mob', 'bin') and have
                                     else 'not decoded' if have else 'no data')})
        return rows

    def refresh(self, frame=False):
        self.layer_list.set_layers(self._layer_rows())
        self.view_panel.set_title(f'Viewport — {self.stage.stem}' if self.stage else 'Viewport')
        self.problems.set_lines(self._probs or [('No problems.', 'good')])
        self._fill_raw()
        self._fill_tiles()
        self._preview_changed(redraw=False)
        self.refresh_inspector()
        if frame:
            self.frame_view()
        else:
            self.view.redraw()

    def frame_view(self):
        vis = [l for l in self.layers if self.visible.get(l.name, True)]
        if vis:
            rects = [(self._layer_position(l)[0], self._layer_position(l)[1],
                      self._layer_position(l)[0] + l.size[0],
                      self._layer_position(l)[1] + l.size[1]) for l in vis]
            self.view.frame_rect((min(r[0] for r in rects), min(r[1] for r in rects),
                                  max(r[2] for r in rects), max(r[3] for r in rects)))

    def _layer_position(self, layer):
        """Stage BG layer i uses the i-th verified .bin record."""
        try:
            suffix = layer.name.rsplit('_', 1)[1]
            i = int(suffix)
            if self._stage_geo and i < len(self._stage_geo.layers):
                record = self._stage_geo.layers[i]
                x, y = float(record.x), float(record.y)
                for anim in record.anims:
                    if anim.kind == 3:
                        try:
                            baseline = stagepreview.parallax_at(anim, 0, 0)
                            result = stagepreview.parallax_at(
                                anim, float(self.camera_x.get()), float(self.camera_y.get()))
                            x += result[0] - baseline[0]
                            y += result[1] - baseline[1]
                        except (ValueError, tk.TclError):
                            pass
                return x, y
        except (ValueError, IndexError, AttributeError):
            pass
        return 0, 0

    @staticmethod
    def _ids(text):
        """Manual preview IDs, not serialized game events."""
        try:
            return tuple(sorted({int(x.strip()) for x in text.split(',') if x.strip()}))
        except ValueError:
            return ()

    def _stop_stage_play(self):
        self._stage_playing = False
        job = self._stage_play_job
        self._stage_play_job = None
        if job is not None:
            try:
                self.app.after_cancel(job)
            except tk.TclError:
                pass
        if hasattr(self, 'stage_play_button'):
            self.stage_play_button.configure(text='Play stage')

    def _toggle_stage_play(self):
        if self._stage_playing:
            self._stop_stage_play()
            return
        if not self._stage_mob:
            self.app.status.set('Select a mission with stage physics before preview playback.')
            return
        self._stage_playing = True
        self.stage_play_button.configure(text='Pause stage')
        self._advance_stage()

    def _advance_stage(self):
        if not self._stage_playing or self.app.workspace != 'level':
            self._stop_stage_play()
            return
        try:
            self.stage_tick.set(max(0, int(self.stage_tick.get())) + 1)
            self._preview_changed()
        except tk.TclError:
            self._stop_stage_play()
            return
        # Preview samples at 30 ticks/s to keep large tile maps responsive;
        # actual in-game physics still advances in 60-Hz tick units.
        self._stage_play_job = self.app.after(33, self._advance_stage)

    def _preview_changed(self, _event=None, *, redraw=True):
        try:
            tick = max(0, int(self.stage_tick.get()))
        except (ValueError, tk.TclError):
            tick = 0
        c = self.missions.catalog
        n = self.missions.node_id
        enabled = bool(c and n is not None and (self.missions.definition(n).data[0x7C] & 0x02))
        self._stage_frame = None
        if self._stage_mob is not None:
            try:
                floor_timeline = stagepreview.parse_occupancy(self.preview_pressure.get())
                hits = stagepreview.parse_hits(self.preview_hits.get())
                wall_hits = stagepreview.parse_wall_hits(self.preview_wall_hits.get())
                camera = (float(self.camera_x.get()), float(self.camera_y.get()))
                self._stage_frame = stagepreview.project(
                    self._stage_mob, self._stage_geo, tick, environment=enabled,
                    items_enabled=self.preview_items.get(),
                    occupied_history=floor_timeline, hit_history=hits, camera=camera,
                    wall_damage_history=wall_hits)
            except (ValueError, IndexError, tk.TclError) as exc:
                self.app.status.set(f'Invalid stage preview scenario: {exc}')
        if hasattr(self, 'runtime_log'):
            self._fill_runtime()
        if redraw and hasattr(self, 'view'):
            self.view.redraw()

    def _fill_runtime(self):
        f = self._stage_frame
        if f is None:
            self.runtime_log.set_lines(['No decoded .mob runtime for this mission/stage.'])
            return
        lines = [f'Frame {f.tick}: runtime projection (not an emulator replay)',
                 f'{len(f.floors)} moving floors · {len(f.gimmicks)} gimmicks · {len(f.spawns)} shown spawns',
                 'Trigger timelines are manual inputs, not collision-derived battle events.']
        lines += [f'Floor {x.index}: ({x.x:.1f},{x.y:.1f}) mode {x.mode} '
                  f'{"solid" if x.solid else "absent"} — {x.note}' for x in f.floors]
        lines += [f'{x.kind} {x.index}: ({x.x:.0f},{x.y:.0f}) {x.label}' for x in f.spawns]
        lines += [f'BG {layer}: scripted scroll ({sx:+.2f},{sy:+.2f}) px' for layer,sx,sy in f.scroll]
        lines += [f'BG {layer}: parallax displacement ({px:+.2f},{py:+.2f}) at '
                  f'camera ({self.camera_x.get()}, {self.camera_y.get()})'
                  for layer,px,py in f.parallax]
        lines += [f'BG {layer}: {description}' for layer,description in f.palette]
        lines += [f'Wall {wall.index} / collision {wall.collision_index}: '
                  f'{wall.hp}/{wall.initial_hp} HP, phase {wall.damage_phase}'
                  for wall in f.walls]
        lines += list(f.notes)
        cfg = getattr(self._stage_mob, 'items', None)
        if self._item_prob is not None and cfg is not None:
            try:
                rule = self.missions.definition(self.missions.node_id).rule
                for jp_enabled in (False, True):
                    for row, weights in enumerate(self._item_prob.combined(
                            cfg, jpower_enabled=jp_enabled, battle_rule=rule)):
                        lines.append(f'Item outcome weights ({("J-Power on" if jp_enabled else "normal")}, '
                                     f'row {row}, total {sum(weights)}/1000000): '
                                     + ', '.join(str(w) for w in weights))
                lines.append('Outcome-row selection and game RNG are combat-dependent and unresolved. '
                             'Item weights are decoded, not a claim of exact drops.')
            except (ValueError, IndexError, AttributeError) as exc:
                lines.append(f'Item probability diagnostics: {exc}')
        if self._stage_geo:
            lines += [f'Collision descriptors: {len(self._stage_geo.collision_records)} (rectangles decoded; contact response incomplete)',
                      f'Wall descriptors: {len(self._stage_geo.wall_records)} (read-only)']
        self.runtime_log.set_lines(lines)

    def _preview_bg_image(self, layer, img):
        """Project palette animations by re-rendering DSIG banks, then scroll.

        Both transformations are read-only. Source DSIG/ALTM bytes are untouched.
        """
        if not self._stage_geo or not self._stage_frame:
            return img
        try:
            idx = int(layer.name.rsplit('_', 1)[1])
            bg = self._stage_geo.layers[idx]
        except (ValueError, IndexError, AttributeError):
            return img
        palette_anims = [a for a in bg.anims if a.kind in (0, 1)]
        scroll_anims = [a for a in bg.anims if a.kind == 2]
        if not (scroll_anims or (self.preview_palette.get() and palette_anims)):
            return img
        key = (layer.name, self._stage_frame.tick, id(img), bool(self.preview_palette.get()))
        if key in self._stage_frame_cache:
            return self._stage_frame_cache[key]
        result = img.copy()
        if self.preview_palette.get() and palette_anims and layer.image_path:
            try:
                dsig = tilemap.embedded_dsig(self.app.root_data.read(layer.image_path))
                if dsig is not None:
                    dsig.palettes = [list(bank) for bank in
                                     stagepreview.palette_at(palette_anims, dsig.palettes,
                                                             self._stage_frame.tick)]
                    result, _ = tilemap.render(layer.map, dsig)
            except (ValueError, KeyError, OSError, IndexError) as exc:
                self.app.status.set(f'Palette projection for {layer.name}: {exc}')
        for anim in scroll_anims:
            row = max(0, min(result.height, anim.fields()['row'] * 8))
            if row >= result.height:
                continue
            sx, sy = stagepreview._scroll(anim, self._stage_frame.tick)
            strip = result.crop((0, row, result.width, result.height))
            shifted = ImageChops.offset(strip, int(round(sx)), int(round(sy)))
            result.paste(shifted, (0, row))
        if len(self._stage_frame_cache) > 16:
            self._stage_frame_cache.clear()
        self._stage_frame_cache[key] = result
        return result

    def _draw(self, vp):
        if not self.stage:
            vp.hud.configure(text='Choose a J-Galaxy mission in the left sidebar.')
            return
        for l in self.layers:
            img = self.images.get(l.name)
            if img is None or not self.visible.get(l.name, True):
                continue
            ox, oy = self._layer_position(l)
            vp.add_image(self._preview_bg_image(l, img), ox, oy)
            if self.show_bounds.get():
                sel = l is self.sel_layer
                vp.rect(ox, oy, ox + l.size[0], oy + l.size[1],
                        outline=T.ACCENT if sel else T.LINE, dash=() if sel else (3, 3))
        if self.sel_layer is not None and self.sel_tile is not None:
            tx, ty = self.sel_tile
            ox, oy = self._layer_position(self.sel_layer)
            vp.rect(ox + tx*8, oy + ty*8, ox + tx*8+8, oy + ty*8+8,
                    outline=T.WARN, width=2)
        f = self._stage_frame
        if self._stage_geo and self.preview_collisions.get():
            phases = {wall.index: wall.damage_phase for wall in f.walls} if f else {}
            for coll in self._stage_geo.collision_boxes:
                x0, y0, x1, y1 = coll.bounds
                if x1 - x0 < 0.01 or y1 - y0 < 0.01:
                    continue
                damage_phase = phases.get(coll.wall_index, 0)
                colour = ('#E75D5D' if damage_phase == 3 else '#F0A764'
                          if coll.type_id == 2 else '#AC98D0')
                vp.rect(x0, y0, x1, y1, outline=colour, width=1, dash=(3, 3))
                if coll.wall_index >= 0:
                    vp.text(x0, y0, f'C{coll.index}/W{coll.wall_index}',
                            anchor='sw', fill=colour)
        if f and self.preview_objects.get():
            for floor in f.floors:
                source = self._stage_mob.floors[floor.index]
                hw = max(4, min(256, source.half_width))
                colour = '#72BBF7' if floor.solid else '#E68B89'
                vp.rect(floor.x-hw, floor.y-3, floor.x+hw, floor.y+3, outline=colour, width=2)
                vp.text(floor.x, floor.y-9, f'F{floor.index}', anchor='s', fill=colour)
            for event in f.bg_sprites:
                vp.text(event.x, event.y, event.label, anchor='nw', fill='#A0C4F0')
            for event in f.gimmicks:
                vp.rect(event.x-6,event.y-6,event.x+6,event.y+6,outline='#E8A35D')
                vp.text(event.x+8,event.y, f'G{event.index}', anchor='w',fill='#E8A35D')
            for event in f.spawns:
                colour = '#9FEAB0' if event.kind == 'item' else '#FF8B92'
                vp.rect(event.x-4,event.y-4,event.x+4,event.y+4,outline=colour,width=2)
        vp.hud.configure(text=f'{self.stage.stem} · mission {self.missions.node_id} · stage tick '
                              f'{f.tick if f else 0} · physics read-only')

    def _tile_at(self, wx, wy):
        l = self.sel_layer
        if l is None:
            return None
        ox, oy = self._layer_position(l)
        tx, ty = int((wx-ox) // 8), int((wy-oy) // 8)
        if 0 <= tx < l.map.width and 0 <= ty < l.map.height:
            return tx, ty
        return None

    def _hover(self, e):
        if not self.sel_layer:
            return
        wx, wy = self.view.to_world(e.x, e.y)
        t = self._tile_at(wx, wy)
        if t:
            v = self.sel_layer.map.get(*t)
            self.view.hud.configure(text=f'{self.sel_layer.name} tile ({t[0]},{t[1]}) px ({int(wx)},{int(wy)}): '
                                         f'entry 0x{v:04X} → tile {altmmod.entry_tile(v)} '
                                         f'bank {altmmod.entry_bank(v)}'
                                         f'{" H" if altmmod.entry_hflip(v) else ""}'
                                         f'{" V" if altmmod.entry_vflip(v) else ""}')

    def _press(self, wx, wy, e):
        self.sel_tile = self._tile_at(wx, wy)
        if self.sel_tile and self.tool.get() == 'picker':
            self._set_brush(self.sel_layer.map.get(*self.sel_tile))
            self.tool.set('pencil')
        elif self.sel_tile and self.tool.get() == 'pencil' and self.sel_layer.image_path:
            self.checkpoint('paint stage tiles')
            self._stroke = True
            self._paint(*self.sel_tile)
        self.refresh_inspector()
        self.view.redraw()

    def _drag(self, wx, wy, _e):
        if self._stroke:
            at = self._tile_at(wx, wy)
            if at:
                self.sel_tile = at
                self._paint(*at)

    def _release(self, wx, wy, _e):
        if self._stroke:
            self._stroke = False
            self.refresh_inspector()
            self.app.update_dirty()

    def _set_brush(self, value):
        self.brush = altmmod.entry_tile(value)
        self.bank.set(altmmod.entry_bank(value))
        self.flip_h.set(altmmod.entry_hflip(value))
        self.flip_v.set(altmmod.entry_vflip(value))
        self._draw_tile_marker()

    def _brush_value(self):
        return (self.brush | ((self.bank.get() & 15) << 12) |
                (0x400 if self.flip_h.get() else 0) | (0x800 if self.flip_v.get() else 0))

    def _choose_tile(self, e):
        if not self.sel_layer or not self.sel_layer.image_path:
            return
        x = self.tile_canvas.canvasx(e.x) - 4
        y = self.tile_canvas.canvasy(e.y) - 4
        if x < 0 or y < 0:
            return
        tile = int(x // 16) + int(y // 16) * 64
        if 0 <= tile < getattr(self, '_tile_count', 0):
            self.brush = tile
            self._draw_tile_marker()
            self.tool.set('pencil')
            self.refresh_inspector()

    def _draw_tile_marker(self):
        if not hasattr(self, 'tile_canvas'):
            return
        self.tile_canvas.delete('brush')
        if 0 <= self.brush < getattr(self, '_tile_count', 0):
            x = 4 + (self.brush % 64) * 16
            y = 4 + (self.brush // 64) * 16
            self.tile_canvas.create_rectangle(x, y, x + 16, y + 16, width=2,
                                              outline=T.ACCENT, tags='brush')

    def _paint(self, tx, ty):
        l = self.sel_layer
        if not l or not l.image_path or self.brush >= getattr(self, '_tile_count', 0):
            return
        value = self._brush_value()
        if l.map.get(tx, ty) == value:
            return
        l.map.set(tx, ty, value)
        # Decode only the edited 8×8 cell during a brush drag; a full 512×512
        # render on every pointer event makes painting impractically slow.
        dsig = self._dsig_cache.get(l.image_path)
        if dsig is None:
            dsig = tilemap.embedded_dsig(self.app.root_data.read(l.image_path))
            self._dsig_cache[l.image_path] = dsig
        if dsig is not None and self.images.get(l.name) is not None:
            cell = altmmod.AltmFile(width=1, height=1, entries=[value])
            pixel, problems = tilemap.render(cell, dsig)
            self.images[l.name].paste(pixel, (tx * 8, ty * 8))
        else:
            self.images[l.name], problems = scenes.render_layer(self.app.root_data, l)
        self._probs = [p for p in self._probs if not p[0].startswith(l.name + ':')]
        self._probs.extend((l.name + ': ' + p, 'warn') for p in problems)
        self.view.redraw()
        self.app.update_dirty()

    def _select_layer(self, row):
        if not row:
            return
        iid = str(row['id'])
        if iid.startswith('L:'):
            self.sel_layer = next((l for l in self.layers if l.name == iid[2:]), None)
            self.sel_overlay = None
            self._fill_tiles()
            if self.sel_layer and self.sel_layer.map.entries:
                self._set_brush(self.sel_layer.map.entries[0])
        elif iid.startswith('O:'):
            self.sel_overlay = iid[2:]
        self.refresh_inspector()
        self.view.redraw()

    def _toggle(self, row):
        iid = str(row['id'])
        if iid.startswith('L:'):
            self.visible[iid[2:]] = row['visible']
            self.view.redraw()

    # ------------------------------------------------------------ docks
    def _fill_tiles(self):
        c = self.tile_canvas
        c.delete('all')
        self._tile_photo = None
        self._tile_count = 0
        l = self.sel_layer
        if not l or not l.image_path:
            c.create_text(10, 20, anchor='w', text='Select a background layer', fill=T.MUTED, font=T.UI_FONT)
            return
        try:
            dsig = tilemap.embedded_dsig(self.app.root_data.read(l.image_path))
            if dsig is None:
                raise ValueError('No DSIG tile sheet for this layer')
            n = min(tilemap.tile_count(dsig), 1024)  # text-BG entry has a 10-bit tile index
            self._tile_count = n
            # sheet: 64 tiles per row, using palette bank of the most common entry
            banks = [altmmod.entry_bank(v) for v in l.map.entries]
            bank = max(set(banks), key=banks.count)
            cols = 64
            rows = (n + cols - 1) // cols
            sheet = altmmod.AltmFile(width=cols, height=rows,
                                     entries=[(bank << 12) | min(i, n - 1) for i in range(cols * rows)])
            img, _ = tilemap.render(sheet, dsig, opaque_zero=True)
            z = 2
            img = img.resize((img.width * z, img.height * z), Image.NEAREST)
            self._tile_photo = ImageTk.PhotoImage(img)
            c.create_image(4, 4, image=self._tile_photo, anchor='nw')
            used = l.map.used_tiles()
            c.create_text(img.width + 12, 8, anchor='nw', fill=T.MUTED, font=T.MONO_SMALL,
                          text=f'{split(l.image_path)[-1]}\n{n} tiles, {len(used)} used\nmode 0x{dsig.mode:02X}, '
                               f'{dsig.banks} banks\nshown with bank {bank}')
            c.configure(scrollregion=(0, 0, img.width + 220, img.height + 8))
            self._draw_tile_marker()
        except (ValueError, KeyError) as exc:
            c.create_text(10, 20, anchor='w', text=str(exc), fill=T.BAD, font=T.UI_FONT)

    def _fill_raw(self):
        lines = []
        if self.stage:
            items = [(k, n) for k, n, _ in OVERLAYS] + [('shared', 'Shared stage data')]
            for key, name in items:
                path = self.stage.members.get(key)
                if not path:
                    continue
                if key == 'gimmick':
                    try:
                        arc = self.app.root_data.archive(path)
                        lines.append((f'{name}: {split(path)[-1]} — {len(arc.entries)} members (not decoded)', 'warn'))
                        for e in arc.entries:
                            lines.append(f'    {e.name.split("/")[-1]:28} type 0x{e.type_byte:02X} {len(e.data):7} bytes')
                    except (ValueError, KeyError) as exc:
                        lines.append((f'{name}: {exc}', 'bad'))
                    continue
                blob = self.app.root_data.read(path)
                lines.append((f'{name}: {split(path)[-1]} — {len(blob)} bytes, format not decoded (read-only)', 'warn'))
                for off in range(0, min(len(blob), 256), 16):
                    chunk = blob[off:off + 16]
                    lines.append(f'  {off:04X}  {chunk.hex(" "):47}')
                if len(blob) > 256:
                    lines.append(('  …', 'muted'))
        self.raw_log.set_lines(lines or [('No stage data files.', 'muted')])

    # ------------------------------------------------------------ inspector
    def refresh_inspector(self):
        ins = self.inspector
        ins.clear()
        self._mission_inspector(ins)
        if not self.stage:
            ins.section('Level editor')
            ins.text('Select a J-Galaxy mission to load its assigned stage. ALTM tiles and mission rewards '
                     'are writable. Parsed .mob/.bin floor, gimmick and spawner behavior is preview-only; '
                     'collision hitboxes and camera state are not yet reproduced.')
            return
        ov = getattr(self, 'sel_overlay', None)
        if ov:
            name = next(n for k, n, _ in OVERLAYS if k == ov)
            ins.section(name, note='Read-only overlay (Level v1 policy)')
            path = self.stage.members.get(ov)
            ins.value('Source', split(path)[-1] if path else '—')
            ins.evidence('Format', 'Direct' if ov in ('mob','bin') else 'Unknown',
                         'verified .mob/.bin structures and read-only simulation' if ov in ('mob','bin')
                         else 'not yet traced')
            ins.text('Decoded stage physics and spawner markers are projected when their mission enables them. '
                     'This diagnostic cannot alter the underlying .mob/.bin data.')
            return
        l = self.sel_layer
        ins.section('Stage', note=self.stage.stem)
        idx = roster.stage_index(self.stage.stem)
        if idx is None:
            ins.value('Battle stage index', '— (not in stage table)')
        else:
            _, a, b = roster.STAGES[idx]
            ins.value('Battle stage index', f'{idx} (0x{idx:02X})')
            ins.value('Table words', f'0x{a:02X}, 0x{b:02X}')
            ins.evidence('Stage table', 'Direct','ARM9 0x02092D08 {name, s16, s16}; index = definition +0x75')
            ins.evidence('Table words', 'Inferred', 'ov06 passes them to FUN_020734E0 / FUN_0207361C (music?)')
        used = self._by_stage.get(self.stage.stem, [])
        ins.value('Missions here', str(len(used)))
        for i in used[:12]:
            ins.value('', self.missions.node_label(i))
        if len(used) > 12:
            ins.value('', f'… {len(used) - 12} more (filter the browser by {self.stage.stem})')
        ins.value('Layers', str(len(self.layers)))
        ins.value('Gimmick archive', 'yes' if 'gimmick' in self.stage.members else 'no')
        if l is None:
            return
        m = l.map
        ins.section(f'Layer {l.name}')
        ins.value('Map', f'{m.width}×{m.height} tiles = {m.pixel_size[0]}×{m.pixel_size[1]} px')
        ins.value('Storage', 'packed rows (flags 0x07)' if m.packed else 'raw (flags 0x03)')
        ins.value('Tiles used', str(len(m.used_tiles())))
        ins.value('Banks used', ', '.join(map(str, sorted(m.used_banks()))))
        ins.value('Tile image', (split(l.image_path)[-1] if l.image_path else '— (no pair)') +
                  (f'  (borrowed from {l.borrowed})' if l.borrowed else ''))
        ins.evidence('ALTM map', 'Inferred', 'structure validated on all 1,558 ALTM files; loader not traced')
        ins.evidence('Pairing', 'Inferred', 'same-stem .dig / .dtx in the stage archive')
        ins.evidence('Position', 'Direct' if self._stage_geo else 'Unknown',
             'BG record position/priority from stage .bin; camera projection incomplete')
        if self.sel_tile:
            tx, ty = self.sel_tile
            v = m.get(tx, ty)
            ins.section(f'Tile ({tx}, {ty})')
            ins.value('Entry', f'0x{v:04X}')
            ins.value('Tile', str(altmmod.entry_tile(v)))
            ins.value('Bank', str(altmmod.entry_bank(v)))
            ins.value('Flip', ('H ' if altmmod.entry_hflip(v) else '') + ('V' if altmmod.entry_vflip(v) else '') or '—')
        ins.section('Tile painting')
        ins.value('Tool', self.tool.get())
        ins.value('Brush', f'tile {self.brush}, bank {self.bank.get()}' +
                  (' H' if self.flip_h.get() else '') + (' V' if self.flip_v.get() else ''))
        ins.value('Unapplied edits', 'yes' if l.map.build() != self._original_maps.get(l.atm_path) else 'no',
                  colour=T.WARN if l.map.build() != self._original_maps.get(l.atm_path) else None)
        ins.text('Paint edits only ALTM tile entries. Camera, .mob/.bin, collision and gimmicks are read-only. '
                 'Use Apply, then Save; the stage archive is not modified before Save.')

    def _mission_inspector(self, ins):
        m = self.missions
        if m.catalog is None or m.node_id is None:
            return
        n = m.catalog.graph.get(m.node_id)
        d = m.definition(m.node_id)
        ins.section('Mission', note=f'node {n.index:03d}')
        ins.value('Title', d.name)
        ins.value('Definition', f'{"mission" if n.mission else "battle"}.bin #{d.index}')
        stem = roster.stage_stem(d.stage_index)
        ins.value('Stage', f'{d.stage_index} → {stem or "not in table"}',
                  colour=None if stem == (self.stage.stem if self.stage else None) else T.WARN)
        ins.value('Rule', str(d.rule))
        ins.value('Opponents', str(d.opponents))
        ins.value('Time value', str(d.time_value))
        ins.value('Stage physics/gimmicks', 'enabled' if d.data[0x7C] & 0x02 else 'disabled')
        ins.evidence('Battle setup', 'Direct', 'FUN_0207538C copies +0x70..+0xA3 into the battle globals; '
                                               'read-only here')

    # ------------------------------------------------------------ undo / apply
    def doc(self):
        if self.focus == 'mission':
            return MISSION_DOC if self.missions.catalog is not None else None
        return 'level:' + self.stage.stem if self.stage else None

    def snapshot(self):
        if self.focus == 'mission':
            return self.missions.snapshot()
        if not self.stage:
            return None
        return ({l.atm_path: l.map.build() for l in self.layers},
                self.sel_layer.name if self.sel_layer else None, self.sel_tile)

    def checkpoint(self, label):
        self.focus = 'level'
        super().checkpoint(label)

    def restore(self, snap):
        if self.focus == 'mission':
            self.missions.restore(snap)
            return
        blobs, selected, tile = snap
        for l in self.layers:
            if l.atm_path in blobs:
                l.map = altmmod.parse(blobs[l.atm_path])
                self.images[l.name], _ = scenes.render_layer(self.app.root_data, l)
        self.sel_layer = next((l for l in self.layers if l.name == selected), None)
        self.sel_tile = tile
        self.refresh()

    @property
    def maps_dirty(self):
        return any(l.map.build() != self._original_maps.get(l.atm_path) for l in self.layers)

    @property
    def dirty(self):
        return self.maps_dirty or self.missions.dirty

    def apply(self):
        if not self.dirty:
            self.app.status.set('Level: nothing to apply.')
            return
        done = []
        if self.missions.dirty:
            changed = self.missions.apply()
            if changed is None:
                return
            done.append(', '.join(changed) + ' into jgalaxy.aar')
        if self.maps_dirty:
            n = self._apply_maps()
            if n is None:
                return
            done.append(f'{n} ALTM map(s) into the stage archive')
        self.app.update_dirty()
        self.app.status.set('Applied ' + '; '.join(done) + '. Save (Ctrl+S) to write the archives.')

    def _apply_maps(self):
        updates = []
        try:
            for l in self.layers:
                blob = l.map.build()
                if blob == self._original_maps.get(l.atm_path):
                    continue
                check = altmmod.parse(blob)
                if (check.entries != l.map.entries or check.width != l.map.width or
                        check.height != l.map.height):
                    raise ValueError(f'{l.name}: map round-trip mismatch')
                updates.append((l, blob))
        except (ValueError, IndexError) as exc:
            messagebox.showerror('Stage map', f'Cannot apply ALTM edits: {exc}')
            return None
        for l, blob in updates:
            self.app.root_data.write(l.atm_path, blob)
            self._original_maps[l.atm_path] = blob
            l.map = altmmod.parse(blob)
        self.refresh()
        return len(updates)

    # ------------------------------------------------------------ export
    def export_layer(self):
        l = self.sel_layer
        if not l or self.images.get(l.name) is None:
            return
        out = filedialog.asksaveasfilename(defaultextension='.png', initialfile=f'{l.name}.png',
                                           filetypes=[('PNG', '*.png')])
        if out:
            self.images[l.name].save(out)
            self.app.status.set(f'Exported {l.name} → {out}')

    def export_composite(self):
        vis = [l for l in self.layers if self.visible.get(l.name, True) and self.images.get(l.name)]
        if not vis:
            return
        w, h = max(l.size[0] for l in vis), max(l.size[1] for l in vis)
        out = filedialog.asksaveasfilename(defaultextension='.png', initialfile=f'{self.stage.stem}.png',
                                           filetypes=[('PNG', '*.png')])
        if not out:
            return
        img = Image.new('RGBA', (w, h), (0, 0, 0, 0))
        for l in vis:
            img.alpha_composite(self.images[l.name])
        img.save(out)
        self.app.status.set(f'Exported composite → {Path(out).name}')
