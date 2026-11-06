import unittest
from pathlib import Path
from jus_package.project import DataRoot
from jus_package import scenes, stagepreview
from jus_formats import stagephysics

class StagePreviewCorpus(unittest.TestCase):
    def test_all_stage_mob(self):
        folder=Path(__file__).resolve().parents[2] / 'data'
        if not (folder/'stage'/'stage.aar').is_file():
            self.skipTest('Game data missing')
        root=DataRoot(folder)
        total=0
        for s in scenes.stage_sets(root):
            if 'mob' not in s.members: continue
            mob=stagephysics.parse_mob(root.read(s.members['mob']))
            geom=stagephysics.parse_stage_bin(root.read(s.members['bin']))
            for frame in (0,55,360):
                state=stagepreview.project(mob,geom,frame)
                self.assertEqual(len(state.floors),len(mob.floors))
                self.assertEqual(len(state.gimmicks),len(mob.gimmicks))
                total+=1
        self.assertEqual(total,108)
if __name__=='__main__':unittest.main()