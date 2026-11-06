"""Synthetic stage collision/wall damage traces, no proprietary game assets."""
import struct
import unittest
from types import SimpleNamespace as N

from jus_formats.stagephysics import StageGeometry
from jus_package.stagepreview import parse_wall_hits, project


class CollisionProjectionTests(unittest.TestCase):
    def geometry(self):
        coll = bytearray(24)
        struct.pack_into('<4i', coll, 0, 256, 512, 1280, 768)
        coll[0x14] = 2
        struct.pack_into('<h', coll, 0x16, 0)
        wall = bytearray(20)
        struct.pack_into('<hh', wall, 0, 0, 100)
        return StageGeometry(b'', (), b'', b'', (bytes(coll),),
                             (bytes(wall),), b'')

    def test_collision_rect_and_wall_record_offsets(self):
        geom = self.geometry()
        box = geom.collision_boxes[0]
        self.assertEqual((box.x, box.y, box.width, box.height), (1,2,5,3))
        self.assertEqual(box.bounds, (1,2,6,5))
        self.assertEqual((box.type_id, box.wall_index), (2,0))
        self.assertEqual((geom.walls[0].collision_index, geom.walls[0].health), (0,100))

    def test_wall_damage_timeline(self):
        geom = self.geometry()
        mob = N(floors=(), gimmicks=(), item_candidates=(), items=None)
        hits = parse_wall_hits('0@20:30, 0@40:25, 0@80:50')
        at_10 = project(mob, geom, 10, wall_damage_history=hits)
        self.assertEqual((at_10.walls[0].hp, at_10.walls[0].damage_phase), (100,0))
        at_50 = project(mob, geom, 50, wall_damage_history=hits)
        self.assertEqual((at_50.walls[0].hp, at_50.walls[0].damage_phase), (45,1))
        at_80 = project(mob, geom, 80, wall_damage_history=hits)
        self.assertEqual((at_80.walls[0].hp, at_80.walls[0].damage_phase), (0,3))
        with self.assertRaises(ValueError):
            parse_wall_hits('0@10:0')
        with self.assertRaises(ValueError):
            parse_wall_hits('0:10')


if __name__ == '__main__':
    unittest.main()
