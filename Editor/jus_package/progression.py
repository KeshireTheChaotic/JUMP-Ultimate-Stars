"""Read/write J-Galaxy progression through the editor's nested-archive API."""
from __future__ import annotations

from dataclasses import dataclass

from jus_formats.clearlist import ClearGoals
from jus_formats.progression import DefinitionTable, GalaxyGraph

ARCHIVE = 'jgalaxy/jgalaxy.aar'
GRAPH = f'{ARCHIVE}|jgalaxy/jgalaxy.bin'
MISSIONS = f'{ARCHIVE}|jgalaxy/mission.bin'
BATTLES = f'{ARCHIVE}|jgalaxy/battle.bin'
CARD_TABLE = 'bin/koma.bin'
CARD_SIZE = 12


@dataclass
class ProgressionCatalog:
    graph: GalaxyGraph
    missions: DefinitionTable
    battles: DefinitionTable
    card_count: int
    goals: ClearGoals | None = None      # bin/clearlst.bin text + bin/clear.bin predicates

    @classmethod
    def load(cls, root):
        cards = root.read(CARD_TABLE)
        if len(cards) % CARD_SIZE:
            raise ValueError('bin/koma.bin not an integer number of Koma records')
        try:
            goals = ClearGoals.load(root)
        except (ValueError, KeyError, OSError):
            goals = None
        result = cls(GalaxyGraph.parse(root.read(GRAPH)),
                     DefinitionTable.parse(root.read(MISSIONS)),
                     DefinitionTable.parse(root.read(BATTLES)),
                     len(cards) // CARD_SIZE, goals)
        problems = result.graph.validate_references(result.missions, result.battles, result.card_count)
        if problems:
            raise ValueError('Invalid progression references: ' + '; '.join(problems[:8]))
        return result

    def definition(self, node):
        table = self.missions if node.mission else self.battles
        return table.get(node.definition_id)
