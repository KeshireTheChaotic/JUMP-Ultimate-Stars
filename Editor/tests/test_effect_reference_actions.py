"""NoteTrack chara_action(4/5) tear down GN-spawned effects (ARM9 0x0206C650 / 0x0206C760)."""
import os
import sys
import unittest
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from jus_formats import almt, notetrack
from jus_package import spawns

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))


def action(code):
    return notetrack.Command.from_values(0x0300, [code, 0, 0, 0, 0, 0, 0])


def move(nt_keys, gn_keys, names=('SP01', 'GN01')):
    nt = notetrack.NoteTrack([notetrack.NoteKey(t, [action(a) for a in acts]) for t, acts in nt_keys])
    nodes = [almt.NodeAnim([almt.Track('NoteTrack', False, raw=nt.build(), opaque=True)])]
    for keys in gn_keys:
        nodes.append(almt.NodeAnim([almt.Track('GenerateID', True, keys=[almt.Key(t, v) for t, v in keys])]))
    return almt.Move(0x5C12C, 150, nodes=nodes), list(names)


class Teardown(unittest.TestCase):
    def setUp(self):
        self.m, self.names = move([(9, [4]), (67, [5])], [[(0, 0x5C189), (9, 0x5C18A)]])
        self.catalog = {k: (almt.Move(k, 16, flags=almt.MOVE_FLAG_LOOP), ['SP01'], 'effect.amt')
                        for k in (0x5C189, 0x5C18A)}

    def test_events_extract_both_kinds(self):
        events = spawns.reference_events(self.m, self.names)
        self.assertEqual([(e.tick, e.node, e.action) for e in events], [(9, 'SP01', 4), (67, 'SP01', 5)])

    def test_action4_kills_before_same_tick_spawn(self):
        kills = spawns.teardowns(self.m, self.names, self.catalog)
        sp = spawns.keyed_spawns(self.m, self.names)
        self.assertEqual(kills[sp[0].key], spawns.Teardown(9, 4))     # tick-0 loop dies at 9
        self.assertEqual(kills[sp[1].key], spawns.Teardown(67, 5))    # spawned at 9 survives 9
        self.assertEqual([i.spawn.tick for i in spawns.project(self.m, self.names, 8, self.catalog).instances], [0])
        self.assertEqual([i.spawn.tick for i in spawns.project(self.m, self.names, 9, self.catalog).instances], [9])
        self.assertEqual(spawns.project(self.m, self.names, 70, self.catalog).instances, [])
        self.assertEqual(spawns.effect_span(sp[0], self.catalog[0x5C189][0], 150, kills[sp[0].key]),
                         (0, 8, False))

    def test_action5_takes_oldest_live_and_skips_finished_one_shots(self):
        m, names = move([(10, [5])], [[(0, 0x1), (2, 0x2), (4, 0x2)]])
        cat = {1: (almt.Move(1, 3), ['x'], 'e'),                              # one-shot, gone by 10
               2: (almt.Move(2, 8, flags=almt.MOVE_FLAG_LOOP), ['x'], 'e')}
        kills = spawns.teardowns(m, names, cat)
        sp = spawns.keyed_spawns(m, names)
        self.assertEqual([kills.get(s.key) for s in sp], [None, spawns.Teardown(10, 5), None])

    def test_only_the_generator_chain_is_affected(self):
        # GN02 without GN01: FUN_0206C650 stops at the first missing GNxx
        m, names = move([(5, [4])], [[(0, 0x2)]], names=('SP01', 'GN02'))
        cat = {2: (almt.Move(2, 8, flags=almt.MOVE_FLAG_LOOP), ['x'], 'e')}
        self.assertEqual(spawns.generator_chain(names), [])
        self.assertEqual(spawns.teardowns(m, names, cat), {})

    def test_teardown_can_be_disabled(self):
        p = spawns.project(self.m, self.names, 70, self.catalog, apply_teardown=False)
        self.assertEqual(len(p.instances), 2)

    def test_invalid_notetrack_does_not_break_preview(self):
        self.m.nodes[0].tracks[0].raw = b'\0'
        self.assertEqual(spawns.reference_events(self.m, self.names), ())


@unittest.skipUnless((DATA / 'chr/ChrArc.aar').is_file(), 'requires extracted data')
class TeardownReal(unittest.TestCase):
    def test_db_move41_one_aura_at_a_time(self):
        from jus_package.project import DataRoot
        from tools.audit_spawn_lifecycle import collect
        audit = collect(DataRoot(DATA), 'db_b_01', 41, 55)
        self.assertEqual(audit['move_id'], '0x05C12C')
        self.assertEqual([(e['tick'], e['action']) for e in audit['reference_actions']],
                         [(9, 4), (45, 4), (49, 4), (59, 4), (67, 5), (84, 5), (126, 4), (150, 4)])
        self.assertEqual(audit['nominal_live_count'], 1)
        self.assertEqual([x['spawn_tick'] for x in audit['spawned_effects']
                          if x['id'] == '0x05C18A' and x['nominal_phase'] == 'looping-until-runtime-removal'],
                         [49])
        torn = {x['spawn_tick']: x['torn_down'] for x in audit['spawned_effects'] if x.get('torn_down')}
        self.assertEqual(torn[0], {'tick': 9, 'action': 4})
        self.assertEqual(torn[59], {'tick': 67, 'action': 5})


if __name__ == '__main__':
    unittest.main()
