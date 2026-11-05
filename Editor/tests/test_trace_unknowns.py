"""Controlled progression-save differences, without claiming field meanings."""
import tempfile
import unittest
from pathlib import Path

from tools.trace_unknowns import group_offsets, trace_diff, bytes_summary


class TraceUnknowns(unittest.TestCase):
    def test_diff_revert_and_no_guesswork(self):
        with tempfile.TemporaryDirectory() as tmp:
            p = Path(tmp)
            before = bytes([0] * 32)
            moved = bytearray(before)
            moved[5] = 7  # changed game-state byte; identity intentionally unknown
            moved[19] = 0x99  # unrelated changing field
            restored = bytearray(before)
            restored[19] = 0x88
            for path, data in ((p / 'a.sav', before), (p / 'b.sav', moved), (p / 'c.sav', restored)):
                path.write_bytes(data)
            report = trace_diff(p / 'a.sav', p / 'b.sav', p / 'c.sav')
            self.assertEqual(report['changed_bytes'], 2)
            self.assertEqual(report['returned_to_baseline_bytes'], 1)
            self.assertEqual(report['still_changed_after_revert_bytes'], 1)
            self.assertEqual(report['status'], 'BYTE-LEVEL DIFFERENCE ONLY: format not decoded')

    def test_contiguous_grouping_and_raw_summary(self):
        self.assertEqual(group_offsets([1, 2, 5, 7]), [(1, 3), (5, 6), (7, 8)])
        self.assertEqual(group_offsets([]), [])
        info = bytes_summary(bytes(range(32)))
        self.assertEqual(info['length'], 32)
        self.assertEqual(len(info['header_aligned_u32']), 8)
        self.assertEqual(len(info['sha256']), 64)


if __name__ == '__main__':
    unittest.main()
