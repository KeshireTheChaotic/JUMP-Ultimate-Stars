"""Stage and screen resource discovery (no GUI dependencies).

Stages (``stage/stage.aar``) group per stem ``bg_xx``:
``bg_xx.aar`` (background layers), ``bg_xx_gimmick.aar`` (optional),
``bg_xx.bin`` / ``.cam`` / ``.mob`` (stage data, **not decoded**: read-only).

Screens are the menu/scene archives (title, topmenu, deckmake, …) holding
ALTM layers, DSIG tile sheets, DSTX 0x05/0x06 layouts and nested archives.

Background layers are ALTM maps paired with a same-stem ``.dig`` DSIG or a
DSTX with an embedded DSIG (see :mod:`jus_package.tilemap`).
"""
from __future__ import annotations

import re
from dataclasses import dataclass, field

from jus_formats import altm as altmmod

from .project import DataRoot, join, split
from . import tilemap

STAGE_ARCHIVE = 'stage/stage.aar'
#: top-level archives that belong to other workspaces
NOT_SCREENS = ('chr/', 'efc/', 'koma/', 'stage/', 'demo/')

# file-type decoder status shown in the browsers / resource tables
STATUS = {
    '.atm': ('ALTM tile map', 'Inferred'),
    '.dig': ('DSIG image', 'Direct'),
    '.dtx': ('DSTX table', 'Direct'),
    '.amt': ('ALMT animation', 'Direct'),
    '.aod': ('ALOD object list', 'Direct'),
    '.aar': ('nested archive', 'Direct'),
    '.bin': ('binary table', 'Unknown'),
    '.cam': ('stage camera', 'Unknown'),
    '.mob': ('stage objects', 'Unknown'),
    '.ncl': ('Nitro palette?', 'Unknown'),
}


def dtx_kind(blob: bytes) -> str:
    if blob[:4] != b'DSTX' or len(blob) < 6:
        return 'not DSTX'
    flags = blob[5]
    if flags & 0x7F == 0x03:
        return f'sprite pieces v{blob[4]}'
    if flags == 0x04:
        return 'koma panels'
    if flags in (0x05, 0x06):
        from jus_formats.dstx import parse_layout
        try:
            layout = parse_layout(blob)
            return f'v1 layout {flags:#04x}: {len(layout.panels)} tile panels (read-only; placement unknown)'
        except ValueError as exc:
            return f'layout {flags:#04x} malformed: {exc}'
    return f'layout flags 0x{flags:02X} (needs a dedicated parser)'


@dataclass
class Layer:
    name: str                       # ALTM stem
    atm_path: str
    image_path: str | None
    map: altmmod.AltmFile
    problems: list[str] = field(default_factory=list)
    borrowed: str | None = None     # layer whose tiles were borrowed (no same-stem image)

    @property
    def size(self) -> tuple[int, int]:
        return self.map.pixel_size


def find_layers(root: DataRoot, archive: str) -> list[Layer]:
    """ALTM layers of one archive with their paired tile images."""
    arc = root.archive(archive)
    by_stem: dict[str, list] = {}
    for e in arc.entries:
        stem, ext = e.name.rsplit('/', 1)[-1].rsplit('.', 1) if '.' in e.name else (e.name, '')
        by_stem.setdefault(stem, []).append(('.' + ext, e))
    out = []
    for stem, items in sorted(by_stem.items()):
        atm = next((e for ext, e in items if ext == '.atm'), None)
        if atm is None:
            continue
        img = next((e for ext, e in items if ext == '.dig'), None) or \
            next((e for ext, e in items if ext == '.dtx'), None)
        probs = []
        try:
            m = altmmod.parse(atm.payload())
        except ValueError as exc:
            probs.append(f'{atm.name}: {exc}')
            continue
        if img is None:
            probs.append('no same-stem tile image (pair unknown)')
        out.append(Layer(stem, join(archive, atm.name), join(archive, img.name) if img else None, m, probs))
    # Unpaired maps (e.g. bg_xx_sud): borrow the tiles of a paired map with the same size.
    for l in out:
        if l.image_path is None:
            twin = next((o for o in out if o.image_path and (o.map.width, o.map.height) ==
                         (l.map.width, l.map.height)), None)
            if twin is not None:
                l.image_path = twin.image_path
                l.borrowed = twin.name
                l.problems = [f'tiles borrowed from {twin.name} (same map size; pairing is a guess)']
    return out


def render_layer(root: DataRoot, layer: Layer, image_path: str | None = None):
    """(PIL image or None, problems) for a layer."""
    path = image_path or layer.image_path
    if not path:
        return None, ['no tile image']
    try:
        dsig = tilemap.embedded_dsig(root.read(path))
        if dsig is None:
            return None, [f'{split(path)[-1]}: no embedded DSIG']
        return tilemap.render(layer.map, dsig)
    except (ValueError, KeyError) as exc:
        return None, [str(exc)]


@dataclass
class StageSet:
    stem: str                       # e.g. 'bg_bb'
    members: dict[str, str]         # role -> resource path ('layers', 'gimmick', 'bin', 'cam', 'mob')


def stage_sets(root: DataRoot) -> list[StageSet]:
    if not (root.root / STAGE_ARCHIVE).is_file():
        return []
    arc = root.archive(STAGE_ARCHIVE)
    sets: dict[str, dict[str, str]] = {}
    shared: list[str] = []
    for e in arc.entries:
        base = e.name.rsplit('/', 1)[-1]
        m = re.match(r'(bg_[a-z0-9_]+?)(_gimmick|_floor)?\.(aar|bin|cam|mob)$', base, re.I)
        if not m:
            shared.append(join(STAGE_ARCHIVE, e.name))
            continue
        stem, suffix, ext = m.group(1), (m.group(2) or '').lower(), m.group(3).lower()
        role = suffix[1:] if suffix else ('layers' if ext == 'aar' else ext)
        sets.setdefault(stem, {})[role] = join(STAGE_ARCHIVE, e.name)
    out = [StageSet(k, v) for k, v in sorted(sets.items())]
    for path in shared:          # e.g. SuddenDeath.bin: not tied to one stage
        out.append(StageSet(split(path)[-1].split('/')[-1], {'shared': path}))
    return out


def screen_archives(root: DataRoot) -> list[str]:
    out = []
    for f in sorted(root.root.rglob('*.aar')):
        rel = f.relative_to(root.root).as_posix()
        if not rel.lower().startswith(NOT_SCREENS):
            out.append(rel)
    return out


def default_screen(name: str) -> str:
    """Heuristic only: which DS screen a layer probably targets (user can change it)."""
    n = name.lower()
    if re.search(r'(under|bottom|btm|down|_sub|_u\d|_d\d)', n):
        return 'Bottom'
    return 'Top'
