// SPDX-License-Identifier: LGPL-2.1-or-later
// C# port of the Actimagine VX video decoder, Copyright (c) 2021 Florian Nouwt (FFmpeg-devel,
// "[PATCH v3] avcodec: add Actimagine VX video decoder"), with FFmpeg's H.264 4x4 intra
// prediction and inverse transform. See COPYING.LGPL.md.
namespace Jus.Video.Vx;

/// <summary>One 8-bit plane with a margin around it, so edge predictions that read just outside
/// the picture (row -1, column -1, top-right) read defined values instead of foreign memory.</summary>
internal sealed class Plane
{
    public const int Margin = 16;
    public readonly int Width, Height, Stride;
    public readonly byte[] Data;

    public Plane(int w, int h)
    {
        Width = w; Height = h; Stride = w + 2 * Margin;
        Data = new byte[(h + 2 * Margin) * Stride];
    }

    public int Index(int x, int y) => (y + Margin) * Stride + x + Margin;
    public ref byte this[int x, int y] => ref Data[Index(x, y)];
}

internal sealed class Frame
{
    public readonly Plane[] P;
    public Frame(int w, int h) => P = [new Plane(w, h), new Plane(w >> 1, h >> 1), new Plane(w >> 1, h >> 1)];
}

/// <summary>Decodes Actimagine VX video frames to BGRA.</summary>
public sealed class VxDecoder
{
    private const int VersionInvalid = -1, VersionOld = 0, VersionNew = 1;
    private readonly int _w, _h;
    private Frame _cur;
    private readonly Frame[] _ref;
    private int _refCount;
    private int _version = VersionInvalid;
    private readonly int[,] _qtab = new int[2, 4];
    private readonly byte[] _zigzag = new byte[16];
    private readonly byte[,] _pred4 = new byte[5, 5];
    private readonly (int X, int Y)[] _vectors;
    private readonly int _vecStride;
    private readonly byte[] _tcY, _tcUv;
    private readonly int _tcYStride, _tcUvStride;
    private BitReader _gb = null!;

    public VxDecoder(int width, int height, int quantizer)
    {
        if ((width & 15) != 0 || (height & 15) != 0) throw new ArgumentException("width/height not multiple of 16");
        if (quantizer < 12 || quantizer > 161) throw new ArgumentOutOfRangeException(nameof(quantizer));
        _w = width; _h = height;
        int qx = quantizer % 6, qy = quantizer / 6;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 4; j++)
                _qtab[i, j] = Tables.Quant4x4[qx][4 * i + j] << qy;
        for (int i = 0; i < 16; i++)
            _zigzag[i] = (byte)((Tables.ZigzagScan[i] >> 2) | ((Tables.ZigzagScan[i] << 2) & 0xF));
        for (int i = 0; i < 5; i++) for (int j = 0; j < 5; j++) _pred4[i, j] = 9;
        _vecStride = (width >> 4) + 2;
        _vectors = new (int, int)[((height >> 4) + 1) * _vecStride];
        _tcYStride = (width >> 2) + 1;
        _tcY = new byte[((height >> 2) + 1) * _tcYStride];
        _tcUvStride = (width >> 3) + 1;
        _tcUv = new byte[((height >> 3) + 1) * _tcUvStride];
        _ref = [new Frame(width, height), new Frame(width, height), new Frame(width, height)];
        _cur = new Frame(width, height);
    }

    public int Width => _w;
    public int Height => _h;

    /// <summary>Decode one frame's video bitstream; returns the byte offset (16-bit aligned) where
    /// the audio data of the block starts.</summary>
    public int Decode(ReadOnlySpan<byte> packet, Span<uint> bgra)
    {
        _gb = new BitReader(packet);
        if (_version == VersionInvalid)
        {
            if (_refCount != 0) throw new InvalidDataException("can't determine version on p frame");
            _version = DetectFormat();
            _gb = new BitReader(packet);
        }
        int vrow = _vecStride + 1;
        for (int y = 0; y < _h; y += 16)
        {
            int v = vrow;
            for (int x = 0; x < _w; x += 16)
            {
                _vectors[v] = (0, 0);
                var a = _vectors[v - 1]; var b = _vectors[v - _vecStride]; var c = _vectors[v - _vecStride + 1];
                DecodeMb(x, y, 16, 16, (Mid(a.X, b.X, c.X), Mid(a.Y, b.Y, c.Y)));
                v++;
            }
            vrow += _vecStride;
        }
        ToBgra(bgra);
        var frame = _cur;
        _cur = _ref[2];
        _ref[2] = _ref[1];
        _ref[1] = _ref[0];
        _ref[0] = frame;
        if (_refCount < 3) _refCount++;
        return _gb.AlignedByteOffset;
    }

    private static int Mid(int a, int b, int c) => Math.Max(Math.Min(a, b), Math.Min(Math.Max(a, b), c));
    private static byte Clip(int v) => (byte)Math.Clamp(v, 0, 255);
    private ref byte Cur(int plane, int x, int y) => ref _cur.P[plane][x, y];
    private byte Ref(int r, int plane, int x, int y) => _ref[r].P[plane][x, y];

    /// <summary>Output colour space: r = y + 2v', g = y - u'/2 - v', b = y + 2u' (u' = u-128, v' = v-128).</summary>
    private void ToBgra(Span<uint> dst)
    {
        var py = _cur.P[0]; var pu = _cur.P[1]; var pv = _cur.P[2];
        for (int y = 0; y < _h; y++)
            for (int x = 0; x < _w; x++)
            {
                int Y = py[x, y], U = pu[x >> 1, y >> 1] - 128, V = pv[x >> 1, y >> 1] - 128;
                int r = Clip(Y + 2 * V), g = Clip(Y - (U >> 1) - V), b = Clip(Y + 2 * U);
                dst[y * _w + x] = 0xFF000000u | (uint)(r << 16 | g << 8 | b);
            }
    }

    private int DetectFormat()
    {
        int w = 16, h = 16;
        while (true)
        {
            int mode = _gb.Ue();
            if (mode is 0 or 8) { if (w == 2) return VersionOld; w >>= 1; continue; }
            if (mode is 2 or 13) { if (h == 2) return VersionOld; h >>= 1; continue; }
            if (mode is 11 or 22)
            {
                if (_gb.Ue() != 2) return VersionOld;
                if (_gb.Ue() != 0) return VersionOld;
                break;
            }
            if (mode is 15 or 19) { if (_gb.Bit() == 0) return VersionOld; break; }
            return VersionOld;
        }
        return VersionNew;
    }

    private void ClearTotalCoeff(int x, int y, int w, int h)
    {
        int o = ((y >> 2) + 1) * _tcYStride + (x >> 2) + 1;
        for (int y2 = 0; y2 < (h >> 2); y2++) for (int x2 = 0; x2 < (w >> 2); x2++) _tcY[o + y2 * _tcYStride + x2] = 0;
        o = ((y >> 3) + 1) * _tcUvStride + (x >> 3) + 1;
        for (int y2 = 0; y2 < (h >> 3); y2++) for (int x2 = 0; x2 < (w >> 3); x2++) _tcUv[o + y2 * _tcUvStride + x2] = 0;
    }

    private void PredictPlaneIntern(int x, int y, int w, int h, int plane)
    {
        if (w == 1 && h == 1) return;
        if (w == 1)
        {
            int top = Cur(plane, x, y - 1), bottom = Cur(plane, x, y + h - 1);
            Cur(plane, x, y + (h >> 1) - 1) = (byte)((top + bottom) >> 1);
            PredictPlaneIntern(x, y, 1, h >> 1, plane);
            PredictPlaneIntern(x, y + (h >> 1), 1, h >> 1, plane);
        }
        else if (h == 1)
        {
            int left = Cur(plane, x - 1, y), right = Cur(plane, x + w - 1, y);
            Cur(plane, x + (w >> 1) - 1, y) = (byte)((left + right) >> 1);
            PredictPlaneIntern(x, y, w >> 1, 1, plane);
            PredictPlaneIntern(x + (w >> 1), y, w >> 1, 1, plane);
        }
        else
        {
            int bottomLeft = Cur(plane, x - 1, y + h - 1), topRight = Cur(plane, x + w - 1, y - 1);
            int bottomRight = Cur(plane, x + w - 1, y + h - 1);
            byte bottomCenter = (byte)((bottomLeft + bottomRight) >> 1), centerRight = (byte)((topRight + bottomRight) >> 1);
            Cur(plane, x + (w >> 1) - 1, y + h - 1) = bottomCenter;
            Cur(plane, x + w - 1, y + (h >> 1) - 1) = centerRight;
            if ((w == 4 || w == 16) ^ (h == 4 || h == 16))
            {
                int centerLeft = Cur(plane, x - 1, y + (h >> 1) - 1);
                Cur(plane, x + (w >> 1) - 1, y + (h >> 1) - 1) = (byte)((centerLeft + centerRight) >> 1);
            }
            else
            {
                int topCenter = Cur(plane, x + (w >> 1) - 1, y - 1);
                Cur(plane, x + (w >> 1) - 1, y + (h >> 1) - 1) = (byte)((topCenter + bottomCenter) >> 1);
            }
            PredictPlaneIntern(x, y, w >> 1, h >> 1, plane);
            PredictPlaneIntern(x + (w >> 1), y, w >> 1, h >> 1, plane);
            PredictPlaneIntern(x, y + (h >> 1), w >> 1, h >> 1, plane);
            PredictPlaneIntern(x + (w >> 1), y + (h >> 1), w >> 1, h >> 1, plane);
        }
    }

    private void PredictPlane(int x, int y, int w, int h, int plane, int param)
    {
        int bottomLeft = Cur(plane, x - 1, y + h - 1), topRight = Cur(plane, x + w - 1, y - 1);
        Cur(plane, x + w - 1, y + h - 1) = (byte)(((bottomLeft + topRight + 1) >> 1) + param);   // uint8 store truncates
        PredictPlaneIntern(x, y, w, h, plane);
    }

    private int CheckedSe()
    {
        int p = _gb.Se();
        if (p < -(1 << 16) || p >= (1 << 16)) throw new InvalidDataException("invalid plane/dc parameter");
        return p;
    }

    private void PredictMbPlane(int x, int y, int w, int h)
    {
        PredictPlane(x, y, w, h, 0, CheckedSe() << 1);
        PredictPlane(x >> 1, y >> 1, w >> 1, h >> 1, 1, CheckedSe() << 1);
        PredictPlane(x >> 1, y >> 1, w >> 1, h >> 1, 2, CheckedSe() << 1);
    }

    private void PredictHorizontal(int x, int y, int w, int h, int plane)
    {
        for (int y2 = 0; y2 < h; y2++)
        {
            byte p = Cur(plane, x - 1, y + y2);
            for (int x2 = 0; x2 < w; x2++) Cur(plane, x + x2, y + y2) = p;
        }
    }

    private void PredictVertical(int x, int y, int w, int h, int plane)
    {
        for (int y2 = 0; y2 < h; y2++)
            for (int x2 = 0; x2 < w; x2++) Cur(plane, x + x2, y + y2) = Cur(plane, x + x2, y - 1);
    }

    private static readonly byte[] ShiftTab = [1, 2, 3, 0, 4];

    private void PredictDc(int x, int y, int w, int h, int plane)
    {
        byte dc;
        if (x != 0 && y != 0)
        {
            int sumH = w >> 1;
            for (int x2 = 0; x2 < w; x2++) sumH += Cur(plane, x + x2, y - 1);
            sumH >>= ShiftTab[w >> 2];
            int sumV = h >> 1;
            for (int y2 = 0; y2 < h; y2++) sumV += Cur(plane, x - 1, y + y2);
            sumV >>= ShiftTab[h >> 2];
            dc = (byte)((sumH + sumV + 1) >> 1);
        }
        else if (x == 0 && y != 0)
        {
            int sum = w >> 1;
            for (int x2 = 0; x2 < w; x2++) sum += Cur(plane, x + x2, y - 1);
            dc = (byte)(sum >> ShiftTab[w >> 2]);
        }
        else if (x != 0)
        {
            int sum = h >> 1;
            for (int y2 = 0; y2 < h; y2++) sum += Cur(plane, x - 1, y + y2);
            dc = (byte)(sum >> ShiftTab[h >> 2]);
        }
        else dc = 128;
        for (int y2 = 0; y2 < h; y2++) for (int x2 = 0; x2 < w; x2++) Cur(plane, x + x2, y + y2) = dc;
    }

    private void PredictNotileUv(int x, int y, int w, int h)
    {
        switch (_gb.Ue())
        {
            case 0: PredictDc(x >> 1, y >> 1, w >> 1, h >> 1, 1); PredictDc(x >> 1, y >> 1, w >> 1, h >> 1, 2); break;
            case 1: PredictHorizontal(x >> 1, y >> 1, w >> 1, h >> 1, 1); PredictHorizontal(x >> 1, y >> 1, w >> 1, h >> 1, 2); break;
            case 2: PredictVertical(x >> 1, y >> 1, w >> 1, h >> 1, 1); PredictVertical(x >> 1, y >> 1, w >> 1, h >> 1, 2); break;
            case 3: PredictPlane(x >> 1, y >> 1, w >> 1, h >> 1, 1, 0); PredictPlane(x >> 1, y >> 1, w >> 1, h >> 1, 2, 0); break;
            default: throw new InvalidDataException("invalid predict notile uv mode");
        }
    }

    private void PredictNotile(int x, int y, int w, int h)
    {
        switch (_gb.Ue())
        {
            case 0: PredictVertical(x, y, w, h, 0); break;
            case 1: PredictHorizontal(x, y, w, h, 0); break;
            case 2: PredictDc(x, y, w, h, 0); break;
            case 3: PredictPlane(x, y, w, h, 0, 0); break;
            default: throw new InvalidDataException("invalid predict notile y mode");
        }
        PredictNotileUv(x, y, w, h);
    }

    private void Predict4(int x, int y, int w, int h)
    {
        var p = _cur.P[0];
        for (int y2 = 0; y2 < h >> 2; y2++)
        {
            for (int x2 = 0; x2 < w >> 2; x2++)
            {
                int mode = Math.Min(_pred4[y2, 1 + x2], _pred4[1 + y2, x2]);
                if (mode == 9) mode = 2;
                if (_gb.Bit() == 0)
                {
                    int val = _gb.Bits(3);
                    mode = val + (val >= mode ? 1 : 0);
                }
                _pred4[1 + y2, 1 + x2] = (byte)mode;
                int bx = x + x2 * 4, by = y + y2 * 4;
                Intra4x4.Predict(p, bx, by, mode);
            }
        }
        PredictNotileUv(x, y, w, h);
    }

    private void DecodeDct(int x, int y, int plane, int[] level)
    {
        Span<int> dct = stackalloc int[16];
        for (int i = 0; i < 16; i++) dct[_zigzag[i]] = level[i];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 4; j++)
            {
                dct[4 * j + i] = (short)(dct[4 * j + i] * _qtab[i, j]);
                dct[4 * j + i + 2] = (short)(dct[4 * j + i + 2] * _qtab[i, j]);
            }
        Intra4x4.IdctAdd(_cur.P[plane], x, y, dct);
    }

    private readonly int[] _level = new int[16];

    private int DecodeResiduCavlc(int x, int y, int plane, int nc)
    {
        int[] level = _level;
        int token = Tables.CoeffToken[Tables.CoeffTokenTableIndex[Math.Min(nc, 16)]].Read(_gb);
        int trailingOnes = token & 3, totalCoeff = token >> 2;
        int outTotal = totalCoeff;
        if (totalCoeff == 0) return 0;
        int i = 15, zerosLeft;
        if (totalCoeff != 16)
        {
            zerosLeft = Tables.TotalZeros[totalCoeff]!.Read(_gb);
            int trailingZeros = 16 - (totalCoeff + zerosLeft);
            while (trailingZeros-- > 0) level[i--] = 0;
        }
        else zerosLeft = 0;

        int suffixLength = 0;
        while (true)
        {
            if (trailingOnes > 0)
            {
                trailingOnes--;
                level[i--] = _gb.Bit() != 0 ? -1 : 1;
            }
            else
            {
                int levelPrefix = 0;
                while (_gb.Bit() == 0)
                {
                    if (++levelPrefix > 32) throw new InvalidDataException("invalid level prefix");
                }
                int levelSuffix = levelPrefix == 15 ? _gb.Bits(11) : suffixLength == 0 ? 0 : _gb.Bits(suffixLength);
                int levelCode = levelSuffix + (levelPrefix << suffixLength) + 1;
                if ((uint)levelCode > (uint)Tables.SuffixLimit[suffixLength + 1]) suffixLength++;
                if (_gb.Bit() != 0) levelCode = -levelCode;
                level[i--] = levelCode;
            }
            if (--totalCoeff == 0) break;
            if (zerosLeft == 0) continue;
            int run = zerosLeft < 7 ? Tables.Run[zerosLeft]!.Read(_gb) : Tables.Run7.Read(_gb);
            zerosLeft -= run;
            while (run-- > 0) level[i--] = 0;
        }
        while (zerosLeft-- > 0) level[i--] = 0;
        DecodeDct(x, y, plane, level);
        return outTotal;
    }

    private void DecodeResiduBlocks(int x, int y, int w, int h)
    {
        int ty = ((y >> 2) + 1) * _tcYStride + (x >> 2) + 1;
        int tuv = ((y >> 3) + 1) * _tcUvStride + (x >> 3) + 1;
        int sy = _tcYStride, suv = _tcUvStride;
        for (int y2 = 0; y2 < h >> 3; y2++)
        {
            for (int x2 = 0; x2 < w >> 3; x2++)
            {
                int code = _gb.Ue();
                if (code > 0x1F) throw new InvalidDataException("invalid residu mask code");
                int mask = _version == VersionOld ? Tables.ResiduMaskOld[code] : Tables.ResiduMaskNew[code];
                int bx = x + x2 * 8, by = y + y2 * 8;
                _tcY[ty] = (mask & 1) != 0 ? (byte)DecodeResiduCavlc(bx, by, 0, (_tcY[ty - 1] + _tcY[ty - sy] + 1) >> 1) : (byte)0;
                _tcY[ty + 1] = (mask & 2) != 0 ? (byte)DecodeResiduCavlc(bx + 4, by, 0, (_tcY[ty] + _tcY[ty - sy + 1] + 1) >> 1) : (byte)0;
                _tcY[ty + sy] = (mask & 4) != 0 ? (byte)DecodeResiduCavlc(bx, by + 4, 0, (_tcY[ty + sy - 1] + _tcY[ty] + 1) >> 1) : (byte)0;
                _tcY[ty + sy + 1] = (mask & 8) != 0 ? (byte)DecodeResiduCavlc(bx + 4, by + 4, 0, (_tcY[ty + sy] + _tcY[ty + 1] + 1) >> 1) : (byte)0;
                if ((mask & 16) != 0)
                {
                    int nc = (_tcUv[tuv - 1] + _tcUv[tuv - suv] + 1) >> 1;
                    int tu = DecodeResiduCavlc(bx >> 1, by >> 1, 1, nc);
                    int tv = DecodeResiduCavlc(bx >> 1, by >> 1, 2, nc);
                    _tcUv[tuv] = (byte)((tu + tv + 1) >> 1);
                }
                else _tcUv[tuv] = 0;
                ty += 2;
                tuv++;
            }
            ty += (sy << 1) - (w >> 2);
            tuv += suv - (w >> 3);
        }
    }

    private void PredictInter(int x, int y, int w, int h, (int X, int Y) pred, bool hasDelta, int refFrame)
    {
        if (refFrame >= _refCount) throw new InvalidDataException("reference to unavailable frame");
        var vec = pred;
        if (hasDelta) { vec.X += _gb.Se(); vec.Y += _gb.Se(); }
        _vectors[(1 + (y >> 4)) * _vecStride + 1 + (x >> 4)] = vec;
        if (x + vec.X < 0 || x + vec.X + w > _w || y + vec.Y < 0 || y + vec.Y + h > _h)
            throw new InvalidDataException("motion vector out of bounds");
        for (int y2 = 0; y2 < h; y2++)
            for (int x2 = 0; x2 < w; x2++)
                Cur(0, x + x2, y + y2) = Ref(refFrame, 0, x + x2 + vec.X, y + y2 + vec.Y);
        for (int y2 = 0; y2 < (h >> 1); y2++)
            for (int x2 = 0; x2 < (w >> 1); x2++)
            {
                Cur(1, (x >> 1) + x2, (y >> 1) + y2) = Ref(refFrame, 1, (x >> 1) + x2 + (vec.X >> 1), (y >> 1) + y2 + (vec.Y >> 1));
                Cur(2, (x >> 1) + x2, (y >> 1) + y2) = Ref(refFrame, 2, (x >> 1) + x2 + (vec.X >> 1), (y >> 1) + y2 + (vec.Y >> 1));
            }
    }

    private void PredictInterDc(int x, int y, int w, int h)
    {
        if (_refCount == 0) throw new InvalidDataException("reference to unavailable frame");
        int dx = _gb.Se(), dy = _gb.Se();
        if (x + dx < 0 || x + dx + w > _w || y + dy < 0 || y + dy + h > _h)
            throw new InvalidDataException("motion vector out of bounds");
        int dcY = CheckedSe() << 1, dcU = CheckedSe() << 1, dcV = CheckedSe() << 1;
        for (int y2 = 0; y2 < h; y2++)
            for (int x2 = 0; x2 < w; x2++)
                Cur(0, x + x2, y + y2) = Clip(Ref(0, 0, x + x2 + dx, y + y2 + dy) + dcY);
        for (int y2 = 0; y2 < (h >> 1); y2++)
            for (int x2 = 0; x2 < (w >> 1); x2++)
            {
                Cur(1, (x >> 1) + x2, (y >> 1) + y2) = Clip(Ref(0, 1, (x >> 1) + x2 + (dx >> 1), (y >> 1) + y2 + (dy >> 1)) + dcU);
                Cur(2, (x >> 1) + x2, (y >> 1) + y2) = Clip(Ref(0, 2, (x >> 1) + x2 + (dx >> 1), (y >> 1) + y2 + (dy >> 1)) + dcV);
            }
    }

    private void DecodeMb(int x, int y, int w, int h, (int X, int Y) pred)
    {
        int mode = _gb.Ue();
        if (_version == VersionOld)
        {
            if (mode >= Tables.OldMbModeRemap.Length) throw new InvalidDataException("invalid macroblock mode");
            mode = Tables.OldMbModeRemap[mode];
        }
        bool whBig = (w == 8 || w == 16) && (h == 8 || h == 16);
        switch (mode)
        {
            case 0:
                if (w == 2) throw new InvalidDataException("invalid macroblock mode");
                DecodeMb(x, y, w >> 1, h, pred);
                DecodeMb(x + (w >> 1), y, w >> 1, h, pred);
                if (w == 8 && (h == 8 || h == 16)) ClearTotalCoeff(x, y, w, h);
                break;
            case 1: PredictInter(x, y, w, h, pred, false, 0); if (whBig) ClearTotalCoeff(x, y, w, h); break;
            case 2:
                if (h == 2) throw new InvalidDataException("invalid macroblock mode");
                DecodeMb(x, y, w, h >> 1, pred);
                DecodeMb(x, y + (h >> 1), w, h >> 1, pred);
                if ((w == 8 || w == 16) && h == 8) ClearTotalCoeff(x, y, w, h);
                break;
            case 3: PredictInterDc(x, y, w, h); if (whBig) ClearTotalCoeff(x, y, w, h); break;
            case 4: case 5: case 6: PredictInter(x, y, w, h, pred, true, mode - 4); if (whBig) ClearTotalCoeff(x, y, w, h); break;
            case 7: PredictMbPlane(x, y, w, h); if (whBig) ClearTotalCoeff(x, y, w, h); break;
            case 8:
                if (w == 2) throw new InvalidDataException("invalid macroblock mode");
                DecodeMb(x, y, w >> 1, h, pred);
                DecodeMb(x + (w >> 1), y, w >> 1, h, pred);
                DecodeResiduBlocks(x, y, w, h);
                break;
            case 9: PredictInter(x, y, w, h, pred, false, 1); if (whBig) ClearTotalCoeff(x, y, w, h); break;
            case 10: PredictInterDc(x, y, w, h); DecodeResiduBlocks(x, y, w, h); break;
            case 11: PredictNotile(x, y, w, h); if (whBig) ClearTotalCoeff(x, y, w, h); break;
            case 12: PredictInter(x, y, w, h, pred, false, 0); DecodeResiduBlocks(x, y, w, h); break;
            case 13:
                if (h == 2) throw new InvalidDataException("invalid macroblock mode");
                DecodeMb(x, y, w, h >> 1, pred);
                DecodeMb(x, y + (h >> 1), w, h >> 1, pred);
                DecodeResiduBlocks(x, y, w, h);
                break;
            case 14: PredictInter(x, y, w, h, pred, false, 2); if (whBig) ClearTotalCoeff(x, y, w, h); break;
            case 15: Predict4(x, y, w, h); if (whBig) ClearTotalCoeff(x, y, w, h); break;
            case 16: case 17: case 18: PredictInter(x, y, w, h, pred, true, mode - 16); DecodeResiduBlocks(x, y, w, h); break;
            case 19: Predict4(x, y, w, h); DecodeResiduBlocks(x, y, w, h); break;
            case 20: case 21: PredictInter(x, y, w, h, pred, false, mode - 20 + 1); DecodeResiduBlocks(x, y, w, h); break;
            case 22: PredictNotile(x, y, w, h); DecodeResiduBlocks(x, y, w, h); break;
            case 23: PredictMbPlane(x, y, w, h); DecodeResiduBlocks(x, y, w, h); break;
            default: throw new InvalidDataException("invalid macroblock mode");
        }
    }
}
