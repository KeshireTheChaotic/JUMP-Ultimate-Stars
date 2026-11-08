"""Unified Roster browser for the existing Animation, Sprite, and Koma editors.

Source-backed identities: ROM roster order, koma.bin record kinds, verified
Koma->ALMT MoveLinks and original koma/koma.aar art. This is navigation, not
a second animation or card serializer.
"""
from __future__ import annotations

from collections import defaultdict
import tkinter as tk
from tkinter import ttk

from PIL import Image, ImageDraw, ImageFont, ImageTk

from jus_formats import almt, bintables, koma, kshape, roster
from jus_package import komacards, movelinks
from jus_package.project import join
from .. import theme as T


class RosterIndex:
    """Pure data model, computed from the active (possibly staged) DataRoot."""

    def __init__(self, root):
        self.root = root
        self.cards = kshape.CardTable.parse(root.read('bin/koma.bin'))
        self.moves = movelinks.MoveLinks(root)
        self.catalog = komacards.load(root)
        self._unillustrated_cache = {}
        self.by_form = defaultdict(list)
        self.passive_by_series = defaultdict(list)
        for card in self.cards.cards:
            if card.raw[6] == 2:
                self.passive_by_series[card.series_id].append(card)
            else:
                form = movelinks.MoveLinks.card_form(card)
                if form is None:
                    raise ValueError(f'Koma {card.index}: unrecognised roster record')
                self.by_form[form].append(card)
        try:
            self.koma_names = bintables.koma_names(root)
        except (OSError, KeyError, ValueError):
            self.koma_names = []

    def card_label(self, card):
        name = self.koma_names[card.index].replace('|', ' ').strip() if card.index < len(self.koma_names) else ''
        suffix = f' · {name}' if name else ''
        if self.is_unillustrated_card_art(card):
            suffix += ' · ROM placeholder art'
        return f'#{card.index} · {card.size}-Koma{suffix}'

    def battle_moves(self, form):
        """Unique controls for this form and the Koma sizes it actually has."""
        seen = set()
        result = []
        for card in self.by_form.get(form, ()):
            for move in self.moves.card_moves(card):
                key = (move.resource_path, move.resource_id)
                if key not in seen:
                    seen.add(key)
                    result.append((move, card if move.category == 'battle-special' else None))
        # Normal controls precede size-specific specials, regardless of koma.bin order.
        return sorted(result, key=lambda v: (
            v[0].category == 'battle-special', v[0].koma_size if v[1] else 0,
            v[0].offset, v[0].resource_id))

    def other_battle_animations(self, form):
        """Do not silently hide unnamed/scripted original ALMT moves."""
        path = join('chr/ChrArc.aar', f'chr/{form}.aar', f'{form}.amt')
        if not self.root.exists(path):
            return ()
        mapped = {link.resource_id for link, _ in self.battle_moves(form)}
        return tuple((m.id, m.duration) for m in almt.parse(self.root.read(path)).moves
                     if m.id not in mapped)

    def art_for_card(self, card):
        candidates = self.catalog.art_for_card(card)
        return candidates[0] if len(candidates) == 1 else None

    def is_unillustrated_card_art(self, card) -> bool:
        """Exact shipped blank dt source; never invent a thumbnail."""
        path = self.art_for_card(card)
        if path is None:
            return False
        if path not in self._unillustrated_cache:
            self._unillustrated_cache[path] = komacards.is_unillustrated_original_dt_art(
                path, self.root.read(path)) if '/dt_' in path else False
        return self._unillustrated_cache[path]

    def source_icon(self, card, *, size=27):
        """Only original illustrated DSTX pixels; no fake or blank thumbnails."""
        path = self.art_for_card(card)
        if not path or self.is_unillustrated_card_art(card):
            return None
        obj = koma.parse(self.root.read(path))
        shape = self.catalog.shapes.get(card.size, card.variant)
        width, height = shape.bounds
        if not width or not height:
            return None
        out = Image.new('RGBA', (width * 48, height * 48))
        palette = obj.image.palette_rgba(0)
        for col, row, label in shape.coordinates():
            if not 0 < label <= len(obj.panels):
                continue
            panel = obj.panel_image(label - 1)
            rgba = Image.new('RGBA', (panel.width, panel.height))
            rgba.putdata([palette[c] for c in panel.pixels])
            out.alpha_composite(rgba, (col * 48, row * 48))
        out.thumbnail((size, size), Image.Resampling.NEAREST)
        return ImageTk.PhotoImage(out)


class RosterBrowser:
    """Single left-hand tree; actions switch a shared right-hand editor view."""

    def __init__(self, app, parent, scale):
        self.app = app
        self.frame = ttk.Frame(parent)
        self.index = None
        self.actions = {}
        self.loaded = set()
        self.icons = {}
        self._seq = 0
        self._selecting = False
        self._keycap_images = {}
        row = ttk.Frame(self.frame)
        row.pack(fill='x', padx=6, pady=6)
        self.filter_var = tk.StringVar()
        self.filter_var.trace_add('write', lambda *_: self.populate())
        ttk.Entry(row, textvariable=self.filter_var).pack(side='left', fill='x', expand=True)
        ttk.Button(row, text='Clear', width=5,
                   command=lambda: self.filter_var.set('')).pack(side='right', padx=(4, 0))
        frame = ttk.Frame(self.frame)
        frame.pack(fill='both', expand=True, padx=(6, 0), pady=(0, 6))
        style = ttk.Style()
        style.configure('Roster.Treeview', rowheight=max(27, int(30 * scale)))
        self.tree = ttk.Treeview(frame, show='tree', selectmode='browse', style='Roster.Treeview')
        self.tree.column('#0', width=max(215, int(245 * scale)), stretch=True)
        self.tree.pack(side='left', fill='both', expand=True)
        scroll = ttk.Scrollbar(frame, command=self.tree.yview)
        scroll.pack(side='right', fill='y')
        self.tree.configure(yscrollcommand=scroll.set)
        self.tree.bind('<<TreeviewOpen>>', self._on_open)
        self.tree.bind('<<TreeviewSelect>>', self._on_select)
        self.tree.bind('<Return>', self._on_open)

    def on_root(self):
        self.index = None
        self.actions.clear()
        self.loaded.clear()
        self.icons.clear()
        if self.app.root_data is not None:
            try:
                self.index = RosterIndex(self.app.root_data)
            except (ValueError, KeyError, OSError) as exc:
                self.app.status.set(f'Roster index unavailable: {exc}')
        self.populate()

    def _add(self, parent, label, action=None, *, lazy=False, image=None, open=False):
        self._seq += 1
        iid = f'r{self._seq}'
        props = {'text': label, 'open': open}
        if image is not None:
            props['image'] = image
            self.icons[iid] = image
        self.tree.insert(parent, 'end', iid, **props)
        if action is not None:
            self.actions[iid] = action
        if lazy:
            self.tree.insert(iid, 'end', f'dummy:{iid}', text='…')
        return iid

    def populate(self):
        t = self.tree
        t.delete(*t.get_children())
        self.actions.clear()
        self.loaded.clear()
        self.icons.clear()
        self._seq = 0
        if self.index is None:
            self._add('', 'Open a game data folder to browse the Roster')
            return
        filt = self.filter_var.get().strip().lower()
        battle = self._add('', f'Battle Characters ({len(roster.BATTLE_IDS)})', open=True)
        support = self._add('', f'Support Characters ({len(roster.SUPPORT_IDS)})', open=bool(filt))
        passive = self._add('', f'Passive / Help Koma ({sum(map(len, self.index.passive_by_series.values()))})',
                            open=bool(filt))
        for group, names, kind in (
            (battle, roster.BATTLE_IDS, 'battle'), (support, roster.SUPPORT_IDS, 'support')):
            for form in names:
                display = self.index.moves.character_name(form) or form
                if filt and filt not in display.lower() and filt not in form:
                    continue
                self._add(group, f'{display}  [{form}]', (kind, form), lazy=True)
        for series, cards in sorted(self.index.passive_by_series.items()):
            prefix = roster.KOMA_SERIES_PREFIXES[series] if series < len(roster.KOMA_SERIES_PREFIXES) else str(series)
            # Passive records are type2; +7 is not a battle/support roster ID.
            matching = [c for c in cards if not filt or
                        filt in prefix.lower() or filt in self.index.card_label(c).lower()]
            if matching:
                self._add(passive, f'{prefix.upper()} · {len(matching)} Koma',
                          ('passive-series', series, matching), lazy=True)

    def _open_node(self, iid):
        if iid in self.loaded or iid not in self.actions:
            return
        action = self.actions[iid]
        kind = action[0]
        if kind in ('battle', 'support'):
            form = action[1]
            if kind == 'battle':
                self._add(iid, 'Moves', ('moves', form), lazy=True)
            self._add(iid, 'Koma', ('koma-group', form), lazy=True)
        elif kind == 'moves':
            form = action[1]
            mapped = set()
            for link, card in self.index.battle_moves(form):
                mapped.add(link.resource_id)
                icon = self._icon(card) if card else self._keycap_icon(link.offset)
                label = (f'{link.koma_size}-Koma · {link.display_name}' if card
                         else f'{link.control} · {link.display_name}' if link.display_name != link.control
                         else link.control)
                label += f'  [0x{link.resource_id:08X}]'
                self._add(iid, label, ('move', form, link.resource_id, link.almt_member), image=icon)
            # Unmapped ALMT entries are source animations, not invented combat input actions.
            others = self.index.other_battle_animations(form)
            if others:
                extra = self._add(iid, f'Other / scripted animations ({len(others)})',
                                  ('extra-group', form), lazy=True)
        elif kind == 'extra-group':
            form = action[1]
            for mid, duration in self.index.other_battle_animations(form):
                self._add(iid, f'Animation 0x{mid:08X} · {duration} ticks',
                          ('move', form, mid, f'{form}.amt'))
        elif kind == 'koma-group':
            for card in self.index.by_form.get(action[1], ()):
                self._add(iid, self.index.card_label(card), ('card', card.index), image=self._icon(card))
        elif kind == 'passive-series':
            for card in action[2]:
                self._add(iid, self.index.card_label(card), ('card', card.index), image=self._icon(card))
        else:
            return
        dummy = f'dummy:{iid}'
        if self.tree.exists(dummy):
            self.tree.delete(dummy)
        self.loaded.add(iid)

    def _keycap_icon(self, offset):
        """Original input selector as a small keycap, not a fabricated game screenshot."""
        names = {
            0x18: 'SEL', 0x1E: 'B', 0x1F: 'Y',
            0x20: 'F+B', 0x21: 'F+Y', 0x22: 'U+B', 0x23: 'U+Y',
            0x24: 'D+B', 0x25: 'D+Y', 0x26: 'A-B', 0x27: 'A-Y',
            0x28: 'SCR',
        }
        key = names.get(offset, f'{offset:02X}')
        if key not in self._keycap_images:
            img = Image.new('RGBA', (34, 25), (0, 0, 0, 0))
            ctx = ImageDraw.Draw(img)
            ctx.rounded_rectangle((1, 1, 32, 23), radius=5,
                                  fill=(39, 48, 61, 255), outline=(125, 143, 170, 255),
                                  width=1)
            ctx.text((17, 12), key, anchor='mm', font=ImageFont.load_default(),
                     fill=(244, 244, 240, 255))
            self._keycap_images[key] = ImageTk.PhotoImage(img)
        return self._keycap_images[key]

    def _icon(self, card):
        cached = self.icons.get(f'card:{card.index}')
        if cached is not None:
            return cached
        try:
            icon = self.index.source_icon(card)
        except (ValueError, KeyError, OSError):
            return None
        if icon:
            self.icons[f'card:{card.index}'] = icon
        return icon

    def _on_open(self, _event=None):
        iid = self.tree.focus()
        if iid:
            self._open_node(iid)

    def _on_select(self, _event=None):
        if self._selecting:
            return
        selected = self.tree.selection()
        if not selected:
            return
        iid = selected[0]
        action = self.actions.get(iid)
        if not action:
            return
        kind = action[0]
        if kind in ('battle', 'support', 'moves', 'koma-group', 'extra-group', 'passive-series'):
            self._open_node(iid)
            self.tree.item(iid, open=True)
            return
        if kind == 'move':
            _, form, rid, member = action
            # Treeview can deliver more than one queued selection notification
            # for the same row (especially after programmatic navigation).
            # Never reopen the same ALMT from a duplicate notification.
            stem = member[:-4] if member.endswith('.amt') else ''
            target = join('chr/ChrArc.aar', f'chr/{stem}.aar', member)
            active = getattr(self.app, 'move', None)
            if (self.app.workspace == 'animation' and
                    self.app.almt_path == target and
                    active is not None and active.id == rid):
                return
            self.app.open_move_resource(form, rid, member)
        elif kind == 'card':
            ws = self.app.suite.get('koma')
            current = getattr(ws, 'card', None) if ws else None
            if (self.app.workspace == 'koma' and
                    current is not None and current.index == action[1]):
                return
            self.app.open_koma_card(action[1])

    def _expand_to_action(self, action):
        """Open only the necessary original roster branch, on demand."""
        if self.index is None:
            return
        kind = action[0]
        roots = self.tree.get_children('')
        if kind == 'move':
            form = action[1]
            if form not in roster.BATTLE_IDS:
                return  # support animations intentionally live under their Koma
            section = roots[0]
            group_kind = 'moves'
        elif kind == 'card':
            card = self.index.cards.cards[action[1]]
            if card.raw[6] == 2:
                section = roots[2]
                for iid in self.tree.get_children(section):
                    branch = self.actions.get(iid)
                    if branch and branch[0] == 'passive-series' and branch[1] == card.series_id:
                        self.tree.item(section, open=True)
                        self._open_node(iid)
                        self.tree.item(iid, open=True)
                        return
                return
            form = self.index.moves.card_form(card)
            section = roots[0 if card.raw[6] == 0 else 1]
            group_kind = 'koma-group'
        else:
            return
        self.tree.item(section, open=True)
        for node in self.tree.get_children(section):
            if self.actions.get(node) == ('battle', form) or self.actions.get(node) == ('support', form):
                self._open_node(node)
                self.tree.item(node, open=True)
                for child in self.tree.get_children(node):
                    if self.actions.get(child) == (group_kind, form):
                        self._open_node(child)
                        self.tree.item(child, open=True)
                        return

    def refresh_from_staged(self):
        """Refresh original-card references after Apply without losing selection."""
        selection = self.tree.selection()
        previous = self.actions.get(selection[0]) if selection else None
        self.on_root()
        if previous and previous[0] == 'card':
            self.select_card(previous[1])
        elif previous and previous[0] == 'move':
            self.select_move(previous[1], previous[2], previous[3])

    def select_move(self, form, move_id, member):
        """Keep the source-backed tree synchronized when Inspector navigates."""
        self._expand_to_action(('move', form, move_id, member))
        t = self.tree
        for iid, act in self.actions.items():
            if act == ('move', form, move_id, member) and t.exists(iid):
                self._selecting = True
                try:
                    # Tk queues <<TreeviewSelect>> for selection_set even if this
                    # is already the selected row. In Roster's selection callback
                    # that used to reopen the same ALMT/Koma indefinitely.
                    if t.selection() != (iid,):
                        t.selection_set(iid)
                    if t.focus() != iid:
                        t.focus(iid)
                    t.see(iid)
                finally:
                    self._selecting = False
                return True
        return False

    def select_card(self, card_index):
        self._expand_to_action(('card', card_index))
        t = self.tree
        for iid, act in self.actions.items():
            if act == ('card', card_index) and t.exists(iid):
                self._selecting = True
                try:
                    # Tk queues <<TreeviewSelect>> for selection_set even if this
                    # is already the selected row. In Roster's selection callback
                    # that used to reopen the same ALMT/Koma indefinitely.
                    if t.selection() != (iid,):
                        t.selection_set(iid)
                    if t.focus() != iid:
                        t.focus(iid)
                    t.see(iid)
                finally:
                    self._selecting = False
                return True
        return False
