"""Deterministic isolated projection tests; does not depend on emulator state."""
import unittest
from types import SimpleNamespace as N
from jus_package.stagepreview import floor_at, project

class StagePreviewTests(unittest.TestCase):
    def test_loop_path_moves_and_waits(self):
        f = N(x=0, y=0, speed=256, motion_kind=0,
              path_commands=(N(kind=0, x=10, y=0, count=None), N(kind=1, x=None, y=None, count=3)))
        self.assertAlmostEqual(floor_at(f, 5).x, 5)
        self.assertAlmostEqual(floor_at(f, 12).x, 10)
        self.assertAlmostEqual(floor_at(f, 14).x, 0)
    def test_disabled_environment(self):
        f=N(x=1,y=2,speed=256,motion_kind=0,path_commands=(N(kind=0,x=8,y=8,count=None),))
        self.assertEqual((floor_at(f,7,enabled=False).x,floor_at(f,7,enabled=False).y),(1,2))
    def test_spawn_limit(self):
        points=tuple(N(pixel_xy=(float(i),0)) for i in range(8))
        mob=N(floors=(),item_candidates=points,items=N(interval=20),gimmicks=())
        s=project(mob,None,60,seed=12)
        self.assertEqual(len(s.spawns),4)
        self.assertEqual(s.spawns,project(mob,None,60,seed=12).spawns)
    def test_mission_toggle_gates_gimmicks(self):
        g=N(type_id=8,pixel_xy=(1.,2.),label='Trap',targets=(1,2))
        mob=N(floors=(),item_candidates=(),items=None,gimmicks=(g,))
        self.assertTrue(any('hit-switch' in x for x in project(mob,None,3,struck_gimmicks=(0,)).notes))
        self.assertFalse(any('hit-switch' in x for x in project(mob,None,3,environment=False,struck_gimmicks=(0,)).notes))

if __name__ == '__main__': unittest.main()