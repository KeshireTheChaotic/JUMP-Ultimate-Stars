"""Level Editor: stage backgrounds from ``stage/stage.aar`` plus J-Galaxy missions.

Godot 2D scene / Unity Tilemap layout: browser (left dock) with two groups,
*Stages* and *J-Galaxy missions* · scene canvas with the background layers
stacked · Layers dock (eye toggles) over the Inspector · bottom dock with the
mission rewards, tile set, raw stage data and problems.

Stages and missions are linked by the battle stage index: mission/battle
definition ``+0x75`` → battle object +0x160 → stage table 0x02092D08
(``jus_formats.roster.STAGES``).  Selecting a mission loads its stage.

The supported edit surface is ALTM tile entries only. Backgrounds are decoded (ALTM + DSIG) and shown;
camera (.cam), objects (.mob), stage table (.bin), collision and gimmicks are
**read-only overlays**.  None of those formats is decoded yet, so they are
listed as *unavailable* with their raw bytes, never drawn as guessed
geometry. They have no save path.
"""
from __future__ import annotations

import tkinter as tk
from pathlib import Path
from tkinter import filedialog, messagebox, ttk

from PIL import Image, ImageTk

from jus_formats import altm as altmmod
from jus_formats import roster
from jus_package import scenes, tilemap
from jus_package.project import split

from .. import theme as T
from ..widgets.layers import LayerList
from ..widgets.tabs import TextLog
from .base import SuiteWorkspace
from .missions import DOC as MISSION_DOC, MissionPanel

OVERLAYS = (('cam', 'Camera / view framing', '.cam'), ('mob', 'Objects (mob)', '.mob'),
            ('bin', 'Stage table', '.bin'), ('collision', 'Collision', None), ('gimmick', 'Gimmicks', None))


class LevelWorkspace(SuiteWorkspace):
    key = 'level'
    title = 'Level'
    browser_title = 'Stages & missions'

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
        self.focus = 'level'           # which half Undo/Redo acts on: 'level' (tile maps) or 'mission'
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
        self.view = self.make_viewport(on_draw=self._draw, on_press=self._press,
                                       on_drag=self._drag, on_release=self._release,
                                       origin_frac=(0.05, 0.08), zoom=1)
        self.view.show_grid.set(False)
        self.view.canvas.bind('<Motion>', self._hover, add='+')
        self.layer_list = LayerList(self.layers_panel.body, on_select=self._select_layer, on_toggle=self._toggle)
        self.layer_list.pack(fill='both', expand=True, padx=4, pady=4)
        self.missions = MissionPanel(self, self.bottom.add('mission', 'Mission'))
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
        self.problems = self.problems_page()
        t = self.bottom.tools
        T.tool_button(t, 'Export layer PNG…', self.export_layer, 'Save the selected background layer as a PNG')
        T.tool_button(t, 'Export composite…', self.export_composite, 'Save all visible layers as one PNG')
        self.bottom.on_change = self._tab_changed
        return ws

    def _tab_changed(self, name):
        self.focus = 'mission' if name == 'mission' else 'level'
        self.app._update_undo_label()

    def build_browser(self, parent):
        self.tree = self.browser_tree(parent, ('kind',), (78,), ('Content',))
        self.tree.bind('<<TreeviewSelect>>', self._browse)
        self.filter_var.trace_add('write', lambda *_: self.populate())

    # ------------------------------------------------------------ browser
    def on_root(self):
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
        self.refresh_inspector()

    def populate(self):
        t = self.tree
        selected = t.selection()
        t.delete(*t.get_children())
        flt = self.filter_var.get().strip().lower()
        stages = t.insert('', 'end', 'g:stages', text='Stages', open=True, values=(f'{len(self._sets)}',))
        for s in self._sets:
            idx = roster.stage_index(s.stem)
            used = self._by_stage.get(s.stem, [])
            label = f'{s.stem}' if idx is None else f'{idx:02d}  {s.stem}'
            if flt and flt not in label.lower():
                continue
            kinds = '+'.join(a for r, a in (('layers', 'BG'), ('floor', 'F'), ('gimmick', 'G'), ('shared', 'data'))
                             if r in s.members)
            iid = t.insert(stages, 'end', s.stem, text=label,
                           values=((f'{len(used)} M · ' if used else '') + (kinds or '—'),))
            for role, path in sorted(s.members.items()):
                ext = '.' + path.rsplit('.', 1)[-1]
                label, grade = scenes.STATUS.get(ext, ('', 'Unknown'))
                t.insert(iid, 'end', f'{s.stem}|{role}', text=split(path)[-1].split('/')[-1],
                         values=('✓' if grade != 'Unknown' else 'raw',))
        c = self.missions.catalog
        if c is not None:
            group = t.insert('', 'end', 'g:missions', text='J-Galaxy missions', open=bool(flt),
                             values=(f'{c.graph.node_count}',))
            node = self.missions.node_id
            for planet_id in range(c.graph.planet_count):
                planet = c.graph.planet_name(planet_id) or f'Planet {planet_id}'
                rows = []
                for i in range(c.graph.node_count):
                    n = c.graph.get(i)
                    if n.planet_id != planet_id:
                        continue
                    label = self.missions.node_label(i)
                    stem = self.missions.stage_of(i) or ''
                    if flt and not any(flt in x.casefold() for x in (label, planet.casefold(), stem)):
                        continue
                    rows.append((i, label, stem, n))
                if not rows:
                    continue
                open_ = bool(flt) or (node is not None and c.graph.get(node).planet_id == planet_id)
                p = t.insert(group, 'end', f'p:{planet_id}', text=f'{planet_id:02d} {planet}', open=open_)
                for i, label, stem, n in rows:
                    t.insert(p, 'end', f'n:{i}', text=label,
                             values=(('M' if n.mission else 'B') + f'{n.definition_id} · {stem[3:]}',))
            if node is not None and t.exists(f'n:{node}'):
                t.item('g:missions', open=True)
        for iid in selected:
            if t.exists(iid):
                t.selection_set(iid)
                t.see(iid)
                break

    def _browse(self, _e=None):
        sel = self.tree.selection()
        if not sel or sel[0].startswith(('g:', 'p:')):
            return
        if sel[0].startswith('n:'):
            self.select_mission(int(sel[0][2:]))
            return
        stem = sel[0].split('|')[0]
        if not self.stage or self.stage.stem != stem:
            self.load(stem)

    def select_mission(self, node_id):
        """Show a J-Galaxy node in the Mission tab and load the stage its battle uses."""
        self.missions.select_node(node_id)
        self.bottom.show('mission')
        stem = self.missions.stage_of(node_id)
        if stem and (not self.stage or self.stage.stem != stem):
            if any(s.stem == stem for s in self._sets):
                self.load(stem)
        self.refresh_inspector()

    def mission_changed(self):
        """A mission edit or undo changed titles; keep the browser labels current."""
        self.populate()
        self.refresh_inspector()

    def load(self, stem):
        if self.stage and self.stage.stem != stem and self.maps_dirty:
            if not messagebox.askyesno('Level', 'Discard unapplied tile-map edits before switching stages?'):
                return
        self.stage = next((s for s in self._sets if s.stem == stem), None)
        self._stroke = False
        self.sel_overlay = None
        self._original_maps = {}
        self._dsig_cache = {}
        self.layers, self.images, self.sel_layer, self.sel_tile = [], {}, None, None
        probs = []
        for role in ('layers', 'floor'):
            if self.stage and role in self.stage.members:
                try:
                    self.layers += scenes.find_layers(self.app.root_data, self.stage.members[role])
                except (ValueError, KeyError) as exc:
                    probs.append((f'{role}: {exc}', 'bad'))
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
        self.refresh(frame=True)
        self.app.status.set(f'{stem}: {len(self.layers)} background layers')

    # ------------------------------------------------------------ view
    def _layer_rows(self):
        rows = [{'id': 'bg', 'name': 'Backgrounds', 'kind': 'group'}]
        # draw order: listed back (first) to front (last); the game's BG priority is not traced
        for l in self.layers:
            w, h = l.map.width, l.map.height
            rows.append({'id': 'L:' + l.name, 'parent': 'bg', 'name': l.name, 'kind': 'ALTM',
                         'visible': self.visible.get(l.name, True),
                         'status': f'{w}×{h} {"packed" if l.map.packed else "raw"}'})
        rows.append({'id': 'ro', 'name': 'Read-only overlays', 'kind': 'group'})
        for key, name, ext in OVERLAYS:
            have = bool(self.stage and key in self.stage.members) if ext or key == 'gimmick' else False
            rows.append({'id': 'O:' + key, 'parent': 'ro', 'name': name, 'kind': 'overlay', 'readonly': True,
                         'available': False, 'visible': False,
                         'status': ('file present, not decoded' if have else 'no data / not decoded')})
        return rows

    def refresh(self, frame=False):
        self.layer_list.set_layers(self._layer_rows())
        self.view_panel.set_title(f'Viewport — {self.stage.stem}' if self.stage else 'Viewport')
        self.problems.set_lines(self._probs or [('No problems.', 'good')])
        self._fill_raw()
        self._fill_tiles()
        self.refresh_inspector()
        if frame:
            self.frame_view()
        else:
            self.view.redraw()

    def frame_view(self):
        vis = [l for l in self.layers if self.visible.get(l.name, True)]
        if vis:
            self.view.frame_rect((0, 0, max(l.size[0] for l in vis), max(l.size[1] for l in vis)))

    def _draw(self, vp):
        if not self.stage:
            vp.hud.configure(text='Select a stage in the browser.')
            return
        for l in self.layers:
            img = self.images.get(l.name)
            if img is None or not self.visible.get(l.name, True):
                continue
            vp.add_image(img, 0, 0)
            if self.show_bounds.get():
                sel = l is self.sel_layer
                vp.rect(0, 0, *l.size, outline=T.ACCENT if sel else T.LINE, dash=() if sel else (3, 3))
        if self.sel_layer is not None and self.sel_tile is not None:
            tx, ty = self.sel_tile
            vp.rect(tx * 8, ty * 8, tx * 8 + 8, ty * 8 + 8, outline=T.WARN, width=2)
        vp.hud.configure(text=f'{self.stage.stem}: {self.tool.get()} · tile {self.brush} · '
                              'layers back→front in list order (priority/scroll unverified)')

    def _tile_at(self, wx, wy):
        l = self.sel_layer
        if l is None:
            return None
        tx, ty = int(wx // 8), int(wy // 8)
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
            ins.text('ALTM background tile maps can be painted and saved. Collision, gimmicks, camera and '
                     'objects remain read-only until their formats are traced. Selecting a J-Galaxy mission '
                     'loads the stage its battle uses.')
            return
        ov = getattr(self, 'sel_overlay', None)
        if ov:
            name = next(n for k, n, _ in OVERLAYS if k == ov)
            ins.section(name, note='Read-only overlay (Level v1 policy)')
            path = self.stage.members.get(ov)
            ins.value('Source', split(path)[-1] if path else '—')
            ins.evidence('Format', 'Unknown', 'not traced; shown as raw bytes in the bottom dock')
            ins.text('Nothing is drawn for this overlay: the editor does not invent geometry or behaviour. '
                     'There is no save path for it.')
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
        ins.evidence('Position', 'Unknown', 'BG priority, scroll/parallax and camera not decoded')
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
