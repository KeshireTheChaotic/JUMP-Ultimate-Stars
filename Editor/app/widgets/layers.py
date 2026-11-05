"""Layer list (Godot Scene dock / Unity Hierarchy / Unreal Outliner, flattened).

Rows carry a visibility eye, name, kind and a status.  Read-only or
unavailable layers are drawn muted and cannot be made visible when
``available`` is False (Level v1 policy: collision/gimmicks read-only).
"""
from __future__ import annotations

from tkinter import ttk

from .. import theme as T


class LayerList(ttk.Frame):
    def __init__(self, parent, *, on_select=None, on_toggle=None, height=8, **kw):
        super().__init__(parent, **kw)
        k = T.ui_scale(self)
        self.tree = ttk.Treeview(self, columns=('eye', 'kind', 'status'), show='tree headings',
                                 selectmode='browse', height=height)
        self.tree.heading('#0', text='Layer')
        self.tree.heading('eye', text='👁')
        self.tree.heading('kind', text='Kind')
        self.tree.heading('status', text='Status')
        self.tree.column('#0', width=int(150 * k), stretch=True)
        self.tree.column('eye', width=int(28 * k), anchor='center', stretch=False)
        self.tree.column('kind', width=int(70 * k), stretch=False)
        self.tree.column('status', width=int(110 * k), stretch=False)
        self.tree.tag_configure('off', foreground=T.MUTED)
        self.tree.tag_configure('readonly', foreground=T.READONLY)
        self.tree.tag_configure('unavailable', foreground='#6A727B')
        self.tree.tag_configure('group', foreground=T.ACCENT)
        sb = ttk.Scrollbar(self, command=self.tree.yview)
        self.tree.configure(yscrollcommand=sb.set)
        self.tree.pack(side='left', fill='both', expand=True)
        sb.pack(side='right', fill='y')
        self.on_select = on_select
        self.on_toggle = on_toggle
        self.layers: dict[str, dict] = {}
        self.tree.bind('<<TreeviewSelect>>', self._select)
        self.tree.bind('<Button-1>', self._click, add='+')

    def set_layers(self, layers: list[dict], keep_selection=True):
        """Each layer: id, name, kind, visible, status, available(=True), readonly(=False), parent."""
        sel = self.selected() if keep_selection else None
        self.tree.delete(*self.tree.get_children())
        self.layers = {str(l['id']): l for l in layers}
        for l in layers:
            iid = str(l['id'])
            tags = []
            if l.get('kind') == 'group':
                tags.append('group')
            elif not l.get('available', True):
                tags.append('unavailable')
            elif l.get('readonly'):
                tags.append('readonly')
            elif not l.get('visible', True):
                tags.append('off')
            eye = '' if l.get('kind') == 'group' else ('●' if l.get('visible') and l.get('available', True) else '○')
            self.tree.insert(str(l['parent']) if l.get('parent') is not None else '', 'end', iid,
                             text=l['name'], values=(eye, l.get('kind', ''), l.get('status', '')),
                             tags=tags, open=True)
        if sel and self.tree.exists(sel):
            self.tree.selection_set(sel)

    def selected(self):
        s = self.tree.selection()
        return s[0] if s else None

    def _select(self, _e=None):
        iid = self.selected()
        if iid and self.on_select:
            self.on_select(self.layers.get(iid))

    def _click(self, e):
        if self.tree.identify_column(e.x) != '#1':
            return None
        iid = self.tree.identify_row(e.y)
        l = self.layers.get(iid)
        if not l or l.get('kind') == 'group' or not l.get('available', True):
            return None
        l['visible'] = not l.get('visible', True)
        self.tree.set(iid, 'eye', '●' if l['visible'] else '○')
        self.tree.item(iid, tags=('readonly',) if l.get('readonly') else (() if l['visible'] else ('off',)))
        if self.on_toggle:
            self.on_toggle(l)
        return 'break'
