"""Resource registry: groups, edge resolution, where-used (jus_package.registry)."""
import os
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from jus_package import registry  # noqa: E402

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))


class Groups(unittest.TestCase):
    def test_group_of(self):
        g = registry.group_of
        self.assertEqual(g('chr/ChrArc.aar|chr/bb_b_01_5.aar|bb_b_01_e5.amt'), 'chr:bb_b_01')
        self.assertEqual(g('chr/bb_b_01c.aar|bb_b_01.dig'), 'chr:bb_b_01')
        self.assertEqual(g('chr/ChrBin.aar|chr/effect/dg_b_01.bin'), 'chr:dg_b_01')
        self.assertEqual(g('battle/ChrWin.aar|battle/chr/gt_b_02_b.aar|x.dtx'), 'chr:gt_b_02')
        self.assertEqual(g('efc/comm_c.aar|jyocyu_efe_c.amt'), 'common')
        self.assertEqual(g('title/title.aar|title/logo_copy.aar|x.dig'), 'title/title.aar')
        self.assertEqual(g('chr/ChrArc.aar'), 'chr/ChrArc.aar')


@unittest.skipUnless((DATA / 'chr/ChrArc.aar').is_file(), 'JUS_DATA not available')
class RealRegistry(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        from jus_package.project import DataRoot
        cls.root = DataRoot(DATA)
        cls.reg = registry.build(cls.root)

    def test_everything_registered_and_resolved(self):
        s = self.reg.stats()
        self.assertEqual(s['resources'], 12733)
        self.assertEqual(s['unresolved'], 0, self.reg.unresolved[:5])
        self.assertEqual(self.reg.errors, [])
        for kind in ('texture', 'image', 'spawn', 'pursuer', 'pursuer-use', 'collision', 'tiles'):
            self.assertGreater(s['by_kind'].get(kind, 0), 0, kind)

    def test_where_used_spawned_effect(self):
        e5 = 'chr/ChrArc.aar|chr/gt_b_02_5.aar|gt_b_02_e5.amt'
        users = self.reg.used_by(e5, move_id=0x018280)
        self.assertTrue(any(r.kind == 'spawn' and 'move 40' in r.src_detail and 'key 0 @0' in r.src_detail
                            for r in users), users[:3])

    def test_common_effect_users_span_characters(self):
        comm = 'efc/comm_c.aar|jyocyu_efe_c.amt'
        chars = {registry.group_of(r.src) for r in self.reg.used_by(comm) if r.kind == 'spawn'}
        self.assertGreater(len(chars), 5)

    def test_pursuer_table(self):
        tab = 'chr/ChrBin.aar|chr/effect/dg_b_01.bin'
        recs = {r.src_detail: r for r in self.reg.uses(tab) if r.kind == 'pursuer'}
        self.assertEqual(recs['record 3'].value, 0x0004C150)
        self.assertTrue(recs['record 3'].dst.endswith('dg_b_01_e0.amt'))
        users = [r for r in self.reg.used_by(tab) if r.kind == 'pursuer-use']
        self.assertTrue(any('move 24' in r.src_detail and r.dst_detail == 'slots 3/3' for r in users))

    def test_search_by_move_id_and_name(self):
        hits = self.reg.search('0x04C150')
        self.assertTrue(any(h.path.endswith('dg_b_01_e0.amt') for h in hits))
        self.assertTrue(all('title' in h.path for h in self.reg.search('title/space_top00')))


if __name__ == '__main__':
    unittest.main()
