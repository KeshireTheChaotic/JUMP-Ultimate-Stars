"""Koma Editor: comic-panel art in ``koma/koma.aar`` (DSTX v1 flags 0x04).

Layout follows the Unity Sprite Editor / Aseprite-lite pattern:
asset browser (left dock) · panel canvas with Select / Pencil / Picker tools ·
inspector with palette · bottom dock with the panel strip and problems.

Only panel *art* is decoded (byte-exact on 898/898 files).  How panels sit on
a deck/comic page and any gameplay restriction are unknown and not shown.
"""
from __future__ import annotations

import re
import tkinter as tk
from tkinter import colorchooser, filedialog, messagebox, ttk

from PIL import Image

from jus_formats import dsig as dsigmod, koma
from jus_package import images
from jus_package.project import join

from .. import theme as T
from ..widgets import Filmstrip
from .base import SuiteWorkspace

ARCHIVE = 'koma/koma.aar'
GAP = 8


class KomaWorkspace(SuiteWorkspace):
    key = 'koma'
    title = 'Koma'
    browser_title = 'Koma assets'

    def __init__(self, app, host, browser_host, k):
        self.path: str | None = None
        self.kf: koma.KomaFile | None = None
        self.panel = 0
        self.tool = tk.StringVar(value='select')
        self.colour = 1
        self.show_grid = tk.BooleanVar(value=True)
        self._dirty = False
        self._stroke = None
        self._cache: dict[int, Image.Image] = {}
        super().__init__(app, host, browser_host, k)

    # ------------------------------------------------------------ layout
    def build(self, host):
        ws = self.standard_layout(host, bottom_ratio=0.78)
        h = self.view_panel.header
        for key, label, tip in (('picker', 'Picker', 'Pick a palette index from the panel (I)'),
                                ('pencil', 'Pencil', 'Paint the current palette index (B)'),
                                ('select', 'Select', 'Select a panel (V)')):
            b = ttk.Radiobutton(h, text=label, value=key, variable=self.tool, style='ToolToggle.TRadiobutton',
                                command=lambda: self.view.redraw())
            b.pack(side='right', padx=1)
            T.Tooltip(b, tip)
        ttk.Checkbutton(h, text='Grid', variable=self.show_grid, style='Toolbar.TCheckbutton',
                        command=lambda: self.view.redraw()).pack(side='right', padx=8)
        ttk.Button(h, text='Frame', style='Tool.TButton', command=self.frame_view).pack(side='right', padx=4)
        self.view = self.make_viewport(on_draw=self._draw, on_press=self._press, on_drag=self._drag,
                                       on_release=self._release, origin_frac=(0.1, 0.2), zoom=4)
        page = self.bottom.add('panels', 'Panels')
        self.strip = Filmstrip(page, thumb=56, on_select=self.select_panel)
        self.strip.pack(fill='both', expand=True, padx=4, pady=4)
        t = self.bottom.tools
        T.tool_button(t, 'Import panel PNG…', self.import_panel, 'Replace the selected panel (48×48) from a PNG')
        T.tool_button(t, 'Export panel PNG…', self.export_panel, 'Save the selected panel as an indexed PNG')
        T.tool_button(t, 'Export all…', self.export_all, 'Save every panel of this asset')
        T.tool_button(t, 'Apply', self.apply, 'Write this koma file into koma.aar (Ctrl+Enter)',
                      style='Accent.TButton')
        self.problems = self.problems_page()
        return ws

    def build_browser(self, parent):
        self.tree = self.browser_tree(parent, ('panels',), (50,), ('Panels',))
        self.tree.bind('<<TreeviewSelect>>', self._browse)
        self.filter_var.trace_add('write', lambda *_: self.populate())

    # ------------------------------------------------------------ browser
    def on_root(self):
        self._names = []
        root = self.app.root_data
        if root and (root.root / ARCHIVE).is_file():
            try:
                arc = root.archive(ARCHIVE)
                self._names = [(e.name, e.payload()[6] | (e.payload()[7] << 8))
                               for e in arc.entries if e.ext == '.dtx']
            except (OSError, ValueError, KeyError) as exc:
                self.app.status.set(f'koma.aar: {exc}')
        self.populate()

    def populate(self):
        t = self.tree
        t.delete(*t.get_children())
        flt = self.filter_var.get().strip().lower()
        groups = {}
        for name, n in getattr(self, '_names', []):
            stem = name.split('/')[-1]
            if flt and flt not in stem.lower():
                continue
            m = re.match(r'([a-z]+)_', stem)
            g = m.group(1) if m else 'other'
            if g not in groups:
                groups[g] = t.insert('', 'end', 'g:' + g, text=g, open=bool(flt))
            t.insert(groups[g], 'end', name, text=stem.rsplit('.', 1)[0], values=(n,))
        for g, iid in groups.items():
            t.item(iid, text=f'{g}  ({len(t.get_children(iid))})')

    def _browse(self, _e=None):
        sel = self.tree.selection()
        if sel and not sel[0].startswith('g:'):
            self.load(sel[0])

    def load(self, name):
        if self._dirty and self.kf is not None:
            if not messagebox.askyesno('Koma', 'Discard unapplied panel edits?'):
                return
        self.path = join(ARCHIVE, name)
        try:
            self.kf = koma.parse(self.app.root_data.read(self.path))
        except (ValueError, KeyError) as exc:
            self.kf = None
            messagebox.showerror('Koma', f'{name}: {exc}')
            return
        self._orig = self.app.root_data.read(self.path)
        self._dirty = False
        self.panel = 0
        self._cache.clear()
        self.refresh(frame=True)
        self.app.status.set(f'{self.path}: {len(self.kf.panels)} panels, {self.kf.tile_count} tiles')
        self.app._update_undo_label()

    # ------------------------------------------------------------ view
    def refresh(self, frame=False):
        n = len(self.kf.panels) if self.kf else 0
        self.strip.set_frames(n, self._panel_rgba, self.panel if n else None)
        self.view_panel.set_title(f'Viewport — {self.path.split("|")[-1]}' if self.path else 'Viewport')
        self.problems.set_lines([(p, 'warn') for p in self.kf.problems()] if self.kf else [])
        if self.kf and not self.kf.problems():
            self.problems.set_lines([('No problems: panel table and tile ranges are consistent.', 'good')])
        self.refresh_inspector()
        if frame:
            self.frame_view()
        else:
            self.view.redraw()

    def frame_view(self):
        if self.kf and self.kf.panels:
            w = len(self.kf.panels) * (48 + GAP) - GAP
            self.view.frame_rect((0, 0, w, 48))
        else:
            self.view.frame_origin()

    def _panel_rgba(self, i):
        if i not in self._cache:
            img = self.kf.panel_image(i)
            w, h = self.kf.panels[i].size
            self._cache[i] = Image.frombytes('RGBA', (w, h), img.to_rgba(self.kf.image.palettes))
        return self._cache[i]

    def _origin(self, i):
        x = 0
        for p in self.kf.panels[:i]:
            x += p.size[0] + GAP
        return x, 0

    def _panel_at(self, wx, wy):
        if not self.kf:
            return None
        for i, p in enumerate(self.kf.panels):
            x, y = self._origin(i)
            if x <= wx < x + p.size[0] and y <= wy < y + p.size[1]:
                return i
        return None

    def _draw(self, vp):
        if not self.kf:
            vp.hud.configure(text='Select a koma asset in the browser.')
            return
        for i, p in enumerate(self.kf.panels):
            x, y = self._origin(i)
            vp.add_image(self._panel_rgba(i), x, y)
            sel = i == self.panel
            vp.rect(x, y, x + p.size[0], y + p.size[1], outline=T.ACCENT if sel else T.LINE, width=2 if sel else 1)
            vp.text(x, y - 2, f'{i}', anchor='sw', fill=T.FG if sel else T.MUTED, font=T.MONO_SMALL)
        if self.show_grid.get() and vp.zoom >= 6 and self.kf.panels:
            x0, y0 = self._origin(self.panel)
            w, h = self.kf.panels[self.panel].size
            for i in range(1, w):
                sx, sy = vp.to_screen(x0 + i, y0)
                vp.canvas.create_line(sx, sy, sx, sy + h * vp.zoom, fill='#202020' if i % 8 else '#3A6EA5')
            for j in range(1, h):
                sx, sy = vp.to_screen(x0, y0 + j)
                vp.canvas.create_line(sx, sy, sx + w * vp.zoom, sy, fill='#202020' if j % 8 else '#3A6EA5')
        vp.hud.configure(text=f'{len(self.kf.panels)} panels · page arrangement unknown (shown in a row) · '
                              f'tool {self.tool.get()} · colour {self.colour}')

    # ------------------------------------------------------------ tools
    def _pixel(self, wx, wy):
        i = self._panel_at(wx, wy)
        if i is None:
            return None
        x0, y0 = self._origin(i)
        return i, int(wx - x0), int(wy - y0)

    def _press(self, wx, wy, e):
        hit = self._pixel(wx, wy)
        if hit is None:
            return
        i, px, py = hit
        if i != self.panel:
            self.select_panel(i)
        tool = self.tool.get()
        if tool == 'picker':
            w = self.kf.panels[i].size[0]
            self.colour = self.kf.panel_colours(i)[py * w + px]
            self.refresh_inspector()
            self.view.redraw()
        elif tool == 'pencil':
            self.checkpoint('paint panel')
            self._stroke = (i, self.kf.panel_colours(i))
            self._paint(px, py)

    def _drag(self, wx, wy, e):
        if self._stroke is None:
            return
        hit = self._pixel(wx, wy)
        if hit and hit[0] == self._stroke[0]:
            self._paint(hit[1], hit[2])

    def _paint(self, px, py):
        i, cols = self._stroke
        w = self.kf.panels[i].size[0]
        if cols[py * w + px] == self.colour:
            return
        cols[py * w + px] = self.colour
        img = self._panel_rgba(i)
        rgba = self.kf.image.palette_rgba(0)[self.colour]
        img.putpixel((px, py), rgba)
        self.view.redraw()

    def _release(self, wx, wy, e):
        if self._stroke is None:
            return
        i, cols = self._stroke
        self._stroke = None
        self.kf.set_panel_colours(i, cols)
        self._dirty = True
        self._cache.pop(i, None)
        self.strip.invalidate(i)
        self.app.update_dirty()

    def select_panel(self, i):
        self.panel = i
        self.strip.set_current(i)
        self.refresh_inspector()
        self.view.redraw()

    # ------------------------------------------------------------ inspector
    def refresh_inspector(self):
        ins = self.inspector
        ins.clear()
        if not self.kf:
            ins.section('Koma')
            ins.text('Choose an asset in the browser. Each koma file holds 1–8 square panels of 48×48 pixels '
                     '(6×6 tiles, 16 colours).')
            ins.section('Evidence')
            ins.evidence('Panel art', 'Direct', 'DSTX v1 flags 0x04 rebuilds byte-exactly on 898/898 files')
            ins.evidence('Page layout', 'Unknown', 'how panels combine on a deck/comic page is not decoded')
            return
        k = self.kf
        ins.section('Asset', note=self.path.split('|')[-1])
        ins.value('Panels', str(len(k.panels)))
        ins.value('Tiles', f'{k.tile_count} (tile 0 unused)')
        ins.value('Palette', f'{k.image.banks} bank, 4bpp')
        ins.value('State', '● edited, not applied' if self._dirty else 'unchanged',
                  colour=T.WARN if self._dirty else T.MUTED)
        if k.panels:
            p = k.panels[self.panel]
            ins.section(f'Panel {self.panel}')
            ins.value('Size', f'{p.size[0]}×{p.size[1]} px ({p.width_tiles}×{p.height_tiles} tiles)')
            ins.value('Tiles', f'{p.first_tile}..{p.first_tile + p.tile_count - 1}')
        ins.section('Palette', note='Click: paint colour. Double-click: edit colour. Index 0 is transparent.')
        ins.widget(self._swatches)
        ins.value('Colour', f'{self.colour}  {hx4(k.image.palettes[0][self.colour])}')
        ins.section('Evidence')
        ins.evidence('Panel art', 'Direct', 'byte-exact rebuild 898/898; panel edits leave neighbours intact')
        ins.evidence('Page layout', 'Unknown', 'not decoded; panels are shown in a row')

    def _swatches(self, parent):
        f = tk.Frame(parent, bg=T.PANEL)
        pal = self.kf.image.palettes[0]
        cell = int(18 * self.k)
        for i, v in enumerate(pal):
            r, g, b = dsigmod.rgb555_to_rgb(v)
            c = tk.Canvas(f, width=cell, height=cell, highlightthickness=2,
                          highlightbackground=T.ACCENT if i == self.colour else T.PANEL, bg=f'#{r:02X}{g:02X}{b:02X}')
            if i == 0:
                c.create_line(0, cell, cell, 0, fill=T.BAD)
            c.grid(row=i // 8, column=i % 8, padx=1, pady=1)
            c.bind('<Button-1>', lambda e, n=i: self._pick_colour(n))
            c.bind('<Double-Button-1>', lambda e, n=i: self._edit_colour(n))
            T.Tooltip(c, f'{i}: {hx4(v)}')
        return f

    def _pick_colour(self, n):
        self.colour = n
        if self.tool.get() == 'select':
            self.tool.set('pencil')
        self.refresh_inspector()
        self.view.redraw()

    def _edit_colour(self, n):
        r, g, b = dsigmod.rgb555_to_rgb(self.kf.image.palettes[0][n])
        res = colorchooser.askcolor(f'#{r:02X}{g:02X}{b:02X}', title=f'Palette index {n}')
        if not res or not res[0]:
            return
        self.checkpoint('edit palette')
        self.kf.image.palettes[0][n] = dsigmod.rgb_to_rgb555(*[int(c) for c in res[0]])
        self.kf.image_dirty = True
        self._dirty = True
        self._cache.clear()
        self.refresh()
        self.app.update_dirty()

    # ------------------------------------------------------------ import / export
    def export_panel(self):
        if not self.kf:
            return
        stem = self.path.split('/')[-1].rsplit('.', 1)[0]
        out = filedialog.asksaveasfilename(defaultextension='.png', initialfile=f'{stem}_p{self.panel}.png',
                                           filetypes=[('PNG', '*.png')])
        if out:
            img = self.kf.panel_image(self.panel)
            images.save_png(img, self.kf.image.palettes, __import__('pathlib').Path(out))
            self.app.status.set(f'Exported panel {self.panel} → {out}')

    def export_all(self):
        if not self.kf:
            return
        d = filedialog.askdirectory(title='Folder for the panel PNGs')
        if not d:
            return
        from pathlib import Path
        stem = self.path.split('/')[-1].rsplit('.', 1)[0]
        for i in range(len(self.kf.panels)):
            images.save_png(self.kf.panel_image(i), self.kf.image.palettes, Path(d) / f'{stem}_p{i}.png')
        self.app.status.set(f'Exported {len(self.kf.panels)} panels → {d}')

    def import_panel(self):
        if not self.kf:
            return
        src = filedialog.askopenfilename(filetypes=[('PNG', '*.png')])
        if not src:
            return
        from pathlib import Path
        w, h = self.kf.panels[self.panel].size
        warn: list[str] = []
        try:
            img = images.load_png(Path(src), self.kf.image.palettes, 0, 0, warn)
        except (OSError, ValueError) as exc:
            messagebox.showerror('Import panel', str(exc))
            return
        if (img.width, img.height) != (w, h):
            messagebox.showerror('Import panel', f'The PNG is {img.width}×{img.height}; panels are {w}×{h}.')
            return
        self.checkpoint('import panel')
        self.kf.set_panel_colours(self.panel, [v & 15 for v in img.pixels])
        self._dirty = True
        self._cache.pop(self.panel, None)
        self.strip.invalidate(self.panel)
        self.refresh()
        self.app.update_dirty()
        self.app.status.set(f'Imported panel {self.panel} from {src}' + (f' ({warn[0]})' if warn else ''))

    # ------------------------------------------------------------ undo / apply
    def doc(self):
        return f'koma:{self.path}' if self.kf else None

    def snapshot(self):
        return (self.kf.build(), self.panel, self._dirty) if self.kf else None

    def restore(self, snap):
        data, panel, _ = snap
        self.kf = koma.parse(data)
        self.kf.image_dirty = True
        self._dirty = data != getattr(self, '_orig', None)
        self.panel = min(panel, len(self.kf.panels) - 1)
        self._cache.clear()
        self.refresh()

    @property
    def dirty(self):
        return self._dirty

    def apply(self):
        if not self.kf or not self._dirty:
            self.app.status.set('Koma: nothing to apply.')
            return
        blob = self.kf.build()
        koma.parse(blob)                       # validate before writing
        self.app.root_data.write(self.path, blob)
        self._orig = blob
        self._dirty = False
        self.refresh()
        self.app.update_dirty()
        self.app.status.set(f'Applied {self.path} — Save (Ctrl+S) to write koma.aar.')


def hx4(v):
    return f'0x{v:04X}'
