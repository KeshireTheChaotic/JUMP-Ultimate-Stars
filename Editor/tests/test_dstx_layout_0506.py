"""Data-independent checks for the conservative DSTX flag 05/06 descriptor reader."""
from __future__ import annotations
import os
from pathlib import Path
import struct
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats.dstx import parse_layout, DstxFile
from jus_package.scenes import dtx_kind


class LayoutTables(unittest.TestCase):
    def make(self, flag=5):
        desc = struct.pack('<HBB', 7, 8, 4) + struct.pack('<HBB', 40, 3, 6)
        extra = b'raw auxiliary bytes'
        hdr = b'DSTX' + bytes((1, flag)) + struct.pack('<HH', 2, 12 + 8 + len(extra))
        return hdr + desc + b'\0\0' + extra + b'DSIG\x01\x20\0\0'

    def test_preserves_descriptor_table_and_opaque_payload(self):
        for flag in (5, 6):
            with self.subTest(flag=flag):
                blob = self.make(flag)
                layout = parse_layout(blob)
                self.assertEqual(layout.build(), blob)
                self.assertEqual([(p.first_tile, p.tiles_w, p.tiles_h) for p in layout.panels],
                                 [(7, 8, 4), (40, 3, 6)])
                self.assertEqual(layout.reserved, b'\0\0')
                self.assertEqual(layout.auxiliary, b'raw auxiliary bytes')
                self.assertTrue(layout.embedded.startswith(b'DSIG'))
                self.assertEqual(layout.mode6, flag == 6)
                self.assertIn('2 tile panels', dtx_kind(blob))
                with self.assertRaises(ValueError):
                    DstxFile.parse(blob)  # not equivalent to 6-byte sprite-piece tables

    def test_bad_section_bounds_rejected(self):
        b = bytearray(self.make())
        b[8:10] = struct.pack('<H', 9)
        with self.assertRaises(ValueError):
            parse_layout(bytes(b))


@unittest.skipUnless((Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
                      / 'stage/stage.aar').is_file(), 'extracted game data not available')
class RealLayoutTables(unittest.TestCase):
    def test_shipped_layout_tables(self):
        from tools.audit_open_effects import _child_archives
        from jus_formats.dstx import parse_layout
        root = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
        seen = 0
        for archive_name, archive in _child_archives(root):
            for entry in archive.entries:
                if entry.ext != '.dtx':
                    continue
                blob = entry.payload()
                if blob[:4] == b'DSTX' and blob[5] in (5, 6):
                    layout = parse_layout(blob)
                    self.assertEqual(layout.build(), blob, archive_name + '|' + entry.name)
                    self.assertEqual(layout.reserved, b'\0\0', archive_name + '|' + entry.name)
                    self.assertEqual(layout.embedded[:4], b'DSIG', archive_name + '|' + entry.name)
                    seen += 1
        self.assertEqual(seen, 50)



if __name__ == '__main__':
    unittest.main()
