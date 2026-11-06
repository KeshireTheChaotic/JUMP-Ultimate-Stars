"""Stage-space overlays: resource slots, raw geometry, and edits (fixtures only)."""
from __future__ import annotations

import struct
import unittest
from types import SimpleNamespace

from jus_formats import stagephysics
from jus_formats.stageauthoring import StageObjects
from jus_package import stageoverlay
from test_level_workspace_authoring import bin_fixture, mob_fixture


def geometry():
    b = bytearray(bin_fixture())
    off = 24
    for i, (x, y, prio, enabled) in enumerate(((-192, 0, 4, 1), (0, 24, 9, 1), (32, 8, 2, 0))):
        p = off + 12*i
        struct.pack_into('<hh', b, p, x, y)
        b[p + 6] = prio
        b[p + 9] = enabled
    return stagephysics.parse_stage_bin(bytes(b))


class StageOverlayTests(unittest.TestCase):
    def test_full_stage_stem_bg_lookup_no_guess(self):
        # resource ids: _02 = 0x400000 (slot 0), _01 = 0x400001, _00 = 0x400002, _sud = 0x400003
        self.assertEqual(stageoverlay.bg_slot('bg_cm_02', 'bg_cm_02_00'), 2)
        self.assertEqual(stageoverlay.bg_slot('bg_cm_02', 'bg_cm_02_01'), 1)
        self.assertEqual(stageoverlay.bg_slot('bg_cm_02', 'bg_cm_02_02'), 0)
        self.assertEqual(stageoverlay.bg_slot('bg_cm_02', 'bg_cm_02_sud'), 0)
        self.assertIsNone(stageoverlay.bg_slot('bg_cm_02', 'bg_cm_03_02'))
        self.assertIsNone(stageoverlay.bg_slot('bg_cm_02', 'bg_cm_02_floor_00'))
        self.assertIsNone(stageoverlay.bg_slot('bg_cm_02', 'bg_cm_02'))

    def test_layer_order_uses_stage_priorities_and_flags(self):
        g = geometry()
        names = ['bg_cm_02_00', 'bg_cm_02_02', 'bg_cm_02_01']
        layers = [SimpleNamespace(name=n) for n in names]
        # back → front by descending priority: slot 1 (9), slot 0 (4), slot 2 (2)
        self.assertEqual([x.name for x in stageoverlay.bg_draw_order(layers, g, 'bg_cm_02')],
                         ['bg_cm_02_01', 'bg_cm_02_02', 'bg_cm_02_00'])
        self.assertEqual([(x.x, x.y, bool(x.enabled)) for x in g.layers],
                         [(-192,0,True),(0,24,True),(32,8,False)])

    def test_priority_tie_puts_higher_bg_number_behind(self):
        b = bytearray(bin_fixture())
        for i in range(3):
            b[24 + 12 * i + 6] = 2           # every slot at priority 2
        g = stagephysics.parse_stage_bin(bytes(b))
        layers = [SimpleNamespace(name=n) for n in ('bg_hh_02', 'bg_hh_00', 'bg_hh_01')]
        # slot 0 (BG1, play layer) is in front of slot 1 (BG2) in front of slot 2 (BG3)
        self.assertEqual([x.name for x in stageoverlay.bg_draw_order(layers, g, 'bg_hh')],
                         ['bg_hh_00', 'bg_hh_01', 'bg_hh_02'])

    def test_path_waypoints_are_absolute_and_waits_have_no_line(self):
        mob = stagephysics.parse_mob(mob_fixture())
        steps = stageoverlay.authored_paths(mob)
        self.assertEqual([(x.kind, x.start, x.end) for x in steps],
                         [('move', (40.0, 50.0), (150.0, 120.0))])
        self.assertEqual((steps[0].floor, steps[0].step), (0, 0))
        # The parser supports wait commands in the same 8-byte path structure.
        b = bytearray(mob_fixture())
        cp = mob.floors[0].path_commands[0].offset
        b[cp] = 1
        struct.pack_into('<h', b, cp+4, 17)
        steps = stageoverlay.authored_paths(stagephysics.parse_mob(bytes(b)))
        self.assertEqual((steps[0].kind, steps[0].start, steps[0].end, steps[0].count),
                         ('wait', (40.0, 50.0), (40.0, 50.0), 17))

    def test_all_authored_markers_not_just_simulated_spawns(self):
        m = stagephysics.parse_mob(mob_fixture())
        g = geometry()
        positions = {(p.kind, p.index):(p.x, p.y) for p in stageoverlay.authored_markers(m, g)}
        self.assertEqual(positions[('floor',0)], (40, 50))
        self.assertEqual(positions[('item',0)], (10,20))
        self.assertEqual(positions[('grip',0)], (4,4))
        self.assertEqual(positions[('trigger',0)], (16,8))
        self.assertEqual(g.collision_boxes[0].bounds, (10,20,40,30))
        self.assertEqual(stageoverlay.marker_for_selection(m,g,'path',0).x,150)
        self.assertEqual((stageoverlay.marker_for_selection(m,g,'collider',0).x,
                          stageoverlay.marker_for_selection(m,g,'collider',0).y), (25,25))

    def test_selection_reacts_to_unapplied_edits(self):
        author = StageObjects(mob_fixture(), bin_fixture())
        author.edit('item', 0, {'x': 33.25, 'y': -12.5})
        author.edit('path', 0, {'x': 220, 'y': 140})
        author.edit('collider', 0, {'x': -14, 'y': 2, 'width': 50, 'height': 12, 'type_id': 2})
        self.assertEqual(stageoverlay.marker_for_selection(author.m, author.g, 'item', 0).x,33.25)
        self.assertEqual(stageoverlay.authored_paths(author.m)[0].end, (220, 140))
        self.assertEqual(author.g.collision_boxes[0].bounds, (-14, 2, 36, 14))


if __name__ == '__main__':
    unittest.main()
