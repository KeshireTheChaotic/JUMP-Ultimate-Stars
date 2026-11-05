"""GenerateID spawn projection (jus_package.spawns)."""
import os
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from jus_formats import almt  # noqa: E402
from jus_package import spawns  # noqa: E402

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))


def keyed(field, *pairs):
    return almt.Track(field, True, keys=[almt.Key(t, v) for t, v in pairs])


def static(field, value):
    return almt.Track(field, False, value=value)


class SyntheticSpawns(unittest.TestCase):
    def setUp(self):
        self.parent = almt.Move(0x00050001, 30, nodes=[
            almt.NodeAnim([static('2DPos', [10, -20]), keyed('GenerateID', (4, 0x00050100), (12, 0x00050100))]),
            almt.NodeAnim([keyed('2DPos', (0, [0, 0]), (8, [40, 0])), static('EffectFlags', 0x0008),
                           keyed('GenerateID', (8, 0x00050200))]),
        ])
        self.one_shot = almt.Move(0x00050100, 6, nodes=[almt.NodeAnim([static('BoundsIndex', 0)])])
        self.looping = almt.Move(0x00050200, 5, flags=almt.MOVE_FLAG_LOOP,
                                 nodes=[almt.NodeAnim([keyed('GenerateID', (2, 0x00050100))])])
        self.catalog = {m.id: (m, ['root'], f'x.aar|{m.id:x}.amt')
                        for m in (self.one_shot, self.looping)}

    def test_equal_ids_are_distinct_spawns(self):
        sp = spawns.keyed_spawns(self.parent, ['a', 'b'])
        self.assertEqual([(s.tick, s.effect_id, s.occurrence) for s in sp],
                         [(4, 0x00050100, 0), (8, 0x00050200, 0), (12, 0x00050100, 1)])
        self.assertEqual(len({s.key for s in sp}), 3)

    def test_lifetime_and_anchor(self):
        p = spawns.project(self.parent, ['a', 'b'], 12, self.catalog)
        by = {(i.spawn.effect_id, i.spawn.occurrence, i.depth): i for i in p.instances}
        # first one-shot (spawned at 4, length 6) has ended by tick 12 -> absent
        self.assertNotIn((0x00050100, 0, 0), by)
        second = by[(0x00050100, 1, 0)]
        self.assertEqual((second.sub_tick, second.anchor), (0, (10, -20)))
        loop = by[(0x00050200, 0, 0)]
        self.assertEqual(loop.sub_tick, 4)                       # (12-8) % 5
        self.assertEqual(loop.anchor, (40, 0))                   # node b 2DPos on tick 8
        self.assertTrue(loop.flags & spawns.FLAG_SCREEN_REFERENCE)
        nested = by[(0x00050100, 0, 1)]                          # spawned by the loop at its tick 2
        self.assertEqual((nested.sub_tick, nested.anchor, nested.parent), (2, (40, 0), loop))

    def test_missing_ids_reported(self):
        p = spawns.project(self.parent, ['a', 'b'], 30, {})
        self.assertEqual(len(p.missing), 3)
        self.assertEqual(p.instances, [])

    def test_span(self):
        sp = spawns.keyed_spawns(self.parent, ['a', 'b'])
        self.assertEqual(spawns.effect_span(sp[0], self.one_shot, 30), (4, 10, False))
        self.assertEqual(spawns.effect_span(sp[1], self.looping, 30), (8, 30, True))


@unittest.skipUnless((DATA / 'chr/ChrArc.aar').is_file(), 'JUS_DATA not available')
class RealSpawns(unittest.TestCase):
    def test_character_and_common_effects_resolve(self):
        from jus_package.project import DataRoot, join
        r = DataRoot(DATA)
        cid = 'dg_b_02'
        scope = [s['path'] for s in r.character_sources(cid) if s['role'] == 'animation-archive']
        tables = []
        for p in scope + r.effect_archives():
            for e in r.archive(p).entries:
                if e.ext == '.amt':
                    tables.append((join(p, e.name), almt.parse(e.payload())))
        catalog = spawns.build_catalog(tables)
        base = next(t for p, t in tables if p.endswith(f'{cid}.amt'))
        total = missing = 0
        for m in base.moves:
            sps = spawns.keyed_spawns(m, base.node_names)
            total += len(sps)
            missing += sum(1 for s in sps if s.effect_id not in catalog)
            for s in sps:
                proj = spawns.project(m, base.node_names, s.tick, catalog)
                self.assertTrue(any(i.spawn == s and i.sub_tick == 0 for i in proj.instances))
        self.assertGreater(total, 0)
        self.assertEqual(missing, 0)


if __name__ == '__main__':
    unittest.main()
