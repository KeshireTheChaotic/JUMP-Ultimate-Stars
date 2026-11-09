"""Original-binary-grounded indirect scene and hardware trace tests."""
import json,os,struct
from pathlib import Path
import unittest

from jus_package import sourceauthority,screenvariants,screencomposition,scenes
from jus_package.project import DataRoot

E=Path(__file__).resolve().parents[1]
R=Path(r'D:\Library\Development\JUS\reverse_engineering')

class IndirectSceneCodeTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        p=os.environ.get('JUS_DATA_ROOT')
        cls.root=DataRoot(p) if p and Path(p).exists() else None

    def test_all_46_scene_table_entries_are_seeded(self):
        c=sourceauthority.catalog()
        self.assertEqual(c['version'],2)
        self.assertEqual(c['scene_count'],46)
        self.assertEqual([s['id'] for s in c['scenes']],list(range(46)))
        for s in c['scenes']:
            if s['create_table'] and s['create_table'].get('program','').startswith('arm9_ov'):
                self.assertTrue(s['constructor_files'],s['id'])
                self.assertEqual(s['constructor_files'][0]['depth'],0)

    def test_original_binary_callback_words(self):
        original={
          4:{0x0214ce30:0x0214cd3c,0x0214ce48:0x0214cd3c,
             0x0214ce60:0x0214cd3c,
             0x0216038c+4*9:0x0215a128,
             0x0216038c+4*5:0x0215da38,
             0x0216038c+4*1:0x0214cd20},
          7:{0x0214dcc0:0x0214da98,0x0214dcdc:0x0214da98,
             0x021689b4+4*10:0x0215d1c1,
             0x021689b4+4*7:0x021624e8},
        }
        for ov,words in original.items():
            spec=json.loads((R/f'layout/specs/arm9_ov{ov:02}.layout.json').read_text('utf8'))
            x=next(f for f in spec['files'] if f['name']==f'OV{ov:02}')
            data=Path(x['path']).read_bytes()
            for addr,value in words.items():
                with self.subTest(ov=ov,addr=hex(addr)):
                    self.assertEqual(struct.unpack_from('<I',data,addr-x['addr'])[0],value)

    def test_verified_callback_targets_and_unresolveds(self):
        expectation={18:(9,'0215a128.c'),31:(1,None),40:(5,'0215da38.c'),
                     38:(10,'0215d1c0.c'),39:(7,'021624e8.c')}
        for scene_id,(mode,suffix) in expectation.items():
            with self.subTest(scene=scene_id):
                result=sourceauthority.runtime_scene(scene_id)
                self.assertIsNotNone(result)
                entry=result['branches'][0]
                self.assertEqual(entry['selected_state_index'],mode)
                raw=entry['table_entry']
                if suffix:
                    self.assertTrue(raw['target_path'].endswith(suffix))
                else:
                    self.assertIsNone(raw['target_path'])
                    self.assertEqual(raw['raw_target'],'0x0214CD20')
        self.assertEqual(len(sourceauthority.runtime_scene(35)['branches']),14)
        self.assertEqual(sourceauthority.runtime_scene(35)['selection'],
                         'runtime condition-dependent')

    def test_topmenu_actions_are_byte_offsets_not_frames(self):
        sites=sourceauthority.topmenu_action_sites()
        offsets={p['offset'] for p in sites}
        self.assertEqual(offsets,{0,1,3,4,6,7})
        self.assertEqual(len(sites),8)
        self.assertTrue(all('functions_layout/arm9_ov00/' in p['source'] and
                            p['line']>0 for p in sites))

    def test_register_metadata_is_source_reachable_not_dynamic_state(self):
        h=sourceauthority.hardware_catalog()
        self.assertEqual(h['scene_count'],46)
        self.assertIn('original',h['authority'].lower())
        self.assertEqual(h['scenes'][3]['runtime_initial_bg_priority']['sub'],[3,2,1,0])
        for sc in h['scenes']:
            self.assertTrue(sc['possible_callback_overrides'])
            for site in sc['source_reachable_register_sites']:
                self.assertIn('functions_layout/arm9_',site['source'])

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'),'Original extracted game data')
    def test_new_verified_scene_native_bg_data(self):
        manifest=screencomposition.load_manifest()['scenes']
        for sid,expected in [(0,2),(18,4),(29,2),(36,3),(38,2),(40,4)]:
            v=screenvariants.variants_for_scene(sid)
            self.assertEqual(len(v),1)
            layers=screenvariants.scene_layers(self.root,manifest[sid])
            self.assertEqual(len(layers),expected)
            for lay,cfg in layers:
                self.assertTrue(self.root.exists(lay.atm_path))
                self.assertTrue(self.root.exists(lay.image_path))
                self.assertTrue(cfg['native_bg'])
                image,errors=scenes.render_layer(
                    self.root,lay,palette_override_paths=cfg.get('palette_overrides',()))
                self.assertIsNotNone(image,(lay.name,errors))
            self.assertEqual({c['screen'] for _,c in layers},
                                 {'Top'} if sid==29 else {'Bottom'} if sid==38 else {'Top','Bottom'})
        self.assertFalse(next(cfg for lay,cfg in screenvariants.scene_layers(
            self.root,manifest[36]) if lay.atm_path.endswith('watch_battle.atm'))['visible'])
        self.assertFalse(next(cfg for lay,cfg in screenvariants.scene_layers(
            self.root,manifest[38]) if lay.atm_path.endswith('sure02.atm'))['visible'])
        self.assertEqual(screenvariants.SCENE_TEXT_IDS[29][0][1],0x44)
        self.assertIn('02166994.c#L38-L40',screenvariants.SCENE_TEXT_SOURCE[29])
        self.assertIsNone(manifest[0]['archive'])
        for sid,bit in [(18,1),(40,0)]:
            self.assertEqual(vv['swap_at_variant'] if (vv:=screenvariants.variants_for_scene(sid)[0]) else None,bit)
            for _,cfg in screenvariants.scene_layers(self.root,manifest[sid]):
                self.assertEqual(cfg['native_evidence'],'Direct callback variant')
                self.assertTrue(cfg['routing_source'].startswith('functions_layout/'))

if __name__=='__main__':
    unittest.main()
