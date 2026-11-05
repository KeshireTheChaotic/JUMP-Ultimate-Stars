"""NoteTrack sound cues → SDAT sequence names (no GUI dependencies).

Traced (battle overlay 6 / ARM9 main):

* Audio table ``ov06 0x02171FF4`` (opcode low byte):
  ``0x0400 → 0x021569CC``: ``FUN_0207342C(0x7A, seq)`` — SSAR 122 ``SEQ_BATTLE``;
  ``0x0401 → 0x021569E0``: ``FUN_0207342C(chara+0xA4, seq)``, nothing when 0;
  ``0x0402 → 0x021569FC``: ``FUN_0207342C(chara+0xA6, seq)``, nothing when 0.
* ``main FUN_0207342C(ssar, seq)`` keys the request as ``seq << 16 | ssar`` and
  ignores it when the same pair was already requested (the list is cleared by
  the sound update), then starts SSAR sequence ``seq`` (``FUN_0205DAAC``) on the
  SE player and applies the SE settings (``FUN_0205B910`` / ``FUN_0205B8C4``,
  byte ``0x0214BD4D``).
* ``ov06 FUN_02157114`` copies +0xA4/+0xA6 from the character form record
  (+0x1E/+0x20) when a form is set up.

Archive mapping used here (**Inferred**, consistent on all 74 characters):
``bin/chr_b.bin`` holds 74 records of 60 bytes in battle-character order
(the sorted ``*_b_*`` list); the u16 words at +0x30..+0x3A list the
character's SSARs.  ``SEQ_DB_B_NN`` (no suffix) is the character archive used
by ``0x0401``; ``SEQ_DB_B_NN_k`` belongs to the special-move archive
``chr/<char>_k.aar`` and is what ``0x0402`` plays for moves stored there.

Audible preview is implemented separately by jus_formats.audio and jus_package.audio_preview.
"""
from __future__ import annotations

import re
import struct
from dataclasses import dataclass
from pathlib import Path

from jus_formats import almt, notetrack, sdat

FUNCTIONS = {0x0400: 0x021569CC, 0x0401: 0x021569E0, 0x0402: 0x021569FC}
PLAY = 0x0207342C
RECORD = 60
TAIL = range(0x30, 0x3C, 2)
_ARCHIVE = re.compile(r'SEQ_DB_B_\d+(?:_(\d+))?', re.I)   # base, or _k = special-move archive k


@dataclass(frozen=True)
class Cue:
    tick: int
    node: str
    opcode: int
    seq: int
    ssar: int | None          # None = the character has no archive for this slot → silent
    ssar_name: str
    name: str | None          # sequence symbol
    evidence: str
    note: str = ''

    @property
    def label(self) -> str:
        if self.ssar is None:
            return f'({"unresolved" if self.evidence == "Unknown" else "silent"}) {self.note}'
        return self.name or f'{self.ssar_name}[{self.seq}]'


class SoundResolver:
    def __init__(self, data_root: Path | str):
        root = Path(data_root)
        self.symbols: sdat.SdatSymbols | None = None
        self.records: list[list[int]] = []
        self.characters: list[str] = []
        try:
            f = next((root / 'sound').glob('*.sdat'), None)
            if f:
                self.symbols = sdat.parse_symbols(f.read_bytes())
        except (OSError, ValueError, IndexError, struct.error):
            self.symbols = None
        try:
            b = (root / 'bin' / 'chr_b.bin').read_bytes()
            self.records = [[struct.unpack_from('<H', b, i * RECORD + o)[0] for o in TAIL]
                            for i in range(len(b) // RECORD)]
        except OSError:
            self.records = []

    def set_characters(self, battle_chars: list[str]) -> None:
        """Sorted ``*_b_*`` character ids; record *i* belongs to character *i*."""
        self.characters = sorted(battle_chars)

    # ------------------------------------------------------------ archives
    def _name(self, ssar: int) -> str:
        if self.symbols and 0 <= ssar < len(self.symbols.seqarcs):
            return self.symbols.seqarcs[ssar].name or f'SSAR {ssar}'
        return f'SSAR {ssar}'

    def archives(self, char: str) -> dict[str | int, int]:
        """{'base': ssar, k: ssar for sub-archive _k} for a battle character."""
        if char not in self.characters or self.characters.index(char) >= len(self.records):
            return {}
        out: dict = {}
        for v in self.records[self.characters.index(char)]:
            m = _ARCHIVE.fullmatch(self._name(v)) if v else None
            if m:
                out[int(m.group(1)) if m.group(1) else 'base'] = v
        return out

    def resolve(self, opcode: int, seq: int, container: str | None, tick: int = 0, node: str = '') -> Cue:
        if opcode not in FUNCTIONS:
            raise ValueError(f'Not an audio opcode: 0x{opcode:04X}')
        char, sub = _char_and_sub(container or '')
        if opcode == 0x0400:
            ssar = sdat.SEQ_BATTLE
            return Cue(tick, node, opcode, seq, ssar, self._name(ssar), self._seq(ssar, seq), 'Direct')
        arcs = self.archives(char) if char else {}
        note = ''
        if not arcs:
            return Cue(tick, node, opcode, seq, None, '', None, 'Unknown',
                       f'cannot resolve the sound archive for {char or "this table"} from available metadata')
        if opcode == 0x0401:
            ssar = arcs.get('base')
            if ssar is None:
                note = 'no base archive listed (+0xA4 = 0 → silent)'
        else:
            specials = {k: v for k, v in arcs.items() if k != 'base'}
            ssar = specials.get(sub) if sub is not None else None
            if ssar is None and specials:
                k = sorted(specials)[0]
                ssar = specials[k]
                if len(specials) > 1:
                    note = ('form-dependent: ' + ' / '.join(f'_{x}' for x in sorted(specials)) +
                            f'; showing _{k}')
            if ssar is None:
                note = 'no special-move archive listed (+0xA6 = 0 → silent)'
        if ssar is None:
            return Cue(tick, node, opcode, seq, None, '', None, 'Inferred', note)
        name = self._seq(ssar, seq)
        if self.symbols and (seq < 0 or seq >= len(self.symbols.seqarcs[ssar].sequences)):
            note = (note + '; ' if note else '') + 'index outside the archive'
        return Cue(tick, node, opcode, seq, ssar, self._name(ssar), name, 'Inferred',
                   note or 'archive from chr_b.bin (record order + SSAR names)')

    def _seq(self, ssar: int, seq: int) -> str | None:
        return self.symbols.sound_name(ssar, seq) if self.symbols else None

    def cues(self, move: almt.Move, node_names: list[str], container: str | None) -> list[Cue]:
        out = []
        for ni, node in enumerate(move.nodes):
            if node is None:
                continue
            tr = node.track('NoteTrack')
            if tr is None:
                continue
            try:
                nt = notetrack.parse(tr.encoded())
            except (ValueError, IndexError, struct.error):
                continue
            name = node_names[ni] if ni < len(node_names) else f'N{ni}'
            for key in nt.keys:
                for c in key.commands:
                    if c.opcode in FUNCTIONS:
                        v = c.values() or [0]
                        out.append(self.resolve(c.opcode, v[0], container, key.tick, name))
        out.sort(key=lambda c: c.tick)
        return out


def dedupe_same_frame(cues: list[Cue]) -> list[tuple[Cue, bool]]:
    """(cue, played) — FUN_0207342C ignores a repeated (ssar, seq) in the same frame."""
    seen: set = set()
    out = []
    for c in cues:
        key = (c.tick, c.ssar, c.seq)
        played = c.ssar is not None and key not in seen
        seen.add(key)
        out.append((c, played))
    return out


def _char_and_sub(container: str) -> tuple[str | None, int | None]:
    m = re.search(r'([a-z]{2}_b_\d{2})(?:_(\d+))?\.aar', container, re.I)
    if not m:
        return None, None
    return m.group(1).lower(), int(m.group(2)) if m.group(2) else None
