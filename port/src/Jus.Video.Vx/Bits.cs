// SPDX-License-Identifier: LGPL-2.1-or-later
// Port of FFmpeg's get_bits/golomb readers as used by the Actimagine VX decoder (see COPYING.LGPL.md).
namespace Jus.Video.Vx;

/// <summary>MSB-first bit reader over a buffer whose 16-bit words were byte-swapped
/// (the VX bitstream is stored as little-endian 16-bit words).</summary>
internal sealed class BitReader
{
    private readonly byte[] _buf;
    private readonly int _bits;
    private int _pos;

    public BitReader(ReadOnlySpan<byte> packet)
    {
        int n = (packet.Length + 1) & ~1;
        _buf = new byte[n + 8];
        for (int i = 0; i + 1 < n; i += 2)
        {
            _buf[i] = i + 1 < packet.Length ? packet[i + 1] : (byte)0;
            _buf[i + 1] = packet[i];
        }
        _bits = n * 8;
    }

    public int Position => _pos;
    /// <summary>Byte offset after the bits read so far, rounded up to 16 bits (where audio starts).</summary>
    public int AlignedByteOffset => ((_pos + 15) >> 4) << 1;

    public int Bit()
    {
        int b = _pos < _bits ? (_buf[_pos >> 3] >> (7 - (_pos & 7))) & 1 : 0;
        _pos++;
        return b;
    }

    public int Bits(int n)
    {
        int v = 0;
        for (int i = 0; i < n; i++) v = (v << 1) | Bit();
        return v;
    }

    public int Peek(int n)
    {
        int save = _pos, v = Bits(n);
        _pos = save;
        return v;
    }

    public void Skip(int n) => _pos += n;

    /// <summary>Exp-Golomb unsigned (get_ue_golomb / get_ue_golomb_31).</summary>
    public int Ue()
    {
        int zeros = 0;
        while (Bit() == 0)
        {
            if (++zeros > 31) throw new InvalidDataException("invalid exp-golomb code");
        }
        return (int)(((1L << zeros) | (uint)Bits(zeros)) - 1);
    }

    /// <summary>Exp-Golomb signed: 0, 1, -1, 2, -2 ...</summary>
    public int Se()
    {
        int k = Ue();
        return (k & 1) != 0 ? (k + 1) >> 1 : -(k >> 1);
    }
}

/// <summary>A variable-length code table built from (length, code) pairs; symbol = index.</summary>
internal sealed class Vlc
{
    private readonly Dictionary<int, int> _map = [];   // (len << 16 | code) -> symbol
    private readonly int _maxLen;

    public Vlc(ReadOnlySpan<byte> lens, ReadOnlySpan<byte> codes)
    {
        for (int i = 0; i < lens.Length; i++)
        {
            if (lens[i] == 0) continue;
            _map[lens[i] << 16 | codes[i]] = i;
            _maxLen = Math.Max(_maxLen, lens[i]);
        }
    }

    public int Read(BitReader br)
    {
        int code = 0;
        for (int len = 1; len <= _maxLen; len++)
        {
            code = (code << 1) | br.Bit();
            if (_map.TryGetValue(len << 16 | code, out int sym)) return sym;
        }
        throw new InvalidDataException("invalid VLC code");
    }
}

/// <summary>H.264 CAVLC tables (ff_h264_cavlc_*), plus the VX-specific tables.</summary>
internal static class Tables
{
    public static readonly byte[][] CoeffTokenLen =
    [
        [1,0,0,0, 6,2,0,0, 8,6,3,0, 9,8,7,5, 10,9,8,6, 11,10,9,7, 13,11,10,8, 13,13,11,9, 13,13,13,10,
         14,14,13,11, 14,14,14,13, 15,15,14,14, 15,15,15,14, 16,15,15,15, 16,16,16,15, 16,16,16,16, 16,16,16,16],
        [2,0,0,0, 6,2,0,0, 6,5,3,0, 7,6,6,4, 8,6,6,4, 8,7,7,5, 9,8,8,6, 11,9,9,6, 11,11,11,7,
         12,11,11,9, 12,12,12,11, 12,12,12,11, 13,13,13,12, 13,13,13,13, 13,14,13,13, 14,14,14,13, 14,14,14,14],
        [4,0,0,0, 6,4,0,0, 6,5,4,0, 6,5,5,4, 7,5,5,4, 7,5,5,4, 7,6,6,4, 7,6,6,4, 8,7,7,5,
         8,8,7,6, 9,8,8,7, 9,9,8,8, 9,9,9,8, 10,9,9,9, 10,10,10,10, 10,10,10,10, 10,10,10,10],
        [6,0,0,0, 6,6,0,0, 6,6,6,0, 6,6,6,6, 6,6,6,6, 6,6,6,6, 6,6,6,6, 6,6,6,6, 6,6,6,6,
         6,6,6,6, 6,6,6,6, 6,6,6,6, 6,6,6,6, 6,6,6,6, 6,6,6,6, 6,6,6,6, 6,6,6,6],
    ];

    public static readonly byte[][] CoeffTokenBits =
    [
        [1,0,0,0, 5,1,0,0, 7,4,1,0, 7,6,5,3, 7,6,5,3, 7,6,5,4, 15,6,5,4, 11,14,5,4, 8,10,13,4,
         15,14,9,4, 11,10,13,12, 15,14,9,12, 11,10,13,8, 15,1,9,12, 11,14,13,8, 7,10,9,12, 4,6,5,8],
        [3,0,0,0, 11,2,0,0, 7,7,3,0, 7,10,9,5, 7,6,5,4, 4,6,5,6, 7,6,5,8, 15,6,5,4, 11,14,13,4,
         15,10,9,4, 11,14,13,12, 8,10,9,8, 15,14,13,12, 11,10,9,12, 7,11,6,8, 9,8,10,1, 7,6,5,4],
        [15,0,0,0, 15,14,0,0, 11,15,13,0, 8,12,14,12, 15,10,11,11, 11,8,9,10, 9,14,13,9, 8,10,9,8, 15,14,13,13,
         11,14,10,12, 15,10,13,12, 11,14,9,12, 8,10,13,8, 13,7,9,12, 9,12,11,10, 5,8,7,6, 1,4,3,2],
        [3,0,0,0, 0,1,0,0, 4,5,6,0, 8,9,10,11, 12,13,14,15, 16,17,18,19, 20,21,22,23, 24,25,26,27, 28,29,30,31,
         32,33,34,35, 36,37,38,39, 40,41,42,43, 44,45,46,47, 48,49,50,51, 52,53,54,55, 56,57,58,59, 60,61,62,63],
    ];

    public static readonly byte[] CoeffTokenTableIndex = [0, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3];

    public static readonly byte[][] TotalZerosLen =
    [
        [1,3,3,4,4,5,5,6,6,7,7,8,8,9,9,9], [3,3,3,3,3,4,4,4,4,5,5,6,6,6,6], [4,3,3,3,4,4,3,3,4,5,5,6,5,6],
        [5,3,4,4,3,3,3,4,3,4,5,5,5], [4,4,4,3,3,3,3,3,4,5,4,5], [6,5,3,3,3,3,3,3,4,3,6], [6,5,3,3,3,2,3,4,3,6],
        [6,4,5,3,2,2,3,3,6], [6,6,4,2,2,3,2,5], [5,5,3,2,2,2,4], [4,4,3,3,1,3], [4,4,2,1,3], [3,3,1,2], [2,2,1], [1,1],
    ];

    public static readonly byte[][] TotalZerosBits =
    [
        [1,3,2,3,2,3,2,3,2,3,2,3,2,3,2,1], [7,6,5,4,3,5,4,3,2,3,2,3,2,1,0], [5,7,6,5,4,3,4,3,2,3,2,1,1,0],
        [3,7,5,4,6,5,4,3,3,2,2,1,0], [5,4,3,7,6,5,4,3,2,1,1,0], [1,1,7,6,5,4,3,2,1,1,0], [1,1,5,4,3,3,2,1,1,0],
        [1,1,1,3,3,2,2,1,0], [1,0,1,3,2,1,1,1], [1,0,1,3,2,1,1], [0,1,1,2,1,3], [0,1,1,1,1], [0,1,1,1], [0,1,1], [0,1],
    ];

    public static readonly byte[][] RunLen =
    [
        [1,1], [1,2,2], [2,2,2,2], [2,2,2,3,3], [2,2,3,3,3,3], [2,3,3,3,3,3,3], [3,3,3,3,3,3,3,4,5,6,7,8,9,10,11],
    ];

    public static readonly byte[][] RunBits =
    [
        [1,0], [1,1,0], [3,2,1,0], [3,2,1,1,0], [3,2,3,2,1,0], [3,0,1,3,2,5,4], [7,6,5,4,3,2,1,1,1,1,1,1,1,1,1],
    ];

    public static readonly int[] SuffixLimit = [0, 3, 6, 12, 24, 48, int.MaxValue];

    public static readonly Vlc[] CoeffToken = [.. Enumerable.Range(0, 4).Select(i => new Vlc(CoeffTokenLen[i], CoeffTokenBits[i]))];
    /// <summary>Index = total_coeff (1..15).</summary>
    public static readonly Vlc?[] TotalZeros = [null, .. Enumerable.Range(0, 15).Select(i => new Vlc(TotalZerosLen[i], TotalZerosBits[i]))];
    /// <summary>Index = zeros_left (1..6); 7+ uses <see cref="Run7"/>.</summary>
    public static readonly Vlc?[] Run = [null, .. Enumerable.Range(0, 6).Select(i => new Vlc(RunLen[i], RunBits[i]))];
    public static readonly Vlc Run7 = new(RunLen[6], RunBits[6]);

    // actimagine_vx_data.c
    public static readonly byte[] OldMbModeRemap = [1, 2, 0, 4, 7, 3, 11, 15, 9, 5, 14, 6, 12, 13, 8, 16, 23, 10, 22, 19, 20, 17, 21, 18];
    public static readonly byte[] ResiduMaskOld =
    [
        0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x03, 0x05, 0x0A, 0x0C, 0x0F, 0x1F, 0x07, 0x0B, 0x0D, 0x0E,
        0x06, 0x09, 0x13, 0x15, 0x1A, 0x1C, 0x11, 0x12, 0x14, 0x18, 0x17, 0x1B, 0x1D, 0x1E, 0x16, 0x19,
    ];
    public static readonly byte[] ResiduMaskNew =
    [
        0x00, 0x08, 0x04, 0x02, 0x01, 0x1F, 0x0F, 0x0A, 0x05, 0x0C, 0x03, 0x10, 0x0E, 0x0D, 0x0B, 0x07,
        0x09, 0x06, 0x1E, 0x1B, 0x1A, 0x1D, 0x17, 0x15, 0x18, 0x12, 0x11, 0x1C, 0x14, 0x13, 0x16, 0x19,
    ];

    public static readonly byte[][] Quant4x4 =
    [
        [0x0A, 0x0D, 0x0A, 0x0D, 0x0D, 0x10, 0x0D, 0x10], [0x0B, 0x0E, 0x0B, 0x0E, 0x0E, 0x12, 0x0E, 0x12],
        [0x0D, 0x10, 0x0D, 0x10, 0x10, 0x14, 0x10, 0x14], [0x0E, 0x12, 0x0E, 0x12, 0x12, 0x17, 0x12, 0x17],
        [0x10, 0x14, 0x10, 0x14, 0x14, 0x19, 0x14, 0x19], [0x12, 0x17, 0x12, 0x17, 0x17, 0x1D, 0x17, 0x1D],
    ];

    /// <summary>ff_zigzag_scan (4x4).</summary>
    public static readonly byte[] ZigzagScan = [0, 1, 4, 8, 5, 2, 3, 6, 9, 12, 13, 10, 7, 11, 14, 15];
}
