"""Event catalog and non-destructive NoteTrack timeline editing."""
from __future__ import annotations

import sys
import unittest
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import eventops, notetrack, almt

class EventOperations(unittest.TestCase):
    def test_all_opcode_argument_schemas_roundtrip(self):
        self.assertEqual(len(notetrack.OPCODES), 46)
        for opcode, info in notetrack.OPCODES.items():
            with self.subTest(opcode=f'{opcode:04x}'):
                types = eventops.argument_types(opcode)
                cmd = notetrack.Command.from_values(opcode, [0] * len(types))
                self.assertEqual(len(cmd.encode()), info.size)
                self.assertEqual(cmd.values(), [0] * len(types))
                track = notetrack.NoteTrack([notetrack.NoteKey(0, [cmd])])
                self.assertEqual(notetrack.parse(track.build()).build(), track.build())

    def test_add_same_tick_and_ordered_ticks(self):
        nt = notetrack.NoteTrack()
        a = notetrack.Command.from_values(0x0400, [10])
        b = notetrack.Command.from_values(0x0300, [13, 3, 3, 0, 0, 0, 0])
        c = notetrack.Command.from_values(0x0103, [2, -1])
        eventops.add_event(nt, 13, a)
        eventops.add_event(nt, 0, b)
        eventops.add_event(nt, 0, c)
        self.assertEqual([ev.tick for ev in eventops.list_events(nt)], [0, 0, 13])
        self.assertEqual([cmd.opcode for cmd in nt.keys[0].commands], [0x0300, 0x0103])
        self.assertEqual(notetrack.parse(nt.build()).build(), nt.build())

    def test_replace_move_remove_preserves_other_commands(self):
        nt = notetrack.NoteTrack([notetrack.NoteKey(0, [
            notetrack.Command.from_values(0x0300, [13, 3, 3, 0, 0, 0, 0]),
            notetrack.Command.from_values(0x0300, [14, 0, -53, 0, 0, 0, 0])])])
        before = nt.keys[0].commands[1].encode()
        eventops.change_event(nt, 0, 0, 8, notetrack.Command.from_values(0x0400, [4]))
        self.assertEqual(nt.keys[0].commands[0].encode(), before)
        self.assertEqual([ev.tick for ev in eventops.list_events(nt)], [0, 8])
        eventops.remove_event(nt, 1, 0)
        self.assertEqual([k.tick for k in nt.keys], [0])
        self.assertEqual(notetrack.parse(nt.build()).build(), nt.build())

    def test_marker_special_range_only(self):
        self.assertIsNone(eventops.marker_event(0))
        self.assertIsNone(eventops.marker_event(0xFF00))
        self.assertEqual(eventops.marker_event(0xFF80), 0xFF00)
        self.assertEqual(eventops.marker_event(0xFF8F), 0xFF0F)
        self.assertIsNone(eventops.marker_event(0xFF90))

    def test_marker_jump_pair_resolves_target_tick(self):
        keys=[almt.Key(0,0),almt.Key(4,0xFF00),almt.Key(6,0xFF80)]
        self.assertEqual(eventops.marker_jump_pairs(keys),[(6,0xFF00,4)])
        self.assertEqual(eventops.marker_jump_pairs(keys[::2]),[(6,0xFF00,None)])

    def test_invalid_tick(self):
        with self.assertRaises(ValueError):
            eventops.add_event(notetrack.NoteTrack(), 65535,
                               notetrack.Command.from_values(0x0400, [1]))

if __name__=='__main__':
    unittest.main()
