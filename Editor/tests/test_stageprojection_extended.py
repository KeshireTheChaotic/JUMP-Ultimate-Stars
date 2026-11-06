"""Extended battle-stage previews: deterministic user-input projections only."""
import unittest
from types import SimpleNamespace as N

from jus_package.stagepreview import (palette_at, parallax_at, parse_occupancy,
                                      parse_hits, project)


class StageProjectionExtendedTests(unittest.TestCase):
    def test_timestamped_occupancy_and_hit_inputs(self):
        self.assertEqual(parse_occupancy('2, 3@40-100, 1@130'),
                         ((2, 0, None), (3, 40, 100), (1, 130, None)))
        self.assertEqual(parse_hits('2@250, 3, 2@60'),
                         ((3, 0), (2, 60), (2, 250)))
        for value in ('2@40-30', 'a@2', '-1@0'):
            with self.assertRaises(ValueError):
                parse_occupancy(value)
        with self.assertRaises(ValueError):
            parse_hits('2@not-a-time')

    def test_palette_rotate_is_non_destructive(self):
        palette = [[0, 1, 2, 3, 4, 5]]
        anim = N(kind=1, fields=lambda: {'period': 1, 'start': 1, 'count': 3,
                                         'step': 1, 'left': True})
        self.assertEqual(palette_at((anim,), palette, 3), ((0, 2, 3, 1, 4, 5),))
        self.assertEqual(palette, [[0, 1, 2, 3, 4, 5]])

    def test_palette_fade_ping_pong(self):
        palette = [[0, 0]]
        anim = N(kind=0, fields=lambda: {'steps': 4, 'index': 1, 'colour': 0x7fff})
        self.assertEqual(palette_at((anim,), palette, 4)[0][1], 0x7fff)
        self.assertEqual(palette_at((anim,), palette, 8)[0][1], 0)

    def test_parallax_interpolates_with_clamp(self):
        anim = N(fields=lambda: {'cam_x': (-10, 10), 'cam_y': (0, 100),
                                  'out_x': (-5, 5), 'out_y': (20, 60)})
        self.assertEqual(parallax_at(anim, 0, 50), (0.0, 40.0))
        self.assertEqual(parallax_at(anim, 500, -500), (5.0, 20.0))

    def test_explicit_trap_hits_rearm_without_inferred_collisions(self):
        emitter = N(type_id=7, pixel_xy=(8.0, 9.0), label='Emitter')
        trap = N(type_id=8, pixel_xy=(0.0, 0.0), label='Trap', targets=(1,))
        mob = N(floors=(), gimmicks=(trap, emitter), item_candidates=(), items=None)
        result = project(mob, None, 230, hit_history=((0,20), (0,100), (0,230)))
        self.assertTrue(any('accepted 2/3' in note for note in result.notes))
        self.assertEqual(len([s for s in result.spawns if s.kind == 'trigger-hazard']), 1)
        result2 = project(mob, None, 250, hit_history=((0,20), (0,100), (0,230)))
        self.assertFalse(any(s.kind == 'trigger-hazard' for s in result2.spawns))

    def test_occupied_floor_since_time_changes_sink_amount(self):
        floor = N(x=5, y=10, motion_kind=2, speed=256, path_commands=())
        mob = N(floors=(floor,), gimmicks=(), item_candidates=(), items=None)
        at = project(mob, None, 100, occupied_history=((0, 80, 200),))
        self.assertEqual(at.floors[0].y, 20.0)
        not_yet = project(mob, None, 70, occupied_history=((0, 80, 200),))
        self.assertEqual(not_yet.floors[0].y, 10.0)


if __name__ == '__main__':
    unittest.main()
