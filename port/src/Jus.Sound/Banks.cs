using System.Buffers.Binary;
using System.Text;

namespace Jus.Sound;

/// <summary>How a note is played: a PCM sample (wave <see cref="Wave"/> of bank wave archive
/// <see cref="WaveArchive"/>), a PSG square wave (duty <see cref="Wave"/>) or noise.</summary>
public enum NoteKind { None = 0, Pcm = 1, Psg = 2, Noise = 3 }

/// <summary>One playable region of an instrument (10-byte definition in the SBNK).</summary>
public readonly record struct NoteDef(NoteKind Kind, int Wave, int WaveArchive, int BaseNote,
    int Attack, int Decay, int Sustain, int Release, int Pan);

/// <summary>
/// Instrument bank ("SBNK"): DATA block, 32 reserved bytes, u32 instrument count, then one
/// {u8 type, u16 offset (from the file start), u8} per instrument. Types: 1 PCM, 2 PSG, 3 noise
/// (one 10-byte definition), 16 drum set (u8 low, u8 high key, then a {u16 type, definition} per key),
/// 17 key split (8 upper-key bytes, then a {u16 type, definition} per used region).
/// </summary>
public sealed class Bank
{
    private readonly byte[] _d;
    private readonly (int Type, int Offset)[] _inst;

    public int Count => _inst.Length;

    public Bank(byte[] file)
    {
        if (Encoding.ASCII.GetString(file, 0, 4) != "SBNK") throw new InvalidDataException("not SBNK");
        _d = file;
        int block = BinaryPrimitives.ReadUInt16LittleEndian(file.AsSpan(0xC));
        int n = BinaryPrimitives.ReadInt32LittleEndian(file.AsSpan(block + 0x28));
        _inst = new (int, int)[n];
        for (int i = 0; i < n; i++)
        {
            int r = block + 0x2C + 4 * i;
            _inst[i] = (file[r], BinaryPrimitives.ReadUInt16LittleEndian(file.AsSpan(r + 1)));
        }
    }

    private NoteDef Def(int type, int o) => new((NoteKind)type,
        BinaryPrimitives.ReadUInt16LittleEndian(_d.AsSpan(o)), BinaryPrimitives.ReadUInt16LittleEndian(_d.AsSpan(o + 2)),
        _d[o + 4], _d[o + 5], _d[o + 6], _d[o + 7], _d[o + 8], _d[o + 9]);

    /// <summary>The definition that plays <paramref name="key"/> on program <paramref name="program"/>, or null.</summary>
    public NoteDef? Find(int program, int key)
    {
        if (program < 0 || program >= _inst.Length) return null;
        var (type, o) = _inst[program];
        switch (type)
        {
            case 1 or 2 or 3:
                return Def(type, o);
            case 16:
                {
                    int lo = _d[o], hi = _d[o + 1];
                    if (key < lo || key > hi) return null;
                    int r = o + 2 + 12 * (key - lo);
                    int t = BinaryPrimitives.ReadUInt16LittleEndian(_d.AsSpan(r));
                    return t is >= 1 and <= 3 ? Def(t, r + 2) : null;
                }
            case 17:
                {
                    int region = 0;
                    while (region < 8 && _d[o + region] != 0 && key > _d[o + region]) region++;
                    if (region == 8 || _d[o + region] == 0) return null;
                    int r = o + 8 + 12 * region;
                    int t = BinaryPrimitives.ReadUInt16LittleEndian(_d.AsSpan(r));
                    return t is >= 1 and <= 3 ? Def(t, r + 2) : null;
                }
            default:
                return null;
        }
    }
}

/// <summary>A decoded sample: 16-bit PCM, its rate and loop (start and length in samples; Loop false =
/// one-shot).</summary>
public sealed record Wave(short[] Samples, int SampleRate, int Timer, bool Loop, int LoopStart, int LoopLength);

/// <summary>
/// Wave archive ("SWAR"): DATA block, 32 reserved bytes, u32 count, u32 offsets (from the file start)
/// to SWAV bodies: u8 encoding (0 PCM8, 1 PCM16, 2 IMA-ADPCM), u8 loop, u16 rate, u16 timer,
/// u16 loop start and u32 loop length in words, then the data. An ADPCM body starts with a 4-byte
/// header (s16 sample, u8 step index) counted in the loop start.
/// </summary>
public sealed class WaveArchive
{
    private readonly byte[] _d;
    private readonly int[] _offsets;
    private readonly Dictionary<int, Wave> _cache = [];

    public int Count => _offsets.Length;

    public WaveArchive(byte[] file)
    {
        if (Encoding.ASCII.GetString(file, 0, 4) != "SWAR") throw new InvalidDataException("not SWAR");
        _d = file;
        int block = BinaryPrimitives.ReadUInt16LittleEndian(file.AsSpan(0xC));
        int n = BinaryPrimitives.ReadInt32LittleEndian(file.AsSpan(block + 0x28));
        _offsets = new int[n];
        for (int i = 0; i < n; i++) _offsets[i] = BinaryPrimitives.ReadInt32LittleEndian(file.AsSpan(block + 0x2C + 4 * i));
    }

    public Wave Get(int index)
    {
        if (_cache.TryGetValue(index, out var w)) return w;
        int o = _offsets[index];
        int end = index + 1 < _offsets.Length ? _offsets[index + 1] : _d.Length;
        w = Decode(_d.AsSpan(o, end - o));
        _cache[index] = w;
        return w;
    }

    /// <summary>Decodes a SWAV body (the 12-byte info header followed by the data).</summary>
    public static Wave Decode(ReadOnlySpan<byte> b)
    {
        int enc = b[0];
        bool loop = b[1] != 0;
        int rate = BinaryPrimitives.ReadUInt16LittleEndian(b[2..]);
        int timer = BinaryPrimitives.ReadUInt16LittleEndian(b[4..]);
        int loopStartWords = BinaryPrimitives.ReadUInt16LittleEndian(b[6..]);
        int loopLenWords = BinaryPrimitives.ReadInt32LittleEndian(b[8..]);
        var data = b[12..];
        int totalBytes = Math.Min(data.Length, (loopStartWords + loopLenWords) * 4);
        if (totalBytes <= 0) totalBytes = data.Length;
        short[] s;
        int ls, ll;
        switch (enc)
        {
            case 0:
                s = new short[totalBytes];
                for (int i = 0; i < s.Length; i++) s[i] = (short)((sbyte)data[i] << 8);
                ls = loopStartWords * 4; ll = loopLenWords * 4;
                break;
            case 1:
                s = new short[totalBytes / 2];
                for (int i = 0; i < s.Length; i++) s[i] = BinaryPrimitives.ReadInt16LittleEndian(data[(2 * i)..]);
                ls = loopStartWords * 2; ll = loopLenWords * 2;
                break;
            case 2:
                s = ImaAdpcm(data[..totalBytes]);
                ls = Math.Max(0, (loopStartWords - 1) * 8); ll = loopLenWords * 8;
                break;
            default:
                throw new NotSupportedException($"SWAV encoding {enc}");
        }
        ll = Math.Min(ll, Math.Max(0, s.Length - ls));
        return new Wave(s, rate, timer, loop && ll > 0, ls, ll);
    }

    private static readonly int[] StepTable =
    [
        7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 19, 21, 23, 25, 28, 31, 34, 37, 41, 45, 50, 55, 60, 66, 73, 80, 88, 97, 107,
        118, 130, 143, 157, 173, 190, 209, 230, 253, 279, 307, 337, 371, 408, 449, 494, 544, 598, 658, 724, 796, 876, 963,
        1060, 1166, 1282, 1411, 1552, 1707, 1878, 2066, 2272, 2499, 2749, 3024, 3327, 3660, 4026, 4428, 4871, 5358, 5894,
        6484, 7132, 7845, 8630, 9493, 10442, 11487, 12635, 13899, 15289, 16818, 18500, 20350, 22385, 24623, 27086, 29794, 32767,
    ];
    private static readonly int[] IndexTable = [-1, -1, -1, -1, 2, 4, 6, 8];

    /// <summary>IMA-ADPCM as decoded by the DS sound hardware: 4-byte header, then low nibble first.</summary>
    public static short[] ImaAdpcm(ReadOnlySpan<byte> d)
    {
        if (d.Length < 4) return [];
        int pred = BinaryPrimitives.ReadInt16LittleEndian(d), idx = Math.Clamp((int)d[2], 0, 88);
        var o = new short[(d.Length - 4) * 2];
        int n = 0;
        for (int i = 4; i < d.Length; i++)
        {
            for (int h = 0; h < 2; h++)
            {
                int nib = (d[i] >> (h * 4)) & 0xF;
                int step = StepTable[idx];
                int diff = step >> 3;
                if ((nib & 1) != 0) diff += step >> 2;
                if ((nib & 2) != 0) diff += step >> 1;
                if ((nib & 4) != 0) diff += step;
                pred = (nib & 8) != 0 ? Math.Max(pred - diff, -0x7FFF) : Math.Min(pred + diff, 0x7FFF);
                idx = Math.Clamp(idx + IndexTable[nib & 7], 0, 88);
                o[n++] = (short)pred;
            }
        }
        return o;
    }
}
