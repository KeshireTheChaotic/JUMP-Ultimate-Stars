"""Koma cards ↔ koma art (no GUI dependencies).

``bin/koma.bin`` cards select a shape from ``bin/kshape.bin`` and point at
their art with (series id, art index).  The art lives in ``koma/koma.aar`` as
``koma/<prefix>_<NN>.dtx``.  **Direct:** ``FUN_020790F0`` fills the template
``koma/??_??.dtx`` with ``KOMA_SERIES_PREFIXES[byte +4]`` (ARM9 table
``0x0209E840``, see :mod:`jus_formats.roster`) and byte +5 as two digits.
The panel counts of every card match its art (checked in :func:`load`,
reported by :meth:`KomaCatalog.problems` if they ever disagree).

The same function lays the deck out on a 5×4 board of 48-px cells and fills
empty cells with ``koma/dt_20.dtx``; ``dt_21``..``dt_27`` (2..8 panels) have no
card either.
"""
from __future__ import annotations

import re
from dataclasses import dataclass, field

from jus_formats import kshape
from jus_formats.roster import KOMA_SERIES_PREFIXES

from .project import DataRoot, join

KOMA_ARCHIVE = 'koma/koma.aar'
CARDS = 'bin/koma.bin'
SHAPES = 'bin/kshape.bin'
_ART = re.compile(r'koma/([a-z]+)_(\d+)\.dtx$', re.I)


@dataclass
class KomaCatalog:
    shapes: kshape.ShapeTable
    cards: kshape.CardTable
    art: dict[str, list[tuple[int, str, int]]]          # prefix -> [(number, member name, panels)]
    series: dict[int, list[str]] = field(default_factory=dict)   # series id -> candidate prefixes

    # ------------------------------------------------------------ lookups
    def art_path(self, prefix: str, number: int) -> str | None:
        for n, name, _ in self.art.get(prefix, ()):
            if n == number:
                return join(KOMA_ARCHIVE, name)
        return None

    def cards_for_art(self, member_name: str) -> list[tuple[kshape.Card, bool]]:
        """Cards that may use this art: [(card, unique)] — unique False = ambiguous series."""
        m = _ART.search(member_name)
        if not m:
            return []
        prefix, number = m.group(1).lower(), int(m.group(2))
        out = []
        for sid, cands in self.series.items():
            if prefix in cands:
                for c in self.cards.by_series().get(sid, ()):
                    if c.art_index == number:
                        out.append((c, len(cands) == 1))
        return out

    def art_for_card(self, card: kshape.Card) -> list[str]:
        return [p for p in (self.art_path(pre, card.art_index) for pre in self.series.get(card.series_id, ()))
                if p]

    def problems(self) -> list[str]:
        out = [p for s in self.shapes.shapes for p in s.problems()]
        for sid, cands in sorted(self.series.items()):
            if not cands:
                out.append(f'series id {sid}: no art prefix in the ARM9 table')
        out += self.mismatches
        return out

    mismatches: list[str] = field(default_factory=list)   # card size ≠ art panel count


def load(root: DataRoot) -> KomaCatalog:
    shapes = kshape.ShapeTable.parse(root.read(SHAPES))
    cards = kshape.CardTable.parse(root.read(CARDS), shapes)
    art: dict[str, list] = {}
    for e in root.archive(KOMA_ARCHIVE).entries:
        m = _ART.search(e.name)
        if not m:
            continue
        payload = e.payload()
        panels = payload[6] | (payload[7] << 8)
        art.setdefault(m.group(1).lower(), []).append((int(m.group(2)), e.name, panels))
    for v in art.values():
        v.sort()
    cat = KomaCatalog(shapes, cards, art)
    cat.series = {sid: ([KOMA_SERIES_PREFIXES[sid]] if 0 < sid < len(KOMA_SERIES_PREFIXES) else [])
                  for sid in cards.by_series()}
    panels = {(p, n): count for p, files in art.items() for n, _, count in files}
    for c in cards.cards:
        pre = cat.series.get(c.series_id, [None])[0] if cat.series.get(c.series_id) else None
        count = panels.get((pre, c.art_index))
        if count is None:
            cat.mismatches.append(f'card {c.index}: koma/{pre}_{c.art_index:02d}.dtx missing')
        elif count != c.size:
            cat.mismatches.append(f'card {c.index}: shape has {c.size} cells, art has {count} panels')
    return cat


def match_series(cards: kshape.CardTable, art: dict[str, list]) -> dict[int, list[str]]:
    out: dict[int, list[str]] = {}
    for sid, group in sorted(cards.by_series().items()):
        expected = [c.size for c in group]
        cands = []
        for prefix, files in sorted(art.items()):
            counts = [p for _, _, p in files]
            if counts[:len(expected)] != expected:
                continue
            extra = len(counts) - len(expected)
            if extra == 0 or (prefix == 'dt' and extra == 8):
                cands.append(prefix)
        out[sid] = cands
    return out
