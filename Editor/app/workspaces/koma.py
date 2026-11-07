"""Koma Editor: comic-panel art (``koma/koma.aar``) and card shapes (``bin/koma.bin``).

Layout follows the Unity Sprite Editor / Aseprite-lite pattern:
asset browser (left dock) · card canvas with Select / Pencil / Picker tools ·
inspector with card, shape picker and palette · bottom dock with the panel
strip, the shape dictionary and problems.

* Panel art: DSTX v1 flags 0x04, byte-exact on 898/898 files (Direct).
* Card shape: ``bin/kshape.bin`` 66 shapes on a 5×4 grid (5 columns × 4 rows, the deck board width) and ``bin/koma.bin``
  890 cards selecting (size, variant) — both rebuild byte-exactly (Direct).
  Choosing an existing shape changes bytes +0x08/+0x09 of one card.
  Editing the shape dictionary writes kshape.bin and may update multiple cards.
* Card ↔ art: series id → art prefix from the ARM9 table 0x0209E840, art index →
  `koma/<prefix>_<NN>.dtx` (FUN_020790F0) — Direct.
* Deck placement is handled by the game and is outside the editor.
* New shape variants are format-valid but their runtime capacity is unverified.
"""
from __future__ import annotations

import re
import tkinter as tk
from pathlib import Path
from tkinter import colorchooser, filedialog, messagebox, ttk

from PIL import Image

from jus_formats import bintables, dsig as dsigmod, koma, kshape
from jus_package import images, komacards
from jus_package.project import join

from .. import theme as T
from ..widgets import Filmstrip
from .base import SuiteWorkspace

ARCHIVE = 'koma/koma.aar'
GAP = 8          # strip mode
CGAP = 3         # card mode, between grid cells
CELL = 48


class KomaWorkspace(SuiteWorkspace):
    key = 'koma'
    title = 'Koma'
    browser_title = 'Koma assets'

    def __init__(self, app, host, browser_host, k):
        self.path: str | None = None
        self.kf: koma.KomaFile | None = None
        self.panel = 0
        self.tool = tk.StringVar(value='select')
        self.layout_mode = tk.StringVar(value='Card')
        self.colour = 1
        self.show_grid = tk.BooleanVar(value=True)
        self._dirty = False                       # art edited, not applied
        self._cards_dirty = False                 # koma.bin edited, not applied
        self._shape_dirty = False                 # kshape.bin edited, not applied
        self._stroke = None
        self._cache: dict[int, Image.Image] = {}
        self.cat: komacards.KomaCatalog | None = None
        self.cat_error = ''
        self.card_choices: list[tuple[kshape.Card, bool]] = []
        self.card: kshape.Card | None = None
        super().__init__(app, host, browser_host, k)

    # ------------------------------------------------------------ layout
    def build(self, host):
        ws = self.standard_layout(host, bottom_ratio=0.74)
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
        for key, tip in (('Strip', 'Panels in a row (art order)'),
                         ('Card', 'Panels placed on the card shape (bin/kshape.bin 5×4 grid)')):
            b = ttk.Radiobutton(h, text=key, value=key, variable=self.layout_mode, style='ToolToggle.TRadiobutton',
                                command=self.frame_view)
            b.pack(side='right', padx=1)
            T.Tooltip(b, tip)
        ttk.Button(h, text='Frame', style='Tool.TButton', command=self.frame_view).pack(side='right', padx=4)
        self.view = self.make_viewport(on_draw=self._draw, on_press=self._press, on_drag=self._drag,
                                       on_release=self._release, origin_frac=(0.1, 0.1), zoom=3)
        page = self.bottom.add('panels', 'Panels')
        self.strip = Filmstrip(page, thumb=56, on_select=self.select_panel)
        self.strip.pack(fill='both', expand=True, padx=4, pady=4)
        page = self.bottom.add('shapes', 'Shapes')
        self.shape_canvas = tk.Canvas(page, bg=T.CANVAS_BG, highlightthickness=0, height=int(150 * self.k))
        sb = ttk.Scrollbar(page, orient='horizontal', command=self.shape_canvas.xview)
        self.shape_canvas.configure(xscrollcommand=sb.set)
        self.shape_canvas.pack(fill='both', expand=True, padx=4, pady=(4, 0))
        sb.pack(fill='x', padx=4)
        self.shape_canvas.bind('<Button-1>', self._shape_click)
        self._shape_hits = []
        t = self.bottom.tools
        T.tool_button(t, 'Import panel PNG…', self.import_panel, 'Replace the selected panel (48×48) from a PNG')
        T.tool_button(t, 'Export panel PNG…', self.export_panel, 'Save the selected panel as an indexed PNG')
        T.tool_button(t, 'Export all…', self.export_all, 'Save every panel of this asset')
        T.tool_button(t, 'Export card PNG…', self.export_card, 'Save the panels as laid out on the card shape')
        T.tool_button(t, 'Edit shape…', self.edit_shape_variant, 'Edit the selected 5×4 polyomino variant')
        T.tool_button(t, 'New variant…', self.add_shape_variant, 'Append a shape variant, selecting it for this Koma')
        T.tool_button(t, 'Remove variant…', self.remove_shape_variant, 'Delete a shape with safe reference migration')
        T.tool_button(t, 'Apply', self.apply, 'Stage art in koma.aar, shapes in bin/kshape.bin and card selectors in bin/koma.bin '
                                              '(Ctrl+Enter)', style='Accent.TButton')
        self.problems = self.problems_page()
        return ws

    def build_browser(self, parent):
        self.tree = self.browser_tree(parent, ('panels',), (50,), ('Panels',))
        self.tree.bind('<<TreeviewSelect>>', self._browse)
        self.filter_var.trace_add('write', lambda *_: self.populate())

    # ------------------------------------------------------------ browser
    def on_root(self):
        self._names = []
        self._koma_names = None          # bin/komatxt.bin, loaded on first use
        self.cat, self.cat_error = None, ''
        root = self.app.root_data
        if root and (root.root / ARCHIVE).is_file():
            try:
                arc = root.archive(ARCHIVE)
                self._names = [(e.name, e.payload()[6] | (e.payload()[7] << 8))
                               for e in arc.entries if e.ext == '.dtx']
            except (OSError, ValueError, KeyError) as exc:
                self.app.status.set(f'koma.aar: {exc}')
            try:
                self.cat = komacards.load(root)
            except (OSError, ValueError, KeyError) as exc:
                self.cat_error = str(exc)
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
        if self.dirty and self.kf is not None:
            if not messagebox.askyesno('Koma', 'Discard unapplied panel / card edits?'):
                return
            self._revert_cards()
        self.path = join(ARCHIVE, name)
        try:
            self.kf = koma.parse(self.app.root_data.read(self.path))
        except (ValueError, KeyError) as exc:
            self.kf = None
            messagebox.showerror('Koma', f'{name}: {exc}')
            return
        self._orig = self.app.root_data.read(self.path)
        self._dirty = False
        self._shape_dirty = False
        self.panel = 0
        self._cache.clear()
        self.card_choices = self.cat.cards_for_art(name) if self.cat else []
        self.card = self.card_choices[0][0] if self.card_choices else None
        self.layout_mode.set('Card' if self._shape() else 'Strip')
        self.refresh(frame=True)
        self.app.status.set(f'{self.path}: {len(self.kf.panels)} panels, {self.kf.tile_count} tiles' +
                            (f' · card {self.card.index}' if self.card else ' · no card record'))
        self.app._update_undo_label()

    # ------------------------------------------------------------ card shape
    def _shape(self) -> kshape.Shape | None:
        if not (self.cat and self.card and self.kf):
            return None
        try:
            return self.cat.shapes.get(self.card.size, self.card.variant)
        except ValueError:
            return None

    def _card_mode(self) -> bool:
        return self.layout_mode.get() == 'Card' and self._shape() is not None

    def _placements(self) -> list[tuple[int, int, int, str]]:
        """(panel index, world x, world y, kind) — kind 'cell', 'dup' (repeated label) or 'unplaced'."""
        n = len(self.kf.panels) if self.kf else 0
        if not self._card_mode():
            out, x = [], 0
            for i in range(n):
                out.append((i, x, 0, 'cell'))
                x += self.kf.panels[i].size[0] + GAP
            return out
        out, seen = [], set()
        for col, row, label in self._shape().coordinates():
            i = label - 1
            if i >= n:
                continue
            out.append((i, col * (CELL + CGAP), row * (CELL + CGAP), 'dup' if i in seen else 'cell'))
            seen.add(i)
        x = 0
        for i in range(n):                         # panels the shape does not place (shape 59)
            if i not in seen:
                out.append((i, x, kshape.ROWS * (CELL + CGAP) + 16, 'unplaced'))
                x += CELL + GAP
        return out

    # ------------------------------------------------------------ view
    def refresh(self, frame=False):
        n = len(self.kf.panels) if self.kf else 0
        self.strip.set_frames(n, self._panel_rgba, self.panel if n else None)
        self.view_panel.set_title(f'Viewport — {self.path.split("|")[-1]}' if self.path else 'Viewport')
        probs = [(p, 'warn') for p in self.kf.problems()] if self.kf else []
        shape = self._shape()
        if shape:
            probs += [(p, 'warn') for p in shape.problems()]
            if shape.size != n:
                probs.append((f'card shape has {shape.size} cells but the art has {n} panels', 'bad'))
        if self.kf and not self.card_choices:
            probs.append(('no koma.bin card uses this art (dt_20..dt_27 are extra art with no card)', 'muted'))
        if len({c.index for c, _ in self.card_choices}) > 1:
            probs.append((f'ambiguous series: cards {", ".join(str(c.index) for c, _ in self.card_choices)} may '
                          'use this art; pick one in the Inspector', 'warn'))
        if self.cat_error:
            probs.append((f'card tables unavailable: {self.cat_error}', 'bad'))
        self.problems.set_lines(probs or [('No problems: panel table, tile ranges and card shape are consistent.',
                                           'good')])
        self._draw_shapes()
        self.refresh_inspector()
        if frame:
            self.frame_view()
        else:
            self.view.redraw()

    def frame_view(self):
        if self.kf and self.kf.panels:
            pl = self._placements()
            w = max(x for _, x, _, _ in pl) + CELL
            h = max(y for _, _, y, _ in pl) + CELL
            if self._card_mode():
                w = max(w, kshape.COLS * (CELL + CGAP))
                h = max(h, kshape.ROWS * (CELL + CGAP))
            self.view.frame_rect((-4, -14, w + 4, h + 4))
        else:
            self.view.frame_origin()

    def _panel_rgba(self, i):
        if i not in self._cache:
            img = self.kf.panel_image(i)
            w, h = self.kf.panels[i].size
            self._cache[i] = Image.frombytes('RGBA', (w, h), img.to_rgba(self.kf.image.palettes))
        return self._cache[i]

    def _origin(self, i):
        for pi, x, y, _ in self._placements():
            if pi == i:
                return x, y
        return 0, 0

    def _panel_at(self, wx, wy):
        if not self.kf:
            return None
        for i, x, y, _ in self._placements():
            w, h = self.kf.panels[i].size
            if x <= wx < x + w and y <= wy < y + h:
                return i, x, y
        return None

    def _draw(self, vp):
        if not self.kf:
            vp.hud.configure(text='Select a koma asset in the browser.')
            return
        card = self._card_mode()
        if card:                                   # the 5×4 card grid underneath
            for r in range(kshape.ROWS):
                for c in range(kshape.COLS):
                    x, y = c * (CELL + CGAP), r * (CELL + CGAP)
                    vp.rect(x, y, x + CELL, y + CELL, outline='#30353B', dash=(2, 3))
        for i, x, y, kind in self._placements():
            p = self.kf.panels[i]
            vp.add_image(self._panel_rgba(i), x, y)
            sel = i == self.panel
            col = T.BAD if kind in ('dup', 'unplaced') else (T.ACCENT if sel else T.LINE)
            vp.rect(x, y, x + p.size[0], y + p.size[1], outline=col, width=2 if sel or kind != 'cell' else 1)
            tag = f'{i + 1}' if card else f'{i}'
            if kind == 'dup':
                tag += ' dup'
            elif kind == 'unplaced':
                tag += ' unplaced'
            vp.text(x, y - 2, tag, anchor='sw', fill=T.BAD if kind != 'cell' else (T.FG if sel else T.MUTED),
                    font=T.MONO_SMALL)
        if self.show_grid.get() and vp.zoom >= 6 and self.kf.panels:
            x0, y0 = self._origin(self.panel)
            w, h = self.kf.panels[self.panel].size
            for i in range(1, w):
                sx, sy = vp.to_screen(x0 + i, y0)
                vp.canvas.create_line(sx, sy, sx, sy + h * vp.zoom, fill='#202020' if i % 8 else '#3A6EA5')
            for j in range(1, h):
                sx, sy = vp.to_screen(x0, y0 + j)
                vp.canvas.create_line(sx, sy, sx + w * vp.zoom, sy, fill='#202020' if j % 8 else '#3A6EA5')
        s = self._shape()
        where = (f'card {self.card.index} · shape {s.index} (size {s.size}, variant {s.variant})'
                 if card else 'strip (art order)' + ('' if self.card else ' · no card record'))
        vp.hud.configure(text=f'{len(self.kf.panels)} panels · {where} · tool {self.tool.get()} · '
                              f'colour {self.colour}')

    # ------------------------------------------------------------ shape dictionary dock
    def _draw_shapes(self):
        c = self.shape_canvas
        c.delete('all')
        self._shape_hits = []
        if not self.cat:
            c.create_text(10, 20, anchor='w', text=self.cat_error or 'bin/kshape.bin not loaded', fill=T.MUTED,
                          font=T.UI_FONT)
            return
        k = self.k
        cell = int(7 * k)
        cur = self._shape()
        need = len(self.kf.panels) if self.kf else None
        x = int(8 * k)
        for g in self.cat.shapes.groups:
            size = g[0].size
            c.create_text(x, int(8 * k), anchor='nw', text=f'{size} cell{"s" if size > 1 else ""}',
                          fill=T.FG if size == need else T.MUTED, font=T.UI_BOLD)
            y0 = int(26 * k)
            col = 0
            for s in g:
                ox = x + col * (cell * kshape.COLS + int(10 * k))
                hot = cur is not None and s.index == cur.index
                ok = size == need
                c.create_rectangle(ox - 3, y0 - 3, ox + cell * kshape.COLS + 3, y0 + cell * kshape.ROWS + 3,
                                   outline=T.ACCENT if hot else ('#3A4048' if ok else '#2A2E33'),
                                   width=2 if hot else 1)
                for cx, cy, lab in s.coordinates():
                    fill = T.BAD if s.problems() else (T.GOOD if ok else '#4A5058')
                    c.create_rectangle(ox + cx * cell, y0 + cy * cell, ox + (cx + 1) * cell - 1,
                                       y0 + (cy + 1) * cell - 1, fill=fill, outline='')
                c.create_text(ox, y0 + cell * kshape.ROWS + 6, anchor='nw', text=f'{s.variant}', fill=T.MUTED,
                              font=T.MONO_SMALL)
                self._shape_hits.append(((ox - 3, y0 - 3, ox + cell * kshape.COLS + 3, y0 + cell * kshape.ROWS + 3), s))
                col += 1
            x += col * (cell * kshape.COLS + int(10 * k)) + int(16 * k)
        c.configure(scrollregion=(0, 0, x, int(130 * k)))

    def _shape_click(self, e):
        x, y = self.shape_canvas.canvasx(e.x), self.shape_canvas.canvasy(e.y)
        for (x0, y0, x1, y1), s in self._shape_hits:
            if x0 <= x <= x1 and y0 <= y <= y1:
                self.set_shape(s.size, s.variant)
                return

    def set_shape(self, size, variant):
        if not (self.cat and self.card and self.kf):
            self.app.status.set('No card record for this art: nothing to reshape.')
            return
        if size != len(self.kf.panels):
            self.app.status.set(f'This art has {len(self.kf.panels)} panels; pick a {len(self.kf.panels)}-cell shape.')
            return
        if (size, variant) == (self.card.size, self.card.variant):
            return
        self.checkpoint('change card shape')
        self.cat.cards.set_shape(self.card.index, size, variant, self.cat.shapes)
        self._cards_dirty = self.cat.cards.build() != self.app.root_data.read(komacards.CARDS)
        self.layout_mode.set('Card')
        self.refresh(frame=True)
        self.app.update_dirty()
        self.app.status.set(f'Card {self.card.index}: shape → size {size}, variant {variant} '
                            '(bytes +8/+9 only; Apply to stage bin/koma.bin)')

    def _pick_card(self, label):
        for c, _ in self.card_choices:
            if label.startswith(f'{c.index} '):
                self.card = c
        self.refresh(frame=True)

    def open_card_by_id(self, card_index: int) -> bool:
        """Navigate a text-linked ALMT resource back to its owning Koma art/card."""
        if self.cat is None or not 0 <= card_index < len(self.cat.cards.cards):
            self.app.status.set(f'Koma card #{card_index} unavailable')
            return False
        card = self.cat.cards.cards[card_index]
        candidates = self.cat.art_for_card(card)
        if len(candidates) != 1:
            self.app.status.set(f'Koma card #{card_index} has {len(candidates)} matching art sources')
            return False
        target = candidates[0]
        if self.path != target or self.kf is None:
            self.load(target.split('|')[-1])
            if self.path != target or self.kf is None:
                return False
        linked = next((c for c, _ in self.card_choices if c.index == card_index), None)
        if linked is None:
            self.app.status.set(f'Koma #{card_index} is not present for {target}')
            return False
        self.card = linked
        self.refresh(frame=True)
        self.app.status.set(f'Koma card #{card_index}: {self.koma_name(card_index)}')
        return True

    # ------------------------------------------------------------ authored shape variants
    def _update_shape_dirty(self):
        if self.cat:
            self._shape_dirty = self.cat.shapes.build() != self.app.root_data.read(komacards.SHAPES)
            self._cards_dirty = self.cat.cards.build() != self.app.root_data.read(komacards.CARDS)

    def _shape_dialog(self, *, create=False):
        if not (self.cat and self.card and self.kf):
            self.app.status.set('Select a koma card before editing shape variants.')
            return
        size = self.card.size
        original = self._shape()
        if original is None:
            return
        dlg = tk.Toplevel(self.frame)
        dlg.title(('New' if create else 'Edit') + f' {size}-panel shape')
        dlg.transient(self.frame.winfo_toplevel())
        dlg.resizable(False, False)
        f = ttk.Frame(dlg, padding=14)
        f.pack(fill='both', expand=True)
        ttk.Label(f, text='5 × 4 shape · 0 = empty · each numbered art panel appears once').grid(
            row=0, column=0, columnspan=5, sticky='w', pady=(0, 10))
        vars_ = []
        for y in range(kshape.ROWS):
            for x in range(kshape.COLS):
                var = tk.StringVar(value=str(original.cells[y * kshape.COLS + x]))
                cb = ttk.Combobox(f, textvariable=var, width=3, state='readonly',
                                  values=tuple(str(i) for i in range(size + 1)))
                cb.grid(row=y + 1, column=x, padx=3, pady=3)
                vars_.append(var)
        status = ttk.Label(f, text='', foreground='#F18A77', wraplength=320)
        status.grid(row=5, column=0, columnspan=5, sticky='w', pady=(8, 2))

        def commit():
            values = tuple(int(v.get()) for v in vars_)
            try:
                kshape.ShapeTable._validated_cells(size, values)
            except ValueError as exc:
                status.config(text=str(exc))
                return
            if not create and values == original.cells:
                dlg.destroy()
                return
            # Multiple cards may reference a shared shape variant.
            users = [c.index for c in self.cat.cards.cards
                     if c.size == size and c.variant == original.variant]
            if not create and len(users) > 1 and not messagebox.askyesno(
                    'Shared shape', f'This shape is used by {len(users)} Komas. Change all of them?', parent=dlg):
                return
            self.checkpoint('add shape variant' if create else 'edit shape variant')
            if create:
                new = self.cat.shapes.append_variant(size, values)
                self.cat.cards.set_shape(self.card.index, size, new.variant, self.cat.shapes)
            else:
                new = self.cat.shapes.replace_variant(size, original.variant, values)
            self._update_shape_dirty()
            self.layout_mode.set('Card')
            dlg.destroy()
            self.refresh(frame=True)
            self.app.update_dirty()
            self.app.status.set(f'Shape {new.index} ({size} panels, variant {new.variant}) staged; '
                                'Apply, then Save. New variants require in-game validation.')

        controls = ttk.Frame(f)
        controls.grid(row=6, column=0, columnspan=5, sticky='e', pady=(8, 0))
        ttk.Button(controls, text='Cancel', command=dlg.destroy).pack(side='right', padx=(6, 0))
        ttk.Button(controls, text='Create variant' if create else 'Update shape',
                   command=commit).pack(side='right')
        dlg.grab_set()
        dlg.focus_set()

    def edit_shape_variant(self):
        self._shape_dialog(create=False)

    def add_shape_variant(self):
        self._shape_dialog(create=True)

    def remove_shape_variant(self):
        if not (self.cat and self.card and self.kf):
            self.app.status.set('Select a koma card before removing a shape variant.')
            return
        from tkinter import simpledialog
        size, variant = self.card.size, self.card.variant
        group = self.cat.shapes.groups[size - 1]
        if len(group) <= 1:
            messagebox.showerror('Remove shape', 'A size group must retain at least one variant.')
            return
        refs = [c.index for c in self.cat.cards.cards
                if c.size == size and c.variant == variant]
        options = [n for n in range(len(group)) if n != variant]
        replacement = None
        if refs:
            replacement = simpledialog.askinteger(
                'Reassign shape references',
                f'Variant {variant} is used by {len(refs)} Komas.\n'
                f'Choose a replacement variant from {options}.\n'
                'All those cards will be reassigned, and later variant IDs renumbered.',
                parent=self.frame)
            if replacement is None:
                return
            if replacement not in options:
                messagebox.showerror('Invalid replacement', f'Choose one of {options}.')
                return
        if not messagebox.askyesno('Remove shape',
                                  f'Remove size {size} variant {variant}?\n'
                                  f'{len(refs)} cards will be reassigned; later variants will shift.',
                                  parent=self.frame):
            return
        self.checkpoint('remove shape variant')
        self.cat.shapes.delete_variant(size, variant, self.cat.cards, replacement)
        self._update_shape_dirty()
        self.refresh(frame=True)
        self.app.update_dirty()
        self.app.status.set('Shape variant removed; Apply, then Save. Verify against the game.')

    # ------------------------------------------------------------ tools
    def _pixel(self, wx, wy):
        hit = self._panel_at(wx, wy)
        if hit is None:
            return None
        i, x0, y0 = hit
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
    def koma_name(self, index: int) -> str:
        """Card name from bin/komatxt.bin ('|' is the game's word separator)."""
        if getattr(self, '_koma_names', None) is None:
            try:
                self._koma_names = bintables.koma_names(self.app.root_data) if self.app.root_data else []
            except (ValueError, KeyError, OSError):
                self._koma_names = []
        names = self._koma_names
        return names[index].replace('|', ' ').strip() if 0 <= index < len(names) else ''

    def refresh_inspector(self):
        ins = self.inspector
        ins.clear()
        if not self.kf:
            ins.section('Koma')
            ins.text('Choose an asset in the browser. Each koma file holds 1–8 square panels of 48×48 pixels '
                     '(6×6 tiles, 16 colours); its card in bin/koma.bin places them on a 5×4 shape grid.')
            ins.section('Evidence')
            ins.evidence('Panel art', 'Direct', 'DSTX v1 flags 0x04 rebuilds byte-exactly on 898/898 files')
            ins.evidence('Card shapes', 'Direct', 'kshape.bin 66 shapes / koma.bin 890 cards rebuild byte-exactly')
            ins.evidence('Mission / evolution unlocks', 'Unknown', 'acquisition tables not traced')
            return
        k = self.kf
        ins.section('Asset', note=self.path.split('|')[-1])
        ins.value('Panels', str(len(k.panels)))
        ins.value('Tiles', f'{k.tile_count} (tile 0 unused)')
        ins.value('Palette', f'{k.image.banks} bank, 4bpp')
        state = []
        if self._dirty:
            state.append('art edited')
        if self._cards_dirty:
            state.append('card shape selector edited')
        if self._shape_dirty:
            state.append('shape dictionary edited')
        ins.value('State', ('● ' + ', '.join(state) + ', not applied') if state else 'unchanged',
                  colour=T.WARN if state else T.MUTED)
        self._inspect_card(ins)
        if k.panels:
            p = k.panels[self.panel]
            ins.section(f'Panel {self.panel}' + (f'  (label {self.panel + 1})' if self._card_mode() else ''))
            ins.value('Size', f'{p.size[0]}×{p.size[1]} px ({p.width_tiles}×{p.height_tiles} tiles)')
            ins.value('Tiles', f'{p.first_tile}..{p.first_tile + p.tile_count - 1}')
        ins.section('Palette', note='Click: paint colour. Double-click: edit colour. Index 0 is transparent.')
        ins.widget(self._swatches)
        ins.value('Colour', f'{self.colour}  {hx4(k.image.palettes[0][self.colour])}')
        ins.section('Evidence')
        ins.evidence('Panel art', 'Direct', 'byte-exact rebuild 898/898; panel edits leave neighbours intact')
        ins.evidence('Card shape', 'Direct', 'kshape.bin / koma.bin byte-exact; occupancy masks match all 66 shapes')
        ins.evidence('Card ↔ art', 'Direct', 'prefix table 0x0209E840 + art index (FUN_020790F0); '
                                              'art index = file number')
        ins.evidence('Mission / evolution unlocks', 'Unknown', 'acquisition tables not traced')

    def _inspect_card(self, ins):
        if self.cat is None:
            ins.section('Card')
            ins.value('Tables', self.cat_error or 'bin/kshape.bin / bin/koma.bin not found', colour=T.BAD)
            return
        ins.section('Card (bin/koma.bin)', note='Selecting a variant changes this card; editing a shared variant affects its users.')
        if not self.card_choices:
            ins.text('No card record uses this art. dt_20..dt_27 are extra art (1..8 panels) with no card; '
                     'their purpose is not traced.')
            return
        if len({c.index for c, _ in self.card_choices}) > 1:
            labels = [f'{c.index}  (series {c.series_id})' for c, _ in self.card_choices]
            self._card_var = tk.StringVar(value=next(l for l in labels if l.startswith(f'{self.card.index} ')))
            ins.combo('Card', self._card_var, labels, 'Series ids with identical panel counts cannot be told apart '
                      'yet; every candidate is listed', on_change=lambda: self._pick_card(self._card_var.get()),
                      width=18)
        else:
            ins.value('Card', str(self.card.index))
        c = self.card
        name = self.koma_name(c.index)
        if name:
            ins.value('Name', name, tip='bin/komatxt.bin word 0 of record ' + str(c.index))
        cands = self.cat.series.get(c.series_id, [])
        ins.value('Series id', f'{c.series_id}  → ' + (' / '.join(cands) if cands else '?'),
                  colour=T.WARN if len(cands) != 1 else None,
                  tip='byte +4; prefix inferred from panel-count sequences')
        ins.value('Art index', f'{c.art_index}  (byte +5)')
        s = self._shape()
        if s:
            ins.value('Shape', f'#{s.index}: size {s.size}, variant {s.variant}  ({s.bounds[0]}×{s.bounds[1]} cells)')
            for p in s.problems():
                ins.value('Anomaly', p, colour=T.BAD)
        ins.value('Raw', bytes(c.raw).hex(' '), tip='12-byte record; unknown bytes are preserved')
        self._inspect_linked_moves(ins, c)
        if s:
            ins.section(f'Shape picker ({s.size} cells)', note='Click a shape. The Shapes tab below lists all 66.')
            ins.widget(self._picker)

    def _inspect_linked_moves(self, ins, card):
        """Read-only, original game source links; no inferred attack names."""
        ins.section('Moves (BIN / ALMT)', note='Card size determines Special A/B or support action')
        if card.raw[6] == 2:
            ins.text('Help/other Koma. No battle or support ALMT move is assigned to '
                     'this type by the verified roster/resource linkage.')
            return
        svc = self.app._move_xref() if hasattr(self.app, '_move_xref') else None
        if svc is None:
            msg = getattr(self.app, '_move_xrefs_error', '') or 'Move lookup unavailable'
            ins.value('Cross-reference', msg, colour=T.WARN)
            return
        try:
            linked = svc.card_moves(card)
        except (ValueError, KeyError, OSError) as exc:
            ins.value('Cross-reference', str(exc), colour=T.BAD)
            return
        self._move_link_choices = {}
        ins.value('Character', f'{svc.character_name(linked[0].form)} ({linked[0].form})')
        ins.value('Source ALMT', linked[0].almt_member)
        if card.raw[6] == 0:
            specs = {x.variant: x for x in linked if x.category == 'battle-special'}
            for variant in ('A', 'B'):
                x = specs.get(variant)
                if x is not None:
                    title = x.text.display_title if x.text else ''
                    ins.value(f'Special {variant}', f'{title or "(blank source title)"}  '
                              f'[0x{x.resource_id:08X}]',
                              tip=f'{x.text.source} / record {x.text.record}, '
                                  f'title slot {x.text.title_slot}' if x.text else '')
                    if x.text:
                        ins.value(f'Type {variant}', x.text.type_label or '(blank BIN type)')
                        ins.value(f'Description {variant}',
                                  x.text.display_description or '(none in BIN)')
            if len(specs) == 2:
                ins.buttons(('Open Special A', lambda x=specs['A']:
                             self.app.open_move_resource(x.form, x.resource_id, x.almt_member)),
                            ('Open Special B', lambda x=specs['B']:
                             self.app.open_move_resource(x.form, x.resource_id, x.almt_member)))
            ins.value('Common actions', f'{len(linked)-len(specs)} input/actor actions shared '
                      'by this battle form', colour=T.MUTED)
        else:
            x = linked[0]
            title = x.text.display_title if x.text else ''
            ins.value('Support action', f'{title or "(blank source title)"}  [0x{x.resource_id:08X}]')
            if x.text:
                ins.value('Type', x.text.type_label or '(blank BIN type)')
                ins.value('Description', x.text.display_description or '(none in BIN)')
                ins.value('Text source', f'{x.text.source} row {x.text.record} / '
                          f'title slot {x.text.title_slot}')
            ins.buttons(('Open support move', lambda x=x:
                         self.app.open_move_resource(x.form, x.resource_id, x.almt_member)))
        for x in linked:
            label = f'0x{x.offset:02X}  {x.display_name}  [{x.duration} ticks]'
            self._move_link_choices[label] = x
        options = list(self._move_link_choices)
        if options:
            self._move_link_var = tk.StringVar(value=options[-1] if card.raw[6] == 0 else options[0])
            ins.combo('Go to move', self._move_link_var, options,
                      'Source move identity and authored ticks, not observed runtime duration',
                      width=34)
            ins.buttons(('Open selected ALMT move', self._open_linked_move))
        ins.evidence('Card ? ALMT', 'Direct',
                     'koma.bin +6 kind, +7 roster, +8 size; ROM resource offsets and actual AMT IDs')
        ins.evidence('Move ? BIN', 'Direct',
                     'chr_b_t.bin 53-slot or chr_s_t.bin 9-slot self-relative text definitions')

    def _open_linked_move(self):
        x = getattr(self, '_move_link_choices', {}).get(self._move_link_var.get())
        if x is not None:
            return self.app.open_move_resource(x.form, x.resource_id, x.almt_member)
        return False

    def _picker(self, parent):
        f = tk.Frame(parent, bg=T.PANEL)
        cur = self._shape()
        group = self.cat.shapes.groups[cur.size - 1]
        cell = int(6 * self.k)
        for i, s in enumerate(group):
            cv = tk.Canvas(f, width=cell * kshape.COLS + 6, height=cell * kshape.ROWS + 6, bg=T.CANVAS_BG, highlightthickness=2,
                           highlightbackground=T.ACCENT if s.index == cur.index else T.PANEL)
            for cx, cy, _ in s.coordinates():
                cv.create_rectangle(3 + cx * cell, 3 + cy * cell, 3 + (cx + 1) * cell - 1, 3 + (cy + 1) * cell - 1,
                                    fill=T.BAD if s.problems() else T.GOOD, outline='')
            cv.grid(row=i // 7, column=i % 7, padx=2, pady=2)
            cv.bind('<Button-1>', lambda e, ss=s: self.set_shape(ss.size, ss.variant))
            T.Tooltip(cv, f'shape {s.index}: variant {s.variant}' + (' — ' + s.problems()[0] if s.problems() else ''))
        return f

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
            images.save_png(img, self.kf.image.palettes, Path(out))
            self.app.status.set(f'Exported panel {self.panel} → {out}')

    def export_all(self):
        if not self.kf:
            return
        d = filedialog.askdirectory(title='Folder for the panel PNGs')
        if not d:
            return
        stem = self.path.split('/')[-1].rsplit('.', 1)[0]
        for i in range(len(self.kf.panels)):
            images.save_png(self.kf.panel_image(i), self.kf.image.palettes, Path(d) / f'{stem}_p{i}.png')
        self.app.status.set(f'Exported {len(self.kf.panels)} panels → {d}')

    def card_image(self) -> Image.Image | None:
        """RGBA picture of the art laid out on its card shape (cells touching, no gaps)."""
        s = self._shape()
        if not s:
            return None
        cols, rows = s.bounds
        img = Image.new('RGBA', (cols * CELL, rows * CELL), (0, 0, 0, 0))
        for cx, cy, label in s.coordinates():
            if label - 1 < len(self.kf.panels):
                img.alpha_composite(self._panel_rgba(label - 1), (cx * CELL, cy * CELL))
        return img

    def export_card(self):
        img = self.card_image() if self.kf else None
        if img is None:
            self.app.status.set('No card shape for this art.')
            return
        stem = self.path.split('/')[-1].rsplit('.', 1)[0]
        out = filedialog.asksaveasfilename(defaultextension='.png', initialfile=f'{stem}_card.png',
                                           filetypes=[('PNG', '*.png')])
        if out:
            img.save(out)
            self.app.status.set(f'Exported card layout → {out}')

    def import_panel(self):
        if not self.kf:
            return
        src = filedialog.askopenfilename(filetypes=[('PNG', '*.png')])
        if not src:
            return
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
        if not self.kf:
            return None
        return (self.kf.build(), self.panel, self._dirty,
                self.cat.cards.build() if self.cat else None,
                self.cat.shapes.build() if self.cat else None)

    def restore(self, snap):
        data, panel, _, cards, shapes = snap
        self.kf = koma.parse(data)
        self.kf.image_dirty = True
        self._dirty = data != getattr(self, '_orig', None)
        if self.cat and shapes is not None:
            self.cat.shapes = kshape.ShapeTable.parse(shapes)
            self._shape_dirty = shapes != self.app.root_data.read(komacards.SHAPES)
        if cards is not None and self.cat:
            self.cat.cards = kshape.CardTable.parse(cards, self.cat.shapes)
            self.card_choices = self.cat.cards_for_art(self.path.split('|')[-1])
            idx = self.card.index if self.card else None
            self.card = next((c for c, _ in self.card_choices if c.index == idx),
                             self.card_choices[0][0] if self.card_choices else None)
            self._cards_dirty = cards != self.app.root_data.read(komacards.CARDS)
        self.panel = min(panel, len(self.kf.panels) - 1)
        self._cache.clear()
        self.refresh()

    def _revert_cards(self):
        if self.cat and (self._cards_dirty or self._shape_dirty):
            self.cat.shapes = kshape.ShapeTable.parse(self.app.root_data.read(komacards.SHAPES))
            self.cat.cards = kshape.CardTable.parse(self.app.root_data.read(komacards.CARDS), self.cat.shapes)
            self._shape_dirty = False
            self._cards_dirty = False

    @property
    def dirty(self):
        return self._dirty or self._cards_dirty or self._shape_dirty

    def apply(self):
        if not self.kf or not self.dirty:
            self.app.status.set('Koma: nothing to apply.')
            return
        done = []
        if self._dirty:
            blob = self.kf.build()
            koma.parse(blob)                       # validate before writing
            self.app.root_data.write(self.path, blob)
            self._orig = blob
            self._dirty = False
            done.append('koma.aar')
        if self._shape_dirty and self.cat:
            blob = self.cat.shapes.build()
            checked = kshape.ShapeTable.parse(blob)
            kshape.CardTable.parse(self.cat.cards.build(), checked)
            self.app.root_data.write_file(komacards.SHAPES, blob)
            self._shape_dirty = False
            done.append('bin/kshape.bin')
        if self._cards_dirty and self.cat:
            blob = self.cat.cards.build()
            kshape.CardTable.parse(blob, self.cat.shapes)
            self.app.root_data.write_file(komacards.CARDS, blob)
            self._cards_dirty = False
            done.append('bin/koma.bin')
            # Rebuild reverse card?move references from staged source bytes.
            if hasattr(self.app, '_move_xrefs'):
                self.app._move_xrefs = None
                self.app._move_xrefs_error = ''
        self.refresh()
        self.app.update_dirty()
        self.app.status.set(f'Applied {self.path} → {" + ".join(done)} — Save (Ctrl+S) to write the files.')


def hx4(v):
    return f'0x{v:04X}'
