"""Physics arithmetic, cue identity and asynchronous audio transport regressions."""
import struct
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from jus_formats import almt, notetrack, sdat
from jus_package import motion, sounds
from jus_package.audio_preview import AudioPreview
from app.widgets.viewport import Viewport


def move_with(*keys):
    nt = notetrack.NoteTrack([
        notetrack.NoteKey(t, [notetrack.Command.from_values(op, list(args))
                             for op, args in cmds]) for t, cmds in keys])
    return almt.Move(1, 5, nodes=[almt.NodeAnim([almt.Track('NoteTrack', True, raw=nt.build())])])


class MotionTests(unittest.TestCase):
    def test_impulse_damping_and_gravity(self):
        m = move_with((0, [(0x0103, (8, 4))]))
        f = motion.simulate(m, ['body'], motion.Params(floor=False)).at(0)
        self.assertEqual((f.x, f.y, f.vx, f.vy), (224, -447, 224, -447))
        left = motion.simulate(m, ['body'], motion.Params(floor=False, facing_left=True)).at(0)
        self.assertEqual(left.x, -224)
        self.assertEqual(left.y, f.y)

    def test_repeat_stop_and_gravity_order(self):
        m = move_with((0, [(0x0101, (1,)), (0x0104, (8, 0, 2, 0))]),
                      (2, [(0x0100, (0,))]), (3, [(0x0101, (0,))]))
        frames = motion.simulate(m, ['body'], motion.Params(floor=False)).frames
        self.assertEqual([(f.vx, f.counter) for f in frames[:3]], [(224, 1), (420, 0), (0, 0)])
        self.assertEqual([f.vy for f in frames[:4]], [0, 0, 0, 41])
        self.assertEqual(frames[2].x, frames[1].x)

    def test_assumed_floor_and_scrub_are_deterministic(self):
        m = move_with((0, [(0x0103, (4, 0))]))
        mo = motion.simulate(m, ['body'])
        self.assertTrue(all(f.y == 0 for f in mo.frames))
        self.assertEqual(mo.at(4), motion.simulate(m, ['body']).at(4))
        self.assertEqual(mo.at(-1), mo.frames[0])

    def test_translation_restores_camera_even_on_failure(self):
        # Exercise actual viewport coordinate methods without a display server.
        class View:
            zoom = 3
            _translation = (0, 0)
            origin = lambda self: (100, 200)
            translated = Viewport.translated
            to_screen = Viewport.to_screen
            to_world = Viewport.to_world
        v = View()
        with self.assertRaises(RuntimeError):
            with v.translated(5, -7):
                self.assertEqual(v.to_screen(0, 0), (115, 179))
                self.assertEqual(v.to_world(115, 179), (0, 0))
                raise RuntimeError('draw failed')
        self.assertEqual(v.to_screen(0, 0), (100, 200))


class CueTests(unittest.TestCase):
    def test_missing_metadata_is_unresolved_not_silent(self):
        with tempfile.TemporaryDirectory() as td:
            r = sounds.SoundResolver(td)
            c = r.resolve(0x0401, 2, 'chr/bb_b_01.aar')
            self.assertEqual(c.evidence, 'Unknown')
            self.assertIn('unresolved', c.label)
            self.assertEqual(r.resolve(0x0400, 2, None).ssar, 122)

    def test_mapping_specials_and_duplicate_identity(self):
        with tempfile.TemporaryDirectory() as td:
            r = sounds.SoundResolver(td)
            # SSARs are named after the character id (SEQ_<CHAR>, SEQ_<CHAR>_<k>); the old
            # assumption that bb_b_01 used SEQ_DB_B_01 (record 0 = Goku) was wrong.
            r.symbols = sdat.SdatSymbols(seqarcs=[sdat.SeqArc(0, ''),
                sdat.SeqArc(1, 'SEQ_BB_B_01', ['voice']), sdat.SeqArc(2, 'SEQ_BB_B_01_3', ['special'])])
            r.set_characters(['bb_b_01'])
            c = r.resolve(0x0402, 0, 'chr/ChrArc.aar|chr/bb_b_01_3.aar')
            self.assertEqual((c.ssar, c.label), (2, 'special'))
            other = r.resolve(0x0401, 0, 'chr/bb_b_01.aar')
            later = r.resolve(0x0402, 0, 'chr/bb_b_01_3.aar', tick=1)
            self.assertEqual([p for _, p in sounds.dedupe_same_frame([c, c, other, later])],
                             [True, False, True, True])

    def test_truncated_symbol_file_does_not_break_editor(self):
        with tempfile.TemporaryDirectory() as td:
            d = Path(td) / 'sound'
            d.mkdir()
            (d / 'x.sdat').write_bytes(b'SDAT')
            self.assertIsNone(sounds.SoundResolver(td).symbols)


class AudioTransportTests(unittest.TestCase):
    def test_preparation_dedupe_overlap_replay_and_cleanup(self):
        class Renderer:
            last_warnings = ()
            calls = []
            def __init__(self, path): pass
            def render(self, arc, seq):
                self.calls.append((arc, seq))
                return bytes([seq])
        class Output:
            def __init__(self): self.played, self.stops = [], 0
            def play(self, wav): self.played.append(wav)
            def poll(self): pass
            def stop(self): self.stops += 1
        cues = [sounds.Cue(0, 'root', 0x400, i, 122, 'battle', None, 'Direct') for i in [1, 1, 2]]
        with tempfile.TemporaryDirectory() as td:
            d = Path(td) / 'sound'
            d.mkdir()
            (d / 'x.sdat').write_bytes(b'')
            player = AudioPreview(td, Renderer, Output)
            try:
                player.prepare(cues)
                for f in player.cache.values(): f.result(timeout=5)
                self.assertTrue(player.ready())
                self.assertEqual(player.play_tick(cues, 0), [])
                self.assertEqual(player.output.played, [b'\x01', b'\x02'])
                player.play_tick(cues, 0)  # Loop revisits are new playback occurrences.
                self.assertEqual(len(player.output.played), 4)
                player.prepare(cues)
                self.assertEqual(Renderer.calls, [(122, 1), (122, 2)])
            finally:
                player.close()
            self.assertEqual(player.output.stops, 1)


if __name__ == '__main__':
    unittest.main()
