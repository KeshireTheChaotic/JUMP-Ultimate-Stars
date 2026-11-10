"""Right-click actions for source-backed Screen workspace backgrounds."""
from __future__ import annotations

import re
import tkinter as tk
from pathlib import Path
from tkinter import filedialog, messagebox

from jus_package import backgroundedit, scenes
from jus_package.project import join, split


def _layer_for_row(ws, row):
    iid = str(row.get('id', '')) if row else ''
    return next((layer for layer in ws.layers if layer.name == iid), None)


def _translation_folder(ws) -> Path:
    root = ws.app.root_data
    candidate = Path(root.root).parent / 'Translation' if root else Path.cwd()
    previous = getattr(ws, '_background_png_folder', None)
    if previous and Path(previous).is_dir():
        return Path(previous)
    return candidate if candidate.is_dir() else Path.cwd()


def _overrides(ws, layer):
    return tuple(ws.cfg.get(layer.name, {}).get('palette_overrides', ()))


def show_background_menu(ws, row, event):
    layer = _layer_for_row(ws, row)
    if layer is None or not layer.image_path:
        return
    if ws.sel != layer.name:
        ws.sel = layer.name
        ws.refresh_inspector()
        ws.view.redraw()
    menu = tk.Menu(ws.app, tearoff=False)
    menu.add_command(
        label=f'Export background artwork PNG… ({layer.size[0]}×{layer.size[1]})',
        command=lambda: export_background(ws, layer.atm_path))
    menu.add_command(
        label='Import background artwork PNG…',
        command=lambda: import_background(ws, layer.atm_path))
    menu.add_separator()
    menu.add_command(label='Edit original source bytes…', command=ws._edit_source_assets)
    try:
        menu.tk_popup(event.x_root, event.y_root)
    finally:
        menu.grab_release()
    return 'break'


def show_view_background_menu(ws, event):
    """Right-click a source-backed region; select its upper visible BG layer."""
    if not ws.layers:
        return
    x, y = ws.view.to_world(event.x, event.y)
    target = None
    screen = None
    for name, (ox, oy) in (('Top', (0, 0)), ('Bottom', (0, 192 + 28))):
        if ox <= x < ox+256 and oy <= y < oy+192:
            screen = name
            x, y = x-ox, y-oy
            break
    if screen is None:
        return
    for name in reversed(ws.order):
        cfg = ws.cfg.get(name, {})
        img = ws.images.get(name)
        if (cfg.get('screen') != screen or img is None
                or not ws._shown(name)):
            continue
        px = (int(x)+cfg['sx']) % img.width
        py = (int(y)+cfg['sy']) % img.height
        if img.getpixel((px,py))[3] > 0:
            target = name
            break
    if target is None and ws.sel in ws.order and ws.cfg.get(ws.sel,{}).get('screen') == screen:
        target = ws.sel
    if target is None:
        target = next((name for name in reversed(ws.order)
                       if ws.cfg.get(name, {}).get('screen') == screen
                       and ws.images.get(name) is not None),None)
    if target:
        return show_background_menu(ws, {'id':target}, event)


def export_background(ws, atm_path: str):
    layer = next((l for l in ws.layers if l.atm_path == atm_path), None)
    if not layer or not layer.image_path:
        return
    name = re.sub(r'[^A-Za-z0-9_.-]+','_',split(layer.atm_path)[-1])
    basename = Path(name).stem + '_background.png'
    path = filedialog.asksaveasfilename(
        parent=ws.app, title=f'Export {layer.name} — full background map',
        initialdir=str(_translation_folder(ws)), initialfile=basename,
        defaultextension='.png', filetypes=[('PNG artwork','*.png')])
    if not path:
        return
    try:
        backgroundedit.export_background_png(
            ws.app.root_data, layer, Path(path), _overrides(ws, layer))
    except (ValueError, KeyError, OSError) as exc:
        messagebox.showerror('Export background',str(exc),parent=ws.app)
        return
    ws._background_png_folder = str(Path(path).parent)
    ws.app.status.set(f'Exported {layer.name} ({layer.size[0]}×{layer.size[1]}) '
                      f'to {path}; native source and palette unchanged.')


def import_background(ws, atm_path: str):
    layer = next((l for l in ws.layers if l.atm_path == atm_path), None)
    if not layer or not layer.image_path:
        return
    path = filedialog.askopenfilename(
        parent=ws.app, title=f'Import PNG for {layer.name} — {layer.size[0]}×{layer.size[1]}',
        initialdir=str(_translation_folder(ws)), filetypes=[('PNG artwork','*.png')])
    if not path:
        return
    ws._background_png_folder = str(Path(path).parent)
    root = ws.app.root_data
    overrides = _overrides(ws, layer)
    # Include all same-archive maps referencing the same image, even those
    # not displayed in the current scene variant; do not edit their tiles.
    other = list(ws.layers)
    parts = split(layer.atm_path)
    try:
        if len(parts) > 1:
            container = join(*parts[:-1])
            other += scenes.find_layers(root, container)
        unique = {x.atm_path:x for x in other}
        other = list(unique.values())
        try:
            patch = backgroundedit.plan_background_import(
                root, layer, Path(path), override_paths=overrides,
                other_layers=other)
        except backgroundedit.PaletteMismatch as exc:
            # Non-native colours cannot fit 4/8bpp without quantisation.
            # Never silently quantise antialiased or newly coloured text.
            if 'partial alpha' in str(exc):
                raise
            if not messagebox.askyesno(
                    'PNG colours outside original palette',
                    f'{exc}\n\nSnap the unsupported colours to the nearest '
                    'existing palette entries? The original palette, map size '
                    'and pixel bit depth remain unchanged.',
                    parent=ws.app):
                return
            patch = backgroundedit.plan_background_import(
                root, layer, Path(path), override_paths=overrides,
                other_layers=other, allow_nearest=True)
        if (patch.atm_bytes == root.read(patch.atm_path)
                and patch.image_bytes == root.read(patch.image_path)):
            ws.app.status.set(f'{layer.name}: PNG already matches source artwork.')
            return
        aliases = [item.name for item in ws.layers
                   if item.atm_path == layer.atm_path and item.name != layer.name]
        if aliases and not messagebox.askyesno(
                'Shared background artwork',
                f'{layer.name} uses the same ALTM/DSIG source as: '
                + ', '.join(aliases) + '.\n\n'
                'Importing this PNG changes the source artwork for every '
                'layer and scene using those files. Continue?', parent=ws.app):
            return
        backgroundedit.stage_background_patch(root, patch)
    except (ValueError, KeyError, OSError) as exc:
        messagebox.showerror('Import background',str(exc),parent=ws.app)
        return
    ws.app.update_dirty()
    # Reload from the staged original resources and reselect the layer.
    if ws.mode.get() == 'Scenes' and ws.scene_id is not None:
        ws.load_scene(ws.scene_id, preserve_selection=True)
    elif ws.archive:
        ws.load(ws.archive)
    matching = next((l for l in ws.layers if l.atm_path == atm_path),None)
    if matching:
        ws.sel = matching.name
        ws.refresh()
    ws.app.status.set(
        f'Imported {layer.name}: {patch.changed_tile_slots} native '
        f'{patch.native_bpp}bpp tile slots updated, '
        f'{patch.changed_map_cells} ALTM cells remapped, '
        f'{patch.quantized_pixels} pixels snapped. Use Save to commit.')
