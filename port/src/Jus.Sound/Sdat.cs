using System.Buffers.Binary;
using System.Text;

namespace Jus.Sound;

/// <summary>Sequence info record (INFO): file, bank, volume, priorities, player.</summary>
public sealed record SeqInfo(int FileId, int Bank, int Volume, int ChannelPriority, int PlayerPriority, int Player);

/// <summary>Bank info record (INFO): file and up to four wave archives (-1 = none).</summary>
public sealed record BankInfo(int FileId, int[] WaveArchives);

/// <summary>
/// NitroSystem sound archive ("SDAT", <c>sound/JS2_sound.sdat</c>): header with SYMB / INFO / FAT / FILE
/// blocks. INFO holds eight record lists (sequence, sequence archive, bank, wave archive, player,
/// group, stream player, stream); FAT maps file ids to (offset, size) in the archive. The game starts
/// music with NNS_SndArcPlayerStartSeq (FUN_0205DB34, sequence number) and sound effects with
/// NNS_SndArcPlayerStartSeqArc (FUN_0205DAAC, archive number + index; e.g. archive 0x78 = system SE).
/// </summary>
public sealed class SdatArchive
{
    private readonly byte[] _data;
    private readonly int _info, _fat, _symb;

    public IReadOnlyList<SeqInfo?> Sequences { get; }
    public IReadOnlyList<int> SequenceArchives { get; }        // file id per archive, -1 = none
    public IReadOnlyList<BankInfo?> Banks { get; }
    public IReadOnlyList<int> WaveArchives { get; }            // file id per wave archive, -1 = none
    /// <summary>PLAYER records: how many sequences each player runs at once and its channel mask.</summary>
    public IReadOnlyList<(int MaxSequences, int ChannelMask)> Players { get; }

    public SdatArchive(byte[] data)
    {
        if (data.Length < 0x40 || Encoding.ASCII.GetString(data, 0, 4) != "SDAT") throw new InvalidDataException("not SDAT");
        _data = data;
        int blocks = U16(0xE);
        _symb = blocks == 4 ? I32(0x10) : 0;
        if (_symb != 0 && I32(0x14) == 0) _symb = 0;
        _info = I32(0x18);
        _fat = I32(0x20);
        if (Encoding.ASCII.GetString(data, _info, 4) != "INFO" || Encoding.ASCII.GetString(data, _fat, 4) != "FAT ")
            throw new InvalidDataException("SDAT: missing INFO/FAT");
        Sequences = Records<SeqInfo>(0, r => new SeqInfo(U16(r), U16(r + 4), data[r + 6], data[r + 7], data[r + 8], data[r + 9]));
        SequenceArchives = Records<object>(1, r => U16(r)).Select(x => x is int v ? v : -1).ToArray();
        Banks = Records<BankInfo>(2, r => new BankInfo(U16(r), Enumerable.Range(0, 4).Select(i => U16(r + 4 + 2 * i)).Select(w => w == 0xFFFF ? -1 : w).ToArray()));
        WaveArchives = Records<object>(3, r => (int)(BinaryPrimitives.ReadUInt32LittleEndian(data.AsSpan(r)) & 0xFFFFFF)).Select(x => x is int v ? v : -1).ToArray();
        Players = Records<object>(4, r => (data[r], (int)U16(r + 2))).Select(x => x is ValueTuple<byte, int> t ? (t.Item1, t.Item2) : (1, 0xFFFF)).ToArray();
    }

    private int U16(int o) => BinaryPrimitives.ReadUInt16LittleEndian(_data.AsSpan(o));
    private int I32(int o) => BinaryPrimitives.ReadInt32LittleEndian(_data.AsSpan(o));

    private List<T?> Records<T>(int list, Func<int, T> read) where T : class
    {
        int lo = I32(_info + 8 + 4 * list);
        var result = new List<T?>();
        if (lo == 0) return result;
        int n = I32(_info + lo);
        for (int i = 0; i < n; i++)
        {
            int ro = I32(_info + lo + 4 + 4 * i);
            result.Add(ro == 0 ? default : read(_info + ro));
        }
        return result;
    }

    /// <summary>The file with FAT id <paramref name="id"/>.</summary>
    public byte[] File(int id)
    {
        int e = _fat + 0xC + 0x10 * id;
        return _data.AsSpan(I32(e), I32(e + 4)).ToArray();
    }

    /// <summary>Symbol name of record <paramref name="index"/> in list <paramref name="list"/> (0 = SEQ,
    /// 1 = SEQARC, 2 = BANK, 3 = WAVEARC), or null when the archive has no symbols.</summary>
    public string? Name(int list, int index)
    {
        if (_symb == 0) return null;
        int lo = I32(_symb + 8 + 4 * list);
        if (lo == 0 || index >= I32(_symb + lo)) return null;
        int stride = list == 1 ? 8 : 4;                       // SEQARC: (name, sub-list) pairs
        int so = I32(_symb + lo + 4 + stride * index);
        return so == 0 ? null : CString(_symb + so);
    }

    /// <summary>Symbol name of sequence <paramref name="index"/> inside sequence archive <paramref name="archive"/>.</summary>
    public string? SeqArcEntryName(int archive, int index)
    {
        if (_symb == 0) return null;
        int lo = I32(_symb + 8 + 4);
        if (lo == 0 || archive >= I32(_symb + lo)) return null;
        int sub = I32(_symb + lo + 4 + 8 * archive + 4);
        if (sub == 0 || index >= I32(_symb + sub)) return null;
        int so = I32(_symb + sub + 4 + 4 * index);
        return so == 0 ? null : CString(_symb + so);
    }

    private string CString(int o)
    {
        int e = Array.IndexOf(_data, (byte)0, o);
        return Encoding.ASCII.GetString(_data, o, (e < 0 ? _data.Length : e) - o);
    }
}

/// <summary>One sequence of a sequence archive ("SSAR"): offset into the archive's data, bank, volume,
/// priorities, player.</summary>
public sealed record SeqArcEntry(int Offset, int Bank, int Volume, int ChannelPriority, int PlayerPriority, int Player);

/// <summary>Sequence data: "SSEQ" (one sequence) or "SSAR" (several sequences sharing one data block).</summary>
public sealed class SequenceData
{
    public byte[] Data { get; }
    /// <summary>For an SSAR: its entries (Offset relative to <see cref="Data"/>).</summary>
    public IReadOnlyList<SeqArcEntry?> Entries { get; } = [];

    public SequenceData(byte[] file)
    {
        string magic = Encoding.ASCII.GetString(file, 0, 4);
        int block = BinaryPrimitives.ReadUInt16LittleEndian(file.AsSpan(0xC));
        if (Encoding.ASCII.GetString(file, block, 4) != "DATA") throw new InvalidDataException($"{magic}: no DATA block");
        int dataOffset = BinaryPrimitives.ReadInt32LittleEndian(file.AsSpan(block + 8));
        if (magic == "SSEQ")
        {
            Data = file.AsSpan(dataOffset).ToArray();
            return;
        }
        if (magic != "SSAR") throw new InvalidDataException($"not SSEQ/SSAR: {magic}");
        Data = file.AsSpan(dataOffset).ToArray();
        int n = BinaryPrimitives.ReadInt32LittleEndian(file.AsSpan(block + 12));
        var list = new List<SeqArcEntry?>(n);
        for (int i = 0; i < n; i++)
        {
            int r = block + 16 + 12 * i;
            uint off = BinaryPrimitives.ReadUInt32LittleEndian(file.AsSpan(r));
            list.Add(off == 0xFFFFFFFF ? null : new SeqArcEntry((int)off, BinaryPrimitives.ReadUInt16LittleEndian(file.AsSpan(r + 4)),
                file[r + 6], file[r + 7], file[r + 8], file[r + 9]));
        }
        Entries = list;
    }
}
