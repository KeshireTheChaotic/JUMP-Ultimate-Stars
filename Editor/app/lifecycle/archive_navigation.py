"""Source-preserving original EditorApp workflows (R08 Phase 9).
Actual ALMT/BIN authority and Tk selection behavior are unchanged.
"""
from __future__ import annotations

from tkinter import messagebox
from jus_formats import alar
from jus_package.project import split


def populate_archive(editor, *, hx):
    t = editor.member_tree
    t.delete(*t.get_children())
    if not editor.container:
        return
    arc = editor.root_data.archive(editor.container)
    editor.archive_info.configure(text=f'{split(editor.container)[-1]}   ALAR v{arc.version} · flags '
                                     f'{hx(arc.flags, 2)} · {len(arc.entries)} members')
    kinds = {b'ALMT': 'ALMT', b'DSTX': 'DSTX', b'DSIG': 'DSIG', b'ALOD': 'ALOD', b'ALAR': 'ALAR',
             b'ALTM': 'ALTM'}
    for k, e in enumerate(arc.entries):
        payload_kind = 'packed' if e.compressed else kinds.get(e.data[:4], 'data')
        ok = '' if e.name_hash is None else ('✓' if arc.expected_hash(e) == e.name_hash else '✗')
        t.insert('', 'end', str(k), values=(e.name, payload_kind, hx(e.id), hx(e.attributes),
                                            f'{(e.name_hash or 0):04X} {ok}', len(e.data),
                                            'yes' if e.compressed else ''))
    editor._member_details()


def _selected_member(editor):
    sel = editor.member_tree.focus()
    if not sel or not editor.container or getattr(editor, '_table', None):
        return None
    return editor.root_data.archive(editor.container).entries[int(sel)]


def _table_details(editor, ins, path, tv):
    ins.section(tv.title, note=path)
    ins.value('Records', str(len(tv.records)))
    ins.value('Read by', tv.source)
    if tv.note:
        ins.text(tv.note)
    sel = editor.member_tree.focus()
    if sel.startswith('t') and sel[1:].isdigit():
        r = tv.records[int(sel[1:])]
        ins.section('Record', note=r.label)
        for k, v in r.fields:
            ins.value(k, v)


def rebuild_check(editor):
    if not editor.container:
        return
    arc = editor.root_data.archive(editor.container)
    built = arc.build()
    again = alar.Archive.parse(built)
    same = [a.data == b.data for a, b in zip(arc.entries, again.entries)]
    messagebox.showinfo('Rebuild check', f'Rebuilt {len(built):,} bytes; {sum(same)}/{len(same)} members '
                                         're-read identically.')
