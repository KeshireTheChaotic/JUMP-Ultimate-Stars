"""R08 original EditorApp resources path, source-preserving transfer."""
from __future__ import annotations
import struct
from pathlib import Path
import tkinter as tk
from tkinter import filedialog,messagebox
from jus_formats import gametables,almt,dsig as dsigmod,dstx as dstxmod
from jus_package import sounds
from jus_package.audio_preview import AudioPreview
from jus_package.project import DataRoot,join,split
from jus_package.resources import ResourceIndex

def choose_root(editor):
    d = filedialog.askdirectory(title='Select the JUS data root (folder containing chr/, efc/, …)')
    if d:
        editor.open_root(d)


def open_root(editor, path, quiet=False):
    editor._stop_play()
    if editor._audio:
        editor._audio.close()
        editor._audio = None
    try:
        editor.root_data = DataRoot(path)
        editor.root_data.characters()
        editor._common_tables = None
        editor._ai_profiles = {}
        editor._move_xrefs = None
        editor._move_xrefs_error = ''
    except Exception as exc:  # noqa: BLE001
        editor.root_data = None
        if not quiet:
            messagebox.showerror('Data root', f'Cannot open {path}:\n{exc}')
        editor.status.set(f'No data root loaded ({exc}). Use File › Open data root…')
        return
    editor._sounds =sounds.SoundResolver(editor.root_data.root)
    editor._audio = AudioPreview(editor.root_data.root)
    editor._sounds.set_characters([c for c in editor.root_data.characters() if '_b_' in c])
    editor.status.set('Select a character or archive in the Project panel.')
    editor.root_label.configure(text=str(path))
    editor.container = None
    editor._table = None
    editor.populate_tree()
    for w in editor.suite.values():
        w.on_root()
    editor.roster_browser.on_root()
    editor.update_dirty()


def populate_tree(editor):
    t = editor.res_tree
    t.delete(*t.get_children())
    if not editor.root_data:
        return
    flt = editor.find_var.get().strip().lower()
    chars = t.insert('', 'end', 'chars', text='Characters', open=True)
    for cid in editor.root_data.characters():
        if flt and flt not in cid:
            continue
        node = t.insert(chars, 'end', f'char:{cid}', text=f'👤 {cid}')
        t.insert(node, 'end', f'lazy:{cid}', text='…')
    effs = t.insert('', 'end', 'effects', text='Effect archives', open=True)
    for p in editor.root_data.effect_archives():
        if flt and flt not in p.lower():
            continue
        t.insert(effs, 'end', f'arc:{p}', text=f'✦ {Path(p).name}')
    other = t.insert('', 'end', 'other', text='Other archives', open=False)
    for p in ('battle/ChrWin.aar', 'chr/ChrBin.aar'):
        if (editor.root_data.root / p).is_file():
            t.insert(other, 'end', f'arc:{p}', text=f'▣ {p}')
    tables = t.insert('', 'end', 'tables', text='Game tables', open=False)
    for p in gametables.LOOSE_TABLES:
        if (editor.root_data.root / p).is_file() and (not flt or flt in p.lower()):
            t.insert(tables, 'end', f'tbl:{p}', text=f'▤ {p}')


def on_resource_open(editor, _e=None):
    sel = editor.res_tree.focus()
    if sel.startswith('char:'):
        cid = sel[5:]
        kids = editor.res_tree.get_children(sel)
        if kids and kids[0].startswith('lazy:'):
            editor.res_tree.delete(*kids)
            icons = {'animation': '🎞', 'image': '🖼', 'window': '▢'}
            for s in editor.root_data.character_sources(cid):
                if s['role'] == 'gameplay-table':
                    continue
                role = s['role'].split('-')[0]
                label = f'{icons.get(role, "•")} {split(s["path"])[-1]}'
                editor.res_tree.insert(sel, 'end', f'arc:{s["path"]}|@{cid}', text=label)


def on_resource_select(editor, _e=None):
    sel = editor.res_tree.focus()
    if sel.startswith('char:'):
        editor.res_tree.item(sel, open=True)
        editor.on_resource_open()
        kids = editor.res_tree.get_children(sel)
        if kids:
            editor.res_tree.selection_set(kids[0])
            editor.res_tree.focus(kids[0])
        return
    if sel.startswith('tbl:'):
        editor.open_table(sel[4:])
        return
    if not sel.startswith('arc:'):
        return
    if not editor.confirm_discard():
        return
    rest = sel[4:]
    cid = None
    if '|@' in rest:
        rest, cid = rest.split('|@')
    editor.select_container(rest, cid)


def _project_context(editor, e):
    item = editor.res_tree.identify_row(e.y)
    if not item:
        return
    editor.res_tree.selection_set(item)
    editor.res_tree.focus(item)
    menu = tk.Menu(editor, tearoff=False)
    menu.add_command(label='Export package…', command=editor.export_package)
    menu.add_command(label='Import package…', command=editor.import_package)
    menu.tk_popup(e.x_root, e.y_root)


def open_table(editor, path):
    """Show a loose game table (bin/*.bin) record by record in the Archive workspace."""
    try:
        tv = gametables.view(path, editor.root_data.read(path))
    except (ValueError, OSError, struct.error) as exc:
        messagebox.showerror('Game table', f'{path}:\n{exc}')
        return
    editor._table = (path, tv)
    t = editor.member_tree
    t.delete(*t.get_children())
    for i, r in enumerate(tv.records):
        t.insert('', 'end', f't{i}', values=(r.label, 'record', '', '', '', '', ''))
    editor.archive_info.configure(text=f'{path}   {tv.title} · {len(tv.records)} records')
    editor.status.set(f'{path}: {tv.title}, {len(tv.records)} records (read-only)')
    editor.show_workspace('archive')
    editor._member_details()


def select_container(editor, path, char_id=None):
    editor._table = None
    editor.container = path
    if char_id:
        editor.scope = [s['path'] for s in editor.root_data.character_sources(char_id)
                      if s['role'] in ('animation-archive', 'image-archive')]
        if path not in editor.scope:
            editor.scope.insert(0, path)
    else:
        editor.scope = [path]
    try:
        # Common effect archives come last so character resources win on id clashes.
        common = [p for p in editor.root_data.effect_archives() if p not in editor.scope]
        editor.index = ResourceIndex(editor.root_data, editor.scope + common)
        arc = editor.root_data.archive(path)
    except Exception as exc:  # noqa: BLE001
        messagebox.showerror('Archive', f'{path}:\n{exc}')
        return
    editor._frame_cache.clear()
    editor._need_frame = True
    editor.status.set(f'{path}: ALAR v{arc.version}, {len(arc.entries)} members')
    editor.title(f'JUS Editor — {path}')
    editor.populate_archive()
    amts = [e.name for e in arc.entries if e.ext == '.amt']
    editor.almt_combo['values'] = amts
    if amts:
        editor.almt_combo.set(amts[0])
        editor.load_almt(amts[0])
    else:
        editor.almt_combo.set('')
        editor.almt = None
        editor.almt_path = None
        editor.populate_moves()
    sprites = []
    for c in editor.scope:
        try:
            for e in editor.root_data.archive(c).entries:
                if e.ext == '.dtx':
                    sprites.append(join(c, e.name))
        except Exception:  # noqa: BLE001
            pass
    sprites.sort(key=lambda p: (not p.startswith(path), p))
    editor.sprite_combo['values'] = [editor._short(p) for p in sprites]
    editor._sprite_paths = {editor._short(p): p for p in sprites}
    if sprites:
        editor.sprite_combo.set(editor._short(sprites[0]))
        editor.load_sprite(editor._short(sprites[0]), force=True)
    else:
        editor.sprite_combo.set('')
        editor.sprite_d = editor.sprite_g = None
        editor.populate_frames()
    if not amts and sprites and editor.workspace == 'animation':
        editor.show_workspace('sprite')


def load_almt(editor, name):
    if not editor.container or not name:
        return
    editor.almt_path = join(editor.container, name)
    try:
        editor.almt = almt.parse(editor.root_data.read(editor.almt_path))
    except Exception as exc:  # noqa: BLE001
        messagebox.showerror('ALMT', str(exc))
        editor.almt = None
    editor.almt_dirty = False
    if editor.container.startswith('efc/'):
        editor._common_tables = None      # re-read the common effects after an edit/apply
    editor._load_effect_catalog()
    editor.populate_moves()
    editor.update_dirty()


def load_sprite(editor, label, force=False):
    if not label:
        return
    path = editor._sprite_paths.get(label)
    if not path:
        return
    if editor.sprite_dirty and not force and not editor.confirm_discard():
        return
    editor._stop_flipbook()
    editor.sprite_path = path
    editor.sprite_dirty = False
    editor.piece_i = None
    try:
        editor.sprite_d = dstxmod.parse(editor.root_data.read(path))
        entry = editor.root_data.entry(path)
        editor.sprite_g = None
        editor.sprite_g_path = None
        if editor.sprite_d.embedded:
            editor.sprite_g = dsigmod.parse(editor.sprite_d.embedded)
        else:
            ref = editor.index.sprite_ref(entry.resource_id) if editor.index else None
            if ref and ref.dsig_path:
                editor.sprite_g_path = ref.dsig_path
            else:
                stem = split(path)[-1][:-4]
                for c in editor.scope:
                    for cand in (stem.rstrip('_') + '.dig', stem + '.dig'):
                        if editor.root_data.exists(join(c, cand)):
                            editor.sprite_g_path = join(c, cand)
                            break
                    if editor.sprite_g_path:
                        break
            if editor.sprite_g_path:
                editor.sprite_g = dsigmod.parse(editor.root_data.read(editor.sprite_g_path))
    except Exception as exc:  # noqa: BLE001
        messagebox.showerror('Sprite', f'{path}:\n{exc}')
        editor.sprite_d = editor.sprite_g = None
    editor.populate_frames()
    editor.update_dirty()
    editor._need_sframe = True
    if editor.workspace == 'sprite':
        editor.after(40, editor._frame_sprite_if_needed)

