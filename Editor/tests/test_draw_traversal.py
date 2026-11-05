"""Tests for traced DrawPrio conversion and executable evidence checker."""
from __future__ import annotations

import importlib.util
from pathlib import Path
import struct
import unittest

from jus_package.draworder import renderer_priority, submission_note

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('verify_draw_traversal',
                                              ROOT / 'tools' / 'verify_draw_traversal.py')
CHECKER = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(CHECKER)


class DrawTraversalTests(unittest.TestCase):
    def test_fixed_point_to_renderer_short(self):
        self.assertEqual(renderer_priority(0x12340), 0x1234)
        self.assertEqual(renderer_priority(0x1000), 0x0100)
        self.assertEqual(renderer_priority(0), 0)
        self.assertEqual(renderer_priority(-0x10), 0xFFFF)
        self.assertEqual(renderer_priority(0x100000), 0)

    def test_unset_is_unknown_not_zero(self):
        self.assertIn('not authored', submission_note(None))
        self.assertIn('high-priority', submission_note(0x1000))

    def test_vtable_verification_detects_mismatch(self):
        high = max(root + off - CHECKER.ARM9_BASE for root, off, _ in CHECKER.TARGETS)
        source = bytearray(high + 4)
        for root, off, target in CHECKER.TARGETS:
            struct.pack_into('<I', source, root + off - CHECKER.ARM9_BASE, target)
        self.assertTrue(all(item['pass'] for item in CHECKER.verify(source)))
        source[CHECKER.TARGETS[0][0] + CHECKER.TARGETS[0][1] - CHECKER.ARM9_BASE] ^= 1
        self.assertFalse(CHECKER.verify(source)[0]['pass'])


if __name__ == '__main__':
    unittest.main()
