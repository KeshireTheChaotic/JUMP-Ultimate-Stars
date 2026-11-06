"""Character Forge: slot contract, scaffold → draft → build → validate, cross-slot remap, names."""
import json
import os
import struct
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import roster  # noqa: E402
from jus_package.project import DataRoot  # noqa: E402
from tools.charforge import forge, slots  # noqa: E402

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
ARM9 = Path(os.environ.get('JUS_ARM9', r'D:\Library\Development\JUS\reverse_engineering\verified_binaries'
                                       r'\52e262163e0d304c\arm9.bin'))
HAVE = (DATA / 'chr/ChrArc.aar').is_file()


class SlotTable(unittest.TestCase):
    def test_blocks_and_records(self):
        self.assertEqual(len(slots.RES_BASE), len(roster.BATTLE_IDS))
        self.assertEqual(slots.block('db_b_01'), 0x5C100)
        self.assertEqual(slots.block('dg_b_01'), 0x4C100)        # flag bit 0 masked off
        self.assertTrue(slots.in_block(0x5C1FF, 0x5C100))
        self.assertFalse(slots.in_block(0x5C200, 0x5C100))
        with self.assertRaises(ValueError):
            slots.record('cs_b_01')                              # roster is hard-coded

    def test_remap_rules(self):
        rm = forge.Remap('db_b_01', 'op_b_04')
        self.assertEqual(rm.rid(0x4605C138), 0x460A4438)          # type byte kept, block moved
        self.assertEqual(rm.rid(0x5F1000), 0x5F1000 + slots.record('op_b_04'))
        self.assertEqual(rm.rid(0x7C138), 0x7C138)                # other blocks untouched
        self.assertEqual(rm.name('chr/db_b_01_4c.aar'), 'chr/op_b_04_4c.aar')

    @unittest.skipUnless(ARM9.is_file(), 'arm9.bin not available')
    def test_res_base_matches_arm9(self):
        self.assertEqual(slots.verify_res_base(ARM9.read_bytes()), [])


@unittest.skipUnless(HAVE, 'requires extracted data')
class Pipeline(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.tmp = tempfile.TemporaryDirectory()
        cls.dir = Path(cls.tmp.name)

    @classmethod
    def tearDownClass(cls):
        cls.tmp.cleanup()

    def _run(self, template, slot, tag):
        root = DataRoot(str(DATA))
        work, pkg = self.dir / f'{tag}_work', self.dir / f'{tag}_pkg'
        brief = forge.scaffold(root, template, slot, work, name='テスト')
        self.assertTrue((work / 'BRIEF.md').is_file())
        own = [s for s in brief['sprites'] if not s['shared']]
        self.assertTrue(own and all((work / 'art' / s['key']).is_dir() for s in own))
        self.assertEqual(len({s['key'] for s in brief['sprites']}), len(brief['sprites']))
        forge.draft(work, ['#101010', '#802020', '#e0a060', '#ffffff'])
        report = forge.build(root, work, pkg)
        self.assertEqual(report['errors'], [])
        result = forge.validate(DataRoot(str(DATA)), pkg, slot)
        self.assertEqual(result['errors'], [])
        return work, pkg, report, result

    def test_same_slot_replacement(self):
        work, pkg, report, result = self._run('db_b_01', 'db_b_01', 'same')
        self.assertNotIn('remap', report)
        m = json.loads((pkg / 'package.json').read_text(encoding='utf-8'))
        self.assertEqual(m['charforge']['slot'], 'db_b_01')
        # build wrote a 15-colour palette into the body DSIG json
        body = next(s for s in report['sprites'] if s['key'] == 'db_b_01__db_b_01')
        self.assertEqual(len(body['palette']), 16)

    def test_cross_slot_remap(self):
        work, pkg, report, result = self._run('db_b_01', 'op_b_04', 'cross')
        self.assertGreater(report['remap']['ids_remapped'], 0)
        self.assertGreater(report['remap']['tables']['chr/ChrBin.aar|chr/shot/op_b_04.bin'], 0)
        m = json.loads((pkg / 'package.json').read_text(encoding='utf-8'))
        paths = [u['path'] for u in m['units']]
        self.assertIn('chr/ChrArc.aar|chr/op_b_04.aar', paths)
        self.assertFalse([p for p in paths if 'db_b_01' in p])

    def test_incompatible_template_refused(self):
        root = DataRoot(str(DATA))
        self.assertTrue(forge.compatibility(root, 'db_b_01', 'db_b_12'))
        with self.assertRaises(ValueError):
            forge.scaffold(root, 'db_b_01', 'db_b_12', self.dir / 'bad')

    def test_shared_effect_art_is_rejected(self):
        root = DataRoot(str(DATA))
        work = self.dir / 'shared_work'
        brief = forge.scaffold(root, 'db_b_01', 'db_b_01', work)
        forge.draft(work, ['#000000', '#ffffff'])
        shared = next(s for s in brief['sprites'] if s['shared'])
        (work / 'art' / shared['key']).mkdir(parents=True, exist_ok=True)
        from PIL import Image
        Image.new('RGBA', (8, 8)).save(work / 'art' / shared['key'] / '000.png')
        report = forge.build(root, work, self.dir / 'shared_pkg')
        self.assertTrue(any('shared efc texture' in e for e in report['errors']))

    def test_display_name_changes_only_one_record(self):
        root = DataRoot(str(DATA))
        orig = root.read('bin/chr_b_t.bin')
        new = forge.set_display_name(root, 'op_b_04', 'デンジ', write=False)
        a, b = roster.record_names(orig), roster.record_names(new)
        rec = roster.battle_roster(list(roster.BATTLE_IDS), a).index('op_b_04')
        self.assertEqual([i for i, (x, y) in enumerate(zip(a, b)) if x != y], [rec])
        self.assertEqual(b[rec], 'デンジ')
        diff = [i for i in range(0, len(orig) - 3, 4) if orig[i:i + 4] != new[i:i + 4]]
        self.assertLessEqual(len(diff), 2)          # the one offset + alignment padding


if __name__ == '__main__':
    unittest.main()
