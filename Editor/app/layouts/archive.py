"""Audited Tk workspace layout extraction: _build_archive (R08)."""
from tkinter import ttk
from app import theme as T
from app.widgets import Inspector

def build_archive(editor, host, k):
    ws = ttk.PanedWindow(host, orient='horizontal')
    editor._amid = ws
    left = T.Panel(ws, 'Members')
    ws.add(left, weight=1)
    editor.archive_info = ttk.Label(left.header, text='', style='Toolbar.TLabel')
    editor.archive_info.pack(side='left', padx=8)
    af, editor.member_tree = T.tree(left.body, ('name', 'kind', 'id', 'attributes', 'hash', 'size', 'DSCP'),
                                  (240, 60, 92, 92, 90, 80, 50), height=30, style='Mono.Treeview')
    af.pack(fill='both', expand=True, padx=4, pady=4)
    editor.member_tree.bind('<<TreeviewSelect>>', lambda e: editor._member_details())
    right = T.Panel(ws, 'Details')
    ws.add(right, weight=0)
    right.configure(width=int(330 * k))
    editor.member_details = Inspector(right.body)
    editor.member_details.pack(fill='both', expand=True)
    return ws
