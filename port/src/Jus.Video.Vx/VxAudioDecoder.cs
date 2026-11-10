// SPDX-License-Identifier: LGPL-2.1-or-later
// Actimagine VX audio, written from the game's own ARM decoder (ITCM 0x01FFF1E0–0x01FFFB30, called by
// ov00 FUN_02152d1c), not from FFmpeg. See COPYING.LGPL.md for the assembly's licence.
using System.Buffers.Binary;

namespace Jus.Video.Vx;

/// <summary>
/// VX movie audio: a CELP-style codec with 128-sample frames, an 8th-order LPC synthesis filter and a
/// pitch (long-term) predictor. Integer arithmetic is the same as the ARM code (32-bit wrap included).
/// <para>Frame: word1 = lag (bits 9–15: 0x7F key frame, 0x7E no pitch) | gain index (6–8) | codebook row 0
/// (0–5); word2 = pulse offset (14–15) | mode (12–13) | row 1 (6–11) | row 2 (0–5); then the pulse words.
/// Bytes per frame by mode 0–3: 20, 14, 12, 10 (table 0x01FFFA1E).</para>
/// <para>Codebook (0xC34 bytes): three 64 × 8 s16 parameter tables (+0, +0x400, +0x800), eight s16 gain
/// multipliers (+0xC00), eight initial parameters (+0xC10, int) and the initial gain (+0xC30).</para>
/// </summary>
public sealed class VxAudioDecoder
{
    public const int CodebookSize = 0xC34, FrameSamples = 128;
    private static readonly int[] FrameBytes = [20, 14, 12, 10];
    private static readonly (int Words, int Stride)[] Pulses = [(0, 0), (5, 3), (4, 4), (3, 5)];

    private readonly short[] _rows = new short[3 * 64 * 8];
    private readonly short[] _gainTable = new short[8];
    private readonly int[] _initParams = new int[8];
    private readonly int _initGain;

    private readonly int[] _raw = new int[8];            // +0x08: parameters before the step-up
    private readonly int[][] _coef = [new int[8], new int[8]];   // +0x28 / +0x48
    private int _gain;                                   // +0x68
    private int _toggle = 1;                             // +0x6C
    private readonly int[] _ring = new int[8];           // +0x78: synthesis memory
    private readonly int[][] _buf = [new int[256], new int[256]];  // +0xC0, +0x4C0: [previous | current] excitation
    private readonly int[] _out = new int[FrameSamples];
    private int _ringPos;

    public VxAudioDecoder(ReadOnlySpan<byte> codebook)
    {
        if (codebook.Length < CodebookSize) throw new ArgumentException("VX audio codebook is 0xC34 bytes");
        for (int i = 0; i < _rows.Length; i++) _rows[i] = BinaryPrimitives.ReadInt16LittleEndian(codebook[(2 * i)..]);
        for (int i = 0; i < 8; i++)
        {
            _gainTable[i] = BinaryPrimitives.ReadInt16LittleEndian(codebook[(0xC00 + 2 * i)..]);
            _initParams[i] = BinaryPrimitives.ReadInt32LittleEndian(codebook[(0xC10 + 4 * i)..]);
        }
        _initGain = BinaryPrimitives.ReadInt32LittleEndian(codebook[0xC30..]);
    }

    /// <summary>Decode one frame (0x01FFF9A8) into 128 samples; returns the frame's length in bytes.</summary>
    public int DecodeFrame(ReadOnlySpan<byte> frame, Span<short> pcm)
    {
        int pos = 0;
        int w1 = U16(frame, ref pos);
        int lag = w1 >> 9;
        int[] cur, outBuf;
        int[] newCoef;
        int mode;
        if (lag == 0x7F)
        {
            // key frame (0x01FFFA9C): reset gain and memories; no pitch; base = initial parameters
            _gain = _initGain;
            _toggle = 1;
            Array.Clear(_ring);
            _ringPos = 0;
            cur = _buf[1];
            Array.Clear(cur, 128, 128);
            mode = Excitation(frame, ref pos, w1, cur);
            newCoef = StepUp(_initParams);
            Array.Copy(newCoef, _coef[1], 8);                 // stored at +0x48
            outBuf = _buf[0];
            Synthesize(cur, 128, newCoef, outBuf, 0, 128);
        }
        else
        {
            // 0x01FFFADC: current = [other's current | new]; pitch from the other buffer's 256 samples
            cur = _buf[_toggle];
            var other = _buf[_toggle ^ 1];
            Array.Copy(other, 128, cur, 0, 128);
            if (lag == 0x7E) Array.Clear(cur, 128, 128);
            else Pitch(other, lag, cur);
            mode = Excitation(frame, ref pos, w1, cur);
            newCoef = StepUp(_raw);
            // 0x01FFF908: four 32-sample parts, interpolating from the previous coefficients
            int[] store = _toggle != 1 ? _coef[0] : _coef[1], old = _toggle != 1 ? _coef[1] : _coef[0];
            Array.Copy(newCoef, store, 8);
            var mid = Average(newCoef, old);
            outBuf = other;
            Synthesize(cur, 128, Average(mid, old), outBuf, 0, 32);
            Synthesize(cur, 160, mid, outBuf, 32, 32);
            Synthesize(cur, 192, Average(mid, newCoef), outBuf, 64, 32);
            Synthesize(cur, 224, newCoef, outBuf, 96, 32);
        }
        _toggle ^= 1;
        for (int i = 0; i < FrameSamples; i++) pcm[i] = (short)Math.Clamp(outBuf[i], -0x8000, 0x7FFF);
        return FrameBytes[mode];
    }

    private static int U16(ReadOnlySpan<byte> d, ref int pos)
    {
        int v = pos + 2 <= d.Length ? BinaryPrimitives.ReadUInt16LittleEndian(d[pos..]) : 0;
        pos += 2;
        return v;
    }

    /// <summary>0x01FFF208: the long-term predictor, a windowed copy from 127 − lag in the 256-sample history.</summary>
    private static void Pitch(int[] history, int lag, int[] cur)
    {
        int s = 127 - lag, d = 128;
        cur[d++] = history[s++] >> 4;
        for (int k = 2; k <= 7; k++) cur[d++] = history[s++] * k >> 4;
        for (int i = 0; i < 114; i++) cur[d++] = history[s++] >> 1;
        for (int k = 7; k >= 2; k--) cur[d++] = history[s++] * k >> 4;
        cur[d] = history[s] >> 4;
    }

    /// <summary>0x01FFFA24 + 0x01FFF350/0x01FFF398: gain update, codebook rows, and the pulses added to
    /// the excitation. Returns the mode.</summary>
    private int Excitation(ReadOnlySpan<byte> frame, ref int pos, int w1, int[] cur)
    {
        int gIdx = (w1 >> 6) & 7;
        _rowIdx[0] = w1 & 0x3F;
        int w2 = U16(frame, ref pos);
        int offset = (w2 >> 14) & 3;
        _gain = _gainTable[gIdx] * _gain >> 13;
        _rowIdx[1] = (w2 >> 6) & 0x3F;
        _rowIdx[2] = w2 & 0x3F;
        int mode = (w2 >> 12) & 3;
        int g = _gain, p = 128 + offset;
        if (mode == 0)
        {
            int bias = -7 * g, two = 2 * g, low = 0;
            for (int w = 0; w < 8; w++)
            {
                int word = U16(frame, ref pos);
                for (int sh = 13; sh >= 1; sh -= 3) { cur[p] += two * ((word >> sh) & 7) + bias; p += 3; }
                low = (word & 1) | low << 1;
            }
            cur[p] += two * ((low >> 5) & 7) + bias; p += 3;
            cur[p] += two * ((low >> 2) & 7) + bias;
        }
        else
        {
            var (words, stride) = Pulses[mode];
            int bias = -3 * g, two = 2 * g;
            for (int w = 0; w < words; w++)
            {
                int word = U16(frame, ref pos);
                for (int sh = 14; sh >= 0; sh -= 2) { cur[p] += two * ((word >> sh) & 3) + bias; p += stride; }
            }
        }
        return mode;
    }

    private readonly int[] _rowIdx = new int[3];

    /// <summary>0x01FFF424: base + three codebook rows = new raw parameters, then the Q15 step-up exactly in
    /// the ARM instruction order, then a = −(a >> 1).</summary>
    private int[] StepUp(int[] baseParams)
    {
        int r5 = baseParams[0], r6 = baseParams[1], r7 = baseParams[2], r8 = baseParams[3];
        int r9 = baseParams[4], r10 = baseParams[5], r11 = baseParams[6], r12 = baseParams[7];
        for (int t = 0; t < 3; t++)
        {
            int o = (t * 64 + _rowIdx[t]) * 8;
            r5 += _rows[o]; r6 += _rows[o + 1]; r7 += _rows[o + 2]; r8 += _rows[o + 3];
            r9 += _rows[o + 4]; r10 += _rows[o + 5]; r11 += _rows[o + 6]; r12 += _rows[o + 7];
        }
        _raw[0] = r5; _raw[1] = r6; _raw[2] = r7; _raw[3] = r8; _raw[4] = r9; _raw[5] = r10; _raw[6] = r11; _raw[7] = r12;
        unchecked
        {
            int r3, r4;
            r3 = r5 * r6; r5 += r3 >> 15;
            r3 = r6 * r7; r4 = r5 * r7; r5 += r3 >> 15; r6 += r4 >> 15;
            r3 = r7 * r8; r4 = r5 * r8; r5 += r3 >> 15; r3 = r6 * r8; r7 += r4 >> 15; r6 += r3 >> 15;
            r3 = r8 * r9; r4 = r5 * r9; r5 += r3 >> 15; r8 += r4 >> 15; r3 = r7 * r9; r4 = r6 * r9; r6 += r3 >> 15; r7 += r4 >> 15;
            r3 = r9 * r10; r4 = r5 * r10; r5 += r3 >> 15; r9 += r4 >> 15; r3 = r8 * r10; r4 = r6 * r10; r6 += r3 >> 15;
            r3 = r7 * r10; r8 += r4 >> 15; r7 += r3 >> 15;
            r3 = r10 * r11; r4 = r5 * r11; r5 += r3 >> 15; r10 += r4 >> 15; r3 = r9 * r11; r4 = r6 * r11; r6 += r3 >> 15; r9 += r4 >> 15;
            r3 = r8 * r11; r4 = r7 * r11; r7 += r3 >> 15; r8 += r4 >> 15;
            r3 = r11 * r12; r4 = r5 * r12; r5 += r3 >> 15; r11 += r4 >> 15; r3 = r10 * r12; r4 = r6 * r12; r6 += r3 >> 15; r10 += r4 >> 15;
            r3 = r9 * r12; r4 = r7 * r12; r7 += r3 >> 15; r3 = r8 * r12; r9 += r4 >> 15; r8 += r3 >> 15;
        }
        return [-(r5 >> 1), -(r6 >> 1), -(r7 >> 1), -(r8 >> 1), -(r9 >> 1), -(r10 >> 1), -(r11 >> 1), -(r12 >> 1)];
    }

    /// <summary>0x01FFF8A0: per coefficient (a + b) >> 1.</summary>
    private static int[] Average(int[] a, int[] b)
    {
        var r = new int[8];
        for (int i = 0; i < 8; i++) r[i] = unchecked(a[i] + b[i]) >> 1;
        return r;
    }

    /// <summary>0x01FFF5D8: y[n] = (e[n] << 14 + Σ a[i]·y[n−1−i]) >> 14 over an 8-entry ring.</summary>
    private void Synthesize(int[] exc, int start, int[] a, int[] output, int outStart, int count)
    {
        unchecked
        {
            for (int n = 0; n < count; n++)
            {
                int acc = exc[start + n] << 14;
                for (int i = 0; i < 8; i++) acc += a[i] * _ring[(_ringPos - 1 - i) & 7];
                int y = acc >> 14;
                _ring[_ringPos] = y;
                _ringPos = (_ringPos + 1) & 7;
                output[outStart + n] = y;
            }
        }
    }
}
