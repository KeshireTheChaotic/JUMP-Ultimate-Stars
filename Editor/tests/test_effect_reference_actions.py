"""Ghidra-backed NoteTrack reference operations, not mistaken for effect destruction."""
import os
import sys
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))

from jus_formats import almt, notetrack
from jus_package import spawns

DATA = Path(os.environ.get('JUS_DATA', r'D:\Library\Development\JUS\data'))


def action(code):
    return notetrack.Command.from_values(0x0300, [code,0,0,0,0,0,0])

class RefActionUnit(unittest.TestCase):
    def setUp(self):
        nt = notetrack.NoteTrack([
            notetrack.NoteKey(9,[action(4)]),
            notetrack.NoteKey(67,[action(5)]),
        ])
        self.m = almt.Move(0x5C12C,150,nodes=[
            almt.NodeAnim([almt.Track('NoteTrack',False,raw=nt.build(),opaque=True)]),
            almt.NodeAnim([almt.Track('GenerateID',True,keys=[almt.Key(0,0x5C189),almt.Key(9,0x5C18A)])]),
        ])
        self.names=['SP01','GN01']
        self.catalog={k:(almt.Move(k,16,flags=almt.MOVE_FLAG_LOOP),['SP01'],'effect.amt')
                      for k in (0x5C189,0x5C18A)}

    def test_ref_actions_extract_both_kinds(self):
        events=spawns.reference_events(self.m,self.names)
        self.assertEqual([(e.tick,e.node,e.action,e.kind) for e in events],
                         [(9,'SP01',4,'all GN children'),(67,'SP01',5,'first eligible GN child')])

    def test_retains_are_not_a_death_event(self):
        p=spawns.project(self.m,self.names,70,self.catalog)
        self.assertEqual([(e.spawn.effect_id,e.spawn.tick) for e in p.instances],
                         [(0x5C189,0),(0x5C18A,9)])
        self.assertEqual(spawns.nominal_lifetime(spawns.keyed_spawns(self.m,self.names)[0],
                                                self.catalog[0x5C189][0],70).phase,
                         'looping-until-runtime-removal')

    def test_invalid_notetrack_does_not_break_preview(self):
        self.m.nodes[0].tracks[0].raw=b'\0'
        self.assertEqual(spawns.reference_events(self.m,self.names),())

@unittest.skipUnless((DATA/'chr/ChrArc.aar').is_file(),'requires extracted data')
class RefActionReal(unittest.TestCase):
    def test_db_move41_ref_event_sequence(self):
        from jus_package.project import DataRoot
        from tools.audit_spawn_lifecycle import collect
        audit=collect(DataRoot(DATA),'db_b_01',41,55)
        self.assertEqual(audit['move_id'],'0x05C12C')
        self.assertEqual(audit['nominal_live_count'],4)
        self.assertEqual(audit['nominal_loop_overlap']['0x05C18A'],3)
        self.assertEqual([(e['tick'],e['action']) for e in audit['reference_actions']],
                         [(9,4),(45,4),(49,4),(59,4),(67,5),(84,5),(126,4),(150,4)])
        self.assertEqual([x['spawn_tick'] for x in audit['spawned_effects']
                          if x['id']=='0x05C18A' and x['nominal_phase']=='looping-until-runtime-removal'],
                         [9,45,49])

if __name__=='__main__':unittest.main()
