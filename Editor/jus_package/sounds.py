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
* ``ov06 FUN_02157114`` copies +0xA4/+0xA6 into the NoteTrack object from the
  form record (+0x1E/+0x20) when a form is set up (``Battle_CharaCreate``,
  form switch ``FUN_02157328``).

Where the form record comes from (**Direct**, ARM9 main):
a "form" is a koma card in the deck.  ``FUN_02076E38`` builds one deck node
per card (koma.bin record; byte +6 = type, +7 = character record, +8 = size−1)
and zero-fills its form record; the type's init function fills it:

* type 0, battle koma — ``FUN_02077C0C``: record ``chr_b.bin[+7]`` (60 bytes);
  +0x1E (→ +0xA4, ``0x0401``) = record ``+0x30``;
  +0x20 (→ +0xA6, ``0x0402``) = record ``+0x32 + (size − 4)·2``  (sizes 4..8);
* type 1, support koma — ``FUN_02077CB8``: record ``chr_s.bin[+7]`` (20 bytes);
  +0x20 = record ``+0x10 + (size − 2)·2`` (sizes 2..3); +0x1E is never written (0).

Checked on the shipped data: every non-zero slot names ``SEQ_<CHAR>`` /
``SEQ_<CHAR>_<size>`` (battle 187/187 in roster order, support 242/242), so
the special-move archive ``chr/<char>_<k>.aar`` is the *k*-cell koma.

* ``0x0402`` in a move of ``<char>_<k>.aar``: slot *k* (0 → silent, Direct).
* ``0x0402`` in a base-archive move: the slot of the koma the character was
  deployed with — a deck choice.  If ``koma.bin`` has battle cards of one size
  only for that character it is resolved; otherwise the cue lists each size's
  outcome and the editor can preview one size.
* ``0x0401`` (battle): record +0x30 (0 → silent).  Support: the summon
  (``ov06 FUN_021574CC`` case 7) gives the support its own NoteTrack
  (``Battle_NoteTrackCreate`` zero-fills 0xA8 bytes) and sets only +0xA6, so
  support ``0x0401`` plays nothing.  Spawned effect actors
  (``ov06 FUN_0216FB10``) copy their parent's +0xA4/+0xA6.
* Record order: ``chr_b.bin`` / ``chr_s.bin`` follow the ARM9 name tables
  (``roster.BATTLE_IDS`` / ``SUPPORT_IDS``; record 0 = ``db_b_01``).
  Without them the editor falls back to the exact-symbol rule.

Audible preview is implemented separately by jus_formats.audio and jus_package.audio_preview.
"""
from __future__ import annotations

import re
import struct
from dataclasses import dataclass
from pathlib import Path

from jus_formats import almt, notetrack, roster, sdat
from .notecommands import iter_note_commands

FUNCTIONS = {0x0400: 0x021569CC, 0x0401: 0x021569E0, 0x0402: 0x021569FC}
PLAY = 0x0207342C
RECORD = 60                       # chr_b.bin
TAIL = range(0x30, 0x3C, 2)       # +0x30 base (+0xA4), +0x32.. 4..8-cell koma (+0xA6)
S_RECORD = 20                     # chr_s.bin
S_TAIL = (0x10, 0x12)             # 2- and 3-cell support koma (+0xA6)


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
        try:
            self.record_names = roster.record_names((root / 'bin' / 'chr_b_t.bin').read_bytes())
        except (OSError, ValueError, struct.error):
            self.record_names = []
        self.roster: list[str] = []          # chr_b record order → battle id (empty = unknown)
        self.roster_error = ''
        try:
            s = (root / 'bin' / 'chr_s.bin').read_bytes()
            self.support_records = [[struct.unpack_from('<H', s, i * S_RECORD + o)[0] for o in S_TAIL]
                                    for i in range(len(s) // S_RECORD)]
        except OSError:
            self.support_records = []
        try:
            k = (root / 'bin' / 'koma.bin').read_bytes()
            # (type, character record, size) per card — type 0 battle koma, 1 support koma
            self.koma_cards = [(k[i + 6], k[i + 7], k[i + 8] + 1) for i in range(0, len(k) - 11, 12)]
        except OSError:
            self.koma_cards = []
        self._by_name: dict[str, int] = {}
        self._support_index: dict[str, int] = {}
        self._index_names()

    def _index_names(self) -> None:
        self._by_name = ({a.name.upper(): a.index for a in self.symbols.seqarcs if a.name}
                         if self.symbols else {})
        self._indexed_for = self.symbols
        # support id → chr_s record: the record's slots name SEQ_<SUPPORT>_<size>
        self._support_index = {}
        for i, rec in enumerate(getattr(self, 'support_records', [])):
            for v in rec:
                m = re.fullmatch(r'SEQ_([A-Z]{2}_S_\d{2})_\d+', self._name(v)) if v else None
                if m:
                    self._support_index.setdefault(m.group(1).lower(), i)

    def set_characters(self, battle_chars: list[str]) -> None:
        """Battle ``*_b_*`` ids; the chr_b record order is the game's table (roster.BATTLE_IDS).

        The ARM9 table is used when chr_b.bin has exactly its 74 records and every id
        exists; otherwise the order is re-derived from chr_b_t.bin name blocks.
        """
        self.characters = sorted(battle_chars)
        self.roster, self.roster_error = [], ''
        if len(self.records) == len(roster.BATTLE_IDS) and set(roster.BATTLE_IDS) <= set(self.characters):
            self.roster = list(roster.BATTLE_IDS)
            if self.record_names:
                try:
                    if roster.battle_roster(self.characters, self.record_names) != self.roster:
                        self.roster_error = 'chr_b_t.bin name blocks disagree with the ARM9 table'
                except ValueError as exc:
                    self.roster_error = f'chr_b_t.bin check: {exc}'
        elif self.record_names:
            try:
                self.roster = roster.battle_roster(self.characters, self.record_names)
            except ValueError as exc:
                self.roster_error = str(exc)

    def display_name(self, char: str) -> str | None:
        """In-game name of a battle character (chr_b_t.bin), when the roster is known."""
        if char in self.roster:
            return self.record_names[self.roster.index(char)].replace('|', ' ')
        return None

    # ------------------------------------------------------------ archives
    def _name(self, ssar: int) -> str:
        if self.symbols and 0 <= ssar < len(self.symbols.seqarcs):
            return self.symbols.seqarcs[ssar].name or f'SSAR {ssar}'
        return f'SSAR {ssar}'

    def _count(self, ssar: int) -> int:
        return len(self.symbols.seqarcs[ssar].sequences) if self.symbols else 0

    def archives(self, char: str) -> dict[str | int, int]:
        """{'base': ssar, k: ssar of form archive _k} by exact SDAT symbol ``SEQ_<CHAR>[_k]``."""
        if not self.symbols or not char:
            return {}
        if getattr(self, '_indexed_for', None) is not self.symbols:    # symbols replaced (tests, reload)
            self._index_names()
        stem = 'SEQ_' + char.upper()
        out: dict = {}
        for name, idx in self._by_name.items():
            if name == stem:
                out['base'] = idx
            elif name.startswith(stem + '_') and name[len(stem) + 1:].isdigit():
                out[int(name[len(stem) + 1:])] = idx
        return out

    def chr_b_archives(self, char: str) -> list[int]:
        """Non-zero SSAR ids in the character's chr_b.bin record (+0x30..+0x3A)."""
        if char in self.roster and self.roster.index(char) < len(self.records):
            return [v for v in self.records[self.roster.index(char)] if v]
        return []

    # ------------------------------------------------------------ traced form records
    def record(self, char: str) -> tuple[str, int] | None:
        """('b', chr_b record) or ('s', chr_s record) of a character, when known."""
        if '_b_' in char and char in self.roster and self.roster.index(char) < len(self.records):
            return 'b', self.roster.index(char)
        if '_s_' in char:
            if len(self.support_records) == len(roster.SUPPORT_IDS) and char in roster.SUPPORT_IDS:
                return 's', roster.SUPPORT_IDS.index(char)          # ARM9 table 0x02092700
            if getattr(self, '_indexed_for', None) is not self.symbols:
                self._index_names()
            if char in self._support_index:                          # fallback: slot names
                return 's', self._support_index[char]
        return None

    def slots(self, char: str) -> dict | None:
        """Traced sound slots: {'base': ssar|0, size: ssar|0} (0 = silent); None = record unknown."""
        rec = self.record(char)
        if rec is None:
            return None
        kind, i = rec
        if kind == 'b':
            words = self.records[i]
            return {'base': words[0], **{size: words[1 + size - 4] for size in range(4, 9)}}
        words = self.support_records[i]
        return {size: words[size - 2] for size in (2, 3)}

    def deck_sizes(self, char: str) -> list[int]:
        """Sizes of the koma cards (koma.bin) that deploy this character."""
        rec = self.record(char)
        if rec is None:
            return []
        want = 0 if rec[0] == 'b' else 1
        return sorted({size for t, r, size in self.koma_cards if t == want and r == rec[1]})

    def forms(self, container: str | None) -> list[int]:
        """Koma sizes that can be previewed for base-archive 0x0402 cues of this archive."""
        char, _ = _char_and_sub(container or '')
        if not char:
            return []
        slots = self.slots(char)
        if slots is not None:
            return self.deck_sizes(char) or sorted(k for k in slots if k != 'base')
        return sorted(k for k in self.archives(char) if k != 'base')

    def resolve(self, opcode: int, seq: int, container: str | None, tick: int = 0, node: str = '',
                form: int | None = None, card_index: int | None = None) -> Cue:
        """``form`` = koma size chosen for preview of base-archive 0x0402 cues (never inferred)."""
        if opcode not in FUNCTIONS:
            raise ValueError(f'Not an audio opcode: 0x{opcode:04X}')
        char, sub = _char_and_sub(container or '')
        if opcode == 0x0400:
            ssar = sdat.SEQ_BATTLE
            return Cue(tick, node, opcode, seq, ssar, self._name(ssar), self._seq(ssar, seq), 'Direct')
        if not self.symbols:
            return Cue(tick, node, opcode, seq, None, '', None, 'Unknown',
                       'cannot resolve the sound archive: no SDAT symbols in the data root')
        if not char:
            return Cue(tick, node, opcode, seq, None, '', None, 'Unknown',
                       'not a character archive: the owning character is unknown')
        slots = self.slots(char)
        if slots is None:
            return self._resolve_by_symbol(opcode, seq, char, sub, tick, node, form)
        src = 'chr_b.bin' if '_b_' in char else 'chr_s.bin'
        if opcode == 0x0401:
            if '_s_' in char:
                # The support summon (ov06 FUN_021574CC case 7) creates the support's own NoteTrack
                # (Battle_NoteTrackCreate zero-fills it) and sets only +0xA6.
                return self._slot(tick, node, opcode, seq, 0,
                                  "support NoteTrack +0xA4 (never set by the summon, ov06 0x021574CC)")
            return self._slot(tick, node, opcode, seq, slots['base'], f'{src} +0x30 (+0xA4)')
        if sub is not None:
            return self._slot(tick, node, opcode, seq, slots.get(sub, 0),
                              f'{sub}-cell koma: {src} slot (+0xA6)')
        sizes = self.deck_sizes(char) or sorted(k for k in slots if k != 'base')
        if form is not None and form in slots:
            # Koma Roster selection is a concrete original form record. The
            # preview bank is exact for that selected card, even though a real
            # match may deploy a different card (do not claim live selection).
            if card_index is not None and 0 <= card_index < len(self.koma_cards):
                typ, rec_index, card_size = self.koma_cards[card_index]
                if (typ, rec_index, card_size) == (
                        0 if '_b_' in char else 1, self.record(char)[1], form):
                    return self._slot(
                        tick, node, opcode, seq, slots[form],
                        f'original Koma #{card_index} ({form}-cell), '
                        f'{src} form slot; exact for this selected Koma preview')
            c = self._slot(tick, node, opcode, seq, slots[form],
                           f'preview: deployed with a {form}-cell koma (a deck choice in the game)')
            return Cue(c.tick, c.node, c.opcode, c.seq, c.ssar, c.ssar_name, c.name, 'Unknown', c.note)
        if len(sizes) == 1:
            return self._slot(tick, node, opcode, seq, slots.get(sizes[0], 0),
                              f'koma.bin deploys this character only as a {sizes[0]}-cell koma')
        outcomes = ' / '.join(f'{n}-cell → ' + (self._seq(slots[n], seq) or self._name(slots[n])
                                                  if slots.get(n) else 'silent') for n in sizes)
        return self._unresolved(tick, node, opcode, seq, f'depends on the koma deployed: {outcomes}')

    def _slot(self, tick, node, opcode, seq, ssar, note) -> Cue:
        if not ssar:
            return Cue(tick, node, opcode, seq, None, '', None, 'Direct',
                       f'{note} is 0: the handler plays nothing')
        return self._found(tick, node, opcode, seq, ssar, note, 'Cross-checked')

    def _resolve_by_symbol(self, opcode, seq, char, sub, tick, node, form) -> Cue:
        """Fallback when the form record is unknown: exact SDAT symbol SEQ_<CHAR>[_k]."""
        arcs = self.archives(char)
        if opcode == 0x0401:
            if '_s_' in char:
                return self._unresolved(tick, node, opcode, seq, 'support 0x0401: owner/record unknown')
            ssar = arcs.get('base')
            if ssar is None:
                return self._unresolved(tick, node, opcode, seq, f'no SEQ_{char.upper()} in the SDAT')
            return self._found(tick, node, opcode, seq, ssar, 'exact SDAT symbol match (record unknown)')
        specials = {k: v for k, v in arcs.items() if k != 'base'}
        k = sub if sub is not None else form
        if k is not None and k in specials:
            c = self._found(tick, node, opcode, seq, specials[k], 'exact SDAT symbol match (record unknown)')
            return c if sub is not None else Cue(c.tick, c.node, c.opcode, c.seq, c.ssar, c.ssar_name, c.name,
                                                 'Unknown', f'preview: {k}-cell koma')
        if sub is not None:
            return self._unresolved(tick, node, opcode, seq,
                                    f'active form/owner: no SEQ_{char.upper()}_{sub} in the SDAT')
        cands = ', '.join(f'SEQ_{char.upper()}_{x}' for x in sorted(specials)) or 'none'
        return self._unresolved(tick, node, opcode, seq, f'depends on the koma deployed; candidates: {cands}')

    def _found(self, tick, node, opcode, seq, ssar, note, evidence='Inferred') -> Cue:
        if not 0 <= seq < self._count(ssar):
            note = (note + '; ' if note else '') + f'index {seq} outside the archive ({self._count(ssar)} sequences)'
        return Cue(tick, node, opcode, seq, ssar, self._name(ssar), self._seq(ssar, seq), evidence, note)

    @staticmethod
    def _unresolved(tick, node, opcode, seq, note) -> Cue:
        return Cue(tick, node, opcode, seq, None, '', None, 'Unknown', note)

    def _seq(self, ssar: int, seq: int) -> str | None:
        return self.symbols.sound_name(ssar, seq) if self.symbols else None

    def cues(self, move: almt.Move, node_names: list[str], container: str | None,
             form: int | None = None, card_index: int | None = None) -> list[Cue]:
        out = []
        for item in iter_note_commands(move, node_names):
            command = item.command
            if command.opcode in FUNCTIONS:
                values = command.values() or [0]
                out.append(self.resolve(command.opcode, values[0], container,
                                        item.tick, item.node, form, card_index))
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
    """(character id, form archive number) of ``chr/<xx>_<b|s>_NN[_k].aar`` (battle or support)."""
    m = re.search(r'([a-z]{2}_[bs]_\d{2})(?:_(\d+))?\.aar', container, re.I)
    if not m:
        return None, None
    return m.group(1).lower(), int(m.group(2)) if m.group(2) else None
