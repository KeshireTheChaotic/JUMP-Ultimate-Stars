"""Read-only DSTX 0x05/0x06 tilemap layout decoder regression tests."""
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
        cell_bytes = 1 if flag == 5 else 2
        desc = struct.pack('<HBB', 7, 8, 4) + struct.pack('<HBB', 40, 3, 6)
        first = list(range(32)) if flag == 5 else [0x2000 + i for i in range(32)]
        second = list(range(100, 118)) if flag == 5 else [0x4000 + i for i in range(18)]
        def encode(values):
            return bytes(values) if cell_bytes == 1 else struct.pack('<' + str(len(values)) + 'H', *values)
        aux = bytearray(struct.pack('<HH', 4, 4 + 32 * cell_bytes))
        aux += encode(first) + encode(second)
        while len(aux) % 4:
            aux.append(0)
        hdr = b'DSTX' + bytes((1, flag)) + struct.pack('<HH', 2, 20 + len(aux))
        return hdr + desc + b'\0\0' + aux + b'DSIG\x01\x20\0\0'

    def test_decodes_layout_and_preserves_binary(self):
        for flag in (5, 6):
            with self.subTest(flag=flag):
                blob = self.make(flag)
                layout = parse_layout(blob)
                self.assertEqual(layout.build(), blob)
                self.assertEqual([(p.first_tile, p.tiles_w, p.tiles_h) for p in layout.panels],
                                 [(7, 8, 4), (40, 3, 6)])
                self.assertEqual(layout.reserved, b'\0\0')
                self.assertEqual(layout.mode6, flag == 6)
                self.assertEqual(layout.cell_bytes, 2 if flag == 6 else 1)
                self.assertEqual(layout.map_offsets, (4, 68 if flag == 6 else 36))
                self.assertEqual([len(m.cells) for m in layout.panel_maps], [32, 18])
                self.assertEqual(layout.panel_maps[0].row(0),
                                 tuple(range(0x2000, 0x2008)) if flag == 6 else tuple(range(8)))
                self.assertEqual(layout.panel_maps[1].row(5)[-1],
                                 0x4011 if flag == 6 else 117)
                self.assertEqual(layout.panel_maps[0].raw,
                                 blob[24:24 + 32 * layout.cell_bytes])
                self.assertTrue(layout.embedded.startswith(b'DSIG'))
                self.assertIn('maps decoded', dtx_kind(blob))
                with self.assertRaises(IndexError):
                    layout.panel_maps[0].row(4)
                with self.assertRaises(ValueError):
                    DstxFile.parse(blob)

    def test_invalid_section_offset_and_nonzero_tail_rejected(self):
        for flag in (5, 6):
            with self.subTest(flag=flag):
                data = bytearray(self.make(flag))
                data[8:10] = struct.pack('<H', 9)
                with self.assertRaises(ValueError):
                    parse_layout(bytes(data))
                data = bytearray(self.make(flag))
                data[22:24] = struct.pack('<H', 5)  # bad second panel map offset
                with self.assertRaises(ValueError):
                    parse_layout(bytes(data))
        data = bytearray(self.make(5))
        data[20 + 54] = 1  # final alignment padding in mode 5
        with self.assertRaises(ValueError):
            parse_layout(bytes(data))


@unittest.skipUnless((Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
                      / 'stage/stage.aar').is_file(), 'extracted game data not available')
class RealLayoutTables(unittest.TestCase):
    def test_shipped_layout_tables(self):
        from tools.audit_open_effects import _child_archives
        root = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
        seen = panels = 0
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
                    self.assertEqual(len(layout.panel_maps), len(layout.panels))
                    for m in layout.panel_maps:
                        self.assertEqual(len(m.cells), m.tiles_w * m.tiles_h)
                        self.assertEqual(len(m.raw), len(m.cells) * m.cell_bytes)
                    panels += len(layout.panel_maps)
                    seen += 1
        self.assertEqual(seen, 50)
        self.assertEqual(panels, 1094)


if __name__ == '__main__':
    unittest.main()
