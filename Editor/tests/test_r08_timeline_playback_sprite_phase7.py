"""R08 Phase 7: source-parity + callback scheduling / edit-state regression.

These tests only mutate fixture objects, never original JUS assets. The
source-backed ALMT NoteTrack parser is used to verify event retiming.
"""
from __future__ import annotations

import ast
import hashlib
import json
import textwrap
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import Mock

from app.editor import EditorApp
from jus_formats import notetrack

ROOT=Path(__file__).resolve().parents[1]
CONTRACT=json.loads((ROOT/'tests/fixtures/editor_r08_phase7_method_hashes.json').read_text('utf8'))


def var(value):
    return SimpleNamespace(get=lambda:value)


class OriginalSourceTransferTests(unittest.TestCase):
    def test_51_phase7_method_bodies_match_pre_extraction_sha256(self):
        items=CONTRACT['original_method_body_contracts']
        self.assertEqual(len(items),51)
        self.assertEqual(len({x['module'] for x in items.values()}),3)
        editor_text=(ROOT/'app/editor.py').read_text('utf8')
        cls=next(x for x in ast.parse(editor_text).body
                 if isinstance(x,ast.ClassDef) and x.name=='EditorApp')
        wrappers={x.name:x for x in cls.body if isinstance(x,ast.FunctionDef)}
        for name,entry in items.items():
            with self.subTest(name=name):
                source=(ROOT/entry['module']).read_text('utf8')
                lines=source.splitlines(keepends=True)
                func=next(x for x in ast.parse(source).body
                          if isinstance(x,ast.FunctionDef) and x.name==entry['callable'])
                body=textwrap.dedent(''.join(lines[func.lineno:func.end_lineno]))
                # Timeline selection intentionally evolved after the extraction:
                # node headers select elements and stop playback. Its behavioral
                # contract is covered by test_animation_timeline_selection.py.
                if name != '_timeline_select':
                    self.assertEqual(hashlib.sha256(body.encode('utf8')).hexdigest(),
                                     entry['transformed_body_sha256'])
                self.assertLessEqual(wrappers[name].end_lineno-wrappers[name].lineno+1,3)


class TimelineInteractionsTests(unittest.TestCase):
    def fixture(self):
        tr=SimpleNamespace(field='2DPos',keyed=True,opaque=False,
            keys=[SimpleNamespace(tick=3,value=[1,2]),
                  SimpleNamespace(tick=10,value=[4,5])],
            touch=Mock())
        editor=SimpleNamespace(_track=lambda sel:tr,checkpoint=Mock(),
            _track_done=Mock(),status=Mock(),sel_track=None,sel_key=None)
        row={'sel':(0,0),'kind':'keys','editable':True}
        return tr,editor,row

    def test_original_key_retime_changes_only_authored_tick_and_checkpoint(self):
        tr,actor,row=self.fixture()
        self.assertTrue(EditorApp._timeline_move_key(actor,row,3,7))
        self.assertEqual([k.tick for k in tr.keys],[7,10])
        self.assertEqual([k.value for k in tr.keys],[[1,2],[4,5]])
        actor.checkpoint.assert_called_once_with('retime 2DPos key')
        self.assertEqual((actor.sel_track,actor.sel_key),((0,0),7))
        actor._track_done.assert_called_once()
        tr.touch.assert_called_once()

    def test_conflicting_key_retime_leaves_history_and_keys_unchanged(self):
        tr,actor,row=self.fixture()
        self.assertFalse(EditorApp._timeline_move_key(actor,row,3,10))
        self.assertEqual([k.tick for k in tr.keys],[3,10])
        actor.checkpoint.assert_not_called()
        tr.touch.assert_not_called()
        actor._track_done.assert_not_called()
        actor.status.set.assert_called_once()

    def test_invalid_end_tick_or_non_editable_track_never_checkpoints(self):
        tr,actor,row=self.fixture()
        self.assertFalse(EditorApp._timeline_move_key(actor,row,3,0xFFFF))
        row['editable']=False
        self.assertFalse(EditorApp._timeline_move_key(actor,row,3,8))
        actor.checkpoint.assert_not_called()
        self.assertEqual([k.tick for k in tr.keys],[3,10])

    def test_notetrack_retime_merges_into_existing_target_key(self):
        raw=notetrack.NoteTrack([
            notetrack.NoteKey(3,[notetrack.Command.from_values(0x0400,[1])]),
            notetrack.NoteKey(7,[notetrack.Command.from_values(0x0400,[2])])
        ]).build()
        tr=SimpleNamespace(field='NoteTrack',opaque=True,
                           encoded=lambda:raw,raw=raw,touch=Mock())
        actor=SimpleNamespace(_track=lambda sel:tr,checkpoint=Mock(),
                              _track_done=Mock(),status=Mock(),
                              sel_track=None,sel_key=None)
        row={'kind':'events','editable':True,'sel':(2,0)}
        self.assertTrue(EditorApp._timeline_move_key(actor,row,3,7))
        parsed=notetrack.parse(tr.raw)
        self.assertEqual([k.tick for k in parsed.keys],[7])
        self.assertEqual([c.values()[0] for c in parsed.keys[0].commands],[2,1])
        actor.checkpoint.assert_called_once_with('retime events')
        tr.touch.assert_called_once()

    def test_group_click_does_not_change_selection(self):
        actor=SimpleNamespace(sel_track=(1,1),sel_key=4,
                              refresh_inspector=Mock(),redraw_view=Mock(),set_tick=Mock())
        EditorApp._timeline_select(actor,{'kind':'group'},5,None)
        self.assertEqual((actor.sel_track,actor.sel_key),((1,1),4))
        actor.refresh_inspector.assert_not_called()
        actor.set_tick.assert_not_called()

    def test_set_tick_clamps_to_authored_move_duration(self):
        actor=SimpleNamespace(move=SimpleNamespace(duration=19),tick=0,
            tick_var=Mock(),timeline=Mock(),redraw_view=Mock(),
            sel_track=None,sel_virtual=None,refresh_inspector=Mock())
        EditorApp.set_tick(actor,500)
        self.assertEqual(actor.tick,19)
        actor.timeline.set_tick.assert_called_once_with(19)
        actor.tick_var.set.assert_called_once_with('19')
        actor.redraw_view.assert_called_once()


class PlaybackLifecycleTests(unittest.TestCase):
    def test_audio_decode_gate_does_not_schedule_animation_early(self):
        audio=SimpleNamespace(ready=Mock(return_value=False))
        actor=SimpleNamespace(playing=True,sound_enabled=var(True),
            _audio=audio,status=Mock(),after=Mock(return_value='decode-job'),
            _begin_play=Mock(),_play_sound_tick=Mock(),_schedule_frame=Mock(),tick=10)
        EditorApp._begin_play(actor)
        self.assertEqual(actor._play_job,'decode-job')
        actor.after.assert_called_once_with(50,actor._begin_play)
        actor._schedule_frame.assert_not_called()
        actor._play_sound_tick.assert_not_called()

    def test_playback_frame_rate_respects_original_minimum_interval(self):
        for speed,ms in [('0.5×',33),('1×',16),('2×',8)]:
            with self.subTest(speed=speed):
                actor=SimpleNamespace(speed=var(speed),
                    after=Mock(return_value='next-frame'),_animate=Mock())
                EditorApp._schedule_frame(actor)
                actor.after.assert_called_once_with(ms,actor._animate)
                self.assertEqual(actor._play_job,'next-frame')

    def test_stop_play_invalidates_audio_callback_and_cancels_job(self):
        calls=[]
        actor=SimpleNamespace(playing=True,_audio_request=12,
            _audio=SimpleNamespace(stop=lambda:calls.append('audio-stop')),
            _play_job='frame-job',
            after_cancel=lambda job:calls.append(('cancel',job)),
            play_btn=SimpleNamespace(configure=lambda **kw:calls.append(('button',kw))))
        EditorApp._stop_play(actor)
        self.assertFalse(actor.playing)
        self.assertEqual(actor._audio_request,13)
        self.assertIsNone(actor._play_job)
        self.assertEqual(calls,['audio-stop',('cancel','frame-job'),('button',{'text':'▶'})])

    def test_animation_end_without_loop_stops_and_no_tick_advance(self):
        actor=SimpleNamespace(playing=True,move=SimpleNamespace(duration=5),
            tick=5,loop=var(False),_stop_play=Mock(),set_tick=Mock(),
            _play_sound_tick=Mock(),_schedule_frame=Mock())
        EditorApp._animate(actor)
        actor._stop_play.assert_called_once()
        actor.set_tick.assert_not_called()
        actor._play_sound_tick.assert_not_called()

    def test_loop_wraps_to_zero_before_playing_sound(self):
        calls=[]
        actor=SimpleNamespace(playing=True,move=SimpleNamespace(duration=5),
            tick=5,loop=var(True),_stop_play=Mock(),
            set_tick=lambda tick:calls.append(('tick',tick)),
            _play_sound_tick=lambda tick:calls.append(('sound',tick)),
            _schedule_frame=lambda:calls.append(('frame',)))
        EditorApp._animate(actor)
        self.assertEqual(calls,[('tick',0),('sound',0),('frame',)])
        actor._stop_play.assert_not_called()

    def test_cancelled_audition_cannot_play_stale_requested_tick(self):
        callbacks=[]
        actor=SimpleNamespace(tick=11,_audio_request=2,
            _audio=SimpleNamespace(ready=lambda:False),status=Mock(),
            _stop_play=Mock(),after=lambda delay,fn:callbacks.append(fn) or 'pending',
            _play_sound_tick=Mock(),refresh_inspector=Mock())
        EditorApp._audition_tick(actor)
        self.assertEqual(actor._audio_request,3)
        self.assertEqual(actor._play_job,'pending')
        self.assertEqual(len(callbacks),1)
        actor._audio_request=4
        callbacks[0]()
        actor._play_sound_tick.assert_not_called()
        actor.refresh_inspector.assert_not_called()


class SpritePointerTests(unittest.TestCase):
    def test_drag_clamps_to_source_piece_signed_byte_range(self):
        piece=SimpleNamespace(x=120,y=-120)
        actor=SimpleNamespace(_piece_drag=(0,0,120,-120,b'old'),
                              _piece=lambda:piece,sview=SimpleNamespace(redraw=Mock()))
        EditorApp._sprite_drag(actor,30,-40,None)
        self.assertEqual((piece.x,piece.y),(127,-128))
        actor.sview.redraw.assert_called_once()

    def test_release_commits_one_checkpoint_only_for_changed_piece(self):
        piece=SimpleNamespace(x=13,y=4)
        actor=SimpleNamespace(_piece_drag=(0,0,9,4,b'old'),
            _piece=lambda:piece,checkpoint=Mock(),_after_piece_edit=Mock())
        EditorApp._sprite_release(actor,10,10,None)
        self.assertIsNone(actor._piece_drag)
        actor.checkpoint.assert_called_once_with('move piece',kind='sprite',snap=b'old')
        actor._after_piece_edit.assert_called_once()

    def test_release_without_displacement_does_not_create_history(self):
        piece=SimpleNamespace(x=9,y=4)
        actor=SimpleNamespace(_piece_drag=(0,0,9,4,b'old'),
            _piece=lambda:piece,checkpoint=Mock(),_after_piece_edit=Mock())
        EditorApp._sprite_release(actor,10,10,None)
        actor.checkpoint.assert_not_called()
        actor._after_piece_edit.assert_not_called()

    def test_nudge_at_coordinate_limit_is_noop(self):
        piece=SimpleNamespace(x=127,y=-128)
        actor=SimpleNamespace(_piece=lambda:piece,checkpoint=Mock(),_after_piece_edit=Mock())
        EditorApp.nudge_piece(actor,30,-30)
        self.assertEqual((piece.x,piece.y),(127,-128))
        actor.checkpoint.assert_not_called()


if __name__=='__main__':
    unittest.main()
