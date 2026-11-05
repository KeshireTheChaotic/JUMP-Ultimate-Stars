"""Level Editor (v1, visual-only): battle stages from ``stage/stage.aar``.

Godot 2D scene / Unity Tilemap layout: stage browser (left dock) · scene
canvas with the background layers stacked · Layers dock (eye toggles) over
the Inspector · bottom dock with the tile set, raw stage data and problems.

Locked v1 scope (docs/04): backgrounds are decoded (ALTM + DSIG) and shown;
camera (.cam), objects (.mob), stage table (.bin), collision and gimmicks are
**read-only overlays**.  None of those formats is decoded yet, so they are
listed as *unavailable* with their raw bytes, never drawn as guessed
geometry.  There is no save path for them.
"""
from __future__ import annotations

import tkinter as tk
from pathlib import Path
from tkinter import filedialog, ttk

from PIL import Image, ImageTk

from jus_formats import altm as altmmod
from jus_package import scenes, tilemap
from jus_package.project import split

from .. import theme as T
from ..widgets.layers import LayerList
from ..widgets.tabs import TextLog
from .base import SuiteWorkspace

OVERLAYS = (('cam', 'Camera / view framing', '.cam'), ('mob', 'Objects (mob)', '.mob'),
            ('bin', 'Stage table', '.bin'), ('collision', 'Collision', None), ('gimmick', 'Gimmicks', None))


class LevelWorkspace(SuiteWorkspace):
    key = 'level'
    title = 'Level'
    browser_title = 'Stages'

    def __init__(self, app, host, browser_host, k):
        self.stage: scenes.StageSet | None = None
        self.layers: list[scenes.Layer] = []
        self.visible: dict[str, bool] = {}
        self.images: dict[str, Image.Image | None] = {}
        self.sel_layer: scenes.Layer | None = None
        self.sel_tile: tuple[int, int] | None = None
        self.show_bounds = tk.BooleanVar(value=True)
        self._sets: list[scenes.StageSet] = []
        super().__init__(app, host, browser_host, k)

    # ------------------------------------------------------------ layout
    def build(self, host):
        ws = self.standard_layout(host, layers=True, bottom_ratio=0.7)
        h = self.view_panel.header
        ttk.Checkbutton(h, text='Layer bounds', variable=self.show_bounds, style='Toolbar.TCheckbutton',
                        command=lambda: self.view.redraw()).pack(side='right', padx=6)
        ttk.Button(h, text='Frame', style='Tool.TButton', command=self.frame_view).pack(side='right', padx=6)
        self.view = self.make_viewport(on_draw=self._draw, on_press=self._press, origin_frac=(0.05, 0.08), zoom=1)
        self.view.show_grid.set(False)
        self.view.canvas.bind('<Motion>', self._hover, add='+')
        self.layer_list = LayerList(self.layers_panel.body, on_select=self._select_layer, on_toggle=self._toggle)
        self.layer_list.pack(fill='both', expand=True, padx=4, pady=4)
        tiles = self.bottom.add('tiles', 'Tile set')
        self.tile_canvas = tk.Canvas(tiles, bg=T.CANVAS_BG, highlightthickness=0, height=int(150 * self.k))
        tsb = ttk.Scrollbar(tiles, orient='horizontal', command=self.tile_canvas.xview)
        self.tile_canvas.configure(xscrollcommand=tsb.set)
        self.tile_canvas.pack(fill='both', expand=True, padx=4, pady=(4, 0))
        tsb.pack(fill='x', padx=4)
        raw = self.bottom.add('raw', 'Stage data (read-only)')
        self.raw_log = TextLog(raw)
        self.raw_log.pack(fill='both', expand=True, padx=4, pady=4)
        self.problems = self.problems_page()
        t = self.bottom.tools
        T.tool_button(t, 'Export layer PNG…', self.export_layer, 'Save the selected background layer as a PNG')
        T.tool_button(t, 'Export composite…', self.export_composite, 'Save all visible layers as one PNG')
        return ws

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
        self.populate()

    def populate(self):
        t = self.tree
        t.delete(*t.get_children())
        flt = self.filter_var.get().strip().lower()
        for s in self._sets:
            if flt and flt not in s.stem.lower():
                continue
            kinds = '+'.join(a for r, a in (('layers', 'BG'), ('floor', 'F'), ('gimmick', 'G'), ('shared', 'data'))
                             if r in s.members)
            iid = t.insert('', 'end', s.stem, text=s.stem, values=(kinds or '—',))
            for role, path in sorted(s.members.items()):
                ext = '.' + path.rsplit('.', 1)[-1]
                label, grade = scenes.STATUS.get(ext, ('', 'Unknown'))
                t.insert(iid, 'end', f'{s.stem}|{role}', text=split(path)[-1].split('/')[-1],
                         values=('✓' if grade != 'Unknown' else 'raw',))

    def _browse(self, _e=None):
        sel = self.tree.selection()
        if not sel:
            return
        stem = sel[0].split('|')[0]
        if not self.stage or self.stage.stem != stem:
            self.load(stem)

    def load(self, stem):
        self.stage = next((s for s in self._sets if s.stem == stem), None)
        self.layers, self.images, self.sel_layer, self.sel_tile = [], {}, None, None
        probs = []
        for role in ('layers', 'floor'):
            if self.stage and role in self.stage.members:
                try:
                    self.layers += scenes.find_layers(self.app.root_data, self.stage.members[role])
                except (ValueError, KeyError) as exc:
                    probs.append((f'{role}: {exc}', 'bad'))
        for l in self.layers:
            img, p = scenes.render_layer(self.app.root_data, l)
            self.images[l.name] = img
            probs += [(f'{l.name}: {x}', 'warn') for x in l.problems + p]
            # alternates without their own tiles (e.g. *_sud) start hidden so they don't cover the main layer
            self.visible.setdefault(l.name, l.borrowed is None)
        shown = [l for l in self.layers if self.visible.get(l.name)]
        self.sel_layer = (shown or self.layers or [None])[-1]
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
        vp.hud.configure(text=f'{self.stage.stem}: layers drawn back→front in list order (BG priority, '
                              f'scroll and camera not decoded)')

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
        self.refresh_inspector()
        self.view.redraw()

    def _select_layer(self, row):
        if not row:
            return
        iid = str(row['id'])
        if iid.startswith('L:'):
            self.sel_layer = next((l for l in self.layers if l.name == iid[2:]), None)
            self.sel_overlay = None
            self._fill_tiles()
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
        l = self.sel_layer
        if not l or not l.image_path:
            c.create_text(10, 20, anchor='w', text='Select a background layer', fill=T.MUTED, font=T.UI_FONT)
            return
        try:
            dsig = tilemap.embedded_dsig(self.app.root_data.read(l.image_path))
            n = tilemap.tile_count(dsig)
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
        if not self.stage:
            ins.section('Level editor (v1)')
            ins.text('Visual-only. Backgrounds are decoded and shown; collision, gimmicks, camera and objects '
                     'are read-only and stay unavailable until their formats are traced.')
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
        ins.text('Editing backgrounds is the next step: the ALTM codec already re-encodes edited maps '
                 '(identical rows shared, sequential runs packed).')

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
