"""Character packages include spawned effects (GenerateID graph) and stage object sprites load."""
import json
import os
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_package import package  # noqa: E402
from jus_package.project import DataRoot  # noqa: E402

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
HAVE = (DATA / 'chr/ChrArc.aar').is_file() and (DATA / 'efc').is_dir()


@unittest.skipUnless(HAVE, 'requires extracted data')
class CharacterEffects(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.root = DataRoot(str(DATA))

    def test_dependencies_follow_nested_spawns_into_efc(self):
        deps = package.effect_dependencies(self.root, package.character_sources(self.root, 'db_b_01'))
        self.assertEqual(deps['missing'], [])
        self.assertIn('efc/comm_c.aar', deps['archives'])
        ids = {e['id'] for e in deps['effects']}
        # every spawn edge resolves to an effect listed in 'effects'
        self.assertTrue(all(s['effect'] in ids and s['resolved'] for s in deps['spawns']))
        self.assertTrue(any(e['shared'] for e in deps['effects']))
        # nested: some spawn comes from an effect table, not only character moves
        own = {s['from_table'] for s in deps['spawns']}
        self.assertTrue(any(t.startswith('efc/') or '_e' in t.rsplit('|', 1)[-1] for t in own))

    def test_export_writes_effect_units_and_sprite_links(self):
        with tempfile.TemporaryDirectory() as td:
            p = package.export_character(self.root, 'db_b_01', Path(td) / 'pkg')
            m = json.loads((p / 'package.json').read_text(encoding='utf-8'))
            self.assertIn('efc/comm_c.aar', [u['path'] for u in m['units']])
            self.assertEqual(m['effects']['file'], 'effects.json')
            e = json.loads((p / 'effects.json').read_text(encoding='utf-8'))
            self.assertGreater(len(e['effects']), 0)
            for eff in e['effects']:
                self.assertIsNotNone(eff['unit'])
                for tex, dirs in eff['sprites'].items():
                    self.assertTrue(dirs, f'{eff["id"]} texture {tex} not linked')
                    self.assertTrue((p / dirs[0] / 'sprite.json').is_file())
            self.assertFalse([w for w in m['warnings'] if 'effect' in w or 'GenerateID' in w])

    def test_effects_can_be_left_out(self):
        with tempfile.TemporaryDirectory() as td:
            p = package.export_character(self.root, 'db_b_01', Path(td) / 'pkg', include_effects=False)
            m = json.loads((p / 'package.json').read_text(encoding='utf-8'))
            self.assertNotIn('efc/comm_c.aar', [u['path'] for u in m['units']])
            self.assertFalse((p / 'effects.json').exists())


@unittest.skipUnless((DATA / 'stage/stage.aar').is_file(), 'requires extracted data')
class StageObjectSprites(unittest.TestCase):
    def test_every_floor_and_object_gimmick_has_a_sprite(self):
        from jus_formats import roster, stagephysics
        from jus_package import scenes, stagesprites
        root = DataRoot(str(DATA))
        sets = {s.stem: s for s in scenes.stage_sets(root)}
        floors = gimmicks = 0
        for stem, *_ in roster.STAGES:
            s = sets[stem]
            sp = stagesprites.StageSprites(root, s.members, stem)
            self.assertEqual(sp.problems, [], stem)
            mob = stagephysics.parse_mob(root.read(s.members['mob']))
            for f in mob.floors:
                self.assertIsNotNone(sp.floor_frame(f), f'{stem} floor')
                floors += 1
            for g in mob.gimmicks:
                if g.type_id in stagesprites.GIMMICK_OBJECT_TYPES:
                    self.assertIsNotNone(sp.gimmick_frame(g), f'{stem} gimmick type {g.type_id}')
                    gimmicks += 1
        self.assertEqual((floors, gimmicks), (47, 19))

    def test_floor_cell_matches_almt_collision_rect(self):
        from jus_formats import stagephysics
        from jus_package import scenes, stagesprites
        root = DataRoot(str(DATA))
        s = {x.stem: x for x in scenes.stage_sets(root)}['bg_es']
        f = stagephysics.parse_mob(root.read(s.members['mob'])).floors[0]
        fr = stagesprites.StageSprites(root, s.members, 'bg_es').floor_frame(f)
        # motion 0x401100 CollisionRect0 = (-32, -1, 32, 32); cell is 64 px wide from x-32
        self.assertEqual((fr.left, fr.image.width), (-32, 64))
        self.assertEqual(-fr.left, f.half_width)


if __name__ == '__main__':
    unittest.main()
