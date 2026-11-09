"""Original-source R08 phase7 playback implementation, no fabricated state."""
from __future__ import annotations

def _poll_audio(editor):
    try:
        if editor._audio:
            editor._audio.poll()
    except OSError as exc:
        editor.status.set(str(exc))
    editor._audio_poll_job = editor.after(100, editor._poll_audio)


def _sound_changed(editor):
    if not editor.sound_enabled.get() and editor._audio:
        editor._audio.stop()


def _play_sound_tick(editor, tick):
    if editor._audio and editor.sound_enabled.get():
        errors = editor._audio.play_tick(editor._cues, tick)
        if errors:
            editor.status.set('Sound: ' + '; '.join(dict.fromkeys(errors)))


def _begin_play(editor):
    if not editor.playing:
        return
    if editor.sound_enabled.get() and editor._audio and not editor._audio.ready():
        editor.status.set('Decoding sound cues… playback will start when ready.')
        editor._play_job = editor.after(50, editor._begin_play)
        return
    editor.status.set('Playing authored timeline; sound cues use their original pitch and tempo.')
    editor._play_sound_tick(editor.tick)
    editor._schedule_frame()


def _schedule_frame(editor):
    mult = float(editor.speed.get().rstrip('×') or 1)
    editor._play_job = editor.after(max(8, int(1000 / (60 * mult))), editor._animate)


def _audition_tick(editor):
    editor._stop_play()
    editor._audio_request += 1
    request, tick = editor._audio_request, editor.tick
    def ready():
        if request != editor._audio_request or not editor._audio:
            return
        if not editor._audio.ready():
            editor.status.set('Decoding sound cues…')
            editor._play_job = editor.after(50, ready)
            return
        editor._play_job = None
        editor._play_sound_tick(tick)
        editor.refresh_inspector()
    ready()


def toggle_play(editor):
    if editor.playing:
        editor._stop_play()
    elif editor.move:
        editor.playing = True
        editor.play_btn.configure(text='❚❚')
        editor._begin_play()


def _stop_play(editor):
    editor.playing = False
    editor._audio_request += 1
    if editor._audio:
        editor._audio.stop()
    if editor._play_job:
        editor.after_cancel(editor._play_job)
        editor._play_job = None
    if hasattr(editor, 'play_btn'):
        editor.play_btn.configure(text='▶')


def _animate(editor):
    if not editor.playing or not editor.move:
        editor._stop_play()
        return
    t = editor.tick + 1
    if t > editor.move.duration:
        if not editor.loop.get():
            editor._stop_play()
            return
        t = 0
    editor.set_tick(t)
    editor._play_sound_tick(t)
    editor._schedule_frame()

