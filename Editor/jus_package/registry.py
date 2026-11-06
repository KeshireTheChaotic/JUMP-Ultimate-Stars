"""Project-wide resource registry with dependency edges and a reverse
"where used" index (docs/04 *Resource model*).  No GUI dependencies.

Every archive member in the data root is a :class:`Resource` keyed by its
stable resource path (archive chain + member name, see
:mod:`jus_package.project`).  :class:`Ref` edges record *why* one resource
depends on another, with the exact source location (move, node, key, tick or
record) and an evidence grade:

=========== ======================================== ======================
kind        meaning                                  evidence
=========== ======================================== ======================
texture     ALMT TextureID → DSTX (type 0x40, id)    Cross-checked (renders)
image       DSTX → DSIG with the same id (0x42)      Direct (loader rule)
spawn       ALMT GenerateID key → effect move        Direct (0x02016220)
pursuer     ChrBin chr/effect record → effect move   Direct (ov6 0x021617A0)
pursuer-use ALMT NoteTrack chara_action 13 → table   Direct (ov6 0x02157A44)
collision   ALMT CollisionType ≥ 0x100 → chr/col     Direct (docs/03 §3)
shot        ChrBin chr/shot record +0x0C → move      Inferred (id matches)
tiles       ALTM → same-stem DSIG/DSTX image          Inferred (pairing)
=========== ======================================== ======================

Ids are resolved like the game's per-scene resource sets: first inside the
source's *group* (one character's archives — ChrArc, ``*c.aar``, ChrBin
tables, ChrWin — or, for anything else, its top-level file), then in the
common effect archives ``efc/*.aar``.  Unresolved ids are kept as
:attr:`Registry.unresolved` so the UI can flag stale references.
"""
from __future__ import annotations

import re
import struct
from collections import defaultdict
from dataclasses import dataclass, field
from typing import Callable, Iterable

from jus_formats import almt, notetrack

from .project import DataRoot, join, split

MAX_DEPTH = 4
EVIDENCE = {
    'texture': 'Cross-checked', 'image': 'Direct', 'spawn': 'Direct', 'pursuer': 'Direct',
    'pursuer-use': 'Direct', 'collision': 'Direct', 'shot': 'Inferred', 'tiles': 'Inferred',
    'koma-card': 'Inferred', 'koma-shape': 'Direct',
}
KIND_LABELS = {
    'texture': 'uses texture', 'image': 'uses image', 'spawn': 'spawns effect',
    'pursuer': 'pursuer slot', 'pursuer-use': 'selects pursuer slots', 'collision': 'collision descriptor',
    'shot': 'shot record', 'tiles': 'uses tiles', 'koma-card': 'card art', 'koma-shape': 'card shapes',
}
_CHR_RE = re.compile(r'([a-z]{2}_[bsh]_\d{2})', re.I)


@dataclass(frozen=True)
class Resource:
    path: str
    container: str
    name: str
    ext: str
    type_byte: int
    rid: int
    size: int
    compressed: bool
    group: str

    @property
    def short(self) -> str:
        return self.name.rsplit('/', 1)[-1]


@dataclass(frozen=True)
class Ref:
    src: str                  # resource path of the referencing member
    kind: str
    dst: str | None           # None = unresolved
    src_detail: str = ''      # e.g. 'move 24 (0x04C118) · GN01 key 0 @12'
    dst_detail: str = ''      # e.g. 'move 0x04C150'
    value: int | None = None  # the raw id / index that was resolved
    dst_move: int | None = None

    @property
    def evidence(self) -> str:
        return EVIDENCE.get(self.kind, 'Unknown')

    @property
    def label(self) -> str:
        return KIND_LABELS.get(self.kind, self.kind)


def group_of(path: str) -> str:
    """Resolution group: one character's archives, the common effects, or the top-level file."""
    parts = split(path)
    top = parts[0]
    if top.startswith('efc/'):
        return 'common'
    if top in ('chr/ChrArc.aar', 'chr/ChrBin.aar', 'battle/ChrWin.aar'):
        m = _CHR_RE.search(parts[1]) if len(parts) > 1 else None
        return 'chr:' + m.group(1).lower() if m else top
    if top.startswith('chr/'):
        m = _CHR_RE.search(top)
        if m:
            return 'chr:' + m.group(1).lower()
    return top


@dataclass
class Registry:
    resources: dict[str, Resource] = field(default_factory=dict)
    refs: list[Ref] = field(default_factory=list)
    moves: dict[str, list[tuple[int, int]]] = field(default_factory=dict)   # amt path -> [(index, id)]
    errors: list[str] = field(default_factory=list)

    def __post_init__(self):
        self._out: dict[str, list[Ref]] = defaultdict(list)
        self._in: dict[str, list[Ref]] = defaultdict(list)
        self._children: dict[str, list[str]] = defaultdict(list)
        self._by_id: dict[tuple[str, int, int], list[str]] = defaultdict(list)    # (group, type, rid)
        self._move_ids: dict[tuple[str, int], tuple[str, int]] = {}              # (group, id) -> (amt, index)
        self._move_any: dict[int, list[tuple[str, int]]] = defaultdict(list)

    # ------------------------------------------------------------ queries
    @property
    def unresolved(self) -> list[Ref]:
        return [r for r in self.refs if r.dst is None]

    def uses(self, path: str) -> list[Ref]:
        return list(self._out.get(path, ()))

    def used_by(self, path: str, move_id: int | None = None) -> list[Ref]:
        refs = self._in.get(path, ())
        if move_id is not None:
            refs = [r for r in refs if r.dst_move in (None, move_id)]
        return list(refs)

    def children(self, container: str) -> list[str]:
        return list(self._children.get(container, ()))

    def roots(self) -> list[str]:
        return sorted(p for p in self._children if len(split(p)) == 1)

    def search(self, text: str, exts: Iterable[str] | None = None, limit: int = 500) -> list[Resource]:
        """Name substring, or a hex/decimal id (resource id or move id)."""
        text = text.strip().lower()
        exts = set(exts) if exts else None
        num = None
        if re.fullmatch(r'(0x)?[0-9a-f]{3,8}', text):
            num = int(text, 16)
        out = []
        for r in self.resources.values():
            if exts and r.ext not in exts:
                continue
            hit = not text or text in r.path.lower()
            if num is not None and (r.rid == num & 0xFFFFFF or any(mid == num for _, mid in self.moves.get(r.path, ()))):
                hit = True
            if hit:
                out.append(r)
                if len(out) >= limit:
                    break
        return out

    def stats(self) -> dict:
        kinds = defaultdict(int)
        for r in self.refs:
            kinds[r.kind] += 1
        return {'resources': len(self.resources), 'refs': len(self.refs),
                'unresolved': len(self.unresolved), 'by_kind': dict(kinds)}

    # ------------------------------------------------------------ resolution
    def _resolve(self, group: str, type_byte: int, rid: int) -> str | None:
        for g in (group, 'common'):
            hits = self._by_id.get((g, type_byte, rid & 0xFFFFFF))
            if hits:
                return hits[0]
        return None

    def _resolve_move(self, group: str, move_id: int) -> tuple[str, int] | None:
        return self._move_ids.get((group, move_id)) or self._move_ids.get(('common', move_id))

    def _add(self, ref: Ref) -> None:
        self.refs.append(ref)
        self._out[ref.src].append(ref)
        if ref.dst:
            self._in[ref.dst].append(ref)


# ---------------------------------------------------------------- build

def build(root: DataRoot, progress: Callable[[str, float], None] | None = None,
          cancelled: Callable[[], bool] | None = None) -> Registry:
    reg = Registry()
    tops = [f.relative_to(root.root).as_posix() for f in sorted(root.root.rglob('*.aar'))]
    tables: list[tuple[str, almt.AlmtFile]] = []
    altms: list[Resource] = []
    chrbin: list[Resource] = []

    def walk(path: str, depth: int) -> None:
        try:
            arc = root.archive(path)
        except (ValueError, KeyError, OSError) as exc:
            reg.errors.append(f'{path}: {exc}')
            return
        for e in arc.entries:
            p = join(path, e.name)
            res = Resource(p, path, e.name, e.ext, e.type_byte, e.resource_id, len(e.data), e.compressed,
                           group_of(p))
            reg.resources[p] = res
            reg._children[path].append(p)
            reg._by_id[(res.group, e.type_byte, e.resource_id)].append(p)
            if e.ext == '.aar' and depth < MAX_DEPTH:
                walk(p, depth + 1)
            elif e.ext == '.amt':
                try:
                    t = almt.parse(e.payload())
                    tables.append((p, t))
                    reg.moves[p] = [(i, m.id) for i, m in enumerate(t.moves)]
                    for i, m in enumerate(t.moves):
                        reg._move_ids.setdefault((res.group, m.id), (p, i))
                        reg._move_any[m.id].append((p, i))
                except (ValueError, IndexError, struct.error) as exc:
                    reg.errors.append(f'{p}: {exc}')
            elif e.ext == '.atm':
                altms.append(res)
            elif e.ext == '.bin' and split(path)[0] == 'chr/ChrBin.aar':
                chrbin.append(res)

    for i, top in enumerate(tops):
        if cancelled and cancelled():
            return reg
        if progress:
            progress(f'Scanning {top}', 0.6 * i / max(1, len(tops)))
        reg._children.setdefault(top, [])
        walk(top, 0)

    # -- edges: DSTX -> DSIG -------------------------------------------------
    for r in list(reg.resources.values()):
        if r.type_byte == 0x40 and r.ext == '.dtx':
            img = reg._by_id.get((r.group, 0x42, r.rid))
            same = [p for p in (img or ()) if split(p)[:-1] == split(r.path)[:-1]] or (img or [])
            if same:
                reg._add(Ref(r.path, 'image', same[0], value=r.rid))
    # -- edges: ALMT --------------------------------------------------------
    for n, (path, table) in enumerate(tables):
        if cancelled and cancelled():
            return reg
        if progress and n % 50 == 0:
            progress(f'Linking {path}', 0.6 + 0.35 * n / max(1, len(tables)))
        _link_almt(reg, root, path, table)
    # -- edges: ChrBin tables -------------------------------------------------
    for r in chrbin:
        _link_chrbin(reg, root, r)
    # -- edges: ALTM tiles ----------------------------------------------------
    for r in altms:
        stem = r.short.rsplit('.', 1)[0]
        for ext in ('.dig', '.dtx'):
            cand = join(r.container, r.name.rsplit('.', 1)[0] + ext)
            if cand in reg.resources:
                reg._add(Ref(r.path, 'tiles', cand, dst_detail=stem))
                break
    # -- edges: koma cards (bin/koma.bin) → art and shape dictionary ----------
    _link_koma(reg, root)
    if progress:
        progress('Done', 1.0)
    return reg


def _link_koma(reg: Registry, root: DataRoot) -> None:
    from . import komacards
    if not ((root.root / komacards.CARDS).is_file() and (root.root / komacards.SHAPES).is_file()
            and komacards.KOMA_ARCHIVE in reg._children):
        return
    try:
        cat = komacards.load(root)
    except (ValueError, KeyError, OSError) as exc:
        reg.errors.append(f'{komacards.CARDS}: {exc}')
        return
    for rel in (komacards.CARDS, komacards.SHAPES):
        reg.resources[rel] = Resource(rel, '', rel, '.bin', 0, 0, len(root.read(rel)), False, rel)
        reg._children.setdefault(rel, [])
    reg._add(Ref(komacards.CARDS, 'koma-shape', komacards.SHAPES,
                 f'{len(cat.cards.cards)} cards', f'{len(cat.shapes.shapes)} shapes'))
    for card in cat.cards.cards:
        cands = cat.series.get(card.series_id, [])
        targets = cat.art_for_card(card)
        shape = f'shape size {card.size} variant {card.variant}'
        if not targets:
            reg._add(Ref(komacards.CARDS, 'koma-card', None, f'card {card.index}',
                         f'series {card.series_id} art {card.art_index}', card.index))
        for t in targets:
            note = '' if len(cands) == 1 else f' (ambiguous series: {"/".join(cands)})'
            reg._add(Ref(komacards.CARDS, 'koma-card', t, f'card {card.index} · {shape}{note}',
                         f'series {card.series_id} art {card.art_index}', card.index))


def _keys(tr: almt.Track):
    if tr.opaque:
        return []
    return [(k.tick, k.value) for k in tr.keys] if tr.keyed else [(0, tr.value)]


def _link_almt(reg: Registry, root: DataRoot, path: str, table: almt.AlmtFile) -> None:
    group = group_of(path)
    seen_tex: set[tuple[int, int]] = set()
    cid = group[4:] if group.startswith('chr:') else None
    col_table = join('chr/ChrBin.aar', f'chr/col/{cid}.bin') if cid else None
    eff_table = join('chr/ChrBin.aar', f'chr/effect/{cid}.bin') if cid else None
    for mi, m in enumerate(table.moves):
        mlabel = f'move {mi} (0x{m.id:06X})'
        occ: dict[int, int] = defaultdict(int)
        for ni, node in enumerate(m.nodes):
            if node is None:
                continue
            nname = table.node_names[ni] if ni < len(table.node_names) else f'N{ni}'
            for tr in node.tracks:
                f = tr.field
                if f == 'TextureID':
                    for tick, v in _keys(tr):
                        if not isinstance(v, int) or (mi, v) in seen_tex:
                            continue
                        seen_tex.add((mi, v))
                        dst = reg._resolve(group, 0x40, v)
                        reg._add(Ref(path, 'texture', dst, f'{mlabel} · {nname}', f'id 0x{v & 0xFFFFFF:06X}', v))
                elif f == 'GenerateID' and tr.keyed and not tr.opaque:
                    for ki, k in enumerate(tr.keys):
                        if not k.value:
                            continue
                        hit = reg._resolve_move(group, k.value)
                        o = occ[k.value]
                        occ[k.value] += 1
                        reg._add(Ref(path, 'spawn', hit[0] if hit else None,
                                     f'{mlabel} · {nname} key {ki} @{k.tick}' + (f' (#{o})' if o else ''),
                                     f'move 0x{k.value:06X}', k.value, k.value))
                elif f.startswith('CollisionType') and col_table:
                    vals = {v for _, v in _keys(tr) if isinstance(v, int) and v >= 0x100}
                    for v in sorted(vals):
                        dst = col_table if col_table in reg.resources else None
                        reg._add(Ref(path, 'collision', dst, f'{mlabel} · {nname}.{f}',
                                     f'record {v - 0x100}', v))
                elif f == 'NoteTrack' and eff_table:
                    try:
                        nt = notetrack.parse(tr.encoded())
                    except (ValueError, IndexError, struct.error):
                        continue
                    for key in nt.keys:
                        for cmd in key.commands:
                            vals = cmd.values() if cmd.opcode == 0x0300 else None
                            if vals and vals[0] == 13:
                                dst = eff_table if eff_table in reg.resources else None
                                reg._add(Ref(path, 'pursuer-use', dst, f'{mlabel} · {nname} @{key.tick}',
                                             f'slots {vals[1]}/{vals[2]}', vals[1]))


def _link_chrbin(reg: Registry, root: DataRoot, r: Resource) -> None:
    kind = r.name.replace('\\', '/').split('/')[-2] if '/' in r.name else ''
    group = r.group
    try:
        blob = root.read(r.path)
    except (ValueError, KeyError):
        return
    if kind == 'effect' and len(blob) % 8 == 0:
        for i in range(len(blob) // 8):
            mid = struct.unpack_from('<I', blob, i * 8)[0]
            if not mid:
                continue
            hit = reg._resolve_move(group, mid)
            reg._add(Ref(r.path, 'pursuer', hit[0] if hit else None, f'record {i}', f'move 0x{mid:06X}', mid, mid))
    elif kind == 'shot' and len(blob) % 32 == 0:
        for i in range(len(blob) // 32):
            mid = struct.unpack_from('<I', blob, i * 32 + 0x0C)[0]
            if not mid:
                continue
            hit = reg._resolve_move(group, mid)
            if hit:                       # only matched ids: the field meaning is inferred
                reg._add(Ref(r.path, 'shot', hit[0], f'record {i} +0x0C', f'move 0x{mid:06X}', mid, mid))
