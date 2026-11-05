"""Screen Editor: menu / scene screens (title, topmenu, deckmake, …).

Unity UI / Godot Control layout on a Nintendo DS canvas: archive browser
(left dock) · dual 256×192 screens stacked (top, then bottom) · Layers dock
over the Inspector · bottom dock with the archive's resources (decoder
status per file) and problems.

Background layers are ALTM maps with their DSIG tiles.  Which screen and
BG slot a layer uses, its scroll and priority are set by game code that is
not traced: the editor guesses a screen from the name and lets the user
override screen, scroll and order as a *preview* (never saved).
DSTX 0x05/0x06 layouts and nested sprite archives are listed but not yet
drawn (they need dedicated parsers, docs/03 §1).
"""
from __future__ import annotations

import tkinter as tk
from tkinter import ttk

from PIL import Image

from jus_package import scenes
from jus_package.project import join, split

from .. import theme as T
from ..widgets.layers import LayerList
from .base import SuiteWorkspace

SW, SH, GAP = 256, 192, 28
ORIGIN = {'Top': (0, 0), 'Bottom': (0, SH + GAP)}


class ScreenWorkspace(SuiteWorkspace):
    key = 'screen'
    title = 'Screen'
    browser_title = 'Screens'

    def __init__(self, app, host, browser_host, k):
        self.archive: str | None = None
        self.layers: list[scenes.Layer] = []
        self.images: dict[str, Image.Image | None] = {}
        self.cfg: dict[str, dict] = {}          # name -> {screen, sx, sy, visible}
        self.order: list[str] = []
        self.sel: str | None = None
        self.show_outside = tk.BooleanVar(value=False)
        super().__init__(app, host, browser_host, k)

    # ------------------------------------------------------------ layout
    def build(self, host):
        ws = self.standard_layout(host, layers=True, bottom_ratio=0.7)
        h = self.view_panel.header
        ttk.Checkbutton(h, text='Whole layers', variable=self.show_outside, style='Toolbar.TCheckbutton',
                        command=lambda: self.view.redraw()).pack(side='right', padx=6)
        ttk.Button(h, text='Frame', style='Tool.TButton', command=self.frame_view).pack(side='right', padx=6)
        self.view = self.make_viewport(on_draw=self._draw, origin_frac=(0.3, 0.06), zoom=2)
        self.view.show_grid.set(False)
        self.layer_list = LayerList(self.layers_panel.body, on_select=self._select_layer, on_toggle=self._toggle)
        self.layer_list.pack(fill='both', expand=True, padx=4, pady=4)
        page = self.bottom.add('resources', 'Resources')
        from ..theme import tree as mktree
        rf, self.res_tree = mktree(page, ('name', 'type', 'size', 'decoder', 'evidence'),
                                   (220, 60, 70, 300, 90), height=6, style='Mono.Treeview')
        rf.pack(fill='both', expand=True, padx=4, pady=4)
        self.res_tree.tag_configure('Unknown', foreground=T.BAD)
        self.res_tree.tag_configure('Inferred', foreground=T.WARN)
        self.res_tree.bind('<Double-1>', self._open_resource)
        self.problems = self.problems_page()
        return ws

    def build_browser(self, parent):
        self.tree = self.browser_tree(parent, ('n',), (40,), ('Layers',))
        self.tree.bind('<<TreeviewSelect>>', self._browse)
        self.tree.bind('<<TreeviewOpen>>', self._expand)
        self.filter_var.trace_add('write', lambda *_: self.populate())

    # ------------------------------------------------------------ browser
    def on_root(self):
        self._archives = scenes.screen_archives(self.app.root_data) if self.app.root_data else []
        self.populate()

    def populate(self):
        t = self.tree
        t.delete(*t.get_children())
        flt = self.filter_var.get().strip().lower()
        groups = {}
        for path in getattr(self, '_archives', []):
            if flt and flt not in path.lower():
                continue
            folder = path.split('/')[0]
            if folder not in groups:
                groups[folder] = t.insert('', 'end', 'f:' + folder, text=folder, open=bool(flt))
            iid = t.insert(groups[folder], 'end', path, text=path.split('/')[-1], values=('',))
            t.insert(iid, 'end', path + '|…', text='…')     # lazy children

    def _expand(self, _e=None):
        iid = self.tree.focus()
        kids = self.tree.get_children(iid)
        if len(kids) == 1 and kids[0].endswith('|…'):
            self.tree.delete(kids[0])
            try:
                arc = self.app.root_data.archive(iid)
                for e in arc.entries:
                    if e.ext == '.aar':
                        sub = join(iid, e.name)
                        self.tree.insert(iid, 'end', sub, text=e.name.split('/')[-1], values=('',))
                        self.tree.insert(sub, 'end', sub + '|…', text='…')
            except (ValueError, KeyError, OSError) as exc:
                self.app.status.set(f'{iid}: {exc}')

    def _browse(self, _e=None):
        sel = self.tree.selection()
        if sel and not sel[0].startswith('f:') and not sel[0].endswith('|…'):
            if sel[0] != self.archive:
                self.load(sel[0])

    def load(self, path):
        self.archive = path
        self.layers, self.images, self.cfg, self.order, self.sel = [], {}, {}, [], None
        probs = []
        try:
            self.layers = scenes.find_layers(self.app.root_data, path)
        except (ValueError, KeyError, OSError) as exc:
            probs.append((str(exc), 'bad'))
        for l in self.layers:
            img, p = scenes.render_layer(self.app.root_data, l)
            self.images[l.name] = img
            self.cfg[l.name] = {'screen': scenes.default_screen(l.name), 'sx': 0, 'sy': 0, 'visible': img is not None}
            self.order.append(l.name)
            probs += [(f'{l.name}: {x}', 'warn') for x in l.problems + p]
        self.sel = self.order[0] if self.order else None
        if self.tree.exists(path):
            self.tree.set(path, 'n', str(len(self.layers)))
        self._fill_resources(probs)
        self._probs = probs
        self.refresh(frame=True)
        self.app.status.set(f'{path}: {len(self.layers)} background layers')

    def _fill_resources(self, probs):
        t = self.res_tree
        t.delete(*t.get_children())
        try:
            arc = self.app.root_data.archive(self.archive)
        except (ValueError, KeyError, OSError):
            return
        for i, e in enumerate(arc.entries):
            ext = e.ext
            label, grade = scenes.STATUS.get(ext, ('unknown', 'Unknown'))
            if ext == '.dtx':
                kind = scenes.dtx_kind(e.payload())
                label = f'DSTX {kind}'
                if 'dedicated' in kind:
                    grade = 'Unknown'
                    probs.append((f'{e.name}: {kind}', 'muted'))
            elif ext == '.atm':
                label = 'ALTM tile map (shown as a layer)'
            t.insert('', 'end', str(i), values=(e.name.split('/')[-1], ext, len(e.data), label, grade), tags=(grade,))

    def _open_resource(self, _e=None):
        sel = self.res_tree.selection()
        if not sel:
            return
        name = self.res_tree.set(sel[0], 'name')
        if name.endswith('.aar'):
            arc = self.app.root_data.archive(self.archive)
            full = next(e.name for e in arc.entries if e.name.split('/')[-1] == name)
            self.load(join(self.archive, full))

    # ------------------------------------------------------------ view
    def _rows(self):
        rows = [{'id': 'g', 'name': 'Backgrounds (back → front)', 'kind': 'group'}]
        for n in self.order:
            c = self.cfg[n]
            rows.append({'id': n, 'parent': 'g', 'name': n, 'kind': c['screen'],
                         'visible': c['visible'] and c['screen'] != 'Hidden',
                         'available': self.images.get(n) is not None,
                         'status': f'scroll {c["sx"]},{c["sy"]}'})
        rows.append({'id': 'o', 'name': 'Not drawn yet', 'kind': 'group'})
        rows.append({'id': 'o:dtx', 'parent': 'o', 'name': 'DSTX 0x05/0x06 layouts', 'kind': 'overlay',
                     'available': False, 'status': 'parser needed'})
        rows.append({'id': 'o:spr', 'parent': 'o', 'name': 'Sprites / animations', 'kind': 'overlay',
                     'available': False, 'status': 'next milestone'})
        return rows

    def refresh(self, frame=False):
        self.layer_list.set_layers(self._rows())
        if self.sel:
            self.layer_list.tree.selection_set(self.sel)
        self.view_panel.set_title(f'Viewport — {self.archive}' if self.archive else 'Viewport')
        self.problems.set_lines(self._probs or [('No problems.', 'good')])
        self.refresh_inspector()
        if frame:
            self.frame_view()
        else:
            self.view.redraw()

    def frame_view(self):
        self.view.frame_rect((-8, -14, SW + 8, 2 * SH + GAP + 8))

    def _crop(self, img, sx, sy):
        """256×192 window at scroll (sx, sy), wrapping like a DS text BG."""
        out = Image.new('RGBA', (SW, SH), (0, 0, 0, 0))
        w, h = img.size
        y = -(sy % h)
        while y < SH:
            x = -(sx % w)
            while x < SW:
                out.alpha_composite(img, (max(0, x), max(0, y)), (max(0, -x), max(0, -y)))
                x += w
            y += h
        return out

    def _draw(self, vp):
        for name, (ox, oy) in ORIGIN.items():
            vp.rect(ox, oy, ox + SW, oy + SH, fill='#000000', outline='')
        if self.show_outside.get():
            for n in self.order:
                c, img = self.cfg[n], self.images.get(n)
                if img is None or not c['visible'] or c['screen'] == 'Hidden':
                    continue
                ox, oy = ORIGIN[c['screen']]
                faded = img.copy()
                faded.putalpha(faded.getchannel('A').point(lambda v: v // 4))
                vp.add_image(faded, ox - c['sx'], oy - c['sy'])
                vp.rect(ox - c['sx'], oy - c['sy'], ox - c['sx'] + img.width, oy - c['sy'] + img.height,
                        outline=T.LINE, dash=(3, 3))
        for n in self.order:
            c, img = self.cfg[n], self.images.get(n)
            if img is None or not c['visible'] or c['screen'] == 'Hidden':
                continue
            ox, oy = ORIGIN[c['screen']]
            vp.add_image(self._crop(img, c['sx'], c['sy']), ox, oy)
        for name, (ox, oy) in ORIGIN.items():
            hot = self.sel and self.cfg.get(self.sel, {}).get('screen') == name
            vp.rect(ox, oy, ox + SW, oy + SH, outline=T.ACCENT if hot else T.MUTED, width=2 if hot else 1)
            vp.text(ox, oy - 2, f'{name.upper()} SCREEN  256×192', anchor='sw', fill=T.MUTED, font=T.MONO_SMALL)
        vp.hud.configure(text='Screen assignment, scroll and order are a preview (not traced, not saved).'
                         if self.archive else 'Select a screen archive in the browser.')

    def _select_layer(self, row):
        if row and row.get('kind') not in ('group', 'overlay'):
            self.sel = str(row['id'])
            self.refresh_inspector()
            self.view.redraw()

    def _toggle(self, row):
        n = str(row['id'])
        if n in self.cfg:
            self.cfg[n]['visible'] = row['visible']
            if row['visible'] and self.cfg[n]['screen'] == 'Hidden':
                self.cfg[n]['screen'] = scenes.default_screen(n)
            self.view.redraw()

    # ------------------------------------------------------------ inspector
    def refresh_inspector(self):
        ins = self.inspector
        ins.clear()
        if not self.archive:
            ins.section('Screen editor')
            ins.text('Pick a menu/scene archive. Background layers (ALTM + DSIG tiles) are drawn on the two DS '
                     'screens; you can preview which screen each layer goes to and its scroll.')
            return
        ins.section('Archive', note=self.archive)
        ins.value('Layers', str(len(self.layers)))
        l = next((x for x in self.layers if x.name == self.sel), None)
        if l is None:
            return
        c = self.cfg[l.name]
        m = l.map
        ins.section(f'Layer {l.name}')
        self._v = {'screen': tk.StringVar(value=c['screen']), 'sx': tk.StringVar(value=str(c['sx'])),
                   'sy': tk.StringVar(value=str(c['sy']))}
        ins.combo('Screen', self._v['screen'], ('Top', 'Bottom', 'Hidden'),
                  'Preview only: the real BG assignment is set in code (not traced)', self._apply_cfg, width=10)
        ins.spin('Scroll X', self._v['sx'], 0, 4096, 'Preview scroll (wraps like a DS text BG)', self._apply_cfg)
        ins.spin('Scroll Y', self._v['sy'], 0, 4096, 'Preview scroll (wraps like a DS text BG)', self._apply_cfg)
        ins.buttons(('▲ Forward', lambda: self._move(1)), ('▼ Back', lambda: self._move(-1)))
        ins.value('Map', f'{m.width}×{m.height} tiles = {m.pixel_size[0]}×{m.pixel_size[1]} px')
        ins.value('Storage', 'packed rows' if m.packed else 'raw')
        ins.value('Tile image', split(l.image_path)[-1] if l.image_path else '— (no pair)')
        ins.value('Banks used', ', '.join(map(str, sorted(m.used_banks()))))
        ins.section('Evidence')
        ins.evidence('ALTM map', 'Inferred', 'structure validated on all 1,558 ALTM files')
        ins.evidence('Tiles/palette', 'Inferred', '8bpp sets with >16 banks use the entry bank as an '
                                                  'extended-palette slot (renders coherently)')
        ins.evidence('Screen/scroll', 'Unknown', 'name heuristic + your preview settings')

    def _apply_cfg(self):
        if not self.sel:
            return
        c = self.cfg[self.sel]
        try:
            c['sx'], c['sy'] = int(self._v['sx'].get()), int(self._v['sy'].get())
        except ValueError:
            return
        c['screen'] = self._v['screen'].get()
        c['visible'] = c['screen'] != 'Hidden'
        self.layer_list.set_layers(self._rows())
        self.view.redraw()

    def _move(self, d):
        if self.sel not in self.order:
            return
        i = self.order.index(self.sel)
        j = max(0, min(len(self.order) - 1, i + d))
        self.order[i], self.order[j] = self.order[j], self.order[i]
        self.refresh()
