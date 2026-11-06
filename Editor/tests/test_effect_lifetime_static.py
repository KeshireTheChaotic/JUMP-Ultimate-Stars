"""ROM trace regression for the db_b_01 repeated GX aura. No emulator needed."""
import os
import struct
import unittest
from pathlib import Path
from jus_package.project import DataRoot
from jus_package.resources import ResourceIndex
from tools.audit_spawn_lifecycle import collect
from tools.verify_lifetime_dispatch import SLOTS, check_slots, ARM9_BASE

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))


class TestExecutableVtables(unittest.TestCase):
    def test_callback_slots_have_separate_loop_and_deactivation_handlers(self):
        end = max(vt + offset for _, vt, offset, _, _ in SLOTS) - ARM9_BASE + 4
        fake = bytearray(end)
        for _, vt, offset, target, _ in SLOTS:
            struct.pack_into('<I', fake, vt - ARM9_BASE + offset, target)
        results = check_slots(bytes(fake))
        self.assertTrue(all(row['passed'] for row in results))
        self.assertNotEqual(next(row['expected'] for row in results if row['slot'] == '0x078'),
                            next(row['expected'] for row in results if row['slot'] == '0x064'))
        fake[SLOTS[0][1] - ARM9_BASE + SLOTS[0][2]] ^= 1
        self.assertFalse(all(row['passed'] for row in check_slots(bytes(fake))))


@unittest.skipUnless((DATA / 'chr/ChrArc.aar').is_file(), 'requires extracted JUS assets')
class TestMove41Reality(unittest.TestCase):
    def test_repeated_aura_move_and_exact_phases(self):
        # chara_action(4) at 9/45/49 tears the previous aura down before the new spawn
        report = collect(DataRoot(DATA), 'db_b_01', 41, 55)
        self.assertEqual(report['move_id'], '0x05C12C')
        self.assertEqual(report['nominal_live_count'], 1)
        self.assertEqual(report['nominal_loop_overlap'], {'0x05C189': 0, '0x05C18A': 1})
        live = [(e['id'], e['spawn_tick'], e['frame_tick'], e['frames'][0]['frame'])
                for e in report['spawned_effects']
                if e.get('nominal_phase') == 'looping-until-runtime-removal']
        self.assertEqual(live, [('0x05C18A', 49, 6, 3)])
        self.assertEqual([e['spawn_tick'] for e in report['spawned_effects']
                          if e.get('nominal_phase') == 'torn-down'], [0, 9, 45])

    def test_aura_uses_gx_texture_atlas_not_obj(self):
        root = DataRoot(DATA)
        sources = root.character_sources('db_b_01')
        index = ResourceIndex(root, [r['path'] for r in sources
                                     if r['role'] in ('animation-archive', 'image-archive')])
        pair = index.sprite(0x05C180)
        self.assertIsNotNone(pair)
        dstx, atlas = pair
        self.assertEqual(atlas.mode, 0x50)
        self.assertTrue(atlas.is_atlas)
        self.assertFalse(atlas.is_obj)
        self.assertGreaterEqual(len(dstx.frames), 8)

if __name__ == '__main__':
    unittest.main()
