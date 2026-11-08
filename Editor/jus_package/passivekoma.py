"""Original passive/help Koma ability record-to-text resolver (read-only).

Provenance:
  bin/koma.bin card byte +6 == 2 means passive/help type;
  card byte +7 is the index into bin/ability.bin's 57 4-byte records
  and bin/ability_t.bin's 57 groups of three original CP932 strings.
  ARM9 FUN_02075FBC loads both ability tables, and FUN_02077768
  dereferences ability.bin + card_index*4 by actor/card+0x41.

The numeric byte at +2 is displayed as RAW, *not* damage/HP/SP units.
No guessed translations: the provided Japanese text is preserved as written.
"""
from __future__ import annotations

from dataclasses import dataclass

from jus_formats import bintables, kshape

from .project import DataRoot

PASSIVE_KIND = 2
RECORD_BYTES = 4
ABILITY_RECORDS = 57
PATH_DATA = "bin/ability.bin"
PATH_TEXT = "bin/ability_t.bin"


@dataclass(frozen=True)
class PassiveAbility:
    id: int
    name: str
    description_lines: tuple[str, str]
    raw: bytes

    @property
    def description(self) -> str:
        return " ".join(x.replace("|", " ").strip() for x in self.description_lines if x.strip("| "))

    @property
    def display_name(self) -> str:
        return self.name.replace("|", " ").strip()

    @property
    def category(self) -> int:
        return self.raw[0]

    @property
    def subtype(self) -> int:
        return self.raw[1]

    @property
    def parameter_raw(self) -> int:
        return self.raw[2]

    @property
    def parameter_signed(self) -> int:
        return int.from_bytes(self.raw[2:3], "little", signed=True)


class PassiveCatalog:
    def __init__(self, root: DataRoot):
        data = root.read(PATH_DATA)
        if len(data) != RECORD_BYTES * ABILITY_RECORDS:
            raise ValueError(f"{PATH_DATA}: expected {ABILITY_RECORDS} four-byte ability records")
        texts = bintables.grouped_text(root.read(PATH_TEXT), 3, (0, 1, 2))
        if len(texts) != ABILITY_RECORDS:
            raise ValueError(f"{PATH_TEXT}: {len(texts)} entries do not match {ABILITY_RECORDS} records")
        self.abilities = tuple(
            PassiveAbility(i, texts[i][0], (texts[i][1], texts[i][2]), data[4*i:4*i+4])
            for i in range(ABILITY_RECORDS)
        )

    def for_card(self, card: kshape.Card) -> PassiveAbility | None:
        if card.raw[6] != PASSIVE_KIND:
            return None
        ability_id = card.raw[7]
        if not 0 <= ability_id < len(self.abilities):
            raise ValueError(f"Koma #{card.index}: ability ID {ability_id} outside {PATH_DATA}")
        return self.abilities[ability_id]
