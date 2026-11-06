"""Fresh-save J-Galaxy structural edits: synthetic binary tests."""
import struct
import unittest

from jus_formats.progression import DefinitionTable, GalaxyGraph, NODE_SIZE
from test_progression import definition_table, galaxy_graph


class MissionAuthoringTests(unittest.TestCase):
    def test_definition_clone_and_remove_preserve_other_records(self):
        original = definition_table(['First', 'Second', 'Third'])
        table = DefinitionTable.parse(original)
        idx = table.clone_definition(2, 'Third Copy')
        self.assertEqual(idx, 3)
        self.assertEqual(table.count, 4)
        self.assertEqual(table.get(3).name, 'Third Copy')
        self.assertEqual(table.get(3).data[0x70:], table.get(2).data[0x70:])
        table.remove_definition(1)
        self.assertEqual(table.count, 3)
        self.assertEqual(table.get(2).name, 'Third Copy')
        self.assertEqual(DefinitionTable.parse(table.build()).build(), table.build())

    def test_graph_clone_then_remove_relocates_planets_losslessly(self):
        data = galaxy_graph()
        g = GalaxyGraph.parse(data)
        original_planet = data[g.planet_off:g.planet_off + 0x40]
        defs = DefinitionTable.parse(definition_table(['A', 'B']))
        new_id = g.append_clone_node(0, definition_id=1, missions=defs, battles=defs)
        self.assertEqual(new_id, 1)
        self.assertEqual(g.node_count, 2)
        self.assertEqual(g.planet_off, len(data) - 0x40 + NODE_SIZE)
        self.assertEqual(g.get(1).definition_id, 1)
        self.assertEqual(g.planet_nodes(0), (1,))
        self.assertEqual(g.build()[g.planet_off:g.planet_off+0x30], original_planet[:0x30])
        self.assertEqual(GalaxyGraph.parse(g.build()).build(), g.build())
        g.remove_node(1)
        self.assertEqual(g.build(), data)
        self.assertEqual(g.node_count, 1)

    def test_reassign_and_compact_definition_references(self):
        g = GalaxyGraph.parse(galaxy_graph())
        defs = DefinitionTable.parse(definition_table(['A', 'B', 'C']))
        g.place_node(0, definition_id=2, missions=defs, battles=defs)
        g.remove_definition_references(mission=True, index=1)
        defs.remove_definition(1)
        self.assertEqual(g.get(0).definition_id, 1)
        self.assertEqual(g.validate_references(defs, defs, 890), [])
        with self.assertRaises(ValueError):
            g.remove_definition_references(mission=True, index=1)

    def test_fixed_objective_slots_activate_deactivate_and_edit(self):
        g = GalaxyGraph.parse(galaxy_graph())
        start = g.build()
        self.assertEqual(g.append_goal(0, 0x1234, koma_id=7, card_count=890), 2)
        self.assertEqual(g.get(0).goal_count, 3)
        self.assertEqual(g.get(0).rewards[2].goal_code, 0x1234)
        g.set_goal_code(0, 2, 0xABCD)
        self.assertEqual(g.get(0).rewards[2].goal_code, 0xABCD)
        snapshot = g.build()
        self.assertEqual(g.remove_last_goal(0), 2)
        self.assertEqual(g.get(0).goal_count, 2)
        self.assertEqual(g.build()[g.node_off+0x10+2*20:g.node_off+0x10+3*20],
                         snapshot[g.node_off+0x10+2*20:g.node_off+0x10+3*20])
        self.assertEqual(g.build()[g.planet_off:], start[g.planet_off:])

    def test_stage_gate_only_changes_verified_offsets(self):
        defs = DefinitionTable.parse(definition_table(['One']))
        before = defs.get(0).data
        defs.set_stage(0, 27)
        defs.set_environment(0, True)
        after = defs.get(0).data
        self.assertEqual(after[0x75], 27)
        self.assertEqual(after[0x7C] & 2, 2)
        self.assertEqual(after[0x7C] & ~2, before[0x7C] & ~2)
        self.assertEqual(after[:0x75], before[:0x75])
        with self.assertRaises(ValueError):
            defs.set_stage(0, 256)


if __name__ == '__main__':
    unittest.main()
