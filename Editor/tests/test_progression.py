"""Synthetic J-Galaxy binary fidelity tests — no proprietary assets required."""
import struct
import unittest

from jus_formats.progression import DefinitionTable, GalaxyGraph


def definition_table(names):
    blob = bytearray(struct.pack('<I', len(names)))
    for idx, name in enumerate(names):
        rec = bytearray([0] * 0xA4)
        rec[:len(name)] = name.encode('ascii')
        rec[0x70:0x74] = struct.pack('<I', 0xA1B2C3D4 + idx)
        rec[0x74:] = bytes([(idx + 13) & 0xFF]) * (0xA4 - 0x74)
        blob.extend(rec)
    return bytes(blob)


def galaxy_graph():
    # 1 galaxy 1 location 1 node 1 planet, sections order as in the ROM.
    gal, loc, node = 0x18, 0x18+0x3C, 0x18+0x3C+0x48
    planet = node + 0x88
    blob = bytearray(planet+0x40)
    struct.pack_into('<4H4I', blob, 0, 1, 1, 1, 1, gal, loc, planet, node)
    blob[gal:gal+5] = b'Earth'
    blob[planet:planet+6] = b'Moon A'
    blob[node+8] = 0  # definition id
    blob[node+0x0A] = 0  # planet
    blob[node+0x0B] = 2  # goals
    blob[node+0x0C] = 0xC4  # mission type + reserved 0xC0
    struct.pack_into('<Hh6H', blob, node+0x10, 0xEEAA, 14, *([9] * 6))
    blob[node+0x20:node+0x24] = b'ABCD'  # unknown tail bytes
    struct.pack_into('<Hh6H', blob, node+0x24, 0xFEED, -1, 1,2,3,4,5,6)
    blob[node+0x34:node+0x38] = b'WXYZ'
    blob[node+0x84:node+0x88] = b'LAST'
    return bytes(blob)


class TestProgression(unittest.TestCase):
    def test_definitions_roundtrip_and_rename_preserves_settings(self):
        blob = definition_table(['First', 'Second'])
        table = DefinitionTable.parse(blob)
        self.assertEqual(table.build(), blob)
        table.rename(1, 'New Name')
        expected = bytearray(blob)
        start = 4 + 0xA4
        expected[start:start+0x70] = b'New Name' + b'\0' * (0x70-8)
        self.assertEqual(table.build(), bytes(expected))
        self.assertEqual(table.get(0).data, DefinitionTable.parse(blob).get(0).data)

    def test_definitions_reject_bad_titles_and_count(self):
        table = DefinitionTable.parse(definition_table(['First']))
        for title in ('', 'x'*0x70, '😀', 'has\0nul'):
            with self.assertRaises(ValueError):
                table.rename(0, title)
        self.assertEqual(table.get(0).name, 'First')
        table.rename(0, '日本語')
        self.assertEqual(table.get(0).name, '日本語')
        with self.assertRaises(ValueError):
            DefinitionTable.parse(struct.pack('<I', 2) + bytes(0xA4))

    def test_node_decode_and_roundtrip(self):
        blob = galaxy_graph()
        graph = GalaxyGraph.parse(blob)
        self.assertEqual(graph.build(), blob)
        self.assertEqual(graph.planet_name(0), 'Moon A')
        node = graph.get(0)
        self.assertEqual((node.definition_id, node.planet_id, node.goal_count, node.flags), (0,0,2,0xC4))
        self.assertTrue(node.mission)
        self.assertEqual((node.rewards[0].koma_id, node.rewards[0].goal_code), (14, 0xEEAA))
        self.assertEqual(node.rewards[1].resources, (1,2,3,4,5,6))
        self.assertEqual(node.raw[-4:], b'LAST')

    def test_koma_patch_single_signed_halfword(self):
        orig = galaxy_graph()
        graph = GalaxyGraph.parse(orig)
        graph.grant_koma(0, 0, 511, card_count=890)
        patched = graph.build()
        diff = [i for i,(a,b) in enumerate(zip(orig,patched)) if a!=b]
        self.assertEqual(diff, [graph.node_off + 0x12, graph.node_off+0x13])
        self.assertEqual(GalaxyGraph.parse(patched).get(0).rewards[0].koma_id, 511)
        self.assertEqual(patched[graph.node_off+0x20:graph.node_off+0x24], b'ABCD')

    def test_resources_patch_only_grant_fields(self):
        orig = galaxy_graph()
        graph = GalaxyGraph.parse(orig)
        graph.grant_resources(0, 0, (101, 201, 301, 401, 501, 601))
        result = graph.build()
        i = graph.node_off+0x10
        self.assertEqual(result[:i+2], orig[:i+2])
        self.assertEqual(result[i+16:], orig[i+16:])
        new = GalaxyGraph.parse(result).get(0).rewards[0]
        self.assertEqual(new.koma_id, -1)
        self.assertEqual(new.resources, (101,201,301,401,501,601))

    def test_validation_and_index_bounds(self):
        graph = GalaxyGraph.parse(galaxy_graph())
        defs = DefinitionTable.parse(definition_table(['One']))
        self.assertEqual(graph.validate_references(defs, defs, 890), [])
        with self.assertRaises(ValueError):
            graph.grant_koma(0, 0, 890, card_count=890)
        with self.assertRaises(IndexError):
            graph.grant_koma(0, 2, 3, card_count=890)
        with self.assertRaises(ValueError):
            graph.grant_resources(0, 1, (0,0,0,0,0,65536))
        with self.assertRaises(IndexError):
            graph.get(999)
        graph.grant_koma(0, 0, 900, card_count=1200)
        self.assertTrue(graph.validate_references(defs, defs, 890))

    def test_out_of_bounds_graph_rejected(self):
        original = galaxy_graph()
        broken = bytearray(original)
        struct.pack_into('<I', broken, 0x14, 0xFFFFFFFC)
        with self.assertRaises(ValueError):
            GalaxyGraph.parse(broken)


if __name__ == '__main__':
    unittest.main()
