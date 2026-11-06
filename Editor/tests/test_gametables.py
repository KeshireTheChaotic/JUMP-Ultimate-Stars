"""Global game tables decode on the shipped data with the documented layouts."""
import os
import struct
import unittest
from pathlib import Path

from jus_formats import gametables
from jus_package.project import DataRoot, join


def _root():
    folder = os.environ.get('JUS_DATA') or os.environ.get('JUS_DATA_ROOT')
    if not folder or not Path(folder, 'bin/commwin.bin').is_file():
        raise unittest.SkipTest('extracted game assets not present')
    return DataRoot(folder)


class Synthetic(unittest.TestCase):
    def test_self_relative_text_and_palette(self):
        rec = struct.pack('<II', 1, 0) + struct.pack('<I', 4) + b'\0' * 4   # pname-like: 1 record
        blob = struct.pack('<I', 2) + bytes(8) + bytes(8)
        self.assertTrue(gametables.is_palette_script('title/x.bin', blob))
        self.assertFalse(gametables.is_palette_script('jgalaxy/mission.bin', blob))
        self.assertEqual(len(gametables.view('title/x.bin', blob).records), 2)
        self.assertEqual(gametables._text(b'\x04\0\0\0AB\0', 0), 'AB')
        self.assertEqual(gametables._text(rec, 4), '')


class RealData(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.root = _root()

    def test_loose_tables(self):
        counts = {'bin/piece.bin': 41, 'bin/demo.bin': 50, 'bin/bgm.bin': 52, 'bin/location.bin': 91,
                  'bin/pname.bin': 89, 'bin/commwin.bin': 129, 'bin/jpower.bin': 311, 'bin/secret.bin': 11}
        for path, n in counts.items():
            v = gametables.view(path, self.root.read(path))
            self.assertEqual(len(v.records), n, path)
        # every text slot of the text tables resolves to strict CP932 (no replacement chars)
        for path in ('bin/piece.bin', 'bin/demo.bin', 'bin/bgm.bin', 'bin/location.bin', 'bin/pname.bin',
                     'bin/commwin.bin'):
            v = gametables.view(path, self.root.read(path))
            texts = [t for r in v.records for k, t in r.fields if k.startswith(('text', 'line'))]
            self.assertTrue(texts, path)
            self.assertFalse(any('�' in t for t in texts), path)

    def test_archive_members(self):
        q = gametables.view('jquiz/jquiz.bin', self.root.read(join('jquiz/jquiz_pack.aar', 'jquiz/jquiz.bin')))
        self.assertEqual(len(q.records), 3006)
        staff = gametables.view('ending/StaffRoll.bin', self.root.read(join('ending/ending.aar', 'ending/StaffRoll.bin')))
        self.assertEqual(len(staff.records), 185)
        order = gametables.view('ending/TitleOrder.bin',
                                self.root.read(join('ending/ending.aar', 'ending/TitleOrder.bin')))
        self.assertEqual([r.label.split()[-1] for r in order.records], [str(i) for i in range(1, 42)] + ['0'])

    def test_palette_scripts(self):
        found = 0
        for arc in ('title/title.aar', 'topmenu/topmenu.aar', 'opening/opening.aar', 'result/result.aar',
                    'jgalaxy/jgalaxy.aar'):
            for e in self.root.archive(arc).entries:
                if e.ext == '.bin' and gametables.view(e.name, e.payload()) is not None:
                    found += 1
        self.assertEqual(found, 36)


if __name__ == '__main__':
    unittest.main()
