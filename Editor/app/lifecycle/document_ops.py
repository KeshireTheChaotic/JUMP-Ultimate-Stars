"""R08 original EditorApp document path, source-preserving transfer."""
from __future__ import annotations
import threading
from pathlib import Path
from tkinter import filedialog,messagebox
from app.history import History
from jus_package import package
from jus_package.project import split

def update_dirty(editor):
    files = editor.root_data.dirty_files() if editor.root_data else []
    parts = []
    if editor.almt_dirty:
        parts.append('● move table not applied')
    if editor.sprite_dirty:
        parts.append('● sprite not applied')
    for w in getattr(editor, 'suite', {}).values():
        if w.dirty:
            parts.append(f'● {w.title.lower()} not applied')
    if files:
        parts.append(f'unsaved: {", ".join(files)}')
    editor.dirty_label.configure(text='   '.join(parts))
    editor._update_undo_label()


def confirm_discard(editor):
    if not (editor.almt_dirty or editor.sprite_dirty):
        return True
    ans = messagebox.askyesnocancel('Unapplied edits',
                                    'Apply the current move-table / sprite edits before switching?')
    if ans is None:
        return False
    if ans:
        if editor.almt_dirty:
            editor.apply_almt()
        if editor.sprite_dirty:
            editor.apply_sprite()
    else:
        editor.almt_dirty = editor.sprite_dirty = False
    return True


def apply_current(editor):
    if editor.workspace in editor.suite:
        editor.suite[editor.workspace].apply()
        return
    if editor.workspace == 'sprite' or (editor.sprite_dirty and not editor.almt_dirty):
        editor.apply_sprite()
    if editor.almt_dirty or editor.workspace == 'animation':
        editor.apply_almt()


def save(editor, in_place):
    if not editor.root_data or not editor.confirm_discard():
        return
    # The Roster reuses Koma alongside the ALMT/Sprite editors. Save must
    # never omit dirty Koma (or other suite) edits merely because another
    # editor subview is currently visible.
    for suite in editor.suite.values():
        if suite.dirty:
            if not messagebox.askokcancel(
                'Unapplied workspace edits',
                f'{suite.title} has unapplied edits. Apply them before Save?'):
                return
            suite.apply()
            if suite.dirty:
                return
    if not editor.root_data.dirty_files():
        messagebox.showinfo('Save', 'Nothing to save. Apply edits first (Ctrl+Enter).')
        return
    if in_place:
        if not messagebox.askyesno('Save in place',
                                   'Overwrite the archives in the data root?\n'
                                   'The first overwrite of each file keeps a .orig backup.\n\n'
                                   + '\n'.join(editor.root_data.dirty_files())):
            return
        out = None
    else:
        out = filedialog.askdirectory(title='Output root (archives are written at their data-relative paths)')
        if not out:
            return
    try:
        written = editor.root_data.save(out)
    except (OSError, ValueError) as exc:
        messagebox.showerror('Save failed', f'No edits have been marked saved.\n{exc}')
        editor.update_dirty()
        return
    editor.update_dirty()
    editor.status.set(f'Saved {len(written)} archive file(s).')
    messagebox.showinfo('Save', 'Wrote:\n' + '\n'.join(str(w) for w in written))


def revert(editor):
    if not editor.root_data:
        return
    if (editor.root_data.dirty_files() or editor.almt_dirty or editor.sprite_dirty) and \
            not messagebox.askyesno('Revert', 'Discard all unsaved edits?'):
        return
    editor.almt_dirty = editor.sprite_dirty = False
    editor.history = History()
    editor.open_root(str(editor.root_data.root))


def export_package(editor):
    if not editor.root_data:
        return
    sel = editor.res_tree.focus()
    cid = None
    if sel.startswith('char:'):
        cid = sel[5:]
    elif '|@' in sel:
        cid = sel.split('|@')[1]
    choice = None
    if cid:
        choice = messagebox.askyesnocancel(
            'Export package', f'Export the full character package for {cid}?\n\n'
                              'Yes = whole character (animations, images, tables, window) plus '
                              'every effect its moves spawn (incl. shared efc/*.aar), with '
                              'effects.json linking spawns → effect moves → sprites\n'
                              'No = only the selected archive')
        if choice is None:
            return
    if not cid and not editor.container:
        messagebox.showinfo('Export', 'Select a character or archive first.')
        return
    out = filedialog.askdirectory(title='Empty folder for the package')
    if not out:
        return
    out = Path(out)
    if any(out.iterdir()):
        out = out / (cid if choice else Path(split(editor.container)[-1]).stem)

    def work():
        if cid and choice:
            return package.export_character(editor.root_data, cid, out)
        return package.export_package(editor.root_data, [editor.container], out,
                                      name=Path(split(editor.container)[-1]).stem,
                                      kind='effect' if editor.container.startswith('efc/') else 'archive')
    editor.run_task('Exporting package…', work, lambda p: messagebox.showinfo('Export', f'Package written to\n{p}'))


def import_package(editor):
    if not editor.root_data or not editor.confirm_discard():
        return
    p = filedialog.askdirectory(title='Package folder (contains package.json)')
    if not p:
        zp = filedialog.askopenfilename(title='…or a package .zip', filetypes=[('Package zip', '*.zip')])
        if not zp:
            return
        p = zp

    def work():
        return package.import_package(Path(p), editor.root_data, write=False)

    def done(rep):
        editor.update_dirty()
        if editor.container:
            editor.select_container(editor.container, None if len(editor.scope) == 1 else editor._char_of(editor.container))
        msg = rep.summary()
        if rep.changed_members or rep.added:
            msg += '\n\n' + '\n'.join((rep.changed_members + rep.added)[:30])
        if rep.warnings:
            msg += '\n\nWarnings:\n' + '\n'.join(rep.warnings[:20])
        msg += '\n\nUse Save to write the rebuilt archives.'
        messagebox.showinfo('Import package', msg)
    editor.run_task('Importing package…', work, done)


def run_task(editor, label, work, done):
    editor.status.set(label)
    editor.config(cursor='watch')
    result = {}

    def runner():
        try:
            result['value'] = work()
        except Exception as exc:  # noqa: BLE001
            result['error'] = exc

    th = threading.Thread(target=runner, daemon=True)
    th.start()

    def poll():
        if th.is_alive():
            editor.after(100, poll)
            return
        editor.config(cursor='')
        if 'error' in result:
            editor.status.set(f'{label} failed')
            messagebox.showerror('Error', str(result['error']))
        else:
            editor.status.set(label.rstrip('…') + ' done')
            done(result['value'])
    poll()

