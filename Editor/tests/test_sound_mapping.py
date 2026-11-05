"""Sound archive mapping: roster order, battle/support symbol rule, unresolved cases."""
import os
import struct
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from jus_formats import roster, sdat  # noqa: E402
from jus_package import sounds  # noqa: E402

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))


def resolver(names):
    td = tempfile.mkdtemp()
    r = sounds.SoundResolver(td)
    r.symbols = sdat.SdatSymbols(seqarcs=[sdat.SeqArc(i, n, seqs) for i, (n, seqs) in enumerate(names)])
    return r


class SymbolRule(unittest.TestCase):
    def setUp(self):
        self.r = resolver([('', []), ('SEQ_BATTLE', []), ('SEQ_GT_B_01', ['v0', 'v1']),
                           ('SEQ_GT_B_01_4', ['a']), ('SEQ_GT_B_01_6', ['b', 'c']),
                           ('SEQ_BB_S_01_2', ['SE_SPT2'])])

    def test_battle_base_and_form(self):
        c = self.r.resolve(0x0401, 1, 'chr/ChrArc.aar|chr/gt_b_01.aar')
        self.assertEqual((c.ssar, c.label), (2, 'v1'))
        c = self.r.resolve(0x0402, 0, 'chr/ChrArc.aar|chr/gt_b_01_4.aar')
        self.assertEqual(c.ssar, 3)

    def test_base_archive_special_is_a_deck_choice(self):
        # without form records, the base-archive 0x0402 bank is never guessed (not even by index fit)
        cue = self.r.resolve(0x0402, 1, 'chr/gt_b_01.aar')
        self.assertIsNone(cue.ssar)
        self.assertIn('koma deployed', cue.note)
        chosen = self.r.resolve(0x0402, 0, 'chr/gt_b_01.aar', form=4)
        self.assertEqual((chosen.ssar, chosen.evidence), (3, 'Unknown'))  # a preview choice, not a fact
        self.assertEqual(self.r.forms('chr/gt_b_01.aar'), [4, 6])


class TracedSlots(unittest.TestCase):
    """chr_b record +0x30 base, +0x32 + (size-4)*2 per koma size; koma.bin decides the sizes."""

    def setUp(self):
        self.r = resolver([('', []), ('SEQ_BATTLE', []), ('SEQ_GT_B_01', ['v']), ('SEQ_GT_B_01_4', ['a']),
                           ('SEQ_GT_B_01_6', ['b']), ('SEQ_KK_B_01', ['k']), ('SEQ_KK_B_01_5', ['kk5'])])
        self.r.record_names = ['Gintoki', 'Ryotsu']
        self.r.roster = ['gt_b_01', 'kk_b_01']
        self.r.records = [[2, 3, 0, 4, 0, 0], [5, 0, 6, 0, 0, 0]]     # +0x30, then 4..8-cell slots
        self.r.koma_cards = [(0, 0, 4), (0, 0, 5), (0, 0, 6), (0, 1, 5), (1, 0, 2)]

    def test_form_archive_uses_its_size_slot(self):
        self.assertEqual(self.r.resolve(0x0402, 0, 'chr/gt_b_01_6.aar').label, 'b')
        silent = self.r.resolve(0x0402, 0, 'chr/gt_b_01_5.aar')        # 5-cell slot is 0
        self.assertEqual((silent.ssar, silent.evidence), (None, 'Direct'))
        self.assertIn('silent', silent.label)

    def test_base_archive(self):
        one = self.r.resolve(0x0402, 0, 'chr/kk_b_01.aar')             # only a 5-cell koma exists
        self.assertEqual((one.label, one.evidence), ('kk5', 'Cross-checked'))
        many = self.r.resolve(0x0402, 0, 'chr/gt_b_01.aar')            # 4/5/6-cell koma exist
        self.assertIsNone(many.ssar)
        self.assertIn('5-cell → silent', many.note)
        self.assertEqual(self.r.forms('chr/gt_b_01.aar'), [4, 5, 6])
        self.assertEqual(self.r.resolve(0x0402, 0, 'chr/gt_b_01.aar', form=6).label, 'b')

    def test_base_sound(self):
        self.assertEqual(self.r.resolve(0x0401, 0, 'chr/gt_b_01.aar').label, 'v')


class SupportRule(unittest.TestCase):
    def setUp(self):
        self.r = resolver([('', []), ('SEQ_BATTLE', []), ('SEQ_GT_B_01', ['v0', 'v1']),
                           ('SEQ_GT_B_01_4', ['a']), ('SEQ_GT_B_01_6', ['b', 'c']),
                           ('SEQ_BB_S_01_2', ['SE_SPT2'])])

    def test_support_forms_and_owner(self):
        c = self.r.resolve(0x0402, 0, 'chr/ChrArc.aar|chr/bb_s_01_2.aar')
        self.assertEqual((c.ssar, c.label), (5, 'SE_SPT2'))
        missing = self.r.resolve(0x0402, 0, 'chr/na_s_02_2.aar')
        self.assertIsNone(missing.ssar)
        self.assertIn('unresolved', missing.label)
        owner = self.r.resolve(0x0401, 0, 'chr/bb_s_01_2.aar')
        self.assertIsNone(owner.ssar)
        self.assertIn('owner', owner.note)


class Roster(unittest.TestCase):
    def test_blocks_must_line_up(self):
        names = [n for _, n in roster.SERIES_ORDER]
        ids = [f'{p}_b_01' for p, _ in roster.SERIES_ORDER]
        self.assertEqual(roster.battle_roster(ids, names), ids)
        with self.assertRaises(ValueError):
            roster.battle_roster(ids, ['Somebody'] + names[1:])

    def test_string_table(self):
        strings = [b'Goku', b'x'] + [b''] * 51
        table = bytearray(4 * len(strings))
        body = bytearray()
        for i, s in enumerate(strings):
            struct.pack_into('<i', table, 4 * i, len(table) + len(body) - 4 * i)
            body += s + b'\0'
        self.assertEqual(roster.record_names(bytes(table + body)), ['Goku'])


@unittest.skipUnless((DATA / 'bin/chr_b_t.bin').is_file(), 'JUS_DATA not available')
class RealRoster(unittest.TestCase):
    def test_record_zero_is_goku_and_bobobo_is_47(self):
        from jus_package.project import DataRoot
        r = sounds.SoundResolver(DATA)
        r.set_characters([c for c in DataRoot(DATA).characters() if '_b_' in c])
        self.assertEqual(r.roster_error, '')
        self.assertEqual(r.roster[0], 'db_b_01')
        self.assertEqual(r.roster.index('bb_b_01'), 47)
        self.assertEqual(r.display_name('db_b_01'), 'Goku')
        # chr_b.bin lists db_b_01's archives; they agree with the symbol rule
        listed = {r._name(v) for v in r.chr_b_archives('db_b_01')}
        self.assertTrue(listed and all(n.startswith('SEQ_DB_B_01') for n in listed))
        # bb_b_01 no longer borrows Goku's special-move sounds
        c = r.resolve(0x0402, 1, 'chr/ChrArc.aar|chr/bb_b_01.aar')
        self.assertFalse(c.name and 'GOK' in c.name)

    def test_support_records_and_traced_silences(self):
        from jus_formats import roster as R
        r = sounds.SoundResolver(DATA)
        self.assertEqual(len(r.support_records), len(R.SUPPORT_IDS))
        self.assertEqual(r.record('na_s_02'), ('s', R.SUPPORT_IDS.index('na_s_02')))
        # na_s_02 / ds_s_03 / oj_s_01: both koma slots are 0 → +0xA6 = 0 → the handler plays nothing
        for cid in ('na_s_02', 'ds_s_03', 'oj_s_01'):
            c = r.resolve(0x0402, 0, f'chr/ChrArc.aar|chr/{cid}_2.aar')
            self.assertEqual((c.ssar, c.evidence), (None, 'Direct'), cid)
        # support 0x0401: the summon never sets +0xA4 → silent
        c = r.resolve(0x0401, 0, 'chr/ChrArc.aar|chr/bb_s_01_2.aar')
        self.assertEqual((c.ssar, c.evidence), (None, 'Direct'))
        # every support slot names SEQ_<SUPPORT>_<size>
        for i, cid in enumerate(R.SUPPORT_IDS):
            for size, v in zip((2, 3), r.support_records[i]):
                if v:
                    self.assertEqual(r._name(v).upper(), f'SEQ_{cid.upper()}_{size}')

    def test_every_slot_names_its_koma_size(self):
        """chr_b +0x30 = SEQ_<CHAR>, +0x32+(size-4)*2 = SEQ_<CHAR>_<size> (main 0x02077C0C)."""
        from jus_package.project import DataRoot
        r = sounds.SoundResolver(DATA)
        r.set_characters([c for c in DataRoot(DATA).characters() if '_b_' in c])
        checked = 0
        for cid in r.roster:
            slots = r.slots(cid)
            for k, v in slots.items():
                if v:
                    want = f'SEQ_{cid.upper()}' + ('' if k == 'base' else f'_{k}')
                    self.assertEqual(r._name(v).upper(), want)
                    checked += 1
        self.assertEqual(checked, 187)
        self.assertTrue(r.deck_sizes('kn_b_01'))


if __name__ == '__main__':
    unittest.main()
