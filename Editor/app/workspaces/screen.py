"""Screen Editor: menu / scene screens (title, topmenu, deckmake, …).

Unity UI / Godot Control layout on a Nintendo DS canvas: archive browser
(left dock) · dual 256×192 screens stacked (top, then bottom) · Layers dock
over the Inspector · bottom dock with the archive's resources (decoder
status per file) and problems.

Background layers are ALTM maps with their DSIG tiles.  Which screen and
BG slot a layer uses, its scroll and priority are set by game code that is
not traced: the editor guesses a screen from the name and lets the user
override screen, scroll and order as a *preview* (never saved).
DSTX 0x05/0x06 layout descriptors are read-only and visible in the resource
inspector; their auxiliary placement sections and sprite rendering remain unknown.
"""
from __future__ import annotations

import re
import tkinter as tk
from tkinter import ttk

from PIL import Image, ImageTk

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
        self.selected_resource: int | None = None
        self.sprite_info = None
        self.sprite_dtx = None
        self.sprite_source = None
        self.sprite_image = None
        self.sprite_error: str | None = None
        self.sprite_frame = tk.StringVar(value='0')
        self.show_outside = tk.BooleanVar(value=False)
        self.mode = tk.StringVar(value='Screens')
        self._element_paths = None
        self._atlas_photos = []
        super().__init__(app, host, browser_host, k)

    # ------------------------------------------------------------ layout
    def build(self, host):
        ws = self.standard_layout(host, layers=True, bottom_ratio=0.7)
        h = self.view_panel.header
        for choice in ('Screens', 'Elements'):
            ttk.Radiobutton(h, text=choice, value=choice, variable=self.mode,
                            command=self._mode_changed).pack(side='left', padx=3)
        ttk.Label(h, text='Atlas cell').pack(side='left', padx=(8, 2))
        self.frame_spin = ttk.Spinbox(h, from_=0, to=0, width=5,
                                      textvariable=self.sprite_frame, command=self._frame_changed)
        self.frame_spin.pack(side='left', padx=2)
        self.frame_spin.bind('<Return>', self._frame_changed)
        self.frame_spin.bind('<FocusOut>', self._frame_changed)
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
        self.res_tree.bind('<<TreeviewSelect>>', self._select_resource)
        atlas = self.bottom.add('atlas', 'Element cell atlas')
        self.atlas_canvas = tk.Canvas(atlas, bg=T.CANVAS_BG, highlightthickness=0)
        self.atlas_scroll = ttk.Scrollbar(atlas, orient='vertical', command=self.atlas_canvas.yview)
        self.atlas_canvas.configure(yscrollcommand=self.atlas_scroll.set)
        self.atlas_scroll.pack(side='right', fill='y')
        self.atlas_canvas.pack(side='left', fill='both', expand=True)
        self.atlas_canvas.bind('<Button-1>', self._atlas_click)
        self.problems = self.problems_page()
        return ws

    def build_browser(self, parent):
        self.tree = self.browser_tree(parent, ('n',), (40,), ('Layers',))
        self.tree.bind('<<TreeviewSelect>>', self._browse)
        self.tree.bind('<<TreeviewOpen>>', self._expand)
        self.filter_var.trace_add('write', lambda *_: self.populate())

    # ------------------------------------------------------------ browser
    def on_root(self):
        root = self.app.root_data
        # Screens mode: archives with backgrounds; data-only and sprite-only archives are excluded
        self._archives = scenes.screen_archives(root) if root else []
        self._kind = {p: scenes.classify_archive(root, p) for p in self._archives} if root else {}
        self._element_roots = scenes.screen_archives(root, ('screen', 'elements')) if root else []
        self._nested_catalog = None
        self._element_paths = None
        self.populate()

    def _mode_changed(self):
        self.archive = None
        self.layers, self.images, self.cfg, self.order, self.sel = [], {}, {}, [], None
        self._clear_sprite()
        self.populate()
        if hasattr(self, 'view'):
            self.view.redraw()

    def _element_archives(self):
        if self._element_paths is not None:
            return self._element_paths
        paths = list(getattr(self, '_element_roots', ()))
        try:
            paths += scenes.nested_screen_archives(self.app.root_data, paths) if self.app.root_data else []
            self._element_paths = []
            for p in paths:
                try:
                    arc = self.app.root_data.archive(p)
                    if any(e.ext == '.dtx' for e in arc.entries):
                        self._element_paths.append(p)
                except (ValueError, KeyError, OSError):
                    continue
        except (ValueError, KeyError, OSError):
            self._element_paths = paths
        return self._element_paths

    def populate(self):
        t = self.tree
        t.delete(*t.get_children())
        flt = self.filter_var.get().strip().lower()
        groups = {}
        if self.mode.get() == 'Elements':
            paths = self._element_archives()
        else:
            paths = list(getattr(self, '_archives', ()))
            if flt:
                if self._nested_catalog is None and self.app.root_data:
                    self._nested_catalog = scenes.nested_screen_archives(self.app.root_data, paths)
                paths += self._nested_catalog or []
        for path in paths:
            if flt and flt not in path.lower():
                continue
            folder = path.split('/')[0]
            if self.mode.get() == 'Screens' and getattr(self, '_kind', {}).get(path.split('|')[0]) == 'library':
                folder = 'Picture libraries'
            if folder not in groups:
                groups[folder] = t.insert('', 'end', 'f:' + folder, text=folder, open=bool(flt))
            label = path.split('|')[-1].split('/')[-1]
            if flt and '|' in path:
                label = path.split('|')[0].split('/')[-1] + ' › ' + label
            iid = t.insert(groups[folder], 'end', path, text=label, values=('',))
            if self.mode.get() == 'Screens' and not flt:
                t.insert(iid, 'end', path + '|…', text='…')

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
        self.selected_resource = None
        self._clear_sprite()
        probs = []
        try:
            self.layers = scenes.find_layers(self.app.root_data, path)
        except (ValueError, KeyError, OSError) as exc:
            probs.append((str(exc), 'bad'))
        if self.mode.get() == 'Elements':
            self.layers = []
        for l in self.layers:
            img, p = scenes.render_layer(self.app.root_data, l)
            self.images[l.name] = img
            self.cfg[l.name] = {'screen': scenes.default_screen(l.name), 'sx': 0, 'sy': 0, 'visible': img is not None}
            self.order.append(l.name)
            probs += [(f'{l.name}: {x}', 'warn') for x in l.problems + p]
        self.sel = self.order[0] if self.order else None
        # Nested UI-object archives normally have DSTX + ALMT but no ALTM.
        # Automatically preview the first drawable sprite instead of leaving
        # the viewport blank when the archive loads successfully.
        if self.mode.get() == 'Elements':
            try:
                arc = self.app.root_data.archive(path)
                first = next((i for i, e in enumerate(arc.entries)
                              if e.ext == '.dtx' and e.payload()[:4] == b'DSTX'
                              and e.payload()[5] & 0x7f == 3), None)
                if first is not None:
                    self.selected_resource = first
                    self._load_sprite(first)
            except (ValueError, KeyError, OSError, IndexError) as exc:
                probs.append((f'Sprite preview: {exc}', 'warn'))
        if self.tree.exists(path):
            self.tree.set(path, 'n', str(len(self.layers)))
        self._fill_resources(probs)
        if self.selected_resource is not None and self.res_tree.exists(str(self.selected_resource)):
            self.res_tree.selection_set(str(self.selected_resource))
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
                if 'sprite pieces' in kind:
                    label += ' (atlas cells; select in Elements)'
                if 'tile panels (read-only' in kind:
                    grade = 'Direct'  # 4-byte descriptors verified by ARM9 loader; positioning still unknown
                elif 'dedicated' in kind or 'malformed' in kind:
                    grade = 'Unknown'
                    probs.append((f'{e.name}: {kind}', 'muted'))
            elif ext == '.atm':
                label = 'ALTM tile map (shown as a layer)'
            t.insert('', 'end', str(i), values=(e.name.split('/')[-1], ext, len(e.data), label, grade), tags=(grade,))

    def _select_resource(self, _e=None):
        chosen = self.res_tree.selection()
        try:
            self.selected_resource = int(chosen[0]) if chosen else None
        except (ValueError, TypeError):
            self.selected_resource = None
        self._load_sprite(self.selected_resource)
        self.refresh_inspector()
        self.view.redraw()

    def _open_resource(self, _e=None):
        sel = self.res_tree.selection()
        if not sel:
            return
        arc = self.app.root_data.archive(self.archive)
        item = arc.entries[int(sel[0])]
        if item.ext == '.aar':
            self.load(join(self.archive, item.name))
        elif item.ext == '.dtx':
            self._load_sprite(int(sel[0]))
            self.refresh_inspector()
            self.view.redraw()


    # --------------------------------------------------------- sprite preview
    def _clear_sprite(self):
        self.sprite_info = None
        self.sprite_dtx = None
        self.sprite_source = None
        self.sprite_image = None
        self.sprite_error = None
        self.sprite_frame.set('0')
        self._atlas_photos = []
        if hasattr(self, 'atlas_canvas'):
            self.atlas_canvas.delete('all')
        if hasattr(self, 'frame_spin'):
            self.frame_spin.configure(to=0, state='disabled')

    def _load_sprite(self, index):
        self._clear_sprite()
        if index is None or not self.archive:
            return
        try:
            arc = self.app.root_data.archive(self.archive)
            member = arc.entries[index]
            if member.ext in ('.amt', '.dig'):
                # ALMT/DSIG are companions to a sprite, not stand-alone
                # drawables.  Show the linked DSTX resource for inspection;
                # this is frame browsing, not ALMT time-driven playback.
                stem = member.name.rsplit('.', 1)[0].lower().rstrip('_')
                paired = next((e for e in arc.entries if e.ext == '.dtx' and
                               e.name.rsplit('.', 1)[0].lower().rstrip('_') == stem), None)
                if paired is None:
                    paired = next((e for e in arc.entries if e.ext == '.dtx' and
                                   e.resource_id == member.resource_id), None)
                if paired is None:
                    return
                member = paired
            if member.ext != '.dtx' or member.payload()[:4] != b'DSTX' or \
                    (member.payload()[5] & 0x7F) != 3:
                return
            self.sprite_info, self.sprite_dtx, self.sprite_source = scenes.screen_sprite(
                self.app.root_data, self.archive, member.name)
            self.frame_spin.configure(to=max(0, self.sprite_info.frame_count - 1),
                                      state='normal' if self.sprite_info.frame_count else 'disabled')
            if self.sprite_info.frame_count:
                self.sprite_image = scenes.render_screen_sprite(self.sprite_dtx, self.sprite_source, 0)
            if hasattr(self, 'atlas_canvas'):
                self._draw_atlas()
        except (ValueError, KeyError, IndexError, OSError) as exc:
            self.sprite_error = str(exc)

    def _frame_changed(self, _e=None):
        if self.sprite_dtx is None or self.sprite_source is None:
            return
        try:
            frame = int(self.sprite_frame.get())
            self.sprite_image = scenes.render_screen_sprite(self.sprite_dtx, self.sprite_source, frame)
            self.sprite_error = None
        except (ValueError, IndexError) as exc:
            self.sprite_error = str(exc)
            self.sprite_image = None
        self._atlas_highlight()
        self.refresh_inspector()
        self.view.redraw()

    def _draw_atlas(self):
        c = self.atlas_canvas
        c.delete('all')
        self._atlas_photos = []
        if self.sprite_dtx is None or self.sprite_source is None:
            return
        # DSTX stores cell frames. This atlas is not an ALMT motion timeline.
        size, cols = 86, 9
        for i in range(min(self.sprite_info.frame_count, 256)):
            try:
                frame, left, top = scenes.render_screen_sprite(self.sprite_dtx, self.sprite_source, i)
                frame.thumbnail((66, 62))
                photo = ImageTk.PhotoImage(frame, master=c)
                self._atlas_photos.append(photo)
                x, y = (i % cols) * size, (i // cols) * size
                c.create_rectangle(x+2, y+2, x+size-3, y+size-3, outline=T.LINE, tags=('cell',))
                c.create_image(x+size//2, y+32, image=photo, tags=('cell',))
                c.create_text(x+size//2, y+73, text=str(i), fill=T.FG, tags=('cell',))
            except (ValueError, IndexError, OSError):
                continue
        c.configure(scrollregion=(0, 0, cols*size, ((min(self.sprite_info.frame_count,256)+cols-1)//cols)*size))
        self._atlas_highlight()

    def _atlas_highlight(self):
        if not hasattr(self, 'atlas_canvas'):
            return
        c = self.atlas_canvas
        c.delete('current_cell')
        try:
            i = int(self.sprite_frame.get())
        except ValueError:
            return
        size, cols = 86, 9
        x, y = (i%cols)*size, (i//cols)*size
        c.create_rectangle(x+1,y+1,x+size-2,y+size-2, outline=T.ACCENT, width=2, tags='current_cell')

    def _atlas_click(self, event):
        if self.sprite_info is None:
            return
        size, cols = 86, 9
        x = self.atlas_canvas.canvasx(event.x)
        y = self.atlas_canvas.canvasy(event.y)
        index = int(y//size)*cols + int(x//size)
        if 0 <= index < self.sprite_info.frame_count:
            self.sprite_frame.set(str(index))
            self._frame_changed()

    # ------------------------------------------------------------ view
    def _rows(self):
        title = 'Pictures (select one to view)' if self._library() else 'Backgrounds (back → front)'
        rows = [{'id': 'g', 'name': title, 'kind': 'group'}]
        for n in self.order:
            c = self.cfg[n]
            rows.append({'id': n, 'parent': 'g', 'name': n, 'kind': c['screen'],
                         'visible': self._shown(n),
                         'available': self.images.get(n) is not None,
                         'status': f'scroll {c["sx"]},{c["sy"]}'})
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

    def _library(self) -> bool:
        return getattr(self, '_kind', {}).get(self.archive) == 'library' and self.mode.get() == 'Screens'

    @staticmethod
    def _picture(name: str) -> str:
        """Library layers drawn together: a portrait's head (…aa) and body (…ab)."""
        return name[:-1] if re.search(r'_\d\d[a-z]{2}$', name) and name[-2] == 'a' else name

    def _shown(self, n) -> bool:
        c = self.cfg[n]
        if self.images.get(n) is None or c['screen'] == 'Hidden':
            return False
        if self._library():          # a picture collection: one picture at a time
            return bool(self.sel) and self._picture(n) == self._picture(self.sel)
        return c['visible']

    def _draw(self, vp):
        for name, (ox, oy) in ORIGIN.items():
            vp.rect(ox, oy, ox + SW, oy + SH, fill='#000000', outline='')
        if self.show_outside.get():
            for n in self.order:
                c, img = self.cfg[n], self.images.get(n)
                if not self._shown(n):
                    continue
                ox, oy = ORIGIN[c['screen']]
                faded = img.copy()
                faded.putalpha(faded.getchannel('A').point(lambda v: v // 4))
                vp.add_image(faded, ox - c['sx'], oy - c['sy'])
                vp.rect(ox - c['sx'], oy - c['sy'], ox - c['sx'] + img.width, oy - c['sy'] + img.height,
                        outline=T.LINE, dash=(3, 3))
        # library pictures: body (…ab) behind, head (…aa) in front
        names = sorted(self.order, key=lambda n: n[-1] == 'a') if self._library() else self.order
        for n in names:
            c, img = self.cfg[n], self.images.get(n)
            if not self._shown(n):
                continue
            ox, oy = ORIGIN[c['screen']]
            vp.add_image(self._crop(img, c['sx'], c['sy']), ox, oy)
        if self.sprite_image is not None and self.mode.get() == 'Elements':
            # Sprite-space origin is centered as a resource preview, *not*
            # presented as a traced menu screen position or runtime layer.
            frame_image, left, top = self.sprite_image
            preview = Image.new('RGBA', (SW, SH), (0, 0, 0, 0))
            preview.alpha_composite(frame_image, (SW // 2 + left, SH // 2 + top))
            vp.add_image(preview, *ORIGIN['Top'])
            vp.text(4, 4, f'ELEMENT CELL {self.sprite_frame.get()} (atlas, no motion playback)',
                    anchor='nw', fill=T.ACCENT, font=T.MONO_SMALL)
        for name, (ox, oy) in ORIGIN.items():
            hot = self.sel and self.cfg.get(self.sel, {}).get('screen') == name
            vp.rect(ox, oy, ox + SW, oy + SH, outline=T.ACCENT if hot else T.MUTED, width=2 if hot else 1)
            vp.text(ox, oy - 2, f'{name.upper()} SCREEN  256×192', anchor='sw', fill=T.MUTED, font=T.MONO_SMALL)
        vp.hud.configure(text=('Sprite centered for resource preview (not runtime screen placement).'
                               if self.sprite_image is not None else
                               'Screen assignment, scroll and order are a preview (not traced, not saved).')
                         if self.archive else 'Select a screen archive in the browser.')

    def _select_layer(self, row):
        if row and row.get('kind') not in ('group', 'overlay'):
            changed = self.sel != str(row['id'])
            self.sel = str(row['id'])
            if self._library():
                if changed:          # the eye column follows the shown picture
                    self.refresh()   # (re-selects the row; unchanged sel ends the loop)
                return
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
        if self.sprite_info is not None:
            ins.section('Sprite frame preview — read-only', note=self.sprite_info.dtx_path)
            ins.value('Frame', f'{self.sprite_frame.get()} / {self.sprite_info.frame_count - 1}')
            ins.value('Texture', 'embedded DSIG' if self.sprite_info.embedded else
                      self.sprite_info.image_path)
            ins.value('DSIG mode', f'0x{self.sprite_info.dsig_mode:02X}')
            if self.sprite_image is not None:
                im, x, y = self.sprite_image
                ins.value('Frame bounds', f'({x}, {y})  {im.width}×{im.height} pixels')
            ins.evidence('Sprite image', 'Direct', 'DSTX frame + DSIG pixel decoder')
            ins.evidence('Runtime position', 'Unknown', 'centered for inspection only')
        if self.sprite_error:
            ins.section('Sprite preview error')
            ins.value('Detail', self.sprite_error)
        if self.selected_resource is not None:
            try:
                arc = self.app.root_data.archive(self.archive)
                item = arc.entries[self.selected_resource]
                data = item.payload()
                if item.ext == '.amt':
                    ins.section('ALMT — animation timing not projected', note=item.name)
                    ins.text('The associated sprite frames are previewable above. The frame number '
                             'is a DSTX index, not an ALMT playback tick.')
                if item.ext == '.dtx' and data[:4] == b'DSTX' and data[5] in (5, 6):
                    from jus_formats.dstx import parse_layout
                    layout = parse_layout(data)
                    ins.section('DSTX 0x05/0x06 — read-only', note=item.name)
                    ins.value('Mode', f'0x{layout.flags:02X} — {"6" if layout.mode6 else "5"}')
                    ins.value('Panels', str(len(layout.panels)))
                    ins.value('Auxiliary', f'{len(layout.auxiliary)} bytes (opaque)')
                    ins.value('DSIG', f'{len(layout.embedded)} bytes' if layout.embedded[:4] == b'DSIG'
                              else 'not found')
                    for i, panel in enumerate(layout.panels[:16]):
                        ins.value(f'Panel {i}', f'base {panel.first_tile}, {panel.tiles_w}×{panel.tiles_h} tiles')
                    if len(layout.panels) > 16:
                        ins.value('Additional', f'{len(layout.panels) - 16} panels not listed')
                    ins.evidence('Descriptors', 'Direct', 'ARM9 0x02044E78 / 0x02043C7C')
                    ins.evidence('Placement', 'Unknown', 'additional section and layer mapping unresolved')
            except (ValueError, KeyError, IndexError) as exc:
                ins.section('Resource')
                ins.value('Parse problem', str(exc))
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