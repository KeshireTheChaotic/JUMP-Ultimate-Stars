"""Character Forge commands: info, scaffold, build, validate, names.

Work-folder layout made by ``scaffold`` and consumed by ``build``::

    concept.json            the character concept + build options (you edit this)
    brief.json / BRIEF.md   every sprite sheet, frame and effect to draw, with sizes,
                            palettes and the moves/ticks that show each frame
    template_package/       the template character exported with all spawned effects
    reference/<key>/NNN.png the template's frames (RGBA) — pose / size / anchor reference
    reference/<key>/sheet.png  contact sheet of the same frames
    art/<key>/NNN.png       YOUR new frames (same size as the reference frame)
    art/<key>/atlas.png     YOUR new atlas for atlas-mode effect textures

``build`` writes a normal editor package (File → Import package) that replaces
the target slot.  Nothing here writes the ROM; only ``names`` writes the
extracted data (bin/chr_b_t.bin), with a .orig backup.
"""
from __future__ import annotations

import json
import re
import shutil
import struct
from pathlib import Path

from PIL import Image

from jus_formats import almt, dsig as dsigmod, dstx as dstxmod, roster, sprite
from jus_formats.dsig import rgb555_to_rgb
from jus_package import package
from jus_package.project import DataRoot, join, split

from . import slots

ID_FIELDS = ('TextureID', 'GenerateID')
WORK_VERSION = 1


def _rj(p: Path):
    return json.loads(Path(p).read_text(encoding='utf-8'))


def _wj(p: Path, obj) -> None:
    p.parent.mkdir(parents=True, exist_ok=True)
    p.write_text(json.dumps(obj, indent=1, ensure_ascii=False) + '\n', encoding='utf-8')


def _h(v: int, w: int = 6) -> str:
    return f'0x{v:0{w}X}'


# ====================================================================== info
def info(root: DataRoot, slot: str) -> dict:
    return slots.slot_report(root, slot)


# ================================================================ compatibility
def compatibility(root: DataRoot, template: str, slot: str) -> list[str]:
    """Reasons a template's moveset cannot go into ``slot`` (empty = compatible).

    Form archives are loaded per koma size of the slot's cards, windows and
    tables per slot name; a template must provide the same set, otherwise
    either a loaded file would be missing or the old character's file would
    stay behind next to the new one.
    """
    if template == slot:
        return []
    t, s = slots.slot_files(root, template), slots.slot_files(root, slot)
    out = []
    if sorted(t.forms) != sorted(s.forms):
        out.append(f'forms differ: {template} has {sorted(t.forms)}, {slot} needs {sorted(s.forms)} '
                   '(form archives are chosen by the koma size of the slot\'s deck cards)')
    tw = sorted(re.sub(rf'.*/{template}', '', p) for p in t.windows)
    sw = sorted(re.sub(rf'.*/{slot}', '', p) for p in s.windows)
    if tw != sw:
        out.append(f'window archives differ: {template} {tw}, {slot} {sw}')
    if sorted(t.tables) != sorted(s.tables):
        out.append(f'gameplay tables differ: {template} {sorted(t.tables)}, {slot} {sorted(s.tables)}')
    return out


# ==================================================================== remap
class Remap:
    """Template → slot renaming and id-block translation."""

    def __init__(self, template: str, slot: str):
        self.t, self.s = template, slot
        self.tb, self.sb = slots.block(template), slots.block(slot)
        self.tr, self.sr = slots.record(template), slots.record(slot)
        self.count = 0

    def rid(self, v: int) -> int:
        low, hi = v & 0xFFFFFF, v & ~0xFFFFFF
        if self.tb <= low < self.tb + 0x100:
            low = self.sb + (low - self.tb)
        elif low in (slots.WINDOW_BASE + self.tr, slots.WINDOW_B_BASE + self.tr):
            low = low - self.tr + self.sr
        else:
            return v
        self.count += 1
        return hi | low

    def name(self, s: str) -> str:
        return s.replace(self.t, self.s)


def _remap_value(v, rm: Remap):
    if isinstance(v, int):
        return rm.rid(v)
    return v


def remap_package(pkg: Path, template: str, slot: str) -> dict:
    """Rewrite an exported template package in place so it targets ``slot``."""
    rm = Remap(template, slot)
    man = _rj(pkg / 'package.json')
    report = {'renamed': [], 'tables': {}}
    for u in man['units']:
        old = u['path']
        u['path'] = rm.name(old) if not old.startswith('efc/') else old
        spec_p = pkg / u['dir'] / 'archive.json'
        spec = _rj(spec_p)
        if old.startswith('efc/'):
            continue                      # shared effects keep their names and ids
        spec['path'] = u['path']
        if spec.get('container_entry'):
            spec['container_entry']['id'] = _h(rm.rid(int(spec['container_entry']['id'], 16)), 8)
        for m in spec['members']:
            m['name'] = rm.name(m['name'])
            m['id'] = _h(rm.rid(int(m['id'], 16)), 8)
            m.pop('name_hash', None)      # recomputed by the archive builder for the new name
            if m.get('kind') == 'almt' and m.get('json'):
                jp = pkg / u['dir'] / m['json']
                f = almt.from_dict(_rj(jp))
                for mv in f.moves:
                    mv.id = rm.rid(mv.id)
                    for node in mv.nodes:
                        for tr in (node.tracks if node else []):
                            if tr.field in ID_FIELDS or tr.field.endswith('ID'):
                                if tr.keyed:
                                    for k in tr.keys:
                                        k.value = _remap_value(k.value, rm)
                                else:
                                    tr.value = _remap_value(tr.value, rm)
                                tr.dirty = True
                    mv.dirty = True
                _wj(jp, almt.to_dict(f))
        _wj(spec_p, spec)
        report['renamed'].append([old, u['path']])
    efc_dirs = {u['dir'] for u in man['units'] if u['path'].startswith('efc/')}
    for s in man.get('sprites', []):
        if s['dstx']['unit'] not in efc_dirs:
            s['dstx']['member'] = rm.name(s['dstx']['member'])
            if 'resource_id' in s:
                s['resource_id'] = _h(rm.rid(int(s['resource_id'], 16)))
        if not s['dsig'].get('embedded') and s['dsig'].get('unit') not in efc_dirs:
            s['dsig']['member'] = rm.name(s['dsig']['member'])
    for f in man.get('files', []):
        old = f['path']
        f['path'] = rm.name(old)
        if 'id' in f:
            f['id'] = _h(rm.rid(int(f['id'], 16)), 8)
        data = bytearray((pkg / f['file']).read_bytes())
        hits = 0
        for off in range(0, len(data) - 3, 4):
            v = struct.unpack_from('<I', data, off)[0]
            nv = rm.rid(v) if (rm.tb <= (v & 0xFFFFFF) < rm.tb + 0x100 and v >> 24 == 0) else v
            if nv != v:
                struct.pack_into('<I', data, off, nv)
                hits += 1
        (pkg / f['file']).write_bytes(bytes(data))
        report['tables'][f['path']] = hits
        report['renamed'].append([old, f['path']])
    man['name'] = slot
    man.setdefault('warnings', [])
    _wj(pkg / 'package.json', man)
    eff = pkg / 'effects.json'
    if eff.is_file():
        e = _rj(eff)
        e['notes'] = (e.get('notes', '') + f' Remapped by Character Forge: {template} → {slot}; '
                      'paths in this file were renamed, ids are the template\'s.')
        eff.write_text(json.dumps(e, indent=1, ensure_ascii=False).replace(template, slot) + '\n',
                       encoding='utf-8')
    report['ids_remapped'] = rm.count
    return report


# ================================================================== scaffold
def _unit_paths(man: dict) -> dict[str, str]:
    return {u['dir']: u['path'] for u in man['units']}


def _sprite_key(path: str, member: str, taken: set[str]) -> str:
    """Short unique folder key: <archive>__<member>, prefixed win_/efc_ for windows and shared effects."""
    arc = split(path)[-1].rsplit('/', 1)[-1].rsplit('.', 1)[0]
    prefix = 'win_' if path.startswith('battle/ChrWin.aar') else 'efc_' if path.startswith('efc/') else ''
    key = re.sub(r'[^A-Za-z0-9_]+', '_', f'{prefix}{arc}__{member.rsplit(".", 1)[0]}').strip('_')
    base, n = key, 2
    while key in taken:
        key, n = f'{base}_{n}', n + 1
    taken.add(key)
    return key


def _texture_usage(root: DataRoot, archives: list[str]) -> dict[int, list[dict]]:
    """TextureID → [{move, duration, loop, cells: [(tick, cell)]}] over the given archives."""
    use: dict[int, list[dict]] = {}
    for path in archives:
        try:
            arc = root.archive(path)
        except (KeyError, ValueError, OSError):
            continue
        for e in arc.entries:
            if e.ext != '.amt':
                continue
            f = almt.parse(e.payload())
            for mv in f.moves:
                for node in mv.nodes:
                    if node is None:
                        continue
                    tex = node.track('TextureID')
                    cells = node.track('BoundsIndex')
                    if tex is None or tex.opaque or cells is None or cells.opaque:
                        continue
                    t = tex.keys[0].value if tex.keyed and tex.keys else tex.value
                    keys = [(k.tick, k.value) for k in cells.keys] if cells.keyed else [(0, cells.value)]
                    use.setdefault(t & 0xFFFFFF, []).append(
                        {'move': _h(mv.id & 0xFFFFFF), 'table': join(path, e.name), 'duration': mv.duration,
                         'loop': bool(mv.flags & almt.MOVE_FLAG_LOOP), 'cells': keys})
    return use


def _pixels(im: Image.Image):
    """Pixel tuples (Pillow 12+: get_flattened_data; getdata is deprecated)."""
    f = getattr(im, 'get_flattened_data', None)
    return list(f() if f else im.getdata())


def _rgba(path: Path) -> Image.Image:
    with Image.open(path) as im:
        return im.convert('RGBA')


def _contact_sheet(frames: list[tuple[int, Image.Image]], out: Path) -> None:
    if not frames:
        return
    cw = max(im.width for _, im in frames) + 4
    ch = max(im.height for _, im in frames) + 14
    cols = max(1, min(8, len(frames)))
    rows = (len(frames) + cols - 1) // cols
    sheet = Image.new('RGBA', (cols * cw, rows * ch), (40, 40, 48, 255))
    from PIL import ImageDraw
    d = ImageDraw.Draw(sheet)
    for n, (i, im) in enumerate(frames):
        x, y = (n % cols) * cw, (n // cols) * ch
        sheet.alpha_composite(im, (x + 2, y + 12))
        d.text((x + 2, y), f'{i:03d}', fill=(220, 220, 220, 255))
    sheet.save(out)


def scaffold(root: DataRoot, template: str, slot: str, work: Path, *, name: str = '',
             concept_text: str = '') -> dict:
    """Export the template with its effects and write the art brief for a replacement of ``slot``."""
    problems = compatibility(root, template, slot)
    if problems:
        raise ValueError('template cannot replace this slot:\n  ' + '\n  '.join(problems))
    work = Path(work)
    if work.exists() and any(work.iterdir()):
        raise FileExistsError(f'{work} is not empty')
    pkg = package.export_character(root, template, work / 'template_package')
    man = _rj(pkg / 'package.json')
    units = _unit_paths(man)
    char_archives = [p for p in units.values() if not p.startswith('efc/')]
    usage = _texture_usage(root, list(units.values()))
    sprites = []
    taken: set[str] = set()
    for s in man['sprites']:
        upath = units[s['dstx']['unit']]
        info_ = _rj(pkg / s['dir'] / 'sprite.json')
        key = _sprite_key(upath, s['dstx']['member'], taken)
        shared = upath.startswith('efc/')
        rid = int(s['resource_id'], 16)
        atlas = 'atlas' in info_
        ref = work / 'reference' / key
        frames, sheet = [], []
        for i, fr in enumerate(info_['frames']):
            rec = {'index': i, 'pieces': len(fr.get('pieces', []))}
            if fr.get('png'):
                im = _rgba(pkg / s['dir'] / fr['png'])
                ref.mkdir(parents=True, exist_ok=True)
                im.save(ref / f'{i:03d}.png')
                sheet.append((i, im))
                rec.update(size=[im.width, im.height], origin=[-int(fr['left']), -int(fr['top'])])
            else:
                rec['empty'] = True
            frames.append(rec)
        _contact_sheet(sheet, ref / 'sheet.png') if sheet else None
        if atlas:
            ref.mkdir(parents=True, exist_ok=True)
            _rgba(pkg / s['dir'] / info_['atlas']['png']).save(ref / 'atlas.png')
        uses = usage.get(rid, [])
        cells_used = sorted({c for u in uses for _, c in u['cells'] if isinstance(c, int)})
        sprites.append({
            'key': key, 'archive': upath, 'dstx': s['dstx']['member'], 'resource_id': s['resource_id'],
            'sprite_dir': s['dir'], 'dsig': s['dsig'], 'mode': info_['mode_name'], 'banks': info_['banks'],
            'atlas': {'size': [info_['atlas']['width'], info_['atlas']['height']]} if atlas else None,
            'frames': frames, 'shared': shared,
            'role': ('shared effect (efc) — used by other characters too; not replaced'
                     if shared else 'effect texture' if '_e' in s['dstx']['member'] else 'character body'),
            'used_by_moves': uses, 'cells_used': cells_used,
            'deliver': ('nothing (shared)' if shared else
                        f'art/{key}/atlas.png ({info_["atlas"]["width"]}×{info_["atlas"]["height"]})' if atlas
                        else f'art/{key}/NNN.png for every non-empty frame, same size as reference'),
        })
        if not shared:
            (work / 'art' / key).mkdir(parents=True, exist_ok=True)
    eff = _rj(pkg / 'effects.json') if (pkg / 'effects.json').is_file() else {}
    brief = {'version': WORK_VERSION, 'template': template, 'slot': slot,
             'slot_report': slots.slot_report(root, slot), 'sprites': sprites,
             'effects': eff.get('effects', []), 'spawns': eff.get('spawns', []),
             'compatibility': 'template == slot' if template == slot else 'forms/windows/tables match'}
    _wj(work / 'brief.json', brief)
    concept = {
        'version': WORK_VERSION, 'template': template, 'slot': slot,
        'display_name': name or '', 'concept': concept_text or '',
        'palette': {'mode': 'from_art', 'alt_banks': 'copy',
                    'note': 'from_art: 15 colours per DSIG computed from your frames; alt_banks copy|keep'},
        'require_all_frames': True,
        'moves': {u['move']: '' for s in sprites if not s['shared'] for u in s['used_by_moves']},
        'notes': 'Fill "moves" with what each move shows for the new character (pose / attack / effect).',
    }
    _wj(work / 'concept.json', concept)
    _write_brief_md(work, brief)
    return brief


def _write_brief_md(work: Path, b: dict) -> None:
    r = b['slot_report']
    L = [f'# Character Forge brief — replace slot `{b["slot"]}` (template `{b["template"]}`)', '',
         r['roster_note'], '',
         f'- Resource block: `{r["resource_block"]}`; forms: {r["forms"]}; window ids: {r["window_ids"]}',
         f'- Files: {sum(len(v) for k, v in r["files"].items() if k != "tables")} archives, tables {list(r["files"]["tables"])}',
         '', '## Art to deliver', '']
    for s in b['sprites']:
        if s['shared']:
            continue
        sizes = sorted({tuple(f['size']) for f in s['frames'] if 'size' in f})
        L.append(f'### `{s["key"]}` — {s["role"]}')
        L.append(f'- source `{s["archive"]}` | `{s["dstx"]}` (id {s["resource_id"]}), {s["mode"]}, '
                 f'{len(s["frames"])} frames, sizes {sizes[:6]}{" …" if len(sizes) > 6 else ""}')
        L.append(f'- deliver: {s["deliver"]}; palette: ≤15 colours + transparent (colour 0)')
        L.append(f'- reference: `reference/{s["key"]}/sheet.png`; used by {len(s["used_by_moves"])} move(s)')
        for u in s['used_by_moves'][:40]:
            cells = ' '.join(f'{c}@{t}' for t, c in u['cells'])
            L.append(f'  - move {u["move"]} ({u["duration"]} ticks{", loops" if u["loop"] else ""}): cells {cells}')
        L.append('')
    shared = [s for s in b['sprites'] if s['shared']]
    if shared:
        L += ['## Shared effects (efc) — kept', '',
              'These textures are drawn for many characters; Character Forge never edits them.', '']
        L += [f'- `{s["key"]}` ({s["archive"]}, id {s["resource_id"]})' for s in shared]
    L += ['', f'## Spawned effects: {len(b["effects"])} effect moves, {len(b["spawns"])} spawn keys', '',
          'Timing, hit boxes and spawn links stay the template\'s; only the art changes.']
    (work / 'BRIEF.md').write_text('\n'.join(L) + '\n', encoding='utf-8')


# ===================================================================== draft
def _hex_rgb(s: str) -> tuple[int, int, int]:
    s = s.lstrip('#')
    return int(s[0:2], 16), int(s[2:4], 16), int(s[4:6], 16)


def _lum(c) -> float:
    return 0.299 * c[0] + 0.587 * c[1] + 0.114 * c[2]


def draft(work: Path, colours: list[str] | None = None, *, overwrite: bool = False) -> dict:
    """Fill ``art/`` with recoloured template frames (a placeholder, never final art).

    Each opaque template colour is replaced by the concept colour of the same
    brightness rank, so silhouettes, sizes and anchors are exactly right and
    the package builds and validates end to end.  Real art replaces these
    files one by one.  ``colours`` defaults to concept.json palette.colours.
    """
    work = Path(work)
    brief = _rj(work / 'brief.json')
    concept = _rj(work / 'concept.json')
    colours = colours or concept.get('palette', {}).get('colours') or []
    target = sorted((_hex_rgb(c) for c in colours), key=_lum)
    written = 0
    for s in brief['sprites']:
        if s['shared']:
            continue
        ref, art = work / 'reference' / s['key'], work / 'art' / s['key']
        art.mkdir(parents=True, exist_ok=True)
        srcs = [ref / 'atlas.png'] if s['atlas'] else [ref / f'{f["index"]:03d}.png'
                                                       for f in s['frames'] if not f.get('empty')]
        ims = [(p, _rgba(p)) for p in srcs if p.is_file()]
        palette = sorted({px[:3] for _, im in ims for px in _pixels(im) if px[3] >= 128}, key=_lum)
        if target and palette:
            mapping = {c: target[min(len(target) - 1, i * len(target) // len(palette))]
                       for i, c in enumerate(palette)}
        else:
            mapping = {}
        for p, im in ims:
            dst = art / p.name
            if dst.exists() and not overwrite:
                continue
            if mapping:
                im.putdata([(*mapping.get(px[:3], px[:3]), px[3]) if px[3] >= 128 else px
                            for px in _pixels(im)])
            im.save(dst)
            written += 1
    return {'written': written, 'colours': colours}


# ===================================================================== build
def _palette_from(images: list[Image.Image], colours: int = 15) -> list[tuple[int, int, int]]:
    px = []
    for im in images:
        for r, g, b, a in _pixels(im):
            if a >= 128:
                px.append((r & 0xF8, g & 0xF8, b & 0xF8))       # DS 15-bit colour
    if not px:
        return [(0, 0, 0)] * colours
    strip = Image.new('RGB', (len(px), 1))
    strip.putdata(px)
    q = strip.quantize(colors=colours, method=Image.Quantize.MEDIANCUT, dither=Image.Dither.NONE)
    pal = q.getpalette()[:3 * colours]
    out = [tuple(pal[i:i + 3]) for i in range(0, len(pal), 3)]
    while len(out) < colours:
        out.append(out[-1] if out else (0, 0, 0))
    return out


def _index(im: Image.Image, pal: list[tuple[int, int, int]]) -> Image.Image:
    """RGBA → P image with index 0 transparent and 1..15 = pal (nearest colour, no dither)."""
    pimg = Image.new('P', (1, 1))
    flat = [0, 0, 0] + [c for rgb in pal for c in rgb]
    flat += flat[-3:] * (256 - len(flat) // 3)
    pimg.putpalette(flat)
    rgb = Image.new('RGB', im.size)
    rgb.paste(im.convert('RGB'))
    q = rgb.quantize(palette=pimg, dither=Image.Dither.NONE)
    data = bytearray(q.tobytes())
    alpha = im.getchannel('A').tobytes()
    for i, a in enumerate(alpha):
        if a < 128:
            data[i] = 0
        elif data[i] == 0:
            data[i] = 1 + min(range(len(pal)), key=lambda k: sum((x - y) ** 2 for x, y in
                                                                 zip(pal[k], im.getpixel((i % im.width, i // im.width))[:3])))
    out = Image.frombytes('P', im.size, bytes(data))
    out.putpalette(flat)
    out.info['transparency'] = 0
    return out


def _dsig_json_path(pkg: Path, man: dict, sdesc: dict, dstx_unit: str, dstx_member: str) -> Path:
    if sdesc.get('embedded'):
        spec = _rj(pkg / dstx_unit / 'archive.json')
        m = next(x for x in spec['members'] if x['name'].endswith(dstx_member.split('/')[-1])
                 or x['name'] == dstx_member)
        return pkg / dstx_unit / m['embedded_dsig']
    spec = _rj(pkg / sdesc['unit'] / 'archive.json')
    m = next(x for x in spec['members'] if x['name'] == sdesc['member'] or
             x['name'].split('/')[-1] == sdesc['member'].split('/')[-1])
    return pkg / sdesc['unit'] / m['json']


def build(root: DataRoot, work: Path, out: Path) -> dict:
    """Template package + remap + your art → replacement package at ``out``."""
    work, out = Path(work), Path(out)
    concept = _rj(work / 'concept.json')
    brief = _rj(work / 'brief.json')
    template, slot = concept['template'], concept['slot']
    if (template, slot) != (brief['template'], brief['slot']):
        raise ValueError('concept.json template/slot differ from the scaffolded brief; scaffold again')
    if out.exists() and any(out.iterdir()):
        raise FileExistsError(f'{out} is not empty')
    shutil.copytree(work / 'template_package', out, dirs_exist_ok=True)
    report = {'template': template, 'slot': slot, 'sprites': [], 'errors': [], 'warnings': []}
    # Sprite folders were exported under the template's unit dirs; remapping only
    # renames archive paths/members, so do the art first against the brief's dirs.
    man = _rj(out / 'package.json')
    groups: dict[str, list[tuple[dict, list[tuple[Path, Path, dict]]]]] = {}
    for s in brief['sprites']:
        art = work / 'art' / s['key']
        files = sorted(art.glob('*.png')) if art.is_dir() else []
        if s['shared']:
            if files:
                report['errors'].append(f'{s["key"]}: shared efc texture; art not allowed (it would change '
                                        'every character that spawns it)')
            continue
        info_ = _rj(out / s['sprite_dir'] / 'sprite.json')
        jobs = []
        if s['atlas']:
            a = art / 'atlas.png'
            if a.is_file():
                im = _rgba(a)
                if [im.width, im.height] != s['atlas']['size']:
                    report['errors'].append(f'{s["key"]}: atlas.png is {im.width}×{im.height}, '
                                            f'needs {s["atlas"]["size"][0]}×{s["atlas"]["size"][1]}')
                else:
                    jobs.append((a, out / s['sprite_dir'] / info_['atlas']['png'], {'atlas': True}))
            elif concept.get('require_all_frames', True):
                report['errors'].append(f'{s["key"]}: missing art/{s["key"]}/atlas.png')
        else:
            for fr in s['frames']:
                if fr.get('empty'):
                    continue
                src = art / f'{fr["index"]:03d}.png'
                if not src.is_file():
                    if concept.get('require_all_frames', True):
                        report['errors'].append(f'{s["key"]}: missing art/{s["key"]}/{fr["index"]:03d}.png')
                    continue
                im = _rgba(src)
                if [im.width, im.height] != fr['size']:
                    report['errors'].append(f'{s["key"]} frame {fr["index"]}: {im.width}×{im.height}, '
                                            f'needs {fr["size"][0]}×{fr["size"][1]} (anchor at {fr["origin"]})')
                    continue
                dst = out / s['sprite_dir'] / info_['frames'][fr['index']]['png']
                jobs.append((src, dst, {}))
        dkey = json.dumps(s['dsig'], sort_keys=True) if not s['dsig'].get('embedded') else s['key']
        groups.setdefault(dkey, []).append((s, jobs))
    if report['errors']:
        return report
    for dkey, items in groups.items():
        jobs = [j for _, js in items for j in js]
        if not jobs:
            continue
        images = [_rgba(src) for src, _, _ in jobs]
        pal = _palette_from(images)
        s0 = items[0][0]
        jp = _dsig_json_path(out, man, s0['dsig'], next(x['dstx']['unit'] for x in man['sprites']
                                                         if x['dir'] == s0['sprite_dir']), s0['dstx'])
        d = _rj(jp)
        bank0 = [d['palettes'][0][0]] + [f'{0x8000 | (b >> 3) << 10 | (g >> 3) << 5 | (r >> 3):04X}'
                                         for r, g, b in pal]
        if concept.get('palette', {}).get('alt_banks', 'copy') == 'copy':
            d['palettes'] = [list(bank0) for _ in d['palettes']]
        else:
            d['palettes'][0] = bank0
        _wj(jp, d)
        for (src, dst, opts), im in zip(jobs, images):
            p = _index(im, pal)
            if opts.get('atlas'):
                p.save(dst, transparency=0)
            else:
                p.save(dst, transparency=0)
        for s, js in items:
            report['sprites'].append({'key': s['key'], 'frames_replaced': len(js), 'palette': bank0})
    if template != slot:
        report['remap'] = remap_package(out, template, slot)
    m = _rj(out / 'package.json')
    m['kind'] = 'character'
    m['charforge'] = {'template': template, 'slot': slot, 'display_name': concept.get('display_name', ''),
                      'concept': concept.get('concept', '')}
    _wj(out / 'package.json', m)
    _wj(out / 'charforge_build.json', report)
    return report


# ================================================================== validate
def _char_archives(root: DataRoot, slot: str) -> list[str]:
    s = slots.slot_files(root, slot)
    return s.animation + s.images


def validate(root: DataRoot, pkg: Path, slot: str) -> dict:
    """Dry-run import into ``root`` (memory only) and check every link the loader uses."""
    pkg = Path(pkg)
    errors, warnings, ok = [], [], []
    before = slots.slot_files(root, slot)
    rep = package.import_package(pkg, root, write=False)
    warnings += rep.warnings
    after = slots.slot_files(root, slot)
    B = after.base
    names = slots.loader_names(slot, after.forms)
    man = _rj(pkg / 'package.json')
    for u in man['units']:
        p = u['path']
        if p.startswith('efc/') or p.startswith('battle/ChrWin.aar|'):
            continue
        if p not in names['animation'] + names['images']:
            errors.append(f'unit {p} is not a file the loader opens for {slot} '
                          f'(expected one of {names["animation"] + names["images"]})')
    ok.append(f'{len(man["units"])} units target the slot\'s loader names')
    # ids inside the block, name hashes consistent with the (possibly renamed) members
    for path in after.animation + after.images + after.windows:
        arc = root.archive(path)
        for e in arc.entries:
            if e.name_hash is not None and e.name_hash != arc.expected_hash(e):
                errors.append(f'{path}|{e.name}: stored name hash {e.name_hash:#06x} ≠ {arc.expected_hash(e):#06x}')
    for path in after.animation + after.images:
        for e in root.archive(path).entries:
            if not B <= e.resource_id < B + 0x100:
                errors.append(f'{path}|{e.name}: resource id {_h(e.resource_id)} outside {slot} block {_h(B)}')
    for wpath in after.windows:
        suffix = '_b' if wpath.endswith('_b.aar') else ''
        want = after.window_ids[suffix]
        for e in root.archive(wpath).entries:
            if e.resource_id != want:
                errors.append(f'{wpath}|{e.name}: window id {_h(e.resource_id)}, loader uses {_h(want)}')
    # loader-requested ids that the slot used to provide
    present = after.resource_ids | after.move_ids
    lost = sorted((before.resource_ids | before.move_ids) - present)
    if lost:
        warnings.append(f'{len(lost)} id(s) the old {slot} provided are gone: '
                        + ', '.join(_h(v) for v in lost[:12]) + (' …' if len(lost) > 12 else ''))
    for need in (B, B + 0x38):
        if need not in present:
            errors.append(f'loader id {_h(need)} missing (FUN_02074728)')
    # GenerateID / TextureID / BoundsIndex
    from jus_package import spawns
    own = package._amt_tables(root, after.animation)
    common = package._amt_tables(root, root.effect_archives())
    catalog = spawns.build_catalog(own + common)
    dstx_frames: dict[int, int] = {}
    for path in after.animation + after.images + root.effect_archives():
        try:
            for e in root.archive(path).entries:
                if e.ext == '.dtx':
                    try:
                        dstx_frames.setdefault(e.resource_id, len(dstxmod.parse(e.payload()).frames))
                    except ValueError:
                        pass
        except (KeyError, ValueError, OSError):
            continue
    n_spawn = n_tex = 0
    for tpath, table in own:
        for mv in table.moves:
            for sp in spawns.keyed_spawns(mv, table.node_names):
                n_spawn += 1
                if sp.effect_id not in catalog:
                    errors.append(f'{tpath} move {_h(mv.id)}: GenerateID {_h(sp.effect_id)} resolves nowhere')
            for node in mv.nodes:
                if node is None:
                    continue
                tex, cells = node.track('TextureID'), node.track('BoundsIndex')
                if tex is None or tex.opaque:
                    continue
                for t in ([k.value for k in tex.keys] if tex.keyed else [tex.value]):
                    n_tex += 1
                    t &= 0xFFFFFF
                    if t not in dstx_frames:
                        errors.append(f'{tpath} move {_h(mv.id)}: TextureID {_h(t)} has no DSTX')
                        continue
                    if cells is not None and not cells.opaque:
                        vals = [k.value for k in cells.keys] if cells.keyed else [cells.value]
                        bad = [v for v in vals if isinstance(v, int) and not 0 <= v < dstx_frames[t]]
                        if bad:
                            errors.append(f'{tpath} move {_h(mv.id)}: cells {bad} ≥ {dstx_frames[t]} frames '
                                          f'of {_h(t)}')
    ok.append(f'{n_spawn} GenerateID keys and {n_tex} TextureID references resolve')
    # sprites render
    rendered = 0
    for path in after.animation:
        arc = root.archive(path)
        for e in arc.entries:
            if e.ext != '.dtx':
                continue
            try:
                d = dstxmod.parse(e.payload())
                if d.embedded:
                    g = dsigmod.parse(d.embedded)
                else:
                    dig = None
                    for ip in after.images + after.animation:
                        dig = next((x for x in root.archive(ip).entries
                                    if x.ext == '.dig' and x.resource_id == e.resource_id), None)
                        if dig:
                            break
                    if dig is None:
                        continue
                    g = dsigmod.parse(dig.payload())
                src = sprite.SpriteSource(g)
                for fr in d.frames:
                    if fr.pieces:
                        sprite.compose(fr, src)
                        rendered += 1
            except (ValueError, IndexError) as exc:
                errors.append(f'{path}|{e.name}: does not render: {exc}')
    ok.append(f'{rendered} frames render')
    # shot table
    shot = after.tables.get('shot')
    if shot:
        data = root.read(shot)
        for off in range(0, len(data) - 3, 4):
            v = struct.unpack_from('<I', data, off)[0]
            if v >> 24 == 0 and (v & 0xFFFF00) not in (0, B) and any(
                    (v & 0xFFFF00) == (b & 0xFFFF00) for b in slots.RES_BASE):
                errors.append(f'{shot} +{off:#x}: id {_h(v)} belongs to another character\'s block')
    stale = sorted(set(before.tables) - set(after.tables))
    if stale:
        warnings.append(f'tables of the old character remain: {stale}')
    return {'slot': slot, 'errors': errors, 'warnings': warnings, 'ok': ok,
            'import': rep.summary()}


# ===================================================================== names
def set_display_name(root: DataRoot, slot: str, name: str, *, write: bool = True) -> bytes:
    """Repoint ``slot``'s display name (chr_b_t.bin record string 0) to a new CP932 string.

    The new string is appended and only that record's self-relative offset
    changes, so every other byte of the table stays identical.
    """
    path = 'bin/chr_b_t.bin'
    blob = bytearray(root.read(path))
    names = roster.record_names(bytes(blob))
    ids = roster.battle_roster(list(roster.BATTLE_IDS), names)
    rec = ids.index(slot)
    enc = name.encode('cp932')
    if enc.decode('cp932') != name or b'\0' in enc or not enc:
        raise ValueError('display name must be non-empty CP932 text')
    i = rec * roster.STRINGS_PER_RECORD
    while len(blob) % 4:
        blob.append(0)
    struct.pack_into('<i', blob, 4 * i, len(blob) - 4 * i)
    blob += enc + b'\0'
    if roster.record_names(bytes(blob))[rec] != name:
        raise ValueError('name table rebuild check failed')
    if write:
        target = root.root / path
        backup = target.with_name(target.name + '.orig')
        if not backup.exists():
            shutil.copy2(target, backup)
        target.write_bytes(bytes(blob))
    return bytes(blob)
