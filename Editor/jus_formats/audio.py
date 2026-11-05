"""Bounded, offline Nitro sound preview using the player's SDAT.

ndspy 4.2 reads SDAT/SBNK/SWAR containers. The small SSEQ interpreter below
reads only reachable commands, including SSAR shared subroutines. PCM8,
PCM16 and Nintendo IMA ADPCM are decoded without external executables.

This is an editor audition renderer, not a hardware-accurate Nitro player.
Envelopes, pitch sweeps and modulation are approximations; last_warnings
lists them. Unknown commands fail explicitly. No game audio is bundled.

Format references: https://ndspy.readthedocs.io/en/latest/appendices/sdat-structure.html
and https://github.com/RoadrunnerWMC/ndspy (soundSequence/soundBank/soundWave).
"""
from __future__ import annotations

import heapq
import io
import math
import random
import struct
import sys
import wave
from array import array
from dataclasses import dataclass, field
from pathlib import Path


class AudioError(ValueError):
    """Invalid or unsupported audio data; safe to display in the editor."""


_STEPS = (7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 19, 21, 23, 25, 28, 31,
          34, 37, 41, 45, 50, 55, 60, 66, 73, 80, 88, 97, 107, 118, 130,
          143, 157, 173, 190, 209, 230, 253, 279, 307, 337, 371, 408, 449,
          494, 544, 598, 658, 724, 796, 876, 963, 1060, 1166, 1282, 1411,
          1552, 1707, 1878, 2066, 2272, 2499, 2749, 3024, 3327, 3660,
          4026, 4428, 4871, 5358, 5894, 6484, 7132, 7845, 8630, 9493,
          10442, 11487, 12635, 13899, 15289, 16818, 18500, 20350, 22385,
          24623, 27086, 29794, 32767)
_INDEX = (-1, -1, -1, -1, 2, 4, 6, 8)


def decode_wave(data: bytes, kind: int) -> array:
    """Return signed 16-bit samples. ADPCM's header predictor is sample 0."""
    if kind == 0:
        return array('h', ((v if v < 128 else v - 256) * 256 for v in data))
    if kind == 1:
        if len(data) % 2:
            raise AudioError('Odd PCM16 byte count')
        out = array('h')
        out.frombytes(data)
        if sys.byteorder != 'little':
            out.byteswap()
        return out
    if kind != 2 or len(data) < 4:
        raise AudioError(f'Unsupported/truncated wave encoding {kind}')
    value, index = struct.unpack_from('<hH', data)
    index &= 0x7F
    if index > 88:
        raise AudioError('ADPCM step index outside 0..88')
    out = array('h', [value])
    for byte in data[4:]:
        for nibble in (byte & 15, byte >> 4):
            step = _STEPS[index]
            delta = step >> 3
            if nibble & 1:
                delta += step >> 2
            if nibble & 2:
                delta += step >> 1
            if nibble & 4:
                delta += step
            value += -delta if nibble & 8 else delta
            value = max(-32767, min(32767, value))
            index = max(0, min(88, index + _INDEX[nibble & 7]))
            out.append(value)
    return out


@dataclass
class _Track:
    pc: int
    number: int = 0
    tick: int = 0
    program: int = 0
    wait: bool = True
    condition: bool = True
    calls: list[int] = field(default_factory=list)
    loops: list[list[int]] = field(default_factory=list)
    controls: dict[int, int] = field(default_factory=lambda: {
        0xC0: 64, 0xC1: 127, 0xC3: 0, 0xC4: 0, 0xC5: 2, 0xD5: 127,
        0xCA: 0, 0xCB: 16, 0xCC: 0, 0xCD: 1, 0xCF: 0, 0xE0: 0, 0xE3: 0})


@dataclass
class _Note:
    tick: int
    duration: int
    pitch: int
    velocity: int
    program: int
    track: int
    controls: dict[int, int]
    end_tick: int | None = None


def _event(data, pc, variables, rng):
    """Decode one command, including random/variable argument prefixes."""
    start = pc

    def byte():
        nonlocal pc
        if not 0 <= pc < len(data):
            raise AudioError(f'Truncated sequence at 0x{pc:X}')
        v = data[pc]
        pc += 1
        return v

    def integer(n, signed=False):
        v = bytes(byte() for _ in range(n))
        return int.from_bytes(v, 'little', signed=signed)

    def varlen():
        v = 0
        for _ in range(5):
            b = byte()
            v = (v << 7) | (b & 127)
            if not b & 128:
                return v
        raise AudioError('Sequence variable integer is too long')

    op = byte()
    prefix = None
    if op in (0xA0, 0xA1):
        prefix, op = op, byte()

    def argument(normal):
        if prefix == 0xA0:
            low, high = integer(2, True), integer(2, True)
            if low > high:
                raise AudioError('Reversed random argument range')
            return rng.randint(low, high)
        if prefix == 0xA1:
            var = byte()
            if var >= len(variables):
                raise AudioError(f'Invalid sequence variable {var}')
            return variables[var]
        return normal()

    args = []
    if op < 0x80:
        args = [byte(), argument(varlen)]
    elif op in (0x80, 0x81):
        args = [argument(varlen)]
    elif op == 0x93:
        args = [byte(), integer(3)]
    elif op in (0x94, 0x95):
        args = [integer(3)]
    elif 0xB0 <= op <= 0xBD:
        args = [byte(), argument(lambda: integer(2, True))]
    elif 0xC0 <= op <= 0xD6:
        args = [argument(byte)]
    elif op in (0xE0, 0xE1, 0xE3, 0xFE):
        args = [argument(lambda: integer(2, op == 0xE3))]
    elif op not in (0xA2, 0xFC, 0xFD, 0xFF):
        raise AudioError(f'Unsupported sequence opcode 0x{op:02X} at 0x{start:X}')
    return op, args, pc


def sequence_notes(data: bytes, offset: int, max_ticks=24000):
    """Execute bounded SSEQ flow. Return notes, tempo changes and warnings."""
    tracks = {0: _Track(offset)}
    queue = [(0, 0)]
    notes = []
    tempos = [(0, 120)]
    variables = [-1] * 32
    rng = random.Random(0)
    warnings = set()
    steps = 0
    while queue:
        tick, number = heapq.heappop(queue)
        tr = tracks[number]
        if tick != tr.tick:
            continue
        if tick > max_ticks:
            warnings.add('Sequence time limit reached; looping audio truncated')
            continue
        steps += 1
        if steps > 100000 or len(notes) > 4096:
            raise AudioError('Sequence instruction/note limit reached')
        op, args, tr.pc = _event(data, tr.pc, variables, rng)
        if op < 0x80:
            duration = max(0, args[1])
            notes.append(_Note(tick, duration, op, max(0, min(127, args[0])),
                               tr.program, number, dict(tr.controls)))
            if tr.wait:
                tr.tick += duration
        elif op == 0x80:
            tr.tick += max(0, args[0])
        elif op == 0x81:
            tr.program = args[0]
        elif op == 0x93:
            num, dest = args
            if not 0 <= num < 16 or num in tracks:
                raise AudioError('Invalid/restarted sequence track')
            tracks[num] = _Track(dest, num, tick)
            heapq.heappush(queue, (tick, num))
        elif op in (0x94, 0x95):
            if op == 0x95:
                if len(tr.calls) >= 32:
                    raise AudioError('Sequence call depth exceeded')
                tr.calls.append(tr.pc)
            tr.pc = args[0]
        elif op == 0xA2:
            if not tr.condition:
                _, _, tr.pc = _event(data, tr.pc, variables, rng)
        elif 0xB0 <= op <= 0xBD:
            var, value = args
            if not 0 <= var < 32:
                raise AudioError('Sequence variable outside 0..31')
            old = variables[var]
            if op == 0xB0:
                old = value
            elif op == 0xB1:
                old += value
            elif op == 0xB2:
                old -= value
            elif op == 0xB3:
                old *= value
            elif op == 0xB4:
                if value:
                    old = int(old / value)
            elif op == 0xB5:
                if abs(value) > 31:
                    raise AudioError('Sequence shift outside supported range')
                old = old << value if value >= 0 else old >> -value
            elif op == 0xB6:
                old = rng.randint(min(0, value), max(0, value))
            elif op == 0xB7:
                raise AudioError('Unsupported variable opcode B7')
            else:
                tr.condition = {0xB8: old == value, 0xB9: old >= value,
                                0xBA: old > value, 0xBB: old <= value,
                                0xBC: old < value, 0xBD: old != value}[op]
            variables[var] = ((old + 32768) & 65535) - 32768
        elif op == 0xC7:
            tr.wait = bool(args[0])
        elif op == 0xC8:
            if args[0]:
                warnings.add('Tied-note articulation is approximated')
        elif op == 0xD4:
            if len(tr.loops) >= 16:
                raise AudioError('Sequence loop depth exceeded')
            tr.loops.append([tr.pc, args[0]])
        elif op == 0xFC:
            if not tr.loops:
                raise AudioError('Loop end without loop start')
            loop = tr.loops[-1]
            if loop[1] == 1:
                tr.loops.pop()
            else:
                if loop[1]:
                    loop[1] -= 1
                tr.pc = loop[0]
        elif op == 0xFD:
            if not tr.calls:
                raise AudioError('Return without call')
            tr.pc = tr.calls.pop()
        elif op == 0xE1:
            if not 1 <= args[0] <= 1023:
                raise AudioError('Invalid sequence tempo')
            tempos.append((tick, args[0]))
        elif op == 0xC2:
            for track in tracks.values():
                track.controls[op] = args[0]
        elif op == 0xFF:
            for note in notes:
                if note.track == number and note.duration == 0:
                    note.end_tick = tick if tick > note.tick else None
            continue
        elif op not in (0xFE, 0xC6, 0xD6):
            tr.controls[op] = args[0]
        heapq.heappush(queue, (tr.tick, number))
    return notes, tempos, warnings


class AudioRenderer:
    """Render an SSAR entry to stereo PCM16 WAV; safe for a worker thread.

    An instance is not concurrently reentrant. Cache returned WAVs in the UI.
    max_seconds bounds infinite/held notes and wave memory.
    """
    def __init__(self, source: Path | str | bytes, sample_rate=22050, max_seconds=8):
        try:
            from ndspy.soundArchive import SDAT
        except ImportError as exc:
            raise AudioError('Install editor requirements (ndspy>=4.2,<5) for audio') from exc
        if not 8000 <= sample_rate <= 48000 or not 0 < max_seconds <= 30:
            raise AudioError('Invalid preview sample rate/duration')
        try:
            self.sdat = SDAT(source if isinstance(source, bytes) else Path(source).read_bytes())
        except (ValueError, IndexError, struct.error, OSError) as exc:
            raise AudioError(f'Cannot read SDAT: {exc}') from exc
        self.sample_rate = sample_rate
        self.max_seconds = max_seconds
        self.last_warnings = ()
        self._waves = {}

    @staticmethod
    def _entry(items, index, kind):
        if not 0 <= index < len(items) or items[index][1] is None:
            raise AudioError(f'{kind} {index} is unavailable')
        return items[index][1]

    def render(self, ssar: int, seq: int) -> bytes:
        self.last_warnings = ()
        try:
            return self._render(ssar, seq)
        except AudioError:
            raise
        except (IndexError, KeyError, ValueError, struct.error, OverflowError) as exc:
            raise AudioError(f'Invalid SSAR {ssar} sequence {seq}: {exc}') from exc

    def _render(self, ssar, seq):
        arc = self._entry(self.sdat.sequenceArchives, ssar, 'SSAR')
        if not 0 <= seq < len(arc.sequences):
            raise AudioError(f'Sequence {seq} outside SSAR {ssar}')
        entry = arc.sequences[seq][1]
        if entry.firstEventOffset is None:
            raise AudioError('Empty sequence entry')
        # Public save preserves the original shared event pool for unparsed SSARs.
        raw = arc.save()[0]
        event_offset = struct.unpack_from('<I', raw, 0x18)[0]
        data = raw[event_offset:]
        notes, tempos, warnings = sequence_notes(data, entry.firstEventOffset,
                                                 max_ticks=int(self.max_seconds * 819))
        bank = self._entry(self.sdat.banks, entry.bankID, 'Bank')
        tempos.sort(key=lambda pair: pair[0])

        def seconds(tick):
            total, at, bpm = 0.0, 0, 120
            for t, new_bpm in tempos:
                if t > tick:
                    break
                total += (t - at) * 60 / (bpm * 48)
                at, bpm = t, new_bpm
            return total + (tick - at) * 60 / (bpm * 48)

        limit = int(self.max_seconds * self.sample_rate)
        left, right = array('f', [0]) * limit, array('f', [0]) * limit
        used = 1
        for note in notes:
            start = int(seconds(note.tick) * self.sample_rate)
            if start >= limit:
                warnings.add('Preview duration limit reached')
                continue
            if not 0 <= note.program < len(bank.instruments):
                raise AudioError(f'Instrument {note.program} outside bank {entry.bankID}')
            inst = bank.instruments[note.program]
            definition = self._definition(inst, note.pitch)
            if definition is None:
                raise AudioError(f'No instrument {note.program} mapping for note {note.pitch}')
            end = note.tick + note.duration if note.duration else note.end_tick
            duration = seconds(end) - seconds(note.tick) if end is not None else self.max_seconds
            used = max(used, self._mix_note(left, right, start, duration, note, definition,
                                          bank, entry.volume, warnings))
        warnings.add('Editor preview: ADSR, modulation and pitch sweeps approximate Nitro playback')
        self.last_warnings = tuple(sorted(warnings))
        pcm = array('h')
        for i in range(used):
            pcm.append(max(-32768, min(32767, round(left[i]))))
            pcm.append(max(-32768, min(32767, round(right[i]))))
        if sys.byteorder != 'little':
            pcm.byteswap()
        out = io.BytesIO()
        with wave.open(out, 'wb') as wav:
            wav.setnchannels(2)
            wav.setsampwidth(2)
            wav.setframerate(self.sample_rate)
            wav.writeframes(pcm.tobytes())
        return out.getvalue()

    @staticmethod
    def _definition(inst, pitch):
        if inst is None:
            return None
        if hasattr(inst, 'noteDefinition'):
            return inst.noteDefinition
        if hasattr(inst, 'firstPitch'):
            index = pitch - inst.firstPitch
            return inst.noteDefinitions[index] if 0 <= index < len(inst.noteDefinitions) else None
        for region in inst.regions:
            if pitch <= region.lastPitch:
                return region.noteDefinition
        return None

    def _wave(self, bank, definition):
        slot = definition.waveArchiveIDID
        if not 0 <= slot < len(bank.waveArchiveIDs) or bank.waveArchiveIDs[slot] is None:
            raise AudioError(f'Wave archive slot {slot} unavailable')
        archive = bank.waveArchiveIDs[slot]
        key = (archive, definition.waveID)
        if key not in self._waves:
            swar = self._entry(self.sdat.waveArchives, archive, 'SWAR')
            if not 0 <= definition.waveID < len(swar.waves):
                raise AudioError('Wave index outside SWAR')
            swav = swar.waves[definition.waveID]
            samples = decode_wave(swav.data, int(swav.waveType))
            # Header loop offset is in 32-bit words, including ADPCM predictor.
            kind = int(swav.waveType)
            loop = swav.loopOffset * (4 if kind == 0 else 2) if kind != 2 else max(0, (swav.loopOffset - 1) * 8 + 1)
            if not samples or swav.sampleRate <= 0:
                raise AudioError('Empty wave or invalid sample rate')
            if swav.isLooped and not 0 <= loop < len(samples):
                raise AudioError('Wave loop outside decoded samples')
            self._waves[key] = samples, swav.sampleRate, loop if swav.isLooped else None
        return self._waves[key]

    def _mix_note(self, left, right, start, duration, note, d, bank, volume, warnings):
        rate = self.sample_rate
        c = note.controls
        pitch = note.pitch + ((c[0xC3] + 128) % 256 - 128)
        bend = ((c[0xC4] + 128) % 256 - 128) * c[0xC5] / 128
        kind = int(d.type)
        if kind == 1:
            samples, source_rate, loop = self._wave(bank, d)
            step = source_rate / rate * 2 ** ((pitch - d.pitch + bend) / 12)
        elif kind in (2, 3):
            samples, loop = None, None
            step = 440 * 2 ** ((pitch - 69 + bend) / 12) / rate
        else:
            raise AudioError(f'Unsupported instrument type {kind}')
        attack = c.get(0xD0, d.attack)
        decay = c.get(0xD1, d.decay)
        sustain = max(0, min(127, c.get(0xD2, d.sustain))) / 127
        release = c.get(0xD3, d.release)
        # Smooth rate-dependent audition envelope. Hardware attenuation curves
        # and control-tick quantization are not claimed to be bit exact.
        attack_s = 0 if attack >= 127 else 0.002 * 2 ** ((127 - attack) / 12)
        decay_s = 0.002 * 2 ** ((127 - decay) / 12)
        release_s = min(2.0, 0.002 * 2 ** ((127 - release) / 12))
        duration = max(0, duration)
        count = min(len(left) - start, max(1, int((duration + release_s) * rate)))
        if start + count == len(left):
            warnings.add('Preview duration limit reached')
        gain = (note.velocity / 127) * (volume / 127) * (c[0xC1] / 127) * (c[0xD5] / 127) * (c.get(0xC2, 127) / 127)
        # A little headroom leaves layered effects unclipped in most cases.
        gain *= 0.65
        pan = max(0, min(127, d.pan + c[0xC0] - 64)) / 127
        pos, noise = 0.0, 0x7FFF
        sweep = c.get(0xE3, 0) / 64
        if c.get(0xCE, 0):
            sweep += c.get(0xC9, pitch) - pitch
        sweep_s = max(0.001, c.get(0xCF, 0) ** 2 / 1000)
        last = start

        def envelope(t):
            if attack_s and t < attack_s:
                return t / attack_s
            return sustain + (1 - sustain) * max(0, 1 - (t - attack_s) / decay_s)

        release_level = envelope(duration)
        for i in range(count):
            t = i / rate
            env = envelope(t) if t < duration else release_level * max(0, 1 - (t - duration) / release_s)
            if kind == 1:
                index = int(pos)
                if index >= len(samples):
                    if loop is None:
                        break
                    pos = loop + (pos - loop) % (len(samples) - loop)
                    index = int(pos)
                nxt = index + 1 if index + 1 < len(samples) else loop if loop is not None else index
                sample = samples[index] + (samples[nxt] - samples[index]) * (pos - index)
            elif kind == 2:
                duty = (d.waveID + 1) / 8 if d.waveID < 7 else 0
                sample = 24576 if pos % 1 < duty else -24576
            else:
                old = int(pos)
                if int(pos + step) != old:
                    noise = (noise >> 1) ^ (0x6000 if noise & 1 else 0)
                sample = 24576 if noise & 1 else -24576
            vib = 0.0
            if c[0xCA] and t > c.get(0xE0, 0) / 192:
                vib = math.sin(2 * math.pi * t * c[0xCB] / 4) * c[0xCA] / 127
            current_pan = pan
            current_gain = gain
            semitones = sweep * max(0, 1 - t / sweep_s)
            if c[0xCC] == 0:
                semitones += vib * c[0xCD]
            elif c[0xCC] == 1:
                current_gain *= max(0, 1 + vib * c[0xCD] / 16)
            elif c[0xCC] == 2:
                current_pan = max(0, min(1, pan + vib * c[0xCD] / 127))
            pos += step * 2 ** (semitones / 12)
            sample *= env * current_gain
            left[start + i] += sample * (1 - current_pan)
            right[start + i] += sample * current_pan
            last = start + i + 1
        return last
