"""Battle stage table (ARM9 0x02092D08) and the mission → stage link (definition +0x75)."""
import os
import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import roster  # noqa: E402
from jus_formats.progression import BattleDefinition  # noqa: E402

ARM9 = Path(os.environ.get('JUS_ARM9', r'D:\Library\Development\JUS\reverse_engineering\verified_binaries'
                                       r'\52e262163e0d304c\arm9.bin'))
DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))
BASE, TABLE = 0x02000000, 0x02092D08


class StageTable(unittest.TestCase):
    def test_lookup(self):
        self.assertEqual(len(roster.STAGES), 36)
        self.assertEqual(roster.stage_stem(8), 'bg_hh')
        self.assertEqual(roster.stage_index('bg_cs'), 0x0D)      # default stage set by FUN_02070414
        self.assertIsNone(roster.stage_stem(36))
        self.assertIsNone(roster.stage_index('bg_nope'))

    def test_definition_fields(self):
        raw = bytearray(0xA4)
        raw[0x75], raw[0x76], raw[0x79] = 8, 3, 1
        raw[0x7A:0x7C] = struct.pack('<H', 99)
        d = BattleDefinition(1, 'Wall Breaker', bytes(raw))
        self.assertEqual((d.stage_index, d.rule, d.opponents, d.time_value), (8, 3, 2, 99))

    @unittest.skipUnless(ARM9.is_file(), 'unpacked ARM9 not provided via JUS_ARM9')
    def test_matches_arm9(self):
        b = ARM9.read_bytes()

        def cstr(addr):
            o = addr - BASE
            return b[o:b.index(b'\0', o)].decode('ascii')
        rows = []
        for i in range(len(roster.STAGES)):
            ptr, a, c = struct.unpack_from('<Ihh', b, TABLE - BASE + 8 * i)
            rows.append((cstr(ptr), a, c))
        self.assertEqual(rows, list(roster.STAGES))

    @unittest.skipUnless((DATA / 'jgalaxy/jgalaxy.aar').is_file(), 'requires extracted data')
    def test_every_definition_names_a_shipped_stage(self):
        from jus_package import progression as prog, scenes
        from jus_package.project import DataRoot
        root = DataRoot(str(DATA))
        cat = prog.ProgressionCatalog.load(root)
        stems = {s.stem for s in scenes.stage_sets(root)}
        for table in (cat.missions, cat.battles):
            for i in range(table.count):
                self.assertIn(roster.stage_stem(table.get(i).stage_index), stems, table.get(i).name)
        self.assertEqual(cat.missions.get(1).stage_index, 8)       # "Wall Breaker" → bg_hh


if __name__ == '__main__':
    unittest.main()
