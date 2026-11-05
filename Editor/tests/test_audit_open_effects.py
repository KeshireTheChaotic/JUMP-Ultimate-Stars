"""Synthetic, data-independent tests for the unresolved-effects audit."""
from __future__ import annotations
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
from jus_formats import alar, almt
from tools.audit_open_effects import audit


class OpenEffectAuditTests(unittest.TestCase):
    def test_tracks_and_unknown_layouts_are_evidence_only(self):
        animation = almt.AlmtFile(node_names=['GN01'])
        for field in ('BoundsIndex', 'EffectFlags', 'ParentLink', 'GenerateID'):
            animation.field_index(field)
        animation.moves.append(almt.Move(0x1234, 20, nodes=[almt.NodeAnim([
            almt.Track('BoundsIndex', False, 3),
            almt.Track('EffectFlags', True, keys=[almt.Key(0, 2), almt.Key(4, 6)]),
            almt.Track('ParentLink', False, 1),
            almt.Track('GenerateID', True, keys=[almt.Key(4, 0x1235)]),
        ])]))
        archive = alar.Archive(2, 3)
        archive.add(alar.Entry('move.amt', animation.build(), 0x41001234))
        archive.add(alar.Entry('menu.dtx', b'DSTX' + bytes((1, 6, 2, 0, 30, 0)) + bytes(40), 0x40005678))
        source = archive.build()
        with tempfile.TemporaryDirectory() as tmp:
            f = Path(tmp) / 'test.aar'
            f.write_bytes(source)
            report = audit(Path(tmp))
            self.assertEqual(f.read_bytes(), source)
        self.assertEqual(report['counts']['almt_moves'], 1)
        self.assertEqual(report['authored_tracks']['BoundsIndex'], 1)
        self.assertEqual(report['authored_tracks']['PatternNo'], 0)
        self.assertEqual(report['effect_flag_bit4_occurrences'][0]['value'], 6)
        self.assertEqual(report['effect_flag_bit4_occurrences'][0]['tick'], 4)
        self.assertEqual(report['dstx_05_06'][0]['flags'], 6)
        self.assertEqual(report['bounds_and_pattern_same_node'], [])
        self.assertFalse(report['parse_problems'])


if __name__ == '__main__':
    unittest.main()
