"""Verified binary layout edits and reversible CP932 tests (synthetic fixtures)."""
import struct
import unittest

from jus_formats.progression import DefinitionTable, GalaxyGraph, decode_name, encode_name
from jus_formats.stageauthoring import StageObjects
from jus_formats.stagephysics import parse_stage_bin, parse_mob
from test_progression import definition_table, galaxy_graph


def valid_navigation():
    data = bytearray(galaxy_graph())
    graph = GalaxyGraph.parse(data)
    data[graph.galaxy_off+0x2C:graph.galaxy_off+0x2E] = bytes((1, 0))
    data[graph.location_off+0x38] = 0
    data[graph.location_off+0x44] = 1
    data[graph.planet_off+0x30:graph.planet_off+0x32] = bytes((1, 0))
    location = '魔界銀河'.encode('cp932')
    data[graph.location_off:graph.location_off+len(location)] = location
    return bytes(data)


def mob_fixture():
    floor = bytearray(0x24+8)
    struct.pack_into('<H', floor, 0, len(floor))
    struct.pack_into('<hh', floor, 4, 40, 50)
    floor[0x1D] = 1
    floor[0x20] = 0
    floor[0x24] = 0
    struct.pack_into('<hh', floor, 0x28, 150, 120)
    floors = bytearray(struct.pack('<BBH', 0, 1, 4+len(floor))) + floor
    item = bytearray(0x24+12)
    struct.pack_into('<BBH', item, 0, 1, 1, len(item))
    struct.pack_into('<H', item, 6, 120)
    struct.pack_into('<ii', item, 0x24, 2560, 5120)
    grip = bytearray(4+12)
    struct.pack_into('<BBH', grip, 0, 2, 1, len(grip))
    struct.pack_into('<ii', grip, 4, 1024, 1024)
    gimmick = bytearray(4+0x14)
    struct.pack_into('<BBH', gimmick, 0, 2, 1, len(gimmick))
    struct.pack_into('<I', gimmick, 4, 0x14)
    struct.pack_into('<ii', gimmick, 8, 4096, 2048)
    gimmick[4+0x0C] = 1
    struct.pack_into('<HH', gimmick, 4+0x10, 30, 60)
    offs = (16, 16+len(floors), 16+len(floors)+len(item),
            16+len(floors)+len(item)+len(grip))
    result = struct.pack('<4I', *offs) + floors + item + grip + gimmick
    parse_mob(result)
    return result


def bin_fixture():
    bg = bytearray(12*3)
    for i in range(3):
        struct.pack_into('<H', bg, i*12+4, 12)
    grid = bytearray(0x8034)
    struct.pack_into('<H', grid, 0x2E, 1)
    collision = bytearray(24)
    struct.pack_into('<4i', collision, 0, 2560, 5120, 7680, 2560)
    collision[0x14] = 2
    struct.pack_into('<h', collision, 0x16, -1)
    offs = (24, 24+len(bg), 24+len(bg)+len(grid),
            24+len(bg)+len(grid)+len(collision),
            24+len(bg)+len(grid)+len(collision),
            24+len(bg)+len(grid)+len(collision))
    result = struct.pack('<6I', *offs) + bg + grid + collision + bytes(8)
    parse_stage_bin(result)
    return result


class OriginalNavigationLayoutTests(unittest.TestCase):
    def test_runtime_four_level_hierarchy(self):
        blob = valid_navigation()
        graph = GalaxyGraph.parse(blob)
        self.assertEqual(graph.galaxy_locations(0), (0,))
        self.assertEqual(graph.location_planets(0), (0,))
        self.assertEqual(graph.planet_nodes(0), (0,))
        self.assertEqual(graph.location_name(0), '魔界銀河')
        self.assertEqual(graph.validate_navigation(), [])
        self.assertEqual(graph.build(), blob)

    def test_link_arrays_move_node_between_worlds(self):
        graph = GalaxyGraph.parse(valid_navigation())
        defs = DefinitionTable.parse(definition_table(['A']))
        new_node = graph.append_clone_node(0, definition_id=0, missions=defs, battles=defs)
        self.assertEqual(graph.planet_nodes(0), (0, new_node))
        self.assertEqual(graph.validate_navigation(), [])
        graph.remove_node(new_node)
        self.assertEqual(graph.build(), valid_navigation())

    def test_reject_out_of_bounds_links(self):
        data = bytearray(valid_navigation())
        g = GalaxyGraph.parse(data)
        data[g.galaxy_off+0x2D] = 100
        with self.assertRaises(ValueError):
            GalaxyGraph.parse(data).galaxy_locations(0)
        data = bytearray(valid_navigation())
        data[g.planet_off+0x30] = 18
        with self.assertRaises(ValueError):
            GalaxyGraph.parse(data).planet_nodes(0)


class ShiftJISNameTests(unittest.TestCase):
    def test_cp932_japanese_roundtrip_and_trailing_bytes(self):
        table = DefinitionTable.parse(definition_table(['First']))
        original = table.build()
        raw = 'ラオウの城'.encode('cp932')
        self.assertEqual(decode_name(raw+b'\x00'), 'ラオウの城')
        self.assertEqual(encode_name('ラオウの城'), raw)
        table.rename(0, 'ラオウの城')
        self.assertEqual(table.get(0).name, 'ラオウの城')
        self.assertEqual(table.get(0).data[0x70:], DefinitionTable.parse(original).get(0).data[0x70:])
        table.validate_name_edits(original)

    def test_bad_original_name_preserved_and_raw_hex_visible(self):
        b = bytearray(definition_table(['Name']))
        b[4:10] = b'\x81\x00Zzzz'
        table = DefinitionTable.parse(bytes(b))
        self.assertEqual(table.get(0).name, '⟦raw CP932: 81⟧')
        table.validate_name_edits(bytes(b))
        self.assertEqual(table.build(), bytes(b))
        table.set_stage(0, 0x1C)
        table.validate_name_edits(bytes(b))
        self.assertEqual(table.get(0).data[:6], b'\x81\x00Zzzz')

    def test_battle_settings_patch_only_verified_fields(self):
        original = definition_table(['Battle'])
        table = DefinitionTable.parse(original)
        table.set_battle_parameters(0, rule=7, opponents=3, time_value=1200)
        result = table.build()
        base = 4
        changed = {i for i, (a, b) in enumerate(zip(original, result)) if a != b}
        self.assertTrue(changed <= {base + 0x76, base + 0x79, base + 0x7A, base + 0x7B})
        value = table.get(0)
        self.assertEqual((value.rule, value.opponents, value.time_value), (7, 3, 1200))
        table.validate_name_edits(original)
        for args in ({'rule': 256, 'opponents': 2, 'time_value': 1200},
                     {'rule': 1, 'opponents': 0, 'time_value': 1200},
                     {'rule': 1, 'opponents': 2, 'time_value': 65536}):
            snapshot = table.build()
            with self.assertRaises(ValueError):
                table.set_battle_parameters(0, **args)
            self.assertEqual(table.build(), snapshot)

    def test_changed_noncanonical_name_rejected_at_apply(self):
        original = definition_table(['Good'])
        t = DefinitionTable.parse(original)
        # Raw invalid bytes represent an external mutation, not an editor rename.
        t._data[4:7] = b'\x81\x00\x00'
        with self.assertRaises(ValueError):
            t.validate_name_edits(original)
        for candidate in ('😀', '𝄞', '\x00', ''):
            with self.assertRaises(ValueError):
                encode_name(candidate)


class ObjectAuthoringTests(unittest.TestCase):
    def test_edit_positions_collision_moving_floor_and_trigger(self):
        orig_m, orig_b = mob_fixture(), bin_fixture()
        s = StageObjects(orig_m, orig_b)
        self.assertFalse(s.dirty)
        s.edit('item', 0, {'x':'10.25', 'y':'-20.5'})
        s.edit('floor', 0, {'x':45, 'y':70, 'speed_index':2, 'motion_kind':3})
        s.edit('path', 0, {'x':120, 'y':90})
        s.edit('trigger', 0, {'x':4.5, 'y':9, 'timer_0':50, 'timer_1':80})
        s.edit('collider', 0, {'x':11, 'y':12, 'width':7, 'height':4, 'type_id':2})
        s.edit('spawner', 0, {'interval':45, 'item_set':1, 'stage_weight':40})
        self.assertTrue(s.dirty)
        self.assertEqual(s.m.item_candidates[0].pixel_xy, (10.25, -20.5))
        self.assertEqual(s.m.floors[0].motion_kind, 3)
        self.assertEqual(s.m.floors[0].path_commands[0].x, 120)
        self.assertEqual(s.m.gimmicks[0].timers, (50,80))
        self.assertEqual(s.g.collision_boxes[0].bounds, (11,12,18,16))
        self.assertEqual(s.m.items.interval, 45)
        before = s.snapshot()
        s.restore((orig_m,orig_b))
        self.assertFalse(s.dirty)
        s.restore(before)
        self.assertEqual(s.snapshot(), before)

    def test_clone_records_without_undecoded_bytes_changed(self):
        s = StageObjects(mob_fixture(), bin_fixture())
        self.assertEqual(s.clone('item',0), 1)
        self.assertEqual(len(s.m.item_candidates), 2)
        self.assertEqual(s.m.item_candidates[0].raw, s.m.item_candidates[1].raw)
        self.assertEqual(s.clone('floor',0), 1)
        self.assertEqual(len(s.m.floors), 2)
        self.assertEqual(s.clone('trigger',0), 1)
        self.assertEqual(len(s.m.gimmicks), 2)
        self.assertEqual(s.clone('collider',0), 1)
        self.assertEqual(len(s.g.collision_boxes), 2)
        self.assertEqual(s.g.collision_records[0], s.g.collision_records[1])
        self.assertEqual(parse_mob(s.mob).raw, s.mob)
        self.assertEqual(parse_stage_bin(s.geo).raw, s.geo)

    def test_reject_unrepresentable_values_before_any_changes(self):
        s = StageObjects(mob_fixture(), bin_fixture())
        before = s.snapshot()
        with self.assertRaises(ValueError):
            s.edit('collider',0, {'x':3.00001,'y':0,'width':8,'height':1,'type_id':0})
        with self.assertRaises(ValueError):
            s.edit('floor',0, {'x':70000,'y':0,'speed_index':0,'motion_kind':0})
        self.assertEqual(s.snapshot(), before)


if __name__ == '__main__':
    unittest.main()
