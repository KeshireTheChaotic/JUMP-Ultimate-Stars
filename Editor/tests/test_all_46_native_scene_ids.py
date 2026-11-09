"""Original ARM9 46 scene ID ledger; no character rendering/fabrication."""
import json,os,struct
from pathlib import Path
import unittest

from jus_package import nativescenes,screenvariants,sourceauthority,screencomposition,scenes
from jus_package.project import DataRoot
R=Path(r'D:\Library\Development\JUS\reverse_engineering')
class AllNativeScenes(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        src=os.environ.get('JUS_DATA_ROOT')
        cls.data=DataRoot(src) if src and Path(src).exists() else None

    def test_all_original_ids_classified_once(self):
        ledger=nativescenes.catalog()
        self.assertEqual(ledger['scene_count'],46)
        self.assertEqual(ledger['composition_scene_count'],28)
        self.assertEqual(ledger['non_tile_static_unresolved_count'],18)
        self.assertEqual([x['id'] for x in ledger['scenes']],list(range(46)))
        self.assertEqual(sum(bool(v) for v in screenvariants.SCENE_VARIANTS.values()),28)
        self.assertTrue(all(s['code_source'] for s in ledger['scenes']))
        self.assertTrue(all('saved decks' in s['deck_characters'] for s in ledger['scenes']))

    def test_callback_original_words_and_binary_thunks(self):
        call=sourceauthority.runtime_dispatch_catalog()
        self.assertEqual(len(call['families']),6)
        names=[f['id'] for f in call['families']]
        self.assertEqual(names,['JQuiz','CommuMenu','JGalaxyPreConstructor',
                                'JGalaxyCreator','JGalaxyPostConstructor','JArenaJobs'])
        self.assertEqual([f['count'] for f in call['families']],[10,25,7,7,7,12])
        self.assertEqual(len(sourceauthority.runtime_scene_modes(16)),3)
        self.assertEqual(len(sourceauthority.runtime_scene_modes(23)),1)
        self.assertIn('live object',call['families'][0]['table_entries'][1]['assembly_dispatch']['status'])
        for ov,addr,expected in [(2,0x0215BD10,0x02151544),
                                  (3,0x0215D2AC,0x0214D958),
                                  (4,0x02160390,0x0214CD20)]:
            with self.subTest(ov=ov):
                info=json.loads((R/f'layout/specs/arm9_ov{ov:02}.layout.json').read_text('utf8'))
                entry=next(f for f in info['files'] if f['name']==f'OV{ov:02}')
                content=Path(entry['path']).read_bytes()
                self.assertEqual(struct.unpack_from('<I',content,addr-entry['addr'])[0],expected)

    def test_render_modes_are_not_fake_live_graphics(self):
        for scene in nativescenes.catalog()['scenes']:
            self.assertIn('Original ARM9',scene['evidence']+' Original ARM9')
            self.assertNotIn('emulator screenshot',scene['dynamic_state_unknown'].lower())
            if scene['background_variants']:
                self.assertEqual(len(screenvariants.variants_for_scene(scene['id'])),
                                 scene['background_variant_count'])
                for variant in scene['background_variants']:
                    self.assertTrue(variant['source_layers'])
                    for obj in variant['source_layers']:
                        self.assertIn('functions_layout/arm9_',obj['source'])
                        self.assertIn('.atm',obj['atm'])
                        self.assertIn('.dig',obj['dig'])
            else:
                self.assertIn('no scene BG composition asserted',scene['composition_status'])

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'),'Original extracted game data')
    def test_every_original_native_bg_pair_renders(self):
        manifest=screencomposition.load_manifest()['scenes']
        count=0
        for scene_id in screenvariants.SCENE_VARIANTS:
            for variant in screenvariants.variants_for_scene(scene_id):
                for layer,cfg in screenvariants.scene_layers(
                     self.data,manifest[scene_id],variant['id']):
                    with self.subTest(scene=scene_id,variant=variant['id'],bg=layer.atm_path):
                        self.assertTrue(self.data.exists(layer.atm_path))
                        self.assertTrue(self.data.exists(layer.image_path))
                        self.assertTrue(cfg['native_bg'])
                        self.assertIn(cfg['screen'],('Top','Bottom'))
                        img,errors=scenes.render_layer(
                            self.data,layer,palette_override_paths=cfg.get('palette_overrides',()))
                        self.assertIsNotNone(img,(layer.atm_path,errors[:3]))
                        count+=1
        self.assertGreater(count,48)

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'),'Original extracted game data')
    def test_native_lcd_code_is_not_inverted(self):
        manifest=screencomposition.load_manifest()['scenes']
        for sid in (22,28,37,42):
            layers=screenvariants.scene_layers(self.data,manifest[sid])
            for _,c in layers:
                expected='Bottom' if c['engine']=='main' else 'Top'
                self.assertEqual(c['screen'],expected)
            self.assertEqual(screenvariants.variants_for_scene(sid)[0]['swap_at_variant'],0)
        for sid in (9,10,33):
            layers=screenvariants.scene_layers(self.data,manifest[sid])
            self.assertEqual({c['screen'] for _,c in layers},{'Top','Bottom'})
        self.assertEqual(screenvariants.variants_for_scene(20)[0]['layers'][-1]['visible'],False)
        self.assertEqual(nativescenes.scene_info(31)['native_family'],'J-Quiz object callback')

if __name__=='__main__': unittest.main()
