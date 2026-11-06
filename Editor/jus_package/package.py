"""Sprite/animation packages: export game resources to editable files and
import them back into rebuilt archives.

Package layout (folder, optionally zipped)::

    package.json                  manifest (kind, name, units, sprites)
    units/<unit>/archive.json     one ALAR archive: header + ordered members
    units/<unit>/raw/<member>     original member payload (base for imports)
    units/<unit>/<member>.json    ALMT moves (authoritative), or a readable
                                  DSTX/DSIG/ALOD view (DSIG palettes editable)
    sprites/<sprite>/sprite.json  frame list: canvas position, OBJ pieces
    sprites/<sprite>/frames/NNN.png   8-bit indexed frames (bank*16+colour)
    sprites/<sprite>/atlas.png    native 4bpp atlas (editable)
    sprites/<sprite>/texture_2bpp.png  reference-only alternate GX texture view
    sprites/<sprite>/palette.png  palette swatch (reference)
    files/<name>                  loose members (e.g. ChrBin tables), raw

Import rule: start from ``raw/``; apply JSON and PNG content; anything not
changed stays byte-identical.  Archives are rebuilt and written through a
:class:`~jus_package.project.DataRoot`.
"""
from __future__ import annotations

import json
import re
import shutil
import zipfile
from dataclasses import dataclass, field
from pathlib import Path

from jus_formats import alar, almt, alod, dsig as dsigmod, dstx as dstxmod, sprite
from jus_formats.dsig import DsigFile, MODE_CHARSTREAM, rgb_to_rgb555
from jus_formats.dstx import DstxFile, Frame, Piece

from . import images
from .project import DataRoot, join, split

FORMAT = 'jus-sprite-package'
VERSION = 1


def _safe(name: str) -> str:
    return re.sub(r'[^A-Za-z0-9_.\-]+', '~', name.replace('|', '~~'))


def _hex(v: int, w: int = 8) -> str:
    return f'0x{v:0{w}X}'


def _int(v) -> int:
    return int(str(v), 0) if isinstance(v, str) else int(v)


def member_kind(name: str, payload: bytes) -> str:
    magic = payload[:4]
    if magic == b'ALMT':
        return 'almt'
    if magic == b'DSTX':
        try:
            dstxmod.parse(payload)
            return 'dstx'
        except ValueError:
            return 'raw'
    if magic == b'DSIG':
        return 'dsig'
    if magic == b'ALOD':
        return 'alod'
    return 'raw'


def _write_json(path: Path, obj) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(obj, indent=1, ensure_ascii=False) + '\n', encoding='utf-8')


def _read_json(path: Path):
    return json.loads(path.read_text(encoding='utf-8'))


# =========================================================================
# Export
# =========================================================================

@dataclass
class _UnitInfo:
    path: str
    dir: str
    members: dict[str, bytes] = field(default_factory=dict)   # name -> payload
    ids: dict[str, int] = field(default_factory=dict)         # name -> 24-bit resource id


def export_package(root: DataRoot, sources: list[str], out_dir: Path | str, *, name: str,
                   kind: str = 'custom', zip_output: bool = False, progress=None,
                   effects: dict | None = None) -> Path:
    """Export ``sources`` (archive or member resource paths) to a package folder.

    ``effects`` (from :func:`effect_dependencies`) adds ``effects.json``: the
    GenerateID spawn graph with every effect move linked to the exported unit
    and to the sprite folders of the textures it uses.
    """
    out = Path(out_dir)
    if out.exists() and any(out.iterdir()):
        raise FileExistsError(f'{out} is not empty')
    out.mkdir(parents=True, exist_ok=True)
    manifest = {'format': FORMAT, 'version': VERSION, 'kind': kind, 'name': name,
                'units': [], 'files': [], 'sprites': [], 'warnings': []}
    units: list[_UnitInfo] = []
    for src in sources:
        parts = split(src)
        is_archive = parts[-1].lower().endswith('.aar')
        if is_archive:
            unit = _export_unit(root, src, out, manifest)
            units.append(unit)
        else:
            rel = f'files/{_safe(src)}'
            (out / rel).parent.mkdir(parents=True, exist_ok=True)
            payload = root.read(src)
            (out / rel).write_bytes(payload)
            entry = root.entry(src) if len(parts) > 1 else None
            manifest['files'].append({'path': src, 'file': rel,
                                      **(_entry_meta(entry) if entry else {})})
        if progress:
            progress(f'exported {src}')
    _export_sprites(units, out, manifest, progress)
    if effects is not None:
        _write_effects(out, manifest, units, effects)
    _write_json(out / 'package.json', manifest)
    _write_readme(out, manifest)
    if zip_output:
        zpath = out.with_suffix('.zip')
        with zipfile.ZipFile(zpath, 'w', zipfile.ZIP_DEFLATED) as z:
            for f in sorted(out.rglob('*')):
                if f.is_file():
                    z.write(f, f.relative_to(out).as_posix())
        return zpath
    return out


def _entry_meta(e: alar.Entry) -> dict:
    return {'id': _hex(e.id), 'attributes': _hex(e.attributes),
            'name_hash': _hex(e.name_hash or 0, 4), 'reserved': e.reserved,
            'compressed': e.compressed}


def _export_unit(root: DataRoot, path: str, out: Path, manifest: dict) -> _UnitInfo:
    arc = root.archive(path)
    udir = f'units/{_safe(path)}'
    base = out / udir
    unit = _UnitInfo(path, udir)
    members = []
    for e in arc.entries:
        payload = e.payload()
        unit.members[e.name] = payload
        unit.ids[e.name] = e.resource_id
        mk = member_kind(e.name, payload)
        raw_rel = f'raw/{_safe(e.name)}'
        (base / raw_rel).parent.mkdir(parents=True, exist_ok=True)
        (base / raw_rel).write_bytes(payload)
        rec = {'name': e.name, 'kind': mk, 'raw': raw_rel, **_entry_meta(e)}
        if arc.version == 3:
            rec['index'] = e.index
        js = f'{_safe(e.name)}.json'
        try:
            if mk == 'almt':
                _write_json(base / js, almt.to_dict(almt.parse(payload)))
                rec['json'] = js
            elif mk == 'dstx':
                _write_json(base / js, dstxmod.parse(payload).to_dict())
                rec['view'] = js
                d = dstxmod.parse(payload)
                if d.embedded:
                    rec['embedded_dsig'] = f'{_safe(e.name)}.dsig.json'
                    _write_json(base / rec['embedded_dsig'], dsigmod.parse(d.embedded).to_dict())
            elif mk == 'dsig':
                _write_json(base / js, dsigmod.parse(payload).to_dict())
                rec['json'] = js
            elif mk == 'alod':
                _write_json(base / js, alod.parse(payload).to_dict())
                rec['view'] = js
        except ValueError as exc:
            manifest['warnings'].append(f'{path}|{e.name}: {exc}')
        members.append(rec)
    parts = split(path)
    container = None
    if len(parts) > 1:
        ce = root.entry(path)
        container = _entry_meta(ce)
        if root.archive(join(*parts[:-1])).version == 3:
            container['index'] = ce.index
    _write_json(base / 'archive.json', {
        'path': path, 'version': arc.version, 'flags': _hex(arc.flags, 2),
        'reserved08': arc.reserved08, 'container_entry': container, 'members': members})
    manifest['units'].append({'path': path, 'dir': udir})
    return unit


def _dig_for(dtx_name: str, unit: _UnitInfo, units: list[_UnitInfo]) -> tuple[_UnitInfo, str] | None:
    stem = dtx_name[:-4]
    cands = [stem + '.dig']
    if stem.endswith('_'):
        cands.insert(0, stem.rstrip('_') + '.dig')
    for u in [unit] + [x for x in units if x is not unit]:
        for c in cands:
            if c in u.members and u.members[c][:4] == b'DSIG':
                return u, c
    return None


def _export_sprites(units: list[_UnitInfo], out: Path, manifest: dict, progress=None) -> None:
    for unit in units:
        for name, payload in unit.members.items():
            if not name.lower().endswith('.dtx'):
                continue
            try:
                d = dstxmod.parse(payload)
            except ValueError:
                continue
            if d.embedded:
                g = dsigmod.parse(d.embedded)
                src_ref = {'embedded': True}
            else:
                hit = _dig_for(name, unit, units)
                if hit is None:
                    manifest['warnings'].append(f'{unit.path}|{name}: no image (DSIG) found; '
                                                'sprite frames not exported')
                    continue
                gu, gname = hit
                g = dsigmod.parse(gu.members[gname])
                src_ref = {'unit': gu.dir, 'member': gname}
            sdir = f'sprites/{_safe(unit.path)}~{_safe(name)}'
            try:
                _export_sprite(d, g, out / sdir, src_ref, unit, name)
            except (ValueError, IndexError) as exc:
                manifest['warnings'].append(f'{unit.path}|{name}: {exc}')
                continue
            manifest['sprites'].append({'dir': sdir, 'dstx': {'unit': unit.dir, 'member': name},
                                        'resource_id': _hex(unit.ids.get(name, 0), 6),
                                        'dsig': src_ref, 'mode': _hex(g.mode if g.version == 1 else 0x40, 2)})
            if progress:
                progress(f'sprite {name}: {len(d.frames)} frames')


def _export_sprite(d: DstxFile, g: DsigFile, sdir: Path, src_ref: dict, unit, name) -> None:
    src = sprite.SpriteSource(g)
    canvas = sprite.frame_extent(d)
    info = {'dstx_version': d.version, 'mode': _hex(src.mode, 2),
            'mode_name': dsigmod.MODE_NAMES.get(src.mode, '?'), 'banks': g.banks,
            'canvas': list(canvas), 'frames': [],
            'notes': 'Frames are indexed PNGs (palette index = bank*16 + colour). '
                     'Pieces: [index, x, y, attr]; attr bits 0-3 shape, 4 h-flip, 5 v-flip, 6=2bpp, 8-15 bank.'}
    if src.is_atlas:
        info['notes'] += (' Atlas sprite: edit atlas.png (native 4bpp); frame PNGs are previews. '
                          'texture_2bpp.png reinterprets the same bytes as GX 2bpp, and is '
                          'read-only. texture_xy identifies 8x8 GX UV cells (32 columns), '
                          'NOT coordinates in the 4bpp atlas.png.')
        atlas = sprite.atlas_image(g, 0)
        images.save_png(atlas, g.palettes, sdir / 'atlas.png')
        images.save_png(sprite.texture_image(g, True), g.palettes, sdir / 'texture_2bpp.png')
        info['atlas'] = {'png': 'atlas.png', 'width': g.width, 'height': g.height,
                         'two_bpp_preview': 'texture_2bpp.png',
                         'two_bpp_width': 2 * g.width}
    for i, fr in enumerate(d.frames):
        rec = {'pieces': [p.to_list() for p in fr.pieces]}
        if fr.bounds is not None:
            rec['bounds'] = list(fr.bounds)
        if src.is_atlas:
            rec['texture_xy'] = [list(sprite.texture_piece_origin(p)) for p in fr.pieces]
        if fr.pieces:
            img = sprite.compose(fr, src, canvas=canvas)
            png = f'frames/{i:03d}.png'
            images.save_png(img, g.palettes, sdir / png)
            rec.update(png=png, left=canvas[0], top=canvas[1])
        info['frames'].append(rec)
    images.palette_swatch(g.palettes).save(sdir / 'palette.png')
    _write_json(sdir / 'sprite.json', info)


def _write_readme(out: Path, manifest: dict) -> None:
    lines = [f'# {manifest["name"]} — JUS sprite package', '',
             'Edit `sprites/*/frames/*.png` (keep indexed colour mode), `sprites/*/sprite.json` '
             '(piece layouts) and `units/*/*.json` (moves, palettes).', '',
             'Import with the JUS Editor (File → Import package) or:', '',
             '    py -3 jus_editor_cli.py import <this folder> --data <data root> --out <output root>', '']
    if manifest['warnings']:
        lines += ['## Export warnings', ''] + [f'- {w}' for w in manifest['warnings']]
    (out / 'README.md').write_text('\n'.join(lines) + '\n', encoding='utf-8')


# =========================================================================
# Import
# =========================================================================

@dataclass
class ImportReport:
    changed_members: list[str] = field(default_factory=list)
    unchanged_members: int = 0
    added: list[str] = field(default_factory=list)
    warnings: list[str] = field(default_factory=list)
    written: list[Path] = field(default_factory=list)

    def summary(self) -> str:
        s = [f'{len(self.changed_members)} member(s) changed, {self.unchanged_members} unchanged']
        if self.added:
            s.append(f'{len(self.added)} added')
        if self.written:
            s.append(f'{len(self.written)} archive file(s) written')
        if self.warnings:
            s.append(f'{len(self.warnings)} warning(s)')
        return '; '.join(s)


def _open_package(src: Path) -> tuple[Path, object]:
    if src.is_file() and src.suffix.lower() == '.zip':
        import tempfile
        tmp = Path(tempfile.mkdtemp(prefix='jus_pkg_'))
        with zipfile.ZipFile(src) as z:
            for info in z.infolist():
                target = (tmp / info.filename).resolve()
                if not str(target).startswith(str(tmp.resolve())):
                    raise ValueError(f'Unsafe path in package zip: {info.filename}')
            z.extractall(tmp)
        return tmp, tmp
    return src, None


def load_manifest(pkg: Path) -> dict:
    m = _read_json(pkg / 'package.json')
    if m.get('format') != FORMAT:
        raise ValueError('Not a JUS sprite package (package.json format mismatch)')
    if int(m.get('version', 0)) > VERSION:
        raise ValueError(f'Package version {m["version"]} is newer than this editor supports')
    return m


def import_package(pkg_path: Path | str, root: DataRoot, *, out_root: Path | str | None = None,
                   write: bool = True, progress=None) -> ImportReport:
    """Apply a package to ``root`` and (optionally) write rebuilt archives."""
    pkg, tmp = _open_package(Path(pkg_path))
    try:
        manifest = load_manifest(pkg)
        report = ImportReport()
        members: dict[tuple[str, str], bytes] = {}       # (unit dir, member) -> payload
        unit_specs = {}
        for u in manifest['units']:
            spec = _read_json(pkg / u['dir'] / 'archive.json')
            unit_specs[u['dir']] = spec
            for m in spec['members']:
                members[(u['dir'], m['name'])] = _member_payload(pkg / u['dir'], m, report)
        for s in manifest.get('sprites', []):
            _import_sprite(pkg, s, unit_specs, members, report)
            if progress:
                progress(f'sprite {s["dstx"]["member"]}')
        for u in manifest['units']:
            _apply_unit(root, unit_specs[u['dir']], u['dir'], members, report)
            if progress:
                progress(f'unit {u["path"]}')
        for f in manifest.get('files', []):
            payload = (pkg / f['file']).read_bytes()
            _apply_loose(root, f, payload, report)
        if write:
            report.written = root.save(out_root)
        return report
    finally:
        if tmp is not None:
            shutil.rmtree(tmp, ignore_errors=True)


def _member_payload(udir: Path, m: dict, report: ImportReport) -> bytes:
    raw_path = udir / m['raw'] if m.get('raw') else None
    raw = raw_path.read_bytes() if raw_path and raw_path.is_file() else None
    kind = m.get('kind', 'raw')
    js = udir / m['json'] if m.get('json') else None
    if kind == 'almt' and js and js.is_file():
        f = almt.from_dict(_read_json(js))
        if raw is not None:
            orig = almt.parse(raw)
            if almt.to_dict(orig) == almt.to_dict(f):
                return raw
            f = _merge_almt(orig, f)
        return f.build()
    if kind == 'dsig' and js and js.is_file() and raw is not None:
        g = dsigmod.parse(raw)
        if _apply_dsig_json(g, _read_json(js)):
            return g.build()
        return raw
    if raw is None:
        raise ValueError(f'{udir.name}/{m["name"]}: no raw payload and no editable JSON')
    if kind == 'dstx' and m.get('embedded_dsig'):
        ej = udir / m['embedded_dsig']
        if ej.is_file():
            d = dstxmod.parse(raw)
            g = dsigmod.parse(d.embedded)
            if _apply_dsig_json(g, _read_json(ej)):
                d.embedded = g.build()
                return d.build()
    return raw


def _merge_almt(orig: almt.AlmtFile, new: almt.AlmtFile) -> almt.AlmtFile:
    """Keep exact original bytes for moves whose JSON is unchanged."""
    if new.node_names != orig.node_names or new.field_names[:len(orig.field_names)] != orig.field_names:
        return new
    by_id = {}
    for m in orig.moves:
        by_id.setdefault(m.id, m)
    merged = []
    for m in new.moves:
        o = by_id.get(m.id)
        if o is not None and almt.move_to_dict(o, orig.node_names) == almt.move_to_dict(m, new.node_names):
            merged.append(o)
        else:
            merged.append(m)
    new.moves = merged
    if new.field_names == orig.field_names:
        new.strings_raw = orig.strings_raw
    return new


def _parse_colour(v) -> int:
    s = str(v)
    if s.startswith('#'):
        r, g, b = int(s[1:3], 16), int(s[3:5], 16), int(s[5:7], 16)
        return rgb_to_rgb555(r, g, b)
    return int(s, 16) & 0xFFFF       # keep bit 15 exactly as stored


def _apply_dsig_json(g: DsigFile, d: dict) -> bool:
    pals = d.get('palettes')
    if not pals:
        return False
    new = [[_parse_colour(c) for c in bank] for bank in pals]
    if any(len(b) != 16 for b in new):
        raise ValueError('DSIG palettes need 16 colours per bank')
    if new == g.palettes:
        return False
    g.palettes = new
    return True


def _resolve_dsig(sdesc: dict, dtx_bytes: bytes, members) -> tuple[DsigFile, tuple | None]:
    if sdesc.get('embedded'):
        return dsigmod.parse(dstxmod.parse(dtx_bytes).embedded), None
    key = (sdesc['unit'], sdesc['member'])
    return dsigmod.parse(members[key]), key


def _import_sprite(pkg: Path, s: dict, unit_specs, members, report: ImportReport) -> None:
    sdir = pkg / s['dir']
    info = _read_json(sdir / 'sprite.json')
    dkey = (s['dstx']['unit'], s['dstx']['member'])
    dtx_bytes = members[dkey]
    d = dstxmod.parse(dtx_bytes)
    g, gkey = _resolve_dsig(s['dsig'], dtx_bytes, members)
    orig_g_bytes = g.build()
    src = sprite.SpriteSource(g)
    warn: list[str] = []
    label = s['dstx']['member']
    frames_json = info['frames']
    new_frames: list[Frame] = []
    images_in: list[sprite.IndexedImage | None] = []
    pixel_changed = []
    layout_changed = False
    for i, fj in enumerate(frames_json):
        pieces = [Piece.from_list(p) for p in fj.get('pieces', [])]
        if src.is_atlas and 'texture_xy' in fj:
            if len(fj['texture_xy']) != len(pieces):
                raise ValueError(f'{label} frame {i}: texture_xy count differs from piece count')
            for p, xy in zip(pieces, fj['texture_xy']):
                p.index = sprite.atlas_index_for(int(xy[0]), int(xy[1]), g.width,
                                                 two_bpp=p.two_bpp)
        elif src.is_atlas and 'atlas_xy' in fj:
            # Older exports used incorrect index*16 source coordinates. Preserve
            # original raw index rather than silently applying that invalid mapping.
            warn.append(f'{label} frame {i}: outdated atlas_xy ignored; use texture_xy')
        bounds = tuple(fj['bounds']) if 'bounds' in fj else None
        if d.version == 2 and i < len(d.frames) and pieces == d.frames[i].pieces:
            bounds = d.frames[i].bounds
        fr = Frame(pieces, bounds if d.version == 2 else None)
        if d.version == 2 and (i >= len(d.frames) or pieces != d.frames[i].pieces):
            fr.bounds = fr.computed_bounds()
        orig = d.frames[i] if i < len(d.frames) else None
        if orig is None or orig.pieces != fr.pieces or orig.bounds != fr.bounds:
            layout_changed = True
        img = None
        changed = False
        if fj.get('png') and not src.is_atlas:
            png = sdir / fj['png']
            if png.is_file():
                img = images.load_png(png, g.palettes, int(fj.get('left', 0)), int(fj.get('top', 0)), warn)
                if orig is None or not orig.pieces:
                    changed = True
                else:
                    canvas = (img.left, img.top, img.left + img.width, img.top + img.height)
                    ref = sprite.compose(orig, src, canvas=canvas)
                    changed = ref.pixels != img.pixels or orig.pieces != fr.pieces
        new_frames.append(fr)
        images_in.append(img)
        pixel_changed.append(changed)
    if len(frames_json) != len(d.frames):
        layout_changed = True

    if src.mode == MODE_CHARSTREAM:
        for i, (fr, img, ch) in enumerate(zip(new_frames, images_in, pixel_changed)):
            if not ch or img is None:
                continue
            number = fr.pieces[0].index if fr.pieces and fr.pieces[0].index < len(g.frames) \
                and i < len(d.frames) else len(g.frames)
            if number == len(g.frames):
                g.frames.append(b'')
            built, data = sprite.build_charstream_frame(img, fr, number, g.palettes, warn)
            new_frames[i] = Frame(built.pieces, fr.bounds if d.version == 1 else built.computed_bounds())
            g.set_frame_data(number, data)
        g.recompute_max_frame_bytes()
    elif src.mode in (dsigmod.MODE_TILED4,):
        if any(pixel_changed):
            imgs = []
            for fr, img, orig in zip(new_frames, images_in, d.frames + [None] * len(new_frames)):
                if img is None:
                    img = sprite.compose(orig, src) if orig and orig.pieces else sprite.IndexedImage(1, 1)
                imgs.append(img)
            frames_out, pool = sprite.build_tile_frames(imgs, new_frames, g.palettes, warn)
            new_frames = frames_out
            g.set_pixels(pool)
            g.w0a = sprite.tiled_sheet_height(len(pool) // 32, g.w08 or 256)
    elif src.is_atlas:
        apng = sdir / info.get('atlas', {}).get('png', 'atlas.png')
        if apng.is_file():
            aimg = images.load_png(apng, g.palettes, 0, 0, warn)
            if aimg.width % 16:
                raise ValueError(f'{label}: atlas width must be a multiple of 16 pixels')
            cols = [v & 15 for v in aimg.pixels]
            data = sprite.atlas_from_colours(aimg.width, aimg.height, cols)
            if data != g.pixels() or (aimg.width, aimg.height) != (g.w08, g.w0a):
                g.w08, g.w0a = aimg.width, aimg.height
                g.set_pixels(data)
                pixel_changed.append(True)
    elif any(pixel_changed):
        warn.append(f'{label}: DSIG mode {src.mode:#x} pixels are read-only; PNG edits ignored')

    if layout_changed or any(pixel_changed):
        d.frames = new_frames
        d.frame_refs = None
    new_g_bytes = g.build()
    if gkey is None:
        if new_g_bytes != orig_g_bytes:
            d.embedded = new_g_bytes
    elif new_g_bytes != orig_g_bytes:
        members[gkey] = new_g_bytes
    new_dtx = d.build()
    if new_dtx != dtx_bytes:
        members[dkey] = new_dtx
    report.warnings += [f'{label}: {w}' for w in warn]


def _apply_unit(root: DataRoot, spec: dict, udir: str, members, report: ImportReport) -> None:
    path = spec['path']
    parts = split(path)
    if not root.exists(path):
        if len(parts) == 1:
            arc = alar.Archive(spec['version'], _int(spec['flags']))
            (root.root / parts[0]).parent.mkdir(parents=True, exist_ok=True)
            (root.root / parts[0]).write_bytes(arc.build())
        else:
            ce = spec.get('container_entry') or {}
            root.add(join(*parts[:-1]), alar.Entry(parts[-1], b'', _int(ce.get('id', 0)),
                                                    _int(ce.get('attributes', 0x80000001)),
                                                    None, 0, ce.get('index')))
            arc0 = alar.Archive(spec['version'], _int(spec['flags']))
            root.write(path, arc0.build(), bool(ce.get('compressed', False)))
            report.added.append(path)
    arc = root.archive(path)
    changed = False
    new_entries = []
    old = {e.name: e for e in arc.entries}
    for m in spec['members']:
        payload = members[(udir, m['name'])]
        e = old.get(m['name'])
        if e is None:
            e = alar.Entry(m['name'], b'', _int(m.get('id', 0)), _int(m.get('attributes', 0x80000001)),
                           None, int(m.get('reserved', 0)), m.get('index'))
            e.set_payload(payload, bool(m.get('compressed')))
            report.added.append(f'{path}|{m["name"]}')
            changed = True
        else:
            meta_id, meta_attr = _int(m.get('id', e.id)), _int(m.get('attributes', e.attributes))
            if (meta_id, meta_attr) != (e.id, e.attributes):
                e.id, e.attributes = meta_id, meta_attr
                changed = True
            if e.payload() != payload:
                e.set_payload(payload, bool(m.get('compressed', e.compressed)))
                report.changed_members.append(f'{path}|{m["name"]}')
                changed = True
            else:
                report.unchanged_members += 1
        new_entries.append(e)
    if [e.name for e in new_entries] != [e.name for e in arc.entries]:
        changed = True
    if changed:
        arc.entries = new_entries
        _sync_spans(arc, report)
        if arc.version == 2:
            arc.id_low = arc.id_high = None
        root.mark_archive_dirty(path)


def _sync_spans(arc: alar.Archive, report: ImportReport) -> None:
    """Keep ALMT/ALOD entry spans equal to the highest move id they contain."""
    for e in arc.entries:
        if e.ext != '.amt':
            continue
        try:
            f = almt.parse(e.payload())
        except ValueError:
            continue
        if not f.moves:
            continue
        span = max(m.id & 0xFFFFFF for m in f.moves) - e.resource_id + 1
        if span <= 0 or span > 0xFFFF or span == e.span:
            continue
        old_attr = e.attributes
        new_attr = (old_attr & 0xFFFF0000) | span
        # attribute bit 30 is set exactly when the span covers more than one id
        new_attr = new_attr | 0x40000000 if span > 1 else new_attr & ~0x40000000
        for other in arc.entries:
            if other.resource_id == e.resource_id and other.ext == '.aod' and other.attributes == old_attr:
                other.attributes = new_attr
        e.attributes = new_attr
        report.warnings.append(f'{e.name}: archive span updated to {span} move ids')


def _apply_loose(root: DataRoot, f: dict, payload: bytes, report: ImportReport) -> None:
    path = f['path']
    parts = split(path)
    if len(parts) == 1:
        target = root.root / parts[0]
        if not target.is_file() or target.read_bytes() != payload:
            report.warnings.append(f'{path}: loose top-level files are not written by import')
        return
    if not root.exists(path):
        root.add(join(*parts[:-1]), alar.Entry(parts[-1], b'', _int(f.get('id', 0)),
                                                _int(f.get('attributes', 0x80000001)),
                                                None, 0, f.get('index')))
        report.added.append(path)
    e = root.entry(path)
    if e.payload() != payload:
        root.write(path, payload, bool(f.get('compressed', e.compressed)))
        report.changed_members.append(path)
    else:
        report.unchanged_members += 1


# =========================================================================
# Presets
# =========================================================================

def character_sources(root: DataRoot, char_id: str, include_tables: bool = True,
                      include_window: bool = True) -> list[str]:
    out = []
    for s in root.character_sources(char_id):
        if s['role'] == 'gameplay-table' and not include_tables:
            continue
        if s['role'] == 'window-archive' and not include_window:
            continue
        out.append(s['path'])
    return out


def _amt_tables(root: DataRoot, archives: list[str]) -> list[tuple[str, almt.AlmtFile]]:
    out = []
    for path in archives:
        if not path.lower().endswith('.aar'):
            continue
        try:
            arc = root.archive(path)
        except (KeyError, ValueError, OSError):
            continue
        for e in arc.entries:
            if e.ext == '.amt':
                try:
                    out.append((join(path, e.name), almt.parse(e.payload())))
                except ValueError:
                    continue
    return out


def _texture_ids(move: almt.Move) -> set[int]:
    ids = set()
    for node in move.nodes:
        tr = node.track('TextureID') if node else None
        if tr is None or tr.opaque:
            continue
        for v in ([k.value for k in tr.keys] if tr.keyed else [tr.value]):
            if isinstance(v, int) and v:
                ids.add(v)
    return ids


def effect_dependencies(root: DataRoot, sources: list[str]) -> dict:
    """GenerateID effects reachable from the moves in ``sources`` (nested spawns included).

    Resolution is the editor's: move ids are looked up in the sources' own
    ``.amt`` tables first, then in ``efc/*.aar`` (spawns.build_catalog; on the
    shipped data every GenerateID resolves there).  Returns the spawn edges,
    the resolved effect moves with their TextureIDs, missing ids, and the
    effect archives outside ``sources`` that must be exported with them.
    """
    from . import spawns        # local import: spawns imports nothing from package
    own = _amt_tables(root, sources)
    common = _amt_tables(root, root.effect_archives())
    catalog = spawns.build_catalog(own + common)
    own_paths = {p for p, _ in own}
    queue = [(path, m, table.node_names) for path, table in own for m in table.moves]
    edges, effects, missing = [], {}, set()
    seen_moves = {(p, m.id) for p, m, _ in queue}
    while queue:
        path, move, names = queue.pop(0)
        for sp in spawns.keyed_spawns(move, names):
            hit = catalog.get(sp.effect_id)
            edges.append({'from_table': path, 'from_move': _hex(move.id, 6), 'node': sp.node,
                          'key': sp.key_index, 'tick': sp.tick, 'effect': _hex(sp.effect_id, 6),
                          'resolved': hit[2] if hit else None})
            if hit is None:
                missing.add(sp.effect_id)
                continue
            emove, enames, epath = hit
            if sp.effect_id not in effects:
                effects[sp.effect_id] = {'id': _hex(sp.effect_id, 6), 'table': epath,
                                         'archive': join(*split(epath)[:-1]),
                                         'duration': emove.duration, 'nodes': list(enames),
                                         'textures': sorted(_hex(t, 6) for t in _texture_ids(emove)),
                                         'shared': epath not in own_paths}
            if (epath, emove.id) not in seen_moves:
                seen_moves.add((epath, emove.id))
                queue.append((epath, emove, enames))
    extra = sorted({e['archive'] for e in effects.values()} - set(sources))
    return {'spawns': edges, 'effects': [effects[k] for k in sorted(effects)],
            'missing': [_hex(m, 6) for m in sorted(missing)], 'archives': extra}


def _write_effects(out: Path, manifest: dict, units: list[_UnitInfo], effects: dict) -> None:
    """effects.json: spawn graph + effect moves linked to units and sprite folders."""
    unit_dir = {u.path: u.dir for u in units}
    by_res: dict[int, list[tuple[str, str]]] = {}
    for s in manifest['sprites']:
        by_res.setdefault(_int(s['resource_id']), []).append((s['dstx']['unit'], s['dir']))

    def sprites_for(tex: int, udir: str | None) -> list[str]:
        # The effect's own archive first; otherwise any loaded archive of the
        # package (e.g. a form archive drawing the base archive's texture).
        hits = by_res.get(tex, [])
        own = [d for u, d in hits if u == udir]
        return own or [d for _, d in hits]

    rows = []
    for e in effects['effects']:
        udir = unit_dir.get(e['archive'])
        links = {t: sprites_for(_int(t), udir) for t in e['textures']}
        rows.append({**e, 'unit': udir, 'sprites': links})
        if udir is None:
            manifest['warnings'].append(f'effect {e["id"]}: archive {e["archive"]} not exported')
        for t, dirs in links.items():
            if not dirs:
                manifest['warnings'].append(f'effect {e["id"]}: texture {t} has no exported sprite')
    for m in effects['missing']:
        manifest['warnings'].append(f'GenerateID {m}: no ALMT move in the character or efc/*.aar')
    _write_json(out / 'effects.json', {
        'notes': 'GenerateID spawn graph (nested spawns followed). "resolved" is the move table '
                 'the id resolves to (own tables first, then efc/*.aar). Effect archives outside '
                 'the character are exported as units too; "sprites" maps each TextureID to the '
                 'exported sprite folders with that resource id.',
        'spawns': effects['spawns'], 'effects': rows, 'missing': effects['missing']})
    manifest['effects'] = {'file': 'effects.json', 'count': len(rows),
                           'spawns': len(effects['spawns']), 'archives': effects['archives']}


def export_character(root: DataRoot, char_id: str, out_dir, *, include_effects: bool = True, **kw) -> Path:
    """Whole character: animation/image archives, tables, window, and (by default)
    every effect its moves spawn, with the shared ``efc/*.aar`` archives they live in."""
    sources = character_sources(root, char_id)
    effects = None
    if include_effects:
        effects = effect_dependencies(root, sources)
        sources = sources + effects['archives']
    return export_package(root, sources, out_dir, name=char_id, kind='character', effects=effects, **kw)


def export_effect(root: DataRoot, archive_path: str, out_dir, **kw) -> Path:
    return export_package(root, [archive_path], out_dir,
                          name=Path(split(archive_path)[-1]).stem, kind='effect', **kw)
