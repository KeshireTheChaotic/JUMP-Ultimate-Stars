"""Original BIN move titles ↔ exact 32-bit ALMT resources ↔ Koma card evidence.

Tests never modify original game assets; synthetic corrupt pointers fail closed.
"""
from __future__ import annotations

import os
import struct
import unittest
from collections import Counter
from pathlib import Path

from jus_formats import roster
from jus_package.movelinks import MoveLinks, _records, visual_text
from jus_package.project import DataRoot

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\Data'))


class TextRecordTests(unittest.TestCase):
    def test_self_relative_pointer_and_literal_preservation(self):
        blob = struct.pack('<i', 4) + b'Name|with|pipes\0'
        rows = _records(blob, 1, 1, 1)
        self.assertEqual(rows, (('Name|with|pipes',),))
        self.assertEqual(visual_text(rows[0][0]), 'Name with pipes')

    def test_pointer_fail_closed(self):
        with self.assertRaises(ValueError):
            _records(struct.pack('<i', 0x100), 1, 1, 1)
        with self.assertRaises(ValueError):
            _records(struct.pack('<i', 4) + b'no terminator', 1, 1, 1)
        with self.assertRaises(ValueError):
            _records(struct.pack('<i', -4) + b'\0', 1, 1, 1)

    def test_nonpointer_words_not_decoded(self):
        # Original battle record has 51 pointer slots, then two raw non-text words.
        blob = bytearray(struct.pack('<53i', *([0] * 53)) + b'X\0')
        for i in range(51):
            struct.pack_into('<i', blob, 4 * i, 212 - 4 * i)
        blob[204:212] = b'\xff' * 8
        self.assertEqual(_records(bytes(blob), 1, 53, 51)[0][-1], 'X')


@unittest.skipUnless((DATA / 'bin/koma.bin').is_file(), 'Original JUS Data not available')
class RealMoveLinks(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.root = DataRoot(DATA)
        cls.lookup = MoveLinks(cls.root)
        cls.cards = cls.lookup._card_table.cards

    def test_source_text_records(self):
        self.assertEqual((len(self.lookup.battle_text), len(self.lookup.support_text)), (74, 193))
        self.assertEqual(self.lookup.character_name('db_b_01'), 'Goku')
        self.assertEqual(self.lookup.character_name('kn_b_01'), 'Muscle Man.')
        self.assertEqual(self.lookup.character_name('db_s_01'), 'Goku')
        self.assertEqual(self.lookup.battle_text[0][0], roster.record_names(
            self.root.read('bin/chr_b_t.bin'))[0])

    def test_every_original_card_and_actual_resource(self):
        kinds = Counter()
        special_sources = set()
        support_sources = set()
        for c in self.cards:
            kind = c.raw[6]
            kinds[kind] += 1
            linked = self.lookup.card_moves(c)
            if kind == 2:
                self.assertFalse(linked)
                continue
            self.assertEqual(len(linked), 14 if kind == 0 else 1, c.index)
            self.assertTrue(all(link.card_index == c.index for link in linked))
            self.assertTrue(all(link.resource_path.startswith('chr/ChrArc.aar|chr/')
                                for link in linked))
            for link in linked:
                self.assertIn(c, self.lookup.cards_for_move(
                    link.form, link.resource_id, almt_member=link.almt_member))
                if kind == 0 and link.category == 'battle-special':
                    self.assertTrue(link.text)
                    self.assertEqual(link.text.source, 'bin/chr_b_t.bin')
                    special_sources.add((link.form, link.resource_id))
                if kind == 1:
                    self.assertTrue(link.text)
                    self.assertEqual(link.text.source, 'bin/chr_s_t.bin')
                    support_sources.add((link.form, link.resource_id))
            if kind == 0:
                self.assertEqual(Counter(l.variant for l in linked if l.category == 'battle-special'),
                                 Counter({'A': 1, 'B': 1}))
        self.assertEqual(kinds, Counter({0: 206, 1: 372, 2: 312}))
        self.assertEqual((len(special_sources), len(support_sources)), (348, 372))

    def test_goku_original_special_text_and_slot(self):
        goku = next(c for c in self.cards if c.raw[6] == 0 and
                    c.raw[7] == roster.BATTLE_IDS.index('db_b_01') and c.size == 4)
        specs = {l.variant: l for l in self.lookup.card_moves(goku) if l.category == 'battle-special'}
        a, b = specs['A'], specs['B']
        self.assertEqual((a.offset, b.offset), (0x29, 0x2A))
        self.assertEqual((a.text.title, a.text.type_label, a.text.title_slot),
                         ('Kamehame|Ha', 'Type:Power', 1))
        self.assertEqual((b.text.title, b.text.title_slot), ('Cheap|Joke!!!', 2))
        self.assertEqual(a.text.description_slots, (25, 26))
        self.assertEqual(a.text.display_title, 'Kamehame Ha')
        self.assertEqual(a.text.source, 'bin/chr_b_t.bin')
        self.assertIsNone(self.lookup.text_for_move('db_b_01', (a.resource_id & ~255) | 0x1E,
                                                     almt_member='db_b_01.amt'))
        self.assertTrue(self.lookup.cards_for_move(
            'db_b_01', (a.resource_id & ~255) | 0x1E, almt_member='db_b_01.amt'))

    def test_kinnikuman_8_koma_special(self):
        target = next(c for c in self.cards if c.raw[6] == 0 and
                      c.raw[7] == roster.BATTLE_IDS.index('kn_b_01') and c.size == 8)
        b = next(l for l in self.lookup.card_moves(target) if l.variant == 'B')
        self.assertEqual(b.offset, 0x32)
        self.assertEqual(b.text.display_title, 'True Muscle Spark')
        self.assertEqual((b.text.title_slot, b.text.description_slots), (18, (43, 44)))

    def test_support_2_and_3_koma_move_and_text(self):
        two = self.lookup.card_moves(self.cards[1])[0]
        three = self.lookup.card_moves(self.cards[2])[0]
        self.assertEqual((two.form, three.form), ('es_s_21', 'es_s_21'))
        self.assertEqual((two.offset, three.offset), (0x00, 0x20))
        self.assertEqual((two.almt_member, three.almt_member),
                         ('es_s_21_2.amt', 'es_s_21_3.amt'))
        self.assertEqual((two.text.title_slot, three.text.title_slot), (1, 3))
        self.assertEqual((two.text.display_title, three.text.display_title),
                         ('Devil Bat Ghost', 'Devil Bat Hurricane'))
        self.assertNotEqual(two.resource_path, three.resource_path)

    def test_staged_koma_record_changed_size_updates_source_link(self):
        """A staged (unsaved) Koma edit changes A/B names and resource IDs."""
        from jus_package.project import DataRoot
        root = DataRoot(DATA)
        old = MoveLinks(root)
        c = old._card_table.cards[59]  # existing size-4 tr_b_01
        self.assertEqual(c.size, 4)
        before = {x.variant: x for x in old.card_moves(c) if x.variant}
        self.assertEqual(before['A'].offset, 0x29)
        modified = bytearray(root.read('bin/koma.bin'))
        modified[59 * 12 + 8] = 4  # size-5, shape variant0 is valid
        root.write_file('bin/koma.bin', bytes(modified))
        refreshed = MoveLinks(root)
        changed = refreshed._card_table.cards[59]
        self.assertEqual(changed.size, 5)
        after = {x.variant: x for x in refreshed.card_moves(changed) if x.variant}
        self.assertEqual((after['A'].offset, after['B'].offset), (0x2B, 0x2C))
        self.assertNotEqual(after['B'].text.title, before['B'].text.title)
        self.assertEqual(after['B'].text.display_title, 'Megaton Punch Combo Shot')
        self.assertEqual(root.dirty_files(), ['bin/koma.bin'])
        # Original source files are not written by DataRoot.write_file.
        self.assertEqual((DATA / 'bin/koma.bin').read_bytes()[59 * 12 + 8], 3)

    def test_staged_almt_move_id_invalidates_reverse_link(self):
        """A stale low-byte match does not persist after in-memory AMT editing."""
        from jus_formats import almt
        from jus_package.project import DataRoot
        root = DataRoot(DATA)
        svc = MoveLinks(root)
        sample = next(x for x in svc.card_moves(svc._card_table.cards[59])
                      if x.category == 'battle-special')
        original_id = sample.resource_id
        self.assertTrue(svc.cards_for_move(sample.form, original_id,
                                           almt_member=sample.almt_member))
        t = almt.parse(root.read(sample.resource_path))
        move = t.move_by_id(original_id)
        self.assertIsNotNone(move)
        move.id ^= 0x01000000  # deliberately wrong high word, same offset
        move.touch()
        root.write(sample.resource_path, t.build())
        self.assertFalse(svc.cards_for_move(sample.form, original_id,
                                            almt_member=sample.almt_member))
        self.assertIsNone(svc.text_for_move(sample.form, original_id,
                                            almt_member=sample.almt_member))
        self.assertTrue(root.dirty_files())
        # Existing original file is unchanged; only the staged DataRoot has the edit.
        untouched = MoveLinks(DataRoot(DATA))
        self.assertTrue(untouched.cards_for_move(sample.form, original_id,
                                                  almt_member=sample.almt_member))

    def test_no_low_byte_only_false_link(self):
        sample = next(l for l in self.lookup.card_moves(self.cards[59])
                      if l.category == 'battle-special')
        invented = 0xABCDEF00 | sample.offset
        self.assertFalse(self.lookup.cards_for_move(sample.form, invented,
                                                      almt_member=sample.almt_member))
        self.assertIsNone(self.lookup.text_for_move(sample.form, invented,
                                                     almt_member=sample.almt_member))
        self.assertFalse(self.lookup.cards_for_move(
            sample.form, sample.resource_id, almt_member='other_e0.amt'))


if __name__ == '__main__':
    unittest.main()
