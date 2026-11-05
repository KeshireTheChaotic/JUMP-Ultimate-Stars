"""Background sequence rendering and overlapping Windows PCM playback.

Only source assets under the selected data root are read. WAVs stay in a bounded
memory cache. All device calls run on the UI thread; synthesis never does.
waveOut buffer lifetime follows Microsoft's WAVEHDR / Managing Data Blocks by
Polling documentation: reset, unprepare, then close before releasing buffers.
"""
from __future__ import annotations

import ctypes as C
import io
import os
import wave
from collections import OrderedDict
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

from .sounds import dedupe_same_frame


class WaveOutput:
    """Small Windows output adapter; each live cue has its own device voice."""

    def __init__(self):
        if os.name != 'nt':
            raise OSError('Audible preview currently requires Windows')

        class Format(C.Structure):
            _pack_ = 2
            _fields_ = [('tag', C.c_ushort), ('channels', C.c_ushort),
                        ('rate', C.c_uint32), ('byte_rate', C.c_uint32),
                        ('align', C.c_ushort), ('bits', C.c_ushort), ('extra', C.c_ushort)]

        class Header(C.Structure):
            _fields_ = [('data', C.c_void_p), ('length', C.c_uint32),
                        ('recorded', C.c_uint32), ('user', C.c_size_t),
                        ('flags', C.c_uint32), ('loops', C.c_uint32),
                        ('next', C.c_void_p), ('reserved', C.c_size_t)]

        self.Format, self.Header = Format, Header
        self.dll = C.WinDLL('winmm')
        signatures = {
            'waveOutOpen': [C.POINTER(C.c_void_p), C.c_uint, C.POINTER(Format), C.c_size_t, C.c_size_t, C.c_uint],
            'waveOutPrepareHeader': [C.c_void_p, C.POINTER(Header), C.c_uint],
            'waveOutWrite': [C.c_void_p, C.POINTER(Header), C.c_uint],
            'waveOutUnprepareHeader': [C.c_void_p, C.POINTER(Header), C.c_uint],
            'waveOutReset': [C.c_void_p], 'waveOutClose': [C.c_void_p],
        }
        for name, args in signatures.items():
            fn = getattr(self.dll, name)
            fn.argtypes, fn.restype = args, C.c_uint
        self.voices = []

    @staticmethod
    def _check(result):
        if result:
            raise OSError(f'Windows audio error {result}')

    def play(self, wav):
        self.poll()
        if len(self.voices) >= 32:
            raise OSError('Preview voice limit (32 simultaneous cues) reached')
        with wave.open(io.BytesIO(wav), 'rb') as w:
            channels, width, rate = w.getnchannels(), w.getsampwidth(), w.getframerate()
            pcm = w.readframes(w.getnframes())
        if not pcm:
            return
        fmt = self.Format(1, channels, rate, rate * channels * width, channels * width, width * 8, 0)
        handle = C.c_void_p()
        self._check(self.dll.waveOutOpen(C.byref(handle), 0xFFFFFFFF, C.byref(fmt), 0, 0, 0))
        buf = C.create_string_buffer(pcm)
        header = self.Header(C.cast(buf, C.c_void_p), len(pcm), 0, 0, 0, 0, None, 0)
        try:
            self._check(self.dll.waveOutPrepareHeader(handle, C.byref(header), C.sizeof(header)))
            self._check(self.dll.waveOutWrite(handle, C.byref(header), C.sizeof(header)))
        except Exception:
            self.dll.waveOutReset(handle)
            self.dll.waveOutUnprepareHeader(handle, C.byref(header), C.sizeof(header))
            self.dll.waveOutClose(handle)
            raise
        self.voices.append((handle, header, buf))

    def poll(self):
        for voice in self.voices[:]:
            handle, header, _ = voice
            if header.flags & 1:  # WHDR_DONE: driver has released the data
                self._check(self.dll.waveOutUnprepareHeader(handle, C.byref(header), C.sizeof(header)))
                self._check(self.dll.waveOutClose(handle))
                self.voices.remove(voice)

    def stop(self):
        for handle, _, _ in self.voices:
            self._check(self.dll.waveOutReset(handle))
        self.poll()


class AudioPreview:
    """Prepare a move asynchronously, then trigger its cached sounds by tick.

    Renderer and output factories can be supplied for headless transport tests.
    Errors and approximation warnings remain visible through status().
    """

    def __init__(self, data_root, renderer_factory=None, output_factory=WaveOutput):
        self.path = next((Path(data_root) / 'sound').glob('*.sdat'), None)
        self.renderer_factory = renderer_factory
        self.output_factory = output_factory
        self.renderer = self.output = None
        self.pool = ThreadPoolExecutor(max_workers=1, thread_name_prefix='jus-audio')
        self.cache = OrderedDict()
        self.keys = set()
        self.closed = False

    def _render(self, key):
        try:
            if self.renderer is None:
                if self.renderer_factory is None:
                    from jus_formats.audio import AudioRenderer
                    self.renderer_factory = AudioRenderer
                if self.path is None:
                    raise ValueError('No sound/*.sdat in the selected data root')
                self.renderer = self.renderer_factory(self.path)
            wav = self.renderer.render(*key)
            return wav, '; '.join(self.renderer.last_warnings), None
        except Exception as exc:
            return None, '', str(exc)

    def prepare(self, cues):
        if self.closed:
            return
        self.keys = {(c.ssar, c.seq) for c in cues if c.ssar is not None}
        for key, future in list(self.cache.items()):
            if key not in self.keys and (not future.done() or len(self.cache) > 64):
                if future.cancel() or future.done():
                    del self.cache[key]
        for key in sorted(self.keys):
            if key not in self.cache:
                self.cache[key] = self.pool.submit(self._render, key)
            self.cache.move_to_end(key)

    def ready(self):
        return all(self.cache[k].done() for k in self.keys)

    def status(self, cue):
        if cue.ssar is None:
            return cue.label
        future = self.cache.get((cue.ssar, cue.seq))
        if future is None or not future.done():
            return 'Decoding…'
        _, warning, error = future.result()
        return f'Unavailable: {error}' if error else warning or 'Ready'

    def play_tick(self, cues, tick):
        errors = []
        for cue, played in dedupe_same_frame([c for c in cues if c.tick == tick]):
            if not played:
                continue
            future = self.cache.get((cue.ssar, cue.seq))
            if future is None or not future.done():
                errors.append('Audio is still decoding')
                continue
            wav, _, error = future.result()
            if error:
                errors.append(f'{cue.label}: {error}')
                continue
            try:
                if self.output is None:
                    self.output = self.output_factory()
                self.output.play(wav)
            except (OSError, ValueError, wave.Error) as exc:
                errors.append(str(exc))
        return errors

    def poll(self):
        if self.output:
            self.output.poll()

    def stop(self):
        if self.output:
            self.output.stop()

    def close(self):
        self.closed = True
        self.stop()
        self.pool.shutdown(wait=False, cancel_futures=True)
