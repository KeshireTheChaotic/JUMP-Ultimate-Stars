"""Pursuer effect links: command-driven effects are not ALMT GenerateID."""
from __future__ import annotations

import os
from pathlib import Path
import unittest
import sys

HERE = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(HERE))

from jus_formats import alar, almt, notetrack  # noqa: E402
from jus_package import effectlinks  # noqa: E402


def with_notes(*keys):
    track = almt.Track('NoteTrack', True, opaque=True,
                       raw=notetrack.NoteTrack([
                           notetrack.NoteKey(t, [notetrack.Command.from_values(0x0300, args)
                                                for args in cmd_lists])
                           for t, cmd_lists in keys]).build())
    return almt.Move(0x1234, 48, nodes=[almt.NodeAnim([track])])


class EffectLinks(unittest.TestCase):
    TABLE = bytes.fromhex('41c104000000000042c104000000000043c104000000000050c1040000000000')

    def test_source_and_dual_slot_resolution(self):
        m = with_notes((0, [[13, 3, 3, 0, 0, 0, 0], [14, 0, -53, 0, 0, 0, 0]]))
        ev, = effectlinks.pursuer_events(m, ['SP01'], effectlinks.parse_effect_records(self.TABLE))
        self.assertEqual((ev.move_a, ev.move_b), (0x4C150, 0x4C150))
        self.assertEqual(ev.animation_ids, (0x4C150,))
        self.assertEqual(ev.target_xy, (0, -53))
        self.assertFalse(ev.snap)
        self.assertEqual(ev.tick, 0)
        self.assertIsNone(m.nodes[0].track('GenerateID'))

    def test_multiple_states_and_intermediate_target(self):
        m = with_notes((3, [[13, 0, 1, 0, 0, 0, 0]]),
                       (5, [[14, -28, -53, 1, 0, 0, 0]]))
        ev = effectlinks.pursuer_events(m, ['SP01'], effectlinks.parse_effect_records(self.TABLE))
        self.assertEqual(ev[0].animation_ids, (0x4C141, 0x4C142))
        self.assertIsNone(ev[0].target_xy)
        self.assertEqual(effectlinks.active_event(ev, 4).tick, 3)
        self.assertEqual(effectlinks.active_event(ev, 5).target_xy, (-28, -53))
        self.assertTrue(ev[1].snap)
        self.assertIsNone(effectlinks.active_event(ev, 2))

    def test_bounds_nonloop_and_loop(self):
        m = almt.Move(1, 28, flags=1)
        self.assertEqual(effectlinks.effect_frame_tick(m, 31), 3)
        m.flags = 0
        self.assertEqual(effectlinks.effect_frame_tick(m, 28), 28)
        self.assertIsNone(effectlinks.effect_frame_tick(m, 29))

    def test_no_implicit_slot_for_target_only(self):
        ev = effectlinks.pursuer_events(with_notes((0, [[14, 2, 3, 0, 0, 0, 0]])),
                                        ['SP01'], effectlinks.parse_effect_records(self.TABLE))
        self.assertEqual(ev[0].animation_ids, ())
        self.assertEqual(ev[0].target_xy, (2, 3))

    def test_real_move_24(self):
        root = Path(os.environ.get('JUS_DATA', os.environ.get('JUS_DATA_ROOT',
                                         r'D:\Library\Development\JUS\data')))
        if not (root / 'chr/ChrArc.aar').is_file() or not (root / 'chr/ChrBin.aar').is_file():
            self.skipTest('full extracted ChrArc and ChrBin not found')
        arcs = alar.parse((root / 'chr/ChrArc.aar').read_bytes())
        char = alar.open_nested(arcs.get('chr/dg_b_01.aar').data)
        moves = almt.parse(char.get('dg_b_01.amt').payload())
        eff = almt.parse(char.get('dg_b_01_e0.amt').payload())
        binarc = alar.parse((root / 'chr/ChrBin.aar').read_bytes())
        recs = effectlinks.parse_effect_records(binarc.get('chr/effect/dg_b_01.bin').payload())
        self.assertEqual([r.move_id for r in recs[:4]], [0x4C141,0x4C142,0x4C143,0x4C150])
        base = moves.moves[24]
        self.assertEqual(base.id, 0x4C118)
        self.assertEqual(base.nodes[1].track('GenerateID').keys[0].value, 0)
        self.assertEqual(base.nodes[2].track('GenerateID').keys[0].value, 0)
        ev, = effectlinks.pursuer_events(base, moves.node_names, recs)
        self.assertEqual((ev.tick,ev.move_a,ev.move_b,ev.target_xy), (0,0x4C150,0x4C150,(0,-53)))
        self.assertEqual(eff.move_by_id(ev.move_a), eff.moves[24])
        self.assertEqual(eff.moves[24].nodes[0].track('BoundsIndex').keys[0].value, 56)
        # Alternative move 21 selects slots 0 and 1 (the user's suspected e0 9/10).
        ev21, = effectlinks.pursuer_events(moves.moves[21], moves.node_names, recs)
        self.assertEqual(ev21.animation_ids, (0x4C141, 0x4C142))


if __name__ == '__main__':
    unittest.main()
