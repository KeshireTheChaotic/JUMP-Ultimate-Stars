"""Overlay 6 FUN_021618E4 follow/snap tests in 24.8 fixed point."""
from __future__ import annotations

import unittest
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parent.parent))

from jus_package import effectlinks


class PursuerFollow(unittest.TestCase):
    def test_quarter_step_and_four_pixel_cap(self):
        step = effectlinks.pursuer_step_raw
        self.assertEqual(step((0, 0), (100 * 256, -100 * 256)), (1024, -1024))
        self.assertEqual(step((0, 0), (12 * 256, -12 * 256)), (3 * 256, -3 * 256))
        self.assertEqual(step((100 * 256, 0), (0, 0)), (96 * 256, 0))

    def test_near_both_axes_snaps(self):
        step = effectlinks.pursuer_step_raw
        self.assertEqual(step((0, 0), (3 * 256, -3 * 256)), (3 * 256, -3 * 256))
        self.assertEqual(step((0, 0), (-3 * 256, 3 * 256)), (-3 * 256, 3 * 256))
        # One axis still requires a >=1 pixel step: update both by a quarter.
        self.assertEqual(step((0, 0), (8 * 256, 3 * 256)), (2 * 256, 192))
        self.assertEqual(step((2 * 256, 192), (8 * 256, 3 * 256)),
                         (2 * 256 + 384, 192 + 144))

    def test_explicit_snap(self):
        self.assertEqual(effectlinks.pursuer_step_raw((500, -700), (9000, 3300), snap=True),
                         (9000, 3300))

    def test_signed_toward_zero(self):
        q = effectlinks._quarter_toward_zero
        self.assertEqual([q(x) for x in (-9, -5, -3, -1, 0, 1, 3, 5, 9)],
                         [-2, -1, 0, 0, 0, 0, 0, 1, 2])

    def test_events_and_root_motion(self):
        E = effectlinks.PursuerEvent
        events = (
            E(0, 0, 0, 0x4c141, 0x4c142, (10, -2), False, 'SP01', ('target (10, -2), snap=0',)),
            E(3, 0, 0, 0x4c141, 0x4c142, (30, -2), False, 'SP01', ('target (30, -2), snap=0',)),
        )
        actor = lambda tick: (tick * 2, 0)
        preview = effectlinks.pursuer_position_at(events, 2, actor)
        self.assertEqual(preview.xy, (14.0, -2.0))  # tracks moving character
        preview = effectlinks.pursuer_position_at(events, 3, actor)
        self.assertEqual(preview.xy, (18.0, -2.0))  # 4 px clamp for jump
        self.assertEqual(preview.target, (36.0, -2.0))
        self.assertTrue(preview.initial_position_assumed)

    def test_snap_only_on_command_tick(self):
        E = effectlinks.PursuerEvent
        events = (
            E(0, 0, 0, 1, 2, (0, 0), False, 'N', ('target (0, 0), snap=0',)),
            E(1, 0, 0, 1, 2, (70, 0), True, 'N', ('target (70, 0), snap=1',)),
            E(2, 0, 0, 1, 2, (70, 0), True, 'N', ('select slots 0/0',)),
        )
        actor = lambda t: (0.0, 0.0)
        self.assertEqual(effectlinks.pursuer_position_at(events, 1, actor).xy, (70, 0))
        self.assertFalse(effectlinks.pursuer_position_at(events, 2, actor).snapped_on_update)

    def test_facing_and_seed_provenance(self):
        E = effectlinks.PursuerEvent
        events = (E(0, 0, 0, 1, 2, (12, 3), False, 'N', ('target (12, 3), snap=0',)),)
        actor = lambda _: (4, 7)
        pos = effectlinks.pursuer_position_at(events, 0, actor, facing_left=True)
        self.assertEqual(pos.xy, (-8, 10))
        self.assertEqual(pos.target, (-8, 10))
        other = effectlinks.pursuer_position_at(events, 0, actor, facing_left=True, seed='origin')
        self.assertEqual(other.xy, (-2, 2.5))  # x -8/4, y 10/4
        self.assertEqual(other.target, (-8, 10))
        self.assertIsNone(effectlinks.pursuer_position_at(events, -1, actor))
        with self.assertRaises(ValueError):
            effectlinks.pursuer_position_at(events, 0, actor, seed='undocumented')


if __name__ == '__main__':
    unittest.main()
