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

from jus_formats import altm as altmmod, dsig as dsigmod, dstx as dstxmod, sprite as spritemod

from .project import DataRoot, join, split
from . import tilemap, images

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
    # ARM9 BattleMapBG_Create 02083FCC loads resource 0x400003 (the sudden-
    # death substitute for BG slot 0) with slot 0's tiles 0x400100, which in
    # every stage archive is bg_xx_02.dtx (bg_xx_02.atm is 0x400000; the
    # suffixes run opposite to the slot numbers).
    for l in out:
        if l.image_path is None:
            twin = None
            exact = re.fullmatch(r'(bg_[a-z0-9_]+)_sud', l.name, re.I)
            if exact:
                twin = next((o for o in out if o.name == exact.group(1) + '_02'
                             and o.image_path), None)
            if twin is not None:
                l.image_path = twin.image_path
                l.borrowed = twin.name
                l.problems = [f'alternative BG0 tiles from {twin.name} (ARM9 02083FCC)']
            else:
                twin = next((o for o in out if o.image_path and (o.map.width, o.map.height) ==
                             (l.map.width, l.map.height)), None)
                if twin is not None:
                    l.image_path = twin.image_path
                    l.borrowed = twin.name
                    l.problems = [f'tiles borrowed from {twin.name} (same map size; unverified)']
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



@dataclass(frozen=True)
class ScreenSprite:
    """Resolved sprite-frame source from one screen or nested screen archive.

    This describes *resource* content only.  ALMT runtime placement, DS
    screen selection and update timing have not been verified.
    """
    dtx_path: str
    image_path: str                     # external .dig path, or dtx_path if embedded
    frame_count: int
    dsig_mode: int
    embedded: bool


def screen_sprite(root: DataRoot, archive: str, dtx_name: str):
    """Return (ScreenSprite, DSTX, SpriteSource) for a screen sprite resource.

    Prefer the original 24-bit resource id for external DSIG pairing rather
    than basename guesses.  A same-stem fallback is available for exceptional
    archives without matching resource ids.  Nothing here rebuilds archives.
    """
    arc = root.archive(archive)
    e = arc.get(dtx_name)
    if e.ext != '.dtx':
        raise ValueError(f'{dtx_name}: not a DSTX sprite resource')
    dtx = dstxmod.parse(e.payload())
    if dtx.embedded:
        g = dsigmod.parse(dtx.embedded)
        image_path = join(archive, e.name)
        embedded = True
    else:
        cands = [item for item in arc.entries if item.ext == '.dig']
        hit = next((x for x in cands if x.resource_id == e.resource_id), None)
        if hit is None:
            stem = e.name.rsplit('.', 1)[0].lower().rstrip('_')
            hit = next((x for x in cands if x.name.rsplit('.', 1)[0].lower().rstrip('_') == stem), None)
        if hit is None:
            raise ValueError(f'{dtx_name}: no embedded or paired DSIG image')
        image_path = join(archive, hit.name)
        g = dsigmod.parse(hit.payload())
        embedded = False
    return (ScreenSprite(join(archive, e.name), image_path, len(dtx.frames), g.mode, embedded),
            dtx, spritemod.SpriteSource(g))


def render_screen_sprite(dtx: dstxmod.DstxFile, source: spritemod.SpriteSource, frame: int):
    """Return (RGBA PIL image, left, top) for the selected sprite frame."""
    if not 0 <= frame < len(dtx.frames):
        raise IndexError(f'Frame {frame} outside 0..{len(dtx.frames) - 1}')
    indexed = spritemod.compose(dtx.frames[frame], source)
    if indexed.width * indexed.height > 4_000_000:
        raise ValueError('Sprite frame too large to preview safely')
    return images.to_rgba(indexed, source.dsig.palettes), indexed.left, indexed.top


def nested_screen_archives(root: DataRoot, top_paths: list[str]) -> list[str]:
    """Enumerate nested ALAR members as navigable resource paths.

    Uses member names rather than fabricated paths on disk; DSCP wrappers
    are handled by DataRoot.archive.  Guard against malformed input loops.
    """
    found = []
    seen = set(top_paths)
    pending = [(p, 0) for p in top_paths]
    while pending:
        path, depth = pending.pop()
        if depth >= 12:
            continue
        try:
            entries = root.archive(path).entries
        except (ValueError, OSError, KeyError):
            continue
        for member in entries:
            if member.ext != '.aar':
                continue
            child = join(path, member.name)
            if child in seen:
                continue
            seen.add(child)
            found.append(child)
            pending.append((child, depth + 1))
    return sorted(found)

def default_screen(name: str) -> str:
    """Heuristic only: which DS screen a layer probably targets (user can change it)."""
    n = name.lower()
    if re.search(r'(under|bottom|btm|down|_sub|_u\d|_d\d)', n):
        return 'Bottom'
    return 'Top'
