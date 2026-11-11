"""Native combat fields: regression against verified decompiler exports and game data.

Provenance is the original ARM9 and overlay-06 layout exports, not emulator
screen captures or third-party research labels. No full combat simulation.
"""
import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import alar, chrbin

ROOT = Path(r"D:\Library\Development\JUS")
NATIVE = ROOT / "reverse_engineering" / "functions_layout"
DATA = ROOT / "Data"


def exported(program: str, address: str) -> str:
    file = NATIVE / program / f"{program}_{address}.c"
    return file.read_text(encoding="utf-8")


class OriginalCodeContract(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        if not (NATIVE / "arm9_main" / "arm9_main_020823e4.c").is_file():
            raise unittest.SkipTest("local Ghidra layout exports are unavailable")

    def test_verified_rom_nature_and_class_tables(self):
        rom_file = ROOT / "reverse_engineering" / "verified_binaries" / "52e262163e0d304c" / "arm9.bin"
        if not rom_file.is_file():
            self.skipTest("SHA-verified ARM9 image not available")
        rom = rom_file.read_bytes()
        nature_b = (
            256, 256, 384, 256,
            384, 256, 256, 256,
            256, 384, 256, 256,
            256, 256, 256, 256,
        )
        nature_a = (
            256, 384, 256, 256,
            256, 256, 384, 256,
            384, 256, 256, 256,
            256, 256, 256, 256,
        )
        # Source addresses are runtime addresses in 0x02000000-based ARM9 static.
        self.assertEqual(struct.unpack_from("<16H", rom, 0x9FEF4), nature_b)
        self.assertEqual(struct.unpack_from("<16H", rom, 0x9FF14), nature_a)
        self.assertEqual(tuple(rom[0x92E68:0x92E78]), chrbin.DAMAGE_CLASS_CATEGORIES)

    def test_damage_reads_col_plus_four_and_applies_additive_gates(self):
        src = exported("arm9_main", "020823e4")
        # Hit element +0x10 -> chr/col record; s8 damage at record +4.
        self.assertIn("*(char *)(*(int *)(param_2 + 0x10) + 4)", src)
        self.assertIn("iVar4 = iVar4 * 0x100", src)
        self.assertIn("iVar3 + 0x184", src)
        self.assertIn("iVar3 + 0x186", src)
        self.assertIn("iVar8 + 0x44", src)
        self.assertIn("iVar4 * 0x40 >> 8", src)
        self.assertIn("*param_4 = iVar4 + iVar3 >> 2", src)

    def test_collision_caller_has_separate_sp_stun_and_knockback_bytes(self):
        src = exported("arm9_main", "02080f14")
        self.assertIn("iVar8 = (int)*(char *)(*(int *)(iVar21 + 0x10) + 5)", src)
        self.assertIn("iVar8 * 0x100", src)
        self.assertIn("iVar7 + 0x171", src)
        self.assertIn("(iVar21 + 0x10) + 7", src)
        self.assertIn("(iVar18 + 0xc)", src)
        self.assertIn("iVar18 + 0xd", src)
        self.assertIn("iVar7 + 0x148", src)
        self.assertIn("iVar7 + 0x14a", src)

    def test_ov6_hp_sp_consumers_and_guard_halving(self):
        src = exported("arm9_ov06", "0215a978")
        self.assertIn("+ 0x134", src)
        self.assertIn("iVar3 = iVar3 >> 1", src)
        self.assertIn("FUN_02159a10(param_1)", src)
        self.assertIn("FUN_021598d0(param_1)", src)
        self.assertIn("FUN_020783b8", src)
        self.assertIn("FUN_020781e4", src)
        self.assertIn("+ 0x171", src)
        self.assertIn("param_1 + 0x115", src)

    def test_native_status_dispatch_and_cancellation_gate(self):
        src = exported("arm9_ov06", "02158ed0")
        self.assertIn("param_2 * 8", src)
        self.assertIn("FUN_0200d12c", src)
        self.assertIn("puVar8 + 0xe", src)
        gate = exported("arm9_ov06", "0215986c")
        self.assertIn("FUN_02158eb0(param_1 + 0x120", gate)
        self.assertIn("*(undefined2 *)(param_2 + 0xe) = 0", gate)

    def test_cancel_flag_is_note_command_not_a_permanent_button(self):
        callback = exported("arm9_ov06", "02157a44")
        move = exported("arm9_ov06", "02159ef8")
        self.assertIn("*(undefined1 *)(param_2 + 0xf3) = 1", callback)
        self.assertIn("*(undefined1 *)(param_2 + 0xf4) = 1", callback)
        self.assertIn("*(undefined1 *)(param_1 + 0xf4) = 0", move)
        self.assertIn("*(undefined1 *)(param_1 + 0xf3) = 0", move)
        self.assertIn("*(uint *)(param_1 + 0xc4)", move)
        self.assertIn("FUN_0215a720(param_1)", move)
        self.assertIn("FUN_0215a8c0(param_1)", move)


class CombatRecordCodec(unittest.TestCase):
    def test_damage_gate_category_is_independent_from_col_class_and_visuals(self):
        for value, expected in (
            (0, 1), (1, 1), (2, 2), (11, 2),
            (12, 0), (15, 0), (16, None), (0x3F, None), (0x80, None)
        ):
            raw = bytearray(20)
            raw[0] = 7  # unrelated collision precedence class
            raw[0x0E] = value
            rec = chrbin.ColRecord(bytes(raw))
            self.assertEqual(rec.damage_gate_category, expected)
            self.assertEqual(rec.impact_effect_selectors[0], value if value < 0x80 else value-256)

    def test_signed_offsets_and_surgical_edit(self):
        raw = bytearray(range(20))
        raw[4], raw[5], raw[7] = 0xFA, 0xFD, 0xFB
        row = chrbin.ColRecord(bytes(raw))
        self.assertEqual((row.base_damage, row.sp_pressure, row.hitstun_contribution), (-6, -3, -5))
        self.assertEqual((row.direct_contact_magnitude, row.contact_accumulator_delta), (-3, -5))
        self.assertEqual(row.field_values()["base_damage"], -6)
        updated = row.replace_fields(base_damage=12)
        self.assertEqual(updated.raw[4], 12)
        self.assertEqual([i for i in range(20) if row.raw[i] != updated.raw[i]], [4])
        self.assertEqual(updated.replace_fields(base_damage=-6).raw, row.raw)
        with self.assertRaises(ValueError):
            row.replace_fields(base_damage=128)

    @unittest.skipUnless((DATA / "chr" / "ChrBin.aar").is_file(), "Original ChrBin archive unavailable")
    def test_every_original_collision_row_round_trips(self):
        archive = alar.open_nested((DATA / "chr" / "ChrBin.aar").read_bytes())
        count = 0
        for member in archive.entries:
            if chrbin.kind_of(member.name) != "col":
                continue
            table = chrbin.parse(member.payload(), member.name)
            for i in range(table.count):
                row = table.col_record(i)
                self.assertEqual(row.base_damage, struct.unpack_from("<b", row.raw, 4)[0])
                self.assertEqual(row.sp_pressure, struct.unpack_from("<b", row.raw, 5)[0])
                self.assertEqual(row.hitstun_contribution, struct.unpack_from("<b", row.raw, 7)[0])
                self.assertEqual(row.replace_fields(**row.field_values()).raw, row.raw)
                count += 1
        self.assertEqual(count, 2837)


if __name__ == "__main__":
    unittest.main()
