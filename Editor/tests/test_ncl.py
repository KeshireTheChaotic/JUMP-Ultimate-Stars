"""Original game-data validated NCCL/NCL palette decoding."""
import os
import pathlib
import struct
import unittest

from jus_formats import ncl
from jus_package.project import DataRoot, join
from jus_package import scenes


class NclTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        path = os.environ.get('JUS_DATA_ROOT')
        cls.root = DataRoot(path) if path and pathlib.Path(path).is_dir() else None

    def test_invalid_signatures_and_lengths(self):
        with self.assertRaisesRegex(ValueError, 'Not a JUS NCCL'):
            ncl.parse(b'RLCN' + bytes(552))
        with self.assertRaises(ValueError):
            ncl.parse(b'NCCL')
        good = (self.root.read('Commu/com_bg.ncl') if self.root else None)
        if good:
            broken = bytearray(good)
            broken[8:12] = b'\xff\xff\xff\xff'
            with self.assertRaises(ValueError):
                ncl.parse(bytes(broken))
            broken = bytearray(good)
            broken[0x14:0x18] = bytes((0xff, 0xff, 0xff, 0xff))
            with self.assertRaises(ValueError):
                ncl.parse(bytes(broken))

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'), 'Requires original unpacked game data')
    def test_original_ncl_all_headers_and_palette_banks(self):
        files = []
        for p in self.root.root.rglob('*.ncl'):
            files.append(p.relative_to(self.root.root).as_posix())
        for arc in scenes.screen_archives(self.root, ('screen', 'elements')):
            for member in self.root.archive(arc).entries:
                if member.ext == '.ncl':
                    files.append(join(arc, member.name))
        self.assertGreaterEqual(len(files), 26)
        for path in sorted(set(files)):
            with self.subTest(path=path):
                raw = self.root.read(path)
                data = ncl.parse(raw)
                self.assertEqual(data.build(), raw)
                self.assertEqual(data.byteorder, 0xFEFF)
                self.assertEqual(data.version, 0x100)
                self.assertEqual(data.section_tags, ('PALT', 'CMNT'))
                self.assertEqual((data.bank_size, len(data.banks)),
                                 (256, 1) if '/warp0' in path else (16, 16))
                self.assertEqual(sum(len(b) for b in data.banks), 256)
                self.assertEqual(len(data.bank_rgba(0)), data.bank_size)
                self.assertEqual(data.bank_rgba(0)[0][3], 0)

    @unittest.skipUnless(os.environ.get('JUS_DATA_ROOT'), 'Requires original unpacked game data')
    def test_loose_palette_bank13(self):
        for path in ['Commu/com_bg.ncl', 'JArena/arena_bg.ncl']:
            with self.subTest(path=path):
                palette = ncl.parse(self.root.read(path))
                self.assertEqual(len(palette.source), 556)
                self.assertEqual(set(i for i, bank in enumerate(palette.banks) if any(bank)), {13})


if __name__ == '__main__':
    unittest.main()
