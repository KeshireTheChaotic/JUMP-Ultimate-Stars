"""Original binary-backed Koma ↔ ALMT ↔ move text cross-references.

The Editor displays English supplied BIN literals and real ALMT resource IDs.
No move/character text is duplicated into the game assets, and unknown normal
animation names are never inferred. All lookups use DataRoot session content.

Code witnesses: ov05 0214E0A4/0214E11C (battle title/description slot),
ov06 02159EF8 / ROM 021712B8 (4..8-koma Special A/B offsets), ARM9
02074728/02074CF4 (battle/support roster archive names), ov05
0214E370/0214E3D4 (original support title/type and two description pointers),
ChrArc AAR support _2/_3 AMT resource families, bin/koma.bin record fields.
"""
from __future__ import annotations

import struct
from dataclasses import dataclass

from jus_formats import almt, battleinput, kshape, roster
from .project import DataRoot, join

BATTLE_TEXT_PATH = 'bin/chr_b_t.bin'
SUPPORT_TEXT_PATH = 'bin/chr_s_t.bin'
KOMA_PATH = 'bin/koma.bin'
BATTLE_GROUP = 53
SUPPORT_GROUP = 9
BATTLE_TEXT_SLOTS = 51  # 51/52 are non-pointer fields, verified ov05 0214E318


def _records(blob: bytes, count: int, group: int, text_slots: int) -> tuple[tuple[str, ...], ...]:
    """Validate self-relative signed pointers. Non-text slots are not decoded."""
    total = count * group * 4
    if len(blob) < total or struct.unpack_from('<i', blob, 0)[0] != total:
        raise ValueError(f'text BIN: expected {count} records, {group} words each')
    out = []
    for row in range(count):
        values = []
        for slot in range(text_slots):
            at = (row * group + slot) * 4
            target = at + struct.unpack_from('<i', blob, at)[0]
            if not 0 <= target < len(blob):
                raise ValueError(f'text BIN pointer outside file: record={row}, slot={slot}')
            end = blob.find(b'\0', target)
            if end < 0:
                raise ValueError(f'text BIN unterminated string: record={row}, slot={slot}')
            values.append(blob[target:end].decode('shift_jis', errors='replace'))
        out.append(tuple(values))
    return tuple(out)


def visual_text(literal: str) -> str:
    """Display-only conversion; preserves every source byte in the BIN."""
    return literal.replace('|', ' ').strip()


@dataclass(frozen=True)
class MoveText:
    source: str
    record: int
    title_slot: int
    type_slot: int
    description_slots: tuple[int, int]
    title: str
    type_label: str
    description1: str
    description2: str

    @property
    def display_title(self) -> str:
        return visual_text(self.title)

    @property
    def display_description(self) -> str:
        return ' '.join(x for x in
                        (visual_text(self.description1), visual_text(self.description2)) if x)


@dataclass(frozen=True)
class MoveLink:
    card_index: int
    form: str
    resource_id: int
    offset: int
    duration: int
    archive: str
    almt_member: str
    control: str
    category: str
    koma_size: int
    variant: str
    text: MoveText | None = None

    @property
    def resource_path(self) -> str:
        return join(self.archive, self.almt_member)

    @property
    def display_name(self) -> str:
        return self.text.display_title if self.text and self.text.display_title else self.control


class MoveLinks:
    """Runtime lookup against the Editor's current, potentially edited DataRoot."""

    def __init__(self, root: DataRoot):
        self.root = root
        self.battle_text = _records(root.read(BATTLE_TEXT_PATH), len(roster.BATTLE_IDS),
                                    BATTLE_GROUP, BATTLE_TEXT_SLOTS)
        self.support_text = _records(root.read(SUPPORT_TEXT_PATH), len(roster.SUPPORT_IDS),
                                     SUPPORT_GROUP, SUPPORT_GROUP)
        self._card_table = kshape.CardTable.parse(root.read(KOMA_PATH))
        self._move_ids_by_path: dict[str, tuple[bytes, frozenset[int]]] = {}

    def character_name(self, form: str) -> str:
        if form in roster.BATTLE_IDS:
            return visual_text(self.battle_text[roster.BATTLE_IDS.index(form)][0])
        if form in roster.SUPPORT_IDS:
            return visual_text(self.support_text[roster.SUPPORT_IDS.index(form)][0])
        return ''

    def _battle_special_text(self, record: int, size: int, variant: int) -> MoveText:
        if not 4 <= size <= 8 or variant not in (0, 1):
            raise ValueError('battle special size must be 4–8; variant must be A/B')
        row = self.battle_text[record]
        name_slot = 1 + 4 * (size - 4) + variant
        description = 25 + 4 * (size - 4) + 2 * variant
        return MoveText(BATTLE_TEXT_PATH, record, name_slot, name_slot + 2,
                        (description, description + 1), row[name_slot], row[name_slot + 2],
                        row[description], row[description + 1])

    def _support_action_text(self, record: int, size: int) -> MoveText:
        if size not in (2, 3):
            raise ValueError('support action size must be 2 or 3')
        row = self.support_text[record]
        title_slot, type_slot, desc = (1, 2, (5, 6)) if size == 2 else (3, 4, (7, 8))
        return MoveText(SUPPORT_TEXT_PATH, record, title_slot, type_slot, desc,
                        row[title_slot], row[type_slot], row[desc[0]], row[desc[1]])

    @staticmethod
    def card_form(card: kshape.Card) -> str | None:
        kind, record = card.raw[6], card.raw[7]
        names = roster.BATTLE_IDS if kind == 0 else roster.SUPPORT_IDS if kind == 1 else ()
        return names[record] if record < len(names) else None

    @staticmethod
    def card_archive(card: kshape.Card) -> tuple[str, str] | None:
        form = MoveLinks.card_form(card)
        if form is None:
            return None
        suffix = '' if card.raw[6] == 0 else f'_{card.size}'
        return join('chr/ChrArc.aar', f'chr/{form}{suffix}.aar'), f'{form}{suffix}.amt'

    def card_moves(self, card: kshape.Card) -> tuple[MoveLink, ...]:
        """Only include move records actually present in this Koma's ALMT."""
        kind = card.raw[6]
        if kind == 2:
            return ()
        if kind == 0 and not 4 <= card.size <= 8:
            raise ValueError(f'Koma {card.index}: unexpected battle size {card.size}')
        target = self.card_archive(card)
        if target is None:
            raise ValueError(f'Koma {card.index}: invalid roster record {card.raw[7]} for kind {kind}')
        archive, member = target
        source = join(archive, member)
        if not self.root.exists(source):
            raise ValueError(f'Koma {card.index}: missing animation {source}')
        blob = self.root.read(source)
        table = almt.parse(blob)
        self._move_ids_by_path[source] = (blob, frozenset(m.id for m in table.moves))
        form = self.card_form(card)
        assert form is not None
        seen: set[int] = set()
        links: list[MoveLink] = []
        for move in table.moves:
            off = move.id & 0xFF
            if off in seen:
                raise ValueError(f'{source}: duplicate resource offset 0x{off:02X}')
            seen.add(off)
            if kind == 0:
                offered = {0x29 + 2 * (card.size - 4), 0x2A + 2 * (card.size - 4)}
                if off in range(0x29, 0x33) and off not in offered:
                    continue
                if off not in battleinput.MOVE_CONTROLS:
                    continue
                entry = battleinput.MOVE_CONTROLS[off]
                is_special = off in offered
                variant = ('A' if off == min(offered) else 'B') if is_special else ''
                text = (self._battle_special_text(card.raw[7], card.size, off - min(offered))
                        if is_special else None)
                control = entry[0]
                category = ('battle-special' if is_special else
                            'battle-tap' if off == 0x28 else
                            'battle-input')
            else:
                if card.size not in (2, 3):
                    raise ValueError(f'Koma {card.index}: unexpected support size {card.size}')
                control = f'{card.size}-koma support action'
                category = 'support-action'
                variant = ''
                text = self._support_action_text(card.raw[7], card.size)
            links.append(MoveLink(card.index, form, move.id, off, move.duration, archive,
                                  member, control, category, card.size, variant, text))
        if kind == 0:
            if card.size not in range(4, 9):
                raise ValueError(f'Koma {card.index}: unexpected battle size {card.size}')
            required = {0x29 + 2 * (card.size - 4), 0x2A + 2 * (card.size - 4)}
            if not required.issubset({link.offset for link in links}):
                raise ValueError(f'Koma {card.index}: source ALMT missing Special A/B')
        elif len(links) != 1 or links[0].offset != (0x00 if card.size == 2 else 0x20):
            raise ValueError(f'Koma {card.index}: unexpected support ALMT primary action resources')
        return tuple(links)

    def _source_ids(self, resource_path: str) -> frozenset[int]:
        """Revalidate when the session's staged ALMT bytes change."""
        blob = self.root.read(resource_path)
        cached = self._move_ids_by_path.get(resource_path)
        if cached is not None and cached[0] == blob:
            return cached[1]
        ids = frozenset(m.id for m in almt.parse(blob).moves)
        self._move_ids_by_path[resource_path] = (blob, ids)
        return ids

    def cards_for_move(self, form: str, move_id: int, *, almt_member: str | None = None
                       ) -> tuple[kshape.Card, ...]:
        """All and only Koma cards which can select the given resource ID."""
        off = move_id & 0xFF
        # No low-byte-only inference: the exact 32-bit ID must occur in the
        # currently loaded source member, even after a modified ALMT was staged.
        if form in roster.BATTLE_IDS:
            member = f'{form}.amt'
            if almt_member not in (None, member):
                return ()
        elif form in roster.SUPPORT_IDS and almt_member in (f'{form}_2.amt', f'{form}_3.amt'):
            member = almt_member
        else:
            return ()
        stem = member[:-4]
        resource_path = join('chr/ChrArc.aar', f'chr/{stem}.aar', member)
        if not self.root.exists(resource_path) or move_id not in self._source_ids(resource_path):
            return ()
        out = []
        for c in self._card_table.cards:
            if self.card_form(c) != form:
                continue
            if c.raw[6] == 0:
                if almt_member not in (None, f'{form}.amt'):
                    continue
                if off not in battleinput.MOVE_CONTROLS:
                    continue
                if 0x29 <= off <= 0x32 and c.size != 4 + (off - 0x29) // 2:
                    continue
            elif c.raw[6] == 1:
                if almt_member != f'{form}_{c.size}.amt':
                    continue
                if off != (0x00 if c.size == 2 else 0x20):
                    continue
            else:
                continue
            out.append(c)
        return tuple(out)

    def text_for_move(self, form: str, move_id: int, *, almt_member: str | None = None
                      ) -> MoveText | None:
        """Return only text supported by an existing Koma/form/size link."""
        cards = self.cards_for_move(form, move_id, almt_member=almt_member)
        if not cards:
            return None
        c = cards[0]
        off = move_id & 0xFF
        if c.raw[6] == 0 and 0x29 <= off <= 0x32:
            return self._battle_special_text(c.raw[7], c.size, (off - 0x29) & 1)
        if c.raw[6] == 1:
            return self._support_action_text(c.raw[7], c.size)
        return None
