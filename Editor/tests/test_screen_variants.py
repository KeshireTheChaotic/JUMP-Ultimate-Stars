"""Source-backed scene-variant and graphics routing integrity."""
import os
import pathlib
import unittest

from jus_package import screencomposition,screenvariants,scenes
from jus_package.project import DataRoot
from jus_formats import infotext,ncl

class ScreenVariantTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.meta=screencomposition.load_manifest()
        p=os.environ.get('JUS_DATA_ROOT')
        cls.root=DataRoot(p) if p and pathlib.Path(p).is_dir() else None

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'), 'Requires original game data')
    def test_source_backgrounds_and_engine_routing(self):
        expected={2:2,3:2,4:3,6:3,7:2,21:2,32:1,34:2}
        for sid, min_layers in expected.items():
            scene=self.meta['scenes'][sid]
            for variant in screenvariants.variants_for_scene(sid):
                with self.subTest(scene=sid,variant=variant['id']):
                    result=screenvariants.scene_layers(self.root,scene,variant['id'])
                    self.assertGreaterEqual(len(result),min_layers)
                    self.assertTrue(all(self.root.exists(layer.atm_path) and
                                        self.root.exists(layer.image_path) for layer,cfg in result))
                    self.assertEqual(len({z.name for z,cfg in result}),len(result))
                    self.assertTrue(all(z.map.entries for z,cfg in result))
                    self.assertTrue(all(cfg['screen'] in ('Top','Bottom') for z,cfg in result))
                    self.assertTrue(all(cfg['native_bg'] for z,cfg in result))
        # Verified constructor puts main engine on lower LCD in TopMenu.
        topmenu=self.meta['scenes'][3]
        r=screenvariants.scene_layers(self.root,topmenu)
        self.assertTrue(any(c['engine']=='main' and c['screen']=='Bottom' for l,c in r))
        self.assertTrue(any(c['engine']=='sub' and c['screen']=='Top' for l,c in r))
        # Stage Select and Deck Select inherit the reset's main-top routing;
        # sub-layer backgrounds must NOT all be drawn on top.
        for sid in (4,6):
            r=screenvariants.scene_layers(self.root,self.meta['scenes'][sid])
            self.assertTrue(any(c['engine']=='sub' and c['screen']=='Bottom' for l,c in r))
        self.assertTrue(any(c['animated'] for l,c in screenvariants.scene_layers(
            self.root,self.meta['scenes'][3])))

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'), 'Requires original game data')
    def test_source_sprite_and_palette_stays_unchanged(self):
        scene=self.meta['scenes'][4]
        variant=screenvariants.variants_for_scene(4)[0]
        layers=screenvariants.scene_layers(self.root,scene,variant['id'])
        original_palette=[self.root.read(p) for p in variant['palettes']]
        self.assertTrue(all(ncl.parse(p).banks for p in original_palette))
        first=layers[0]
        image0,errs0=scenes.render_layer(self.root,first[0])
        image1,errs1=scenes.render_layer(self.root,first[0],
                                        palette_override_paths=first[1]['palette_overrides'])
        self.assertIsNotNone(image0)
        self.assertIsNotNone(image1)
        self.assertEqual(image0.size,image1.size)
        self.assertEqual(original_palette,[self.root.read(p) for p in variant['palettes']])
        self.assertEqual(self.root.dirty_files(),[])

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'), 'Requires original game data')
    def test_valid_character_variants_and_info(self):
        choices=screenvariants.series_codes(self.root)
        self.assertEqual(len(choices),42)
        for sid in (3,7,21,34):
            with self.subTest(scene=sid):
                layers=screenvariants.scene_layers(self.root,self.meta['scenes'][sid],None,choices[0])
                self.assertTrue(any('info/chr/' in l.atm_path for l,c in layers))
        comics=screenvariants.series_codes(self.root,'comic')
        self.assertEqual(len(comics),41)
        r=screenvariants.scene_layers(self.root,self.meta['scenes'][32],'comics',comics[0])
        self.assertTrue(any('database/comic/' in l.atm_path for l,c in r))
        self.assertEqual(dict(screenvariants.SCENE_TEXT_IDS[3]),
                         {0:0,1:1,2:2,3:3,4:6,5:5,6:7,7:8})
        self.assertEqual(dict(screenvariants.SCENE_TEXT_IDS[21]),{0:41,1:42,2:43,3:44})
        self.assertEqual(dict(screenvariants.SCENE_TEXT_IDS[34])['option-24'],24)
        self.assertEqual(infotext.read_shared_explanation(self.root,41)[0],
                         'Enter|Ranking|tournament!')

if __name__=='__main__':
    unittest.main()
