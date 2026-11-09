import tkinter as tk
import unittest
from types import SimpleNamespace
from unittest.mock import Mock

from app.widgets.audio_cues import CuePreview, AudioCuePicker
from app.note_event_editor import NoteEventEditor
from jus_formats import almt, notetrack, sdat
from jus_package.sounds import Cue


class Scheduler:
    def __init__(self): self.jobs = {}; self.counter = 0
    def after(self, _ms, callback):
        self.counter += 1; self.jobs[self.counter] = callback; return self.counter
    def after_cancel(self, job): self.jobs.pop(job, None)


def fixture():
    resolver = Mock()
    resolver.symbols = sdat.SdatSymbols(seqarcs=[sdat.SeqArc(0,'TEST_BANK',['Hit','Whoosh','Voice'])])
    resolver.resolve.side_effect = lambda op,seq,container,**kw: Cue(0,'GN0',op,seq,0,'TEST_BANK',
                                                       ['Hit','Whoosh','Voice'][seq], 'Direct')
    resolver.forms.return_value = [4, 5]
    audio = Mock(closed=False)
    audio.ready.return_value = True
    audio.play_tick.return_value = []
    audio.status.return_value = 'Ready'
    editor = SimpleNamespace(_sounds=resolver,_audio=audio,container='chr/test_b_01.aar',
                             _stop_play=Mock(), _cues=['original move cues'],
                             sound_form=SimpleNamespace(get=lambda:'Auto'),_sound_koma_card=10)
    return editor


class CuePreviewTests(unittest.TestCase):
    def test_resolves_context_and_restores_timeline_preparation(self):
        editor=fixture(); scheduler=Scheduler(); status=Mock()
        preview=CuePreview(scheduler,editor,status)
        preview.form='5-cell'
        preview.play(0x0402,1)
        editor._sounds.resolve.assert_called_with(0x0402,1,editor.container,form=5,card_index=10)
        editor._stop_play.assert_called_once()
        editor._audio.play_tick.assert_called_once()
        self.assertIn('Playing Whoosh',status.set.call_args.args[0])
        preview.close()
        editor._audio.prepare.assert_called_with(editor._cues)

    def test_stop_and_close_cancel_late_decode_playback(self):
        editor=fixture(); editor._audio.ready.return_value=False
        scheduler=Scheduler(); preview=CuePreview(scheduler,editor,Mock())
        preview.play(0x0400,0)
        stale=next(iter(scheduler.jobs.values()))
        preview.play(0x0400,1)
        stale()
        editor._audio.play_tick.assert_not_called()
        preview.close()
        self.assertFalse(scheduler.jobs)
        stale()
        editor._audio.play_tick.assert_not_called()

    def test_silent_cues_and_missing_metadata_do_not_play(self):
        editor=fixture(); status=Mock()
        editor._sounds.resolve.return_value=None
        editor._sounds.resolve.side_effect=lambda *a,**kw:Cue(0,'',0x0401,0,None,'',None,'Direct','silent slot')
        preview=CuePreview(Scheduler(),editor,status)
        preview.play(0x0401,0)
        editor._audio.prepare.assert_not_called()
        self.assertIn('silent',status.set.call_args.args[0])
        preview.resolver=None
        preview.play(0x0400,0)
        self.assertIn('unavailable',status.set.call_args.args[0])

    def test_decode_or_device_failure_is_reported(self):
        editor=fixture(); editor._audio.play_tick.return_value=['Unavailable: invalid sequence']
        status=Mock(); preview=CuePreview(Scheduler(),editor,status)
        preview.play(0x0400,0)
        self.assertEqual(status.set.call_args.args[0],'Unavailable: invalid sequence')


class NoteAudioTkTests(unittest.TestCase):
    def setUp(self):
        self.root=tk.Tk(); self.root.withdraw()
        fixture_editor=fixture()
        for name,value in vars(fixture_editor).items(): setattr(self.root,name,value)
        command=notetrack.Command.from_values(0x0400,[0])
        raw=notetrack.NoteTrack(keys=[notetrack.NoteKey(3,[command])]).build()
        self.track=almt.Track('NoteTrack',True,raw=raw,opaque=True)
        self.original=raw
        self.dialog=NoteEventEditor(self.root,'GN0',self.track,20,initial_tick=3)

    def tearDown(self): self.root.destroy()

    def test_audition_unsaved_value_and_cancel_preserve_original_track(self):
        self.dialog.arg_vars[0].set('1')
        self.dialog._preview_audio()
        played=self.root._audio.play_tick.call_args.args[0][0]
        self.assertEqual(played.seq,1)
        self.assertEqual(self.track.raw,self.original)
        self.dialog.destroy()
        self.assertEqual(self.track.raw,self.original)
        self.root._audio.prepare.assert_called_with(self.root._cues)

    def test_filtered_picker_previews_and_selects_without_implicit_commit(self):
        self.dialog._choose_audio()
        picker=next(w for w in self.dialog.winfo_children() if isinstance(w,AudioCuePicker))
        picker.query.set('whoosh')
        self.assertEqual(picker.tree.get_children(),('1',))
        picker.tree.selection_set('1')
        picker.update_idletasks()
        picker.play()
        self.assertEqual(self.root._audio.play_tick.call_args.args[0][0].seq,1)
        picker.choose()
        self.assertEqual(self.dialog.arg_vars[0].get(),'1')
        self.assertEqual(self.track.raw,self.original)
        self.dialog.apply_event()
        self.assertEqual(self.track.raw,self.original)
        self.dialog.commit()
        self.assertEqual(notetrack.parse(self.track.raw).keys[0].commands[0].values(),[1])

    def test_switching_away_from_audio_stops_preview(self):
        self.dialog._preview_audio()
        self.root._audio.stop.reset_mock()
        self.dialog._update_arg_form(0x0300,[0]*7)
        self.root._audio.stop.assert_called_once()

    def test_queued_selection_events_do_not_cancel_current_decode(self):
        self.root._audio.ready.return_value=False
        self.dialog._choose_audio()
        picker=next(w for w in self.dialog.winfo_children() if isinstance(w,AudioCuePicker))
        picker.tree.selection_set('1')
        picker.play()
        self.root.update()
        self.assertIsNotNone(self.dialog.audio_preview.job)
        self.assertIn('Decoding Whoosh',self.dialog.audio_status.get())
        picker.destroy()
        self.assertIsNone(self.dialog.audio_preview.job)


if __name__=='__main__': unittest.main()
