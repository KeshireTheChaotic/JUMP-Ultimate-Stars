"""Original-source UI coordination extracted from EditorApp — R08 Phase 10.
Source/engine unknowns remain unknown; do not infer native runtime physics.
"""
from __future__ import annotations

from jus_formats import almt
from jus_package import effectlinks,spawns
from jus_package.project import join,split


def _amt_tables(editor, paths):
    out = []
    for path in paths:
        try:
            arc = editor.root_data.archive(path)
            for e in arc.entries:
                if e.ext != '.amt':
                    continue
                rp = join(path, e.name)
                table = editor.almt if (rp == editor.almt_path and editor.almt) else almt.parse(e.payload())
                out.append((rp, table))
        except (KeyError, ValueError, OSError):
            continue
    return out


def _load_effect_catalog(editor):
    """Move-id → (move, node names, path) over the character scope, then efc/*.aar."""
    editor._effect_moves = {}
    if not editor.root_data:
        return
    if editor._common_tables is None:
        editor._common_tables = editor._amt_tables(editor.root_data.effect_archives())
    # The open table is always the live (possibly edited) object.
    common = [(p, editor.almt if (p == editor.almt_path and editor.almt) else t) for p, t in editor._common_tables]
    spawns.build_catalog(editor._amt_tables(editor.scope) + common, editor._effect_moves)


def _refresh_pursuer_links(editor):
    editor._pursuer_events = ()
    editor._effect_table_error = ''
    if editor.move is None or editor.root_data is None or not editor.container:
        return
    char = editor._char_of(editor.container)
    if char:
        path = join('chr/ChrBin.aar', f'chr/effect/{char}.bin')
        try:
            if editor.root_data.exists(path):
                recs = effectlinks.parse_effect_records(editor.root_data.read(path))
                editor._pursuer_events = effectlinks.pursuer_events(editor.move, editor.almt.node_names, recs)
        except (ValueError, OSError, KeyError) as exc:
            editor._effect_table_error = str(exc)


def open_effect_move(editor, eid, path, *, hx):
    """Jump to an effect's own move table (like opening a sub-timeline)."""
    parts = split(path)
    container, name = join(*parts[:-1]), parts[-1]
    if not editor.confirm_discard():
        return
    if container != editor.container:
        cid = editor._char_of(container) if container.startswith('chr/') else None
        editor.select_container(container, cid)
    if editor.almt_path != path:
        editor.almt_combo.set(name)
        editor.load_almt(name)
    if editor.almt:
        idx = next((i for i, m in enumerate(editor.almt.moves) if m.id == eid), None)
        if idx is not None:
            editor.move_filter.set('')
            editor.populate_moves(select=idx)
    editor.status.set(f'Opened effect {hx(eid)} in {path}')
