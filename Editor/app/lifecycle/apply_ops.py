"""R08 original EditorApp apply path, source-preserving transfer."""
from __future__ import annotations
import json
from pathlib import Path
from tkinter import filedialog,messagebox,simpledialog
from app.dialogs import TextDialog
from app.parsing import parse_int
from jus_formats import alar,almt,dstx as dstxmod,sprite
from jus_package import images,package,spriteedit
from jus_package.project import join,split

def mark_almt(editor):
    editor.almt_dirty = True
    editor.update_dirty()


def apply_almt(editor):
    if not editor.almt or not editor.almt_path:
        return
    try:
        data = editor.almt.build()
        almt.parse(data)
    except Exception as exc:  # noqa: BLE001
        messagebox.showerror('ALMT', f'Cannot build move table:\n{exc}')
        return
    editor.root_data.write(editor.almt_path, data)
    container = join(*split(editor.almt_path)[:-1])
    arc = editor.root_data.archive(container)
    rep = package.ImportReport()
    package._sync_spans(arc, rep)
    if arc.version == 2:
        arc.id_low = arc.id_high = None
    editor.root_data.mark_archive_dirty(container)
    editor.almt_dirty = False
    editor._load_effect_catalog()
    editor._refresh_pursuer_links()
    editor.update_dirty()
    editor.populate_archive()
    editor.status.set(f'Applied {editor.almt_path} ({len(data)} bytes). {" ".join(rep.warnings)}')


def export_almt_json(editor):
    if not editor.almt:
        return
    p = filedialog.asksaveasfilename(defaultextension='.json', filetypes=[('JSON', '*.json')],
                                     initialfile=split(editor.almt_path)[-1] + '.json')
    if p:
        Path(p).write_text(json.dumps(almt.to_dict(editor.almt), indent=1) + '\n', encoding='utf-8')


def import_almt_json(editor):
    if not editor.almt:
        return
    p = filedialog.askopenfilename(filetypes=[('JSON', '*.json')])
    if not p:
        return
    try:
        new = almt.from_dict(json.loads(Path(p).read_text(encoding='utf-8')))
    except Exception as exc:  # noqa: BLE001
        messagebox.showerror('ALMT JSON', str(exc))
        return
    editor.checkpoint('import JSON')
    editor.almt = new
    editor.mark_almt()
    editor.populate_moves()


def apply_move_props(editor):
    m = editor.move
    if not m:
        return
    try:
        new = (parse_int(editor._mv['id'].get()), parse_int(editor._mv['duration'].get()),
               (m.flags & ~1) | (1 if editor._mv['loop'].get() else 0))
    except ValueError as exc:
        messagebox.showerror('Move', f'Invalid number: {exc}')
        return
    if new == (m.id, m.duration, m.flags):
        return
    editor.checkpoint('move properties')
    m.id, m.duration, m.flags = new
    m.touch()
    editor.mark_almt()
    editor._move_row(editor.almt.moves.index(m))
    editor.refresh_animation()


def _after_piece_edit(editor):
    d = editor.sprite_d
    fr = d.frames[editor.frame_i]
    if d.version == 2:
        fr.bounds = fr.computed_bounds()
    d.frame_refs = None
    editor.sprite_dirty = True
    editor.update_dirty()
    editor.filmstrip.invalidate(editor.frame_i)
    editor.redraw_sprite()


def apply_piece(editor):
    p = editor._piece()
    if p is None:
        return
    try:
        shape = int(editor._pv['shape'].get().split(':')[0])
        bank = parse_int(editor._pv['bank'].get())
        attr = (p.attr & ~0xFF7F) | shape | (0x10 if editor._pv['h'].get() else 0) | \
            (0x20 if editor._pv['v'].get() else 0) | (0x40 if editor._pv['b2'].get() else 0) | ((bank & 0xFF) << 8)
        new = dstxmod.Piece(parse_int(editor._pv['index'].get()), parse_int(editor._pv['x'].get()),
                            parse_int(editor._pv['y'].get()), attr)
        new.size
        if not (-128 <= new.x <= 127 and -128 <= new.y <= 127) or not 0 <= new.index <= 0xFFFF:
            raise ValueError('x/y must fit in a signed byte, index in 0–65535')
    except (ValueError, KeyError) as exc:
        messagebox.showerror('Piece', str(exc))
        return
    if new == p:
        return
    editor.checkpoint('edit piece', kind='sprite')
    editor.sprite_d.frames[editor.frame_i].pieces[editor.piece_i] = new
    editor._after_piece_edit()


def mark_sprite(editor):
    editor.sprite_dirty = True
    editor.update_dirty()


def apply_sprite(editor):
    if not editor.sprite_d or not editor.sprite_dirty:
        return
    d, g = editor.sprite_d, editor.sprite_g
    try:
        if d.embedded is not None and g is not None:
            d.embedded = g.build()
        elif g is not None and editor.sprite_g_path:
            editor.root_data.write(editor.sprite_g_path, g.build())
        editor.root_data.write(editor.sprite_path, d.build())
    except Exception as exc:  # noqa: BLE001
        messagebox.showerror('Sprite', f'Cannot rebuild sprite:\n{exc}')
        return
    editor.sprite_dirty = False
    if editor.index:
        editor.index.invalidate()
    editor._frame_cache.clear()
    editor.update_dirty()
    editor.populate_archive()
    editor.status.set(f'Applied {editor.sprite_path}')


def export_frames(editor):
    d, g = editor.sprite_d, editor.sprite_g
    if not d or not g:
        return
    out = filedialog.askdirectory(title='Folder for PNG frames')
    if not out:
        return
    src = sprite.SpriteSource(g)
    canvas = sprite.frame_extent(d)
    meta = {'canvas': list(canvas), 'frames': []}
    for i, fr in enumerate(d.frames):
        if fr.pieces:
            images.save_png(sprite.compose(fr, src, canvas=canvas), g.palettes, Path(out) / f'{i:03d}.png')
        meta['frames'].append({'png': f'{i:03d}.png' if fr.pieces else None,
                               'pieces': [p.to_list() for p in fr.pieces]})
    (Path(out) / 'frames.json').write_text(json.dumps(meta, indent=1), encoding='utf-8')
    editor.status.set(f'Exported {len(d.frames)} frames to {out} (canvas {canvas})')


def _ask_png_origin(editor, path):
    meta = Path(path).with_name('frames.json')
    if meta.is_file():
        try:
            cv = json.loads(meta.read_text(encoding='utf-8'))['canvas']
            return int(cv[0]), int(cv[1])
        except (KeyError, ValueError, IndexError):
            pass
    cv = sprite.frame_extent(editor.sprite_d)
    s = simpledialog.askstring('Image origin', 'Sprite-space position of the PNG top-left corner (x,y):',
                               initialvalue=f'{cv[0]},{cv[1]}', parent=editor)
    if not s:
        return None
    x, y = (int(v) for v in s.split(','))
    return x, y


def import_frame(editor, append):
    d, g = editor.sprite_d, editor.sprite_g
    if not d or not g:
        return
    if sprite.SpriteSource(g).is_atlas:
        messagebox.showinfo('Atlas sprite', 'This sprite draws from a shared atlas: use Import atlas…, '
                            'then edit the pieces.')
        return
    i = len(d.frames) if append else editor.frame_i
    if i is None:
        return
    p = filedialog.askopenfilename(filetypes=[('PNG', '*.png')])
    if not p:
        return
    origin = editor._ask_png_origin(p)
    if origin is None:
        return
    warn = []
    snap = editor._sprite_snapshot()
    try:
        img = images.load_png(Path(p), g.palettes, origin[0], origin[1], warn)
        spriteedit.set_frame_image(d, g, i, img, warn)
    except Exception as exc:  # noqa: BLE001
        messagebox.showerror('Import frame', str(exc))
        return
    editor.checkpoint('import frame', kind='sprite', snap=snap)
    editor.mark_sprite()
    editor.populate_frames(select=i)
    if warn:
        messagebox.showwarning('Import frame', '\n'.join(warn[:20]))


def relayout_frame(editor):
    d, g = editor.sprite_d, editor.sprite_g
    i = editor.frame_i
    if not d or not g or i is None or not d.frames[i].pieces:
        return
    src = sprite.SpriteSource(g)
    if src.is_atlas:
        editor.status.set('Atlas sprites keep their texture-cell layout; edit pieces directly.')
        return
    editor.checkpoint('re-layout frame', kind='sprite')
    img = sprite.compose(d.frames[i], src)
    spriteedit.set_frame_image(d, g, i, img, [], relayout=True)
    editor.mark_sprite()
    editor.piece_i = None
    editor.filmstrip.invalidate(i)
    editor.redraw_sprite()
    editor.status.set(f'Frame {i}: {len(d.frames[i].pieces)} pieces after automatic layout')


def delete_frame(editor):
    d = editor.sprite_d
    i = editor.frame_i
    if d is None or i is None:
        return
    if messagebox.askyesno('Delete frame', f'Delete frame {i}? Later frames shift down; '
                                           'ALMT BoundsIndex values are not renumbered.'):
        editor.checkpoint('delete frame', kind='sprite')
        spriteedit.delete_frame(d, i)
        editor.mark_sprite()
        editor.populate_frames(select=max(0, i - 1))


def export_atlas(editor):
    g = editor.sprite_g
    if not g or not sprite.SpriteSource(g).is_atlas:
        messagebox.showinfo('Atlas', 'This sprite does not use an atlas image.')
        return
    p = filedialog.asksaveasfilename(defaultextension='.png', filetypes=[('PNG', '*.png')])
    if p:
        images.save_png(sprite.atlas_image(g, 0), g.palettes, Path(p))


def import_atlas(editor):
    g = editor.sprite_g
    if not g or not sprite.SpriteSource(g).is_atlas:
        messagebox.showinfo('Atlas', 'This sprite does not use an atlas image.')
        return
    p = filedialog.askopenfilename(filetypes=[('PNG', '*.png')])
    if not p:
        return
    snap = editor._sprite_snapshot()
    try:
        spriteedit.set_atlas_image(g, images.load_png(Path(p), g.palettes, 0, 0))
    except Exception as exc:  # noqa: BLE001
        messagebox.showerror('Atlas', str(exc))
        return
    editor.checkpoint('import atlas', kind='sprite', snap=snap)
    editor.mark_sprite()
    editor.redraw_sprite(thumbs=True)


def edit_palette(editor):
    g = editor.sprite_g
    if not g:
        return
    text = '\n'.join(' '.join(f'{v:04X}' for v in bank) for bank in g.palettes)
    TextDialog(editor, 'Palette banks (RGB555 hex, 16 per line; colour 0 is transparent)', text,
               editor._palette_done)


def _palette_done(editor, text):
    try:
        banks = [[int(v, 16) & 0xFFFF for v in line.split()] for line in text.strip().splitlines() if line.strip()]
        if not banks or any(len(b) != 16 for b in banks):
            raise ValueError('each line needs 16 colours')
    except ValueError as exc:
        messagebox.showerror('Palette', str(exc))
        return False
    editor.checkpoint('edit palette', kind='sprite')
    editor.sprite_g.palettes = banks
    editor.mark_sprite()
    editor.redraw_sprite(thumbs=True)
    return True


def extract_member(editor):
    e = editor._selected_member()
    if not e:
        return
    p = filedialog.asksaveasfilename(initialfile=Path(e.name).name)
    if p:
        Path(p).write_bytes(e.payload())


def replace_member(editor):
    e = editor._selected_member()
    if not e:
        return
    p = filedialog.askopenfilename(title=f'Replacement for {e.name}')
    if not p:
        return
    editor.root_data.write(join(editor.container, e.name), Path(p).read_bytes())
    editor.after_archive_edit()


def add_member(editor):
    if not editor.container:
        return
    p = filedialog.askopenfilename(title='File to add')
    if not p:
        return
    name = simpledialog.askstring('Member name', 'Name inside the archive:', initialvalue=Path(p).name,
                                  parent=editor)
    if not name:
        return
    rid = simpledialog.askstring('Resource id', 'Full 32-bit id (type byte + 24-bit id), e.g. 0x40084150 '
                                 '(blank = automatic for ALAR3):', parent=editor)
    try:
        entry = alar.Entry(name, b'', parse_int(rid) if rid else 0)
        entry.set_payload(Path(p).read_bytes(), False)
        editor.root_data.add(editor.container, entry)
    except Exception as exc:  # noqa: BLE001
        messagebox.showerror('Add member', str(exc))
        return
    editor.after_archive_edit()


def remove_member(editor):
    e = editor._selected_member()
    if e and messagebox.askyesno('Remove', f'Remove {e.name} from the archive?'):
        editor.root_data.remove(join(editor.container, e.name))
        editor.after_archive_edit()


def after_archive_edit(editor):
    if editor.index:
        editor.index.rebuild()
    editor.update_dirty()
    editor.select_container(editor.container, editor._char_of(editor.container) if len(editor.scope) > 1 else None)

