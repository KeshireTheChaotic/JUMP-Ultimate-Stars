"""References workspace: project-wide resource registry and where-used viewer.

Unreal Reference Viewer + Unity Project search layout:

* browser (left dock): search by name / resource id / move id, type filter,
  archive tree when the search is empty;
* viewport: referencers (left) → selected resource (centre) → dependencies
  (right) as cards; click a card to re-centre on it;
* inspector: resource facts, per-move filter for move tables, evidence of each
  reference kind, *Open in workspace*;
* bottom dock: "Referenced by" and "Uses" tables with exact source locations,
  project-wide unresolved references, summary.

The index (:mod:`jus_package.registry`) is built on a background thread from
its own read-only :class:`DataRoot`, so it reflects the files on disk; it is
rebuilt automatically after Save and on demand.
"""
from __future__ import annotations

import threading
import tkinter as tk
from collections import defaultdict
from tkinter import ttk

from jus_package import registry as regmod
from jus_package.project import DataRoot, split

from .. import theme as T
from .base import SuiteWorkspace

TYPE_FILTERS = {
    'All types': None, 'Move tables (.amt)': {'.amt'}, 'Sprites (.dtx)': {'.dtx'}, 'Images (.dig)': {'.dig'},
    'Tile maps (.atm)': {'.atm'}, 'Tables (.bin)': {'.bin'}, 'Archives (.aar)': {'.aar'},
}
REF_COLOURS = {
    'texture': '#7AB6FF', 'image': '#5FD3BC', 'spawn': T.EFFECT, 'pursuer': T.WARN, 'pursuer-use': T.WARN,
    'collision': '#FF8B92', 'shot': '#D2A9FF', 'tiles': '#9DD5FF', 'koma-card': '#E5A1CE', 'koma-shape': '#E5A1CE',
}
CARD_W, CARD_H, GAP = 230, 46, 8


class ReferencesWorkspace(SuiteWorkspace):
    key = 'references'
    title = 'References'
    browser_title = 'Resources'

    def __init__(self, app, host, browser_host, k):
        self.reg: regmod.Registry | None = None
        self.sel: str | None = None
        self.move_filter: int | None = None
        self.history: list[str] = []
        self._building = False
        self._cards: list[tuple[tuple, str]] = []
        super().__init__(app, host, browser_host, k)

    # ------------------------------------------------------------ layout
    def build(self, host):
        ws = self.standard_layout(host, bottom_ratio=0.62)
        self.view_panel.set_title('Reference viewer')
        h = self.view_panel.header
        T.tool_button(h, '⟳ Rebuild index', self.rebuild, 'Re-scan every archive on disk (about 3 s)')
        T.tool_button(h, '◀ Back', self.back, 'Previous selection')
        self.build_label = ttk.Label(h, text='', style='Toolbar.TLabel')
        self.build_label.pack(side='right', padx=8)
        body = self.view_panel.body
        self.canvas = tk.Canvas(body, bg=T.CANVAS_BG, highlightthickness=0)
        sb = ttk.Scrollbar(body, command=self.canvas.yview)
        self.canvas.configure(yscrollcommand=sb.set)
        sb.pack(side='right', fill='y')
        self.canvas.pack(fill='both', expand=True)
        self.canvas.bind('<Configure>', lambda e: self.draw())
        self.canvas.bind('<Button-1>', self._click)
        self.canvas.bind('<MouseWheel>', lambda e: self.canvas.yview_scroll(-1 if e.delta > 0 else 1, 'units'))
        cols = ('resource', 'kind', 'location', 'target', 'evidence')
        widths = (260, 120, 280, 130, 90)
        self.in_tree = self._table(self.bottom.add('in', 'Referenced by'), cols, widths)
        self.out_tree = self._table(self.bottom.add('out', 'Uses'), cols, widths)
        self.issue_tree = self._table(self.bottom.add('issues', 'Unresolved'), cols, widths)
        page = self.bottom.add('summary', 'Summary')
        from ..widgets.tabs import TextLog
        self.summary = TextLog(page)
        self.summary.pack(fill='both', expand=True, padx=4, pady=4)
        return ws

    def _table(self, page, cols, widths):
        f, t = T.tree(page, cols, widths, height=6, style='Mono.Treeview')
        f.pack(fill='both', expand=True, padx=4, pady=4)
        for kind, col in REF_COLOURS.items():
            t.tag_configure(kind, foreground=col)
        t.tag_configure('missing', foreground=T.BAD)
        t.bind('<Double-1>', lambda e, tt=t: self._open_row(tt))
        return t

    def build_browser(self, parent):
        top = ttk.Frame(parent)
        top.pack(fill='x', padx=6, pady=(6, 0))
        self.type_var = tk.StringVar(value='All types')
        cb = ttk.Combobox(top, values=list(TYPE_FILTERS), textvariable=self.type_var, state='readonly')
        cb.pack(fill='x')
        cb.bind('<<ComboboxSelected>>', lambda e: self.populate())
        self.tree = self.browser_tree(parent, ('refs',), (72,), ('in / out',))
        T.Tooltip(self.tree, 'Search by name, resource id or move id (hex), e.g. 04C150')
        self.tree.bind('<<TreeviewSelect>>', self._browse)
        self.tree.bind('<<TreeviewOpen>>', self._expand)
        self.filter_var.trace_add('write', lambda *_: self._schedule_populate())

    # ------------------------------------------------------------ index build
    def on_root(self):
        self.reg = None
        self.sel = None
        self.rebuild()

    def rebuild(self):
        root = self.app.root_data
        if root is None or self._building:
            return
        self._building = True
        self.build_label.configure(text='indexing…')
        path = root.root
        state = {'msg': 'indexing…'}

        def work():
            try:
                reg = regmod.build(DataRoot(path), progress=lambda m, f: state.update(msg=f'indexing {int(f * 100)}%'))
            except Exception as exc:  # noqa: BLE001
                reg = exc
            state['done'] = reg

        def poll():
            if 'done' in state:
                self._building = False
                res = state['done']
                if isinstance(res, Exception):
                    self.build_label.configure(text=f'index failed: {res}')
                    return
                self.reg = res
                self.app.registry = res
                s = res.stats()
                self.build_label.configure(text=f'{s["resources"]:,} resources · {s["refs"]:,} refs · '
                                                f'{s["unresolved"]} unresolved')
                self.populate()
                self._fill_summary()
                self._fill_issues()
                if self.sel:
                    self.select(self.sel, push=False)
                if hasattr(self.app, 'on_registry_ready'):
                    self.app.on_registry_ready()
                return
            self.build_label.configure(text=state['msg'])
            self.frame.after(150, poll)

        threading.Thread(target=work, daemon=True).start()
        self.frame.after(150, poll)

    # ------------------------------------------------------------ browser
    def _schedule_populate(self):
        if getattr(self, '_pop_job', None):
            self.frame.after_cancel(self._pop_job)
        self._pop_job = self.frame.after(250, self.populate)

    def _counts(self, path):
        return f'{len(self.reg.used_by(path))} / {len(self.reg.uses(path))}'

    def populate(self):
        t = self.tree
        t.delete(*t.get_children())
        if not self.reg:
            t.insert('', 'end', 'msg', text='Index not built yet…')
            return
        text = self.filter_var.get().strip()
        exts = TYPE_FILTERS.get(self.type_var.get())
        if text or exts:
            for r in self.reg.search(text, exts, limit=400):
                t.insert('', 'end', r.path, text=r.short,
                         values=(self._counts(r.path),))
            return
        for top in self.reg.roots():
            iid = t.insert('', 'end', top, text=top, values=('',))
            if self.reg.children(top):
                t.insert(iid, 'end', top + '|…', text='…')

    def _expand(self, _e=None):
        iid = self.tree.focus()
        kids = self.tree.get_children(iid)
        if len(kids) == 1 and kids[0].endswith('|…'):
            self.tree.delete(kids[0])
            for p in self.reg.children(iid):
                r = self.reg.resources[p]
                self.tree.insert(iid, 'end', p, text=r.short, values=(self._counts(p),))
                if self.reg.children(p):
                    self.tree.insert(p, 'end', p + '|…', text='…')

    def _browse(self, _e=None):
        sel = self.tree.selection()
        if sel and self.reg and sel[0] in self.reg.resources:
            self.select(sel[0])

    # ------------------------------------------------------------ selection
    def select(self, path, push=True, move_id=None):
        if not self.reg or path not in self.reg.resources:
            self.app.status.set(f'{path}: not in the index (rebuild after Save).')
            return
        if push and self.sel and self.sel != path:
            self.history.append(self.sel)
        self.sel = path
        self.move_filter = move_id
        self.draw()
        self._fill_tables()
        self.refresh_inspector()

    def back(self):
        if self.history:
            self.select(self.history.pop(), push=False)

    def _in_refs(self):
        return self.reg.used_by(self.sel, self.move_filter)

    def _out_refs(self):
        refs = self.reg.uses(self.sel)
        if self.move_filter is not None and self.sel in self.reg.moves:
            idx = next((i for i, m in self.reg.moves[self.sel] if m == self.move_filter), None)
            tag = f'move {idx} (' if idx is not None else None
            refs = [r for r in refs if tag is None or r.src_detail.startswith(tag)]
        return refs

    # ------------------------------------------------------------ graph
    def draw(self):
        c = self.canvas
        c.delete('all')
        self._cards = []
        w = max(c.winfo_width(), 600)
        if not self.reg or not self.sel:
            c.create_text(w / 2, 60, text='Search or pick a resource in the left dock.' if self.reg else
                          'Building the resource index…', fill=T.MUTED, font=T.UI_FONT)
            return
        k = self.k
        margin = 16 * k
        cw = min(CARD_W * k, (w - 2 * margin - 2 * 40 * k) / 3)    # three columns + arrow lanes
        ch, gap = CARD_H * k, GAP * k
        xl, xc, xr = margin, w / 2 - cw / 2, w - cw - margin

        def grouped(refs, attr):
            g = defaultdict(list)
            for r in refs:
                g[getattr(r, attr)].append(r)
            return sorted(g.items(), key=lambda kv: (kv[1][0].kind, str(kv[0])))

        left = grouped(self._in_refs(), 'src')
        right = grouped(self._out_refs(), 'dst')
        rows = max(len(left), len(right), 1)
        total = rows * (ch + gap) + 60 * k
        top = 40 * k
        c.create_text(xl, 16 * k, anchor='w', text=f'REFERENCED BY ({len(left)})', fill=T.MUTED, font=T.UI_BOLD)
        c.create_text(xr, 16 * k, anchor='w', text=f'USES ({len(right)})', fill=T.MUTED, font=T.UI_BOLD)
        cy = top                     # selected card stays at the top, lists grow downwards
        sel = self.reg.resources[self.sel]
        self._card(xc, cy, cw, ch * 1.3, sel.short, f'{split(sel.container)[-1]}', T.ACCENT,
                   sub2=self._move_label(), hot=True)
        for i, (src, refs) in enumerate(left):
            y = top + i * (ch + gap)
            col = REF_COLOURS.get(refs[0].kind, T.FG)
            r = self.reg.resources.get(src)
            self._card(xl, y, cw, ch, r.short if r else src, f'{refs[0].label} ×{len(refs)}', col, target=src)
            c.create_line(xl + cw, y + ch / 2, xc, cy + ch * 0.65, fill=col, arrow='last', smooth=True)
        for i, (dst, refs) in enumerate(right):
            y = top + i * (ch + gap)
            col = REF_COLOURS.get(refs[0].kind, T.FG) if dst else T.BAD
            r = self.reg.resources.get(dst) if dst else None
            name = r.short if r else '⚠ unresolved'
            self._card(xr, y, cw, ch, name, f'{refs[0].label} ×{len(refs)}', col, target=dst)
            c.create_line(xc + cw, cy + ch * 0.65, xr, y + ch / 2, fill=col, arrow='last', smooth=True)
        c.configure(scrollregion=(0, 0, w, max(total, cy + ch * 2)))

    def _move_label(self):
        if self.move_filter is None:
            n = len(self.reg.moves.get(self.sel, ()))
            return f'{n} moves (all)' if n else ''
        return f'move 0x{self.move_filter:06X} only'

    def _card(self, x, y, w, h, title, sub, colour, sub2='', target=None, hot=False):
        c = self.canvas
        c.create_rectangle(x, y, x + w, y + h, fill='#22364D' if hot else T.PANEL2, outline=colour,
                           width=2 if hot else 1)
        c.create_rectangle(x, y, x + 4, y + h, fill=colour, outline='')
        n = max(10, int(w / (7.5 * self.k)))
        c.create_text(x + 10, y + 6, anchor='nw', text=_clip(title, n), fill=T.FG, font=T.UI_BOLD)
        c.create_text(x + 10, y + h - 6, anchor='sw', text=_clip(sub, n + 4), fill=T.MUTED, font=T.MONO_SMALL)
        if sub2:
            c.create_text(x + w - 8, y + h - 6, anchor='se', text=sub2, fill=T.WARN, font=T.MONO_SMALL)
        if target:
            self._cards.append(((x, y, x + w, y + h), target))

    def _click(self, e):
        x, y = self.canvas.canvasx(e.x), self.canvas.canvasy(e.y)
        for (x0, y0, x1, y1), target in self._cards:
            if x0 <= x <= x1 and y0 <= y <= y1:
                self.select(target)
                return

    # ------------------------------------------------------------ docks
    def _fill_tables(self):
        for t, refs, far in ((self.in_tree, self._in_refs(), 'src'), (self.out_tree, self._out_refs(), 'dst')):
            t.delete(*t.get_children())
            for i, r in enumerate(refs):
                p = getattr(r, far)
                t.insert('', 'end', str(i), values=(_short(p) if p else '⚠ unresolved', r.label, r.src_detail,
                                                     r.dst_detail, r.evidence),
                         tags=(r.kind if p else 'missing',))
            t._refs = refs
            t._far = far
        self.bottom.set_title('in', f'Referenced by ({len(self.in_tree._refs)})')
        self.bottom.set_title('out', f'Uses ({len(self.out_tree._refs)})')

    def _fill_issues(self):
        t = self.issue_tree
        t.delete(*t.get_children())
        refs = self.reg.unresolved
        for i, r in enumerate(refs[:2000]):
            t.insert('', 'end', str(i), values=(_short(r.src), r.label, r.src_detail, r.dst_detail, r.evidence),
                     tags=('missing',))
        t._refs, t._far = refs, 'src'
        self.bottom.set_title('issues', f'Unresolved ({len(refs)})')

    def _fill_summary(self):
        s = self.reg.stats()
        lines = [(f'{s["resources"]:,} resources in {len(self.reg.roots())} top-level archives, '
                  f'{s["refs"]:,} references, {s["unresolved"]} unresolved.', 'good' if not s['unresolved'] else 'warn'),
                 '']
        for kind, n in sorted(s['by_kind'].items(), key=lambda kv: -kv[1]):
            lines.append(f'  {regmod.KIND_LABELS.get(kind, kind):24} {n:7,}   evidence: {regmod.EVIDENCE[kind]}')
        lines += ['', ('Resolution: ids are looked up in the source\'s group (one character\'s archives, or the '
                       'top-level file), then in efc/*.aar.', 'muted'),
                  ('The index reflects the files on disk; it rebuilds after Save.', 'muted')]
        if self.reg.errors:
            lines += [''] + [(e, 'bad') for e in self.reg.errors[:50]]
        self.summary.set_lines(lines)

    def _open_row(self, tree):
        sel = tree.selection()
        if not sel or not hasattr(tree, '_refs'):
            return
        r = tree._refs[int(sel[0])]
        target = getattr(r, tree._far)
        if target:
            self.select(target, move_id=r.dst_move if tree._far == 'dst' else None)

    # ------------------------------------------------------------ inspector
    def refresh_inspector(self):
        ins = self.inspector
        ins.clear()
        if not self.reg or not self.sel:
            ins.section('Resource registry')
            ins.text('Every archive member is indexed with the references between them: textures, images, '
                     'spawned effects, pursuer tables, collision descriptors, shot records and tile images. '
                     'Pick a resource to see what uses it and what it uses.')
            return
        r = self.reg.resources[self.sel]
        ins.section('Resource', note=r.path)
        ins.value('Type', f'0x{r.type_byte:02X}  ({r.ext or "?"})')
        ins.value('Resource id', f'0x{r.rid:06X}')
        ins.value('Size', f'{r.size:,} bytes' + ('  (DSCP)' if r.compressed else ''))
        ins.value('Group', r.group, tip='Ids resolve inside this group first, then in efc/*.aar')
        ins.buttons(('Open in workspace', lambda: self.app.open_resource(self.sel, self.move_filter),
                     'Accent.TButton'))
        moves = self.reg.moves.get(self.sel)
        if moves:
            ins.section('Moves', note='Filter references to one move')
            users = defaultdict(int)
            for x in self.reg.used_by(self.sel):
                users[x.dst_move] += 1
            labels = ['All moves'] + [f'{i}: 0x{m:06X}' + (f'  ({users[m]} users)' if users[m] else '')
                                      for i, m in moves]
            self._mv = tk.StringVar(value='All moves' if self.move_filter is None else
                                    next((l for l in labels[1:] if f'0x{self.move_filter:06X}' in l), 'All moves'))
            ins.combo('Move', self._mv, labels, on_change=self._pick_move, width=26)
        kinds = defaultdict(int)
        for x in self._in_refs():
            kinds[('in', x.kind)] += 1
        for x in self._out_refs():
            kinds[('out', x.kind)] += 1
        if kinds:
            ins.section('References')
            for (d, kind), n in sorted(kinds.items()):
                ins.value(('← ' if d == 'in' else '→ ') + regmod.KIND_LABELS.get(kind, kind), str(n),
                          colour=REF_COLOURS.get(kind))
            ins.section('Evidence')
            for kind in sorted({k for _, k in kinds}):
                ins.evidence(regmod.KIND_LABELS.get(kind, kind), regmod.EVIDENCE[kind])

    def _pick_move(self):
        v = self._mv.get()
        mid = None if v == 'All moves' else int(v.split('0x')[1].split()[0], 16)
        self.select(self.sel, push=False, move_id=mid)


def _clip(s, n):
    return s if len(s) <= n else s[:n - 1] + '…'


def _short(path):
    parts = split(path)
    return parts[-1].rsplit('/', 1)[-1] + (f'  ({parts[-2].rsplit("/", 1)[-1]})' if len(parts) > 1 else '')
