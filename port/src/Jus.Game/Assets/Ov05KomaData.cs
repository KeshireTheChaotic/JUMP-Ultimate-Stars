using System.Buffers.Binary;

namespace Jus.Game.Assets;

/// <summary>One koma record of <c>bin/koma.bin</c> (12 bytes; loaded by FUN_02075f08 into ComicDeck +0x30,
/// count = file size / 12 at +0x18EC; FUN_02076c98 indexes it by koma id).
/// Field use, read from the code:
/// +0 u16 id; +2 u16 person id (FUN_02078814 forbids two koma with the same +2 in one deck; FUN_0214e654
/// searches by it); +4 series (index into the series-prefix table 0x0209E840 used for the art file name
/// "koma/xx_NN.dtx", FUN_0214d064); +5 number in the series; +6 kind (0 battle, 1 support, 2 help;
/// FUN_02077610); +7 character id; +8 shape group, +9 shape index (FUN_02076d00 → kshape.bin);
/// +0xA anchor cell value (FUN_02076e38 +0x47/+0x48); +0xB low nibble → deck node +0x12, high nibble →
/// node +0x13 unless 3 (FUN_02076e38; FUN_02078cb8 tests high != 3).</summary>
public readonly record struct KomaRecord(int Index, int Id, int Person, int Series, int Number, int Kind,
    int Character, int ShapeGroup, int ShapeIndex, int AnchorValue, int Nibbles)
{
    public int LowNibble => Nibbles & 0xF;
    public int HighNibble => Nibbles >> 4;
}

/// <summary><c>bin/koma.bin</c>.</summary>
public sealed class KomaTable
{
    public const int RecordSize = 12;
    public IReadOnlyList<KomaRecord> Records { get; }

    public KomaTable(byte[] data)
    {
        var list = new List<KomaRecord>(data.Length / RecordSize);
        for (int i = 0; i + RecordSize <= data.Length; i += RecordSize)
            list.Add(new KomaRecord(i / RecordSize, BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(i)),
                BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(i + 2)), data[i + 4], data[i + 5], data[i + 6], data[i + 7],
                (sbyte)data[i + 8], (sbyte)data[i + 9], data[i + 10], data[i + 11]));
        Records = list;
    }

    public static KomaTable Load(IAssetSource assets) => new(assets.Read("bin/koma.bin"));

    /// <summary>FUN_02076c98: the record for an id, or null for −1 / out of range.</summary>
    public KomaRecord? Get(int id) => id >= 0 && id < Records.Count ? Records[id] : null;
}

/// <summary>One shape of <c>bin/kshape.bin</c> (0x18 bytes): 5×4 cell bytes (row-major, 0 = empty, the value
/// numbers the koma's parts; 1 = the first part) and the u32 occupancy mask (+0x14, 5 bits per row).</summary>
public sealed record KomaShape(byte[] Cells, uint Mask)
{
    public byte Cell(int x, int y) => Cells[y * 5 + x];
}

/// <summary><c>bin/kshape.bin</c> (ComicDeck +0x38): 16 u32 group start indices, then 0x18-byte shapes from
/// +0x40. FUN_02076d00: shape = (group start[koma +8] + koma +9) · 0x18 + 0x40.</summary>
public sealed class KomaShapes
{
    private readonly byte[] _data;
    public KomaShapes(byte[] data) => _data = data;
    public static KomaShapes Load(IAssetSource assets) => new(assets.Read("bin/kshape.bin"));

    public KomaShape Get(int group, int index)
    {
        int start = BinaryPrimitives.ReadInt32LittleEndian(_data.AsSpan(group * 4));
        int o = (index + start) * 0x18 + 0x40;
        return new KomaShape(_data.AsSpan(o, 20).ToArray(), BinaryPrimitives.ReadUInt32LittleEndian(_data.AsSpan(o + 0x14)));
    }

    public KomaShape For(KomaRecord k) => Get(k.ShapeGroup, k.ShapeIndex);
}

/// <summary><c>bin/komatxt.bin</c> (ComicDeck +0x34, FUN_02075f60): 0xC-byte records per koma; +0 offset of the
/// name relative to the record (FUN_0214e030), +8 u16 (FUN_0214e084, read by the J Power list mode).
/// Names are Shift-JIS; '|' is the English patch's space and pads names to a fixed width.</summary>
public sealed class KomaText
{
    private readonly byte[] _data;
    public KomaText(byte[] data) => _data = data;
    public static KomaText Load(IAssetSource assets) => new(assets.Read("bin/komatxt.bin"));

    public byte[] NameBytes(int index)
    {
        int r = index * 0xC;
        int o = r + BinaryPrimitives.ReadInt32LittleEndian(_data.AsSpan(r));
        int e = Array.IndexOf(_data, (byte)0, o);
        return _data.AsSpan(o, e - o).ToArray();
    }

    public int Value8(int index) => BinaryPrimitives.ReadUInt16LittleEndian(_data.AsSpan(index * 0xC + 8));
}

/// <summary>Messages of the ov12 CommonWindow, <c>bin/commwin.bin</c> (CommonWindow_Create 0x021BA49C loads it;
/// FUN_021bac28(window, id, …) shows record id). Records are 0x24 bytes: +0 line count, +1 (unknown),
/// +2 window kind (inferred: 1 = two buttons, 2 = three buttons as in FUN_021bb6dc's switch on +0x9C, 3 = no
/// buttons), then 8 u32 string offsets, each relative to its own position.</summary>
public sealed class CommWinMessages
{
    public const int RecordSize = 0x24;
    private readonly byte[] _data;
    public CommWinMessages(byte[] data) => _data = data;
    public static CommWinMessages Load(IAssetSource assets) => new(assets.Read("bin/commwin.bin"));

    public int LineCount(int id) => _data[id * RecordSize];
    public int Kind(int id) => _data[id * RecordSize + 2];

    public byte[] Line(int id, int line)
    {
        int p = id * RecordSize + 4 + line * 4;
        int o = p + BinaryPrimitives.ReadInt32LittleEndian(_data.AsSpan(p));
        int e = Array.IndexOf(_data, (byte)0, o);
        return _data.AsSpan(o, e - o).ToArray();
    }
}
