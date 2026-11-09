"""R08 Phase 7: source-backed Inspector panels preserve evidence and controls."""
from __future__ import annotations
import ast,hashlib,json,textwrap,unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import Mock
from app.editor import EditorApp
from jus_formats import notetrack

ROOT=Path(__file__).resolve().parents[1]
CONTRACT=json.loads((ROOT/'tests/fixtures/editor_r08_phase7_inspector_hashes.json').read_text('utf8'))


class Spy:
    def __init__(self):self.calls=[]
    def section(self,*args,**kw):self.calls.append(('section',args,kw))
    def value(self,*args,**kw):self.calls.append(('value',args,kw))
    def text(self,*args,**kw):self.calls.append(('text',args,kw))
    def buttons(self,*args,**kw):self.calls.append(('buttons',args,kw))
    def check(self,*args,**kw):self.calls.append(('check',args,kw))
    def combo(self,*args,**kw):self.calls.append(('combo',args,kw))
    def evidence(self,*args,**kw):self.calls.append(('evidence',args,kw))
    def has(self,category,token):
        return any(kind==category and any(token in str(a) for a in args)
                   for kind,args,_ in self.calls)


class OriginalEventInspectorTests(unittest.TestCase):
    def test_four_inspector_presenters_match_original_method_hashes(self):
        records=CONTRACT['original_method_body_contracts']
        self.assertEqual(len(records),4)
        cls=next(n for n in ast.parse((ROOT/'app/editor.py').read_text('utf8')).body
                 if isinstance(n,ast.ClassDef) and n.name=='EditorApp')
        delegates={x.name:x for x in cls.body if isinstance(x,ast.FunctionDef)}
        for name,item in records.items():
            with self.subTest(name=name):
                source=(ROOT/item['module']).read_text('utf8')
                lines=source.splitlines(keepends=True)
                fn=next(x for x in ast.parse(source).body
                        if isinstance(x,ast.FunctionDef) and x.name==item['callable'])
                body=textwrap.dedent(''.join(lines[fn.lineno:fn.end_lineno]))
                self.assertEqual(hashlib.sha256(body.encode('utf8')).hexdigest(),
                                 item['transformed_body_sha256'])
                self.assertLessEqual(delegates[name].end_lineno-delegates[name].lineno+1,3)

    def test_unresolved_spawn_only_displays_original_source_uncertainty(self):
        ins=Spy()
        spawn=SimpleNamespace(effect_id=0x050001,node='GN01',key_index=2,
                              tick=10,occurrence=1)
        actor=SimpleNamespace(_effect_moves={})
        EditorApp._inspect_spawn(actor,ins,{'spawn':spawn})
        self.assertTrue(ins.has('section','Spawned effect'))
        self.assertTrue(ins.has('value','not found in character'))
        self.assertFalse(ins.has('section','At playhead'))

    def test_physics_evidence_remains_explicitly_assumed_unknown(self):
        ins=Spy()
        actor=SimpleNamespace(
            _motion=SimpleNamespace(at=lambda tick:None,commands=[],notes=[]),
            tick=12,facing_left=object(),motion_floor=object(),
            root_motion=object(),show_motion=object(),
            _motion_changed=Mock(),redraw_view=Mock())
        EditorApp._inspect_physics(actor,ins)
        self.assertTrue(ins.has('section','Physics'))
        self.assertTrue(ins.has('evidence','Floor/walls'))
        self.assertTrue(ins.has('evidence','Unknown'))
        self.assertTrue(ins.has('check','Assume floor'))
        self.assertTrue(ins.has('check','Root motion'))

    def test_silent_sound_inspector_preserves_source_trace_labels(self):
        ins=Spy()
        actor=SimpleNamespace(
            tick=0,_cues=[],_audio=None,_sounds=None,
            sound_enabled=object(),_sound_changed=Mock(),
            _sound_koma_card=None,container=None)
        EditorApp._inspect_sound(actor,ins)
        self.assertTrue(ins.has('section','Sound cues'))
        self.assertTrue(ins.has('evidence','Same-frame repeats'))
        self.assertTrue(ins.has('evidence','Deck choice'))
        self.assertTrue(ins.has('evidence','Unknown'))
        self.assertTrue(ins.has('check','Sound enabled'))
        self.assertFalse(ins.has('buttons','Play cues'))

    def test_notetrack_inspector_reads_original_binary_event_at_tick(self):
        cmd=notetrack.Command.from_values(0x0400,[8])
        raw=notetrack.NoteTrack([notetrack.NoteKey(9,[cmd])]).build()
        track=SimpleNamespace(encoded=lambda:raw)
        actor=SimpleNamespace(sel_key=None,tick=9,command_text=lambda c:c.text(),
                              add_note_event=Mock(),edit_note_events=Mock(),
                              edit_track=Mock(),delete_selected_key=Mock())
        ins=Spy()
        EditorApp._inspect_notes(actor,ins,track)
        self.assertTrue(ins.has('section','Events @ 9'))
        self.assertTrue(ins.has('value','1 in 1 keys'))
        self.assertTrue(ins.has('value','play_se'))
        self.assertTrue(ins.has('buttons','Add event'))
        self.assertTrue(ins.has('buttons','Edit as text'))


if __name__=='__main__': unittest.main()
