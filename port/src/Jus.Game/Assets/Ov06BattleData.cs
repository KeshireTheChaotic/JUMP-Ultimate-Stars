using System.Buffers.Binary;

namespace Jus.Game.Assets;

/// <summary>One koma (comic panel) record of <c>bin/koma.bin</c>: 12 bytes, indexed by koma id
/// (FUN_02076C98: entry = id * 0xC of the loaded table, bounded by the count at +0x18EC).
/// Fields used by the battle setup: +0 u16 id, +4 u8 series, +6 u8 kind (0 battle, 1 support, 2 help;
/// copied to the deck entry +0x40 by FUN_02076E38), +7 u8 character id (deck entry +0x41), +8 u8
/// CharaData type (FUN_0215F3E0 → CharaData_Create's first argument), +0xA cell id of the koma's
/// anchor (FUN_02076E38), +0xB size nibbles.</summary>
public readonly record struct Ov06Koma(int Id, int Series, int Kind, int Character, int CharaType, int SizeNibbles);

/// <summary><c>bin/koma.bin</c> (890 × 12 bytes, not compressed).</summary>
public sealed class Ov06KomaTable
{
    public IReadOnlyList<Ov06Koma> Records { get; }

    public Ov06KomaTable(byte[] data)
    {
        var list = new Ov06Koma[data.Length / 12];
        for (int i = 0; i < list.Length; i++)
        {
            int o = i * 12;
            list[i] = new(BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o)), data[o + 4], data[o + 6], data[o + 7], data[o + 8], data[o + 0xB]);
        }
        Records = list;
    }

    public static Ov06KomaTable Load(IAssetSource assets) => new(Dscp.Unpack(assets.Read("bin/koma.bin")));

    /// <summary>FUN_02076C98(id): null for -1, negative ids and ids past the table.</summary>
    public Ov06Koma? Get(int id) => id >= 0 && id < Records.Count ? Records[id] : null;

    /// <summary>The resource base of a battle character (the u32 & 0xFFFF00 of the arm9 table at
    /// 0x020924B4 + id*8 that CharaData's FUN_02074728 reads). Derived from data instead of read from
    /// arm9: base = series &lt;&lt; 14 | n &lt;&lt; 8, where n is the 1-based rank of the character id among the
    /// distinct character ids of the battle koma (kind 0) of that series. Checked against the arm9 table for
    /// all 74 battle characters (2026-11-10). Bit 0 of the table entry (CharaData +0x8E, the facing texture
    /// swap FUN_020750D0) is not derivable this way and is not used here.</summary>
    public int BattleCharacterBase(int character)
    {
        var match = Records.Where(k => k.Kind == 0 && k.Character == character).Take(1).ToList();
        if (match.Count == 0) return -1;
        var koma = match[0];
        var ids = Records.Where(k => k.Kind == 0 && k.Series == koma.Series).Select(k => k.Character).Distinct().Order().ToList();
        return koma.Series << 14 | (ids.IndexOf(character) + 1) << 8;
    }

    /// <summary>The type offsets of 0x0209249C are {0,0,0,1,2,3,4,5}: type t ≥ 3 → t − 2 (inferred
    /// closed form of that 8-byte table; types below 3 are not battle characters).</summary>
    public static int TypeOffset(int type) => type >= 3 ? type - 2 : 0;
}

/// <summary>A deck of 0x5C bytes (save image 0x020B0DBC + n*0x5C, the battle copies at 0x020B0134 +
/// player*0x5C, or <c>deck/Deck.aar</c> files): 16 × {s16 koma id, u8 column | row &lt;&lt; 4, u8 flags},
/// then the name (0x1A bytes) at +0x40.</summary>
public sealed class Ov06Deck(byte[] data)
{
    public const int Size = 0x5C;
    public byte[] Data { get; } = data;

    public (int Koma, int Position, int Flags) Slot(int i) =>
        (BinaryPrimitives.ReadInt16LittleEndian(Data.AsSpan(i * 4)), Data[i * 4 + 2], Data[i * 4 + 3]);

    /// <summary>The order in which FUN_020769CC adds the deck's koma to the deck object's list (+0x558,
    /// appended at the tail by FUN_02037B98):
    /// pass 1: slots 0..15 whose koma is a battle koma (+6 == 0) with flag 0x10, in slot order;
    /// pass 2: for kind 0..2, row 0..3, column 4..0, slots 0..15 not taken yet whose koma has that kind and
    /// whose position byte is column | row &lt;&lt; 4.
    /// FUN_02076E38 refuses a koma id already in the list; its placement check FUN_02076D30 is not
    /// translated (a saved deck is assumed to be valid), so every other koma is added.</summary>
    public List<Ov06Koma> BuildOrder(Ov06KomaTable table)
    {
        var list = new List<Ov06Koma>();
        uint used = 0;
        void Add(Ov06Koma k)
        {
            if (list.Any(x => x.Id == k.Id)) return;                      // 0x40000000: already in the list
            list.Add(k);
        }
        for (int i = 0; i < 16; i++)
        {
            var (id, _, flags) = Slot(i);
            if (table.Get(id) is { Kind: 0 } k && (flags & 0x10) != 0)
            {
                Add(k);
                used |= 1u << i;
            }
        }
        for (int kind = 0; kind < 3; kind++)
            for (int row = 0; row < 4; row++)
                for (int col = 4; col >= 0; col--)
                    for (int i = 0; i < 16; i++)
                    {
                        if ((used & (1u << i)) != 0) continue;
                        var (id, pos, _) = Slot(i);
                        if (table.Get(id) is { } k && k.Kind == kind && pos == ((col & 0xF) | row << 4))
                        {
                            Add(k);
                            used |= 1u << i;
                        }
                    }
        return list;
    }

    /// <summary>The character a player starts the battle with: FUN_0215F3E0 registers the deck list's
    /// battle koma (entry +0x40 == 0) in list order at +0x17C, and FUN_0215F578 makes the first one current
    /// (+0x174 = +0x17C).</summary>
    public Ov06Koma? StartingKoma(Ov06KomaTable table)
    {
        foreach (var k in BuildOrder(table))
            if (k.Kind == 0) return k;
        return null;
    }
}

/// <summary>Stage data of <c>stage/stage.aar</c>, read by BattleMapInit (ov06 0x02161CB4) and
/// BattleMapBG_Create (0x02083FCC). <c>stage/&lt;name&gt;.bin</c> starts with u32 offsets:
/// +0 the three BG layer records, +4 the map info, +8 a 0x18-byte record list (count at map info +0x2E),
/// +0xC the wall data (BattleMapInitWall, when map info +0x2C ≠ 0). <c>stage/&lt;name&gt;.mob</c> holds
/// u32 offsets to the moving floors (+0), items (+4) and grips (+8). The graphics are in the nested
/// archive <c>stage/&lt;name&gt;.aar</c> (resources 0x400000..).</summary>
public sealed class Ov06StageInfo
{
    /// <summary>A BG layer record (BattleMapBG_Create's loop): s16 x, s16 y (pixels; the layer node's
    /// position, FUN_0206C9F8), u16 record size, u8 +6 priority (FUN_02084EEC → layer vfunc 0x10),
    /// +7 BG mode (FUN_0203D0B4), +8 colour depth 4/8 (FUN_0203D478), +9 VRAM block (≠ 0 = the layer
    /// is shown; vfunc 0x90 with value &lt;&lt; 10), +0xA animation count, animations from +0xC.</summary>
    public readonly record struct Layer(int X, int Y, int Priority, int Mode, int Depth, int Vram, int Animations);

    public IReadOnlyList<Layer> Layers { get; }
    /// <summary>Map info +8 + 4i / +0x18 + 4i: start position of player i (24.8 fixed-point pixels; the
    /// battle passes y − 1, FUN_02162B60).</summary>
    public (int X, int Y)[] Starts { get; } = new (int, int)[4];
    /// <summary>Map info +0x28 + i: player i starts facing left (≠ 0), FUN_02162B60's third output.</summary>
    public bool[] StartFlipped { get; } = new bool[4];

    public Ov06StageInfo(byte[] bin)
    {
        int layers = BinaryPrimitives.ReadInt32LittleEndian(bin);
        int info = BinaryPrimitives.ReadInt32LittleEndian(bin.AsSpan(4));
        var list = new List<Layer>(3);
        for (int i = 0, o = layers; i < 3; i++)
        {
            list.Add(new Layer(BinaryPrimitives.ReadInt16LittleEndian(bin.AsSpan(o)), BinaryPrimitives.ReadInt16LittleEndian(bin.AsSpan(o + 2)),
                bin[o + 6], bin[o + 7], bin[o + 8], bin[o + 9], bin[o + 10]));
            o += BinaryPrimitives.ReadUInt16LittleEndian(bin.AsSpan(o + 4));
        }
        Layers = list;
        for (int i = 0; i < 4; i++)
        {
            Starts[i] = (BinaryPrimitives.ReadInt32LittleEndian(bin.AsSpan(info + 8 + 4 * i)),
                         BinaryPrimitives.ReadInt32LittleEndian(bin.AsSpan(info + 0x18 + 4 * i)) - 1);
            StartFlipped[i] = bin[info + 0x28 + i] != 0;
        }
    }
}

/// <summary>"ALTM" maps with +5 = 7 (the stage maps; menus use 3 = plain entries). Read from the data
/// (2026-11-10; the engine's decoder is not located yet): after the 0x18-byte header, u16 at +0x18 = offset
/// (from +0x18) of a table of one u16 row offset per map row (also from +0x18; identical rows share
/// data). A row is a list of runs {u8 op, u8 n, (op &amp; 0x3F) + 1 u16 entries}: the entries are repeated
/// until n map entries are written; op bit 0x40 adds +1 per repetition, 0xC0 −1 (only used with one entry).
/// All 14,104 rows of the stage maps add up to their map width (checked 2026-11-10); the ±1 direction of
/// 0xC0 is inferred.</summary>
public static class Ov06PackedMap
{
    /// <summary>The map as an <see cref="AltmMap"/> (plain maps are passed through).</summary>
    public static AltmMap Load(byte[] data)
    {
        if (data.Length < 0x1A || data[5] != 7) return new AltmMap(data);
        int w = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(0x10)), h = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(0x12));
        var plain = new byte[0x18 + w * h * 2];
        data.AsSpan(0, 0x18).CopyTo(plain);
        plain[5] = 3;
        int table = 0x18 + BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(0x18));
        for (int row = 0; row < h; row++)
        {
            int o = 0x18 + BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(table + 2 * row)), x = 0;
            while (x < w)
            {
                int op = data[o], n = data[o + 1], len = (op & 0x3F) + 1;
                int step = (op & 0xC0) switch { 0x40 => 1, 0xC0 => -1, _ => 0 };
                o += 2;
                for (int i = 0; i < n && x < w; i++, x++)
                {
                    ushort e = (ushort)(BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o + 2 * (i % len))) + step * (i / len));
                    BinaryPrimitives.WriteUInt16LittleEndian(plain.AsSpan(0x18 + 2 * (row * w + x)), e);
                }
                o += 2 * len;
            }
        }
        return new AltmMap(plain);
    }
}

/// <summary>Stage id → stage file stem and music. In the original this is the 8-byte table at
/// 0x02092D08 in arm9.bin ({char* name, s16 music for FUN_020734E0 at +4, s16 music for FUN_0207361C at +6};
/// Battle_Add 0x0214CD20, FUN_0214D9C8, BattleMapInit, BattleMapBG_Create). The names are not in any
/// NitroFS file (all stages use resource group 0x40), so the table cannot be derived from port/Data; it
/// has to be supplied (see <see cref="Ov06Arm9StageTable"/>).</summary>
public interface IOv06StageTable
{
    /// <summary>The stem (e.g. the part between "stage/" and ".bin"), or null when unknown.</summary>
    string? Name(int stage);
    /// <summary>The music ids at +4 and +6, or null.</summary>
    (int Prepare, int Play)? Music(int stage);
}

/// <summary>Reads the stage table out of an arm9.bin image supplied at run time (e.g. by a host that has
/// the ROM). Nothing is copied into the source: the bytes come from the caller.</summary>
/// <summary>The stage table from the exported JUS tables (<see cref="JusTables.Stages"/>, 0x02092D08).</summary>
public sealed class Ov06JusTablesStageTable(JusTables tables) : IOv06StageTable
{
    public string? Name(int stage) => (uint)stage < (uint)tables.Stages.Length ? tables.Stages[stage].Name : null;
    public (int Prepare, int Play)? Music(int stage)
        => (uint)stage < (uint)tables.Stages.Length ? (tables.Stages[stage].Music, tables.Stages[stage].Seq) : null;
}

public sealed class Ov06Arm9StageTable(byte[] arm9) : IOv06StageTable
{
    private const int Base = 0x02000000, Table = 0x02092D08;

    private int? Entry(int stage)
    {
        int o = Table - Base + stage * 8;
        if (stage < 0 || o + 8 > arm9.Length) return null;
        uint p = BinaryPrimitives.ReadUInt32LittleEndian(arm9.AsSpan(o));
        return p >= Base && p - Base < arm9.Length ? o : null;
    }

    public string? Name(int stage)
    {
        if (Entry(stage) is not { } o) return null;
        int s = (int)(BinaryPrimitives.ReadUInt32LittleEndian(arm9.AsSpan(o)) - Base);
        int e = Array.IndexOf(arm9, (byte)0, s);
        return e > s ? System.Text.Encoding.ASCII.GetString(arm9, s, e - s) : null;
    }

    public (int Prepare, int Play)? Music(int stage) => Entry(stage) is { } o
        ? (BinaryPrimitives.ReadInt16LittleEndian(arm9.AsSpan(o + 4)), BinaryPrimitives.ReadInt16LittleEndian(arm9.AsSpan(o + 6)))
        : null;
}

/// <summary>Finds a character's archives. CharaData's FUN_02074728 mounts "chr/" + name (inside
/// chr/ChrArc.aar) and "chr/" + name + "c.aar" (in NitroFS); the type's variant adds the suffix
/// 0x0209F198[type] ("_4" for type 3 … "_8" for type 7, i.e. "_" + (type + 1)). The name comes from the
/// arm9 table 0x020924B0; here it is found from data instead: the nested archive in ChrArc.aar whose first
/// resource id (ALAR v2 header +8) is the character's base.</summary>
public static class Ov06CharaArchives
{
    /// <summary>The ChrArc.aar entry name of the archive whose first resource id is <paramref name="baseId"/>
    /// (only the first 12 bytes of each nested archive are decompressed).</summary>
    public static string? FindByBase(IAssetSource assets, int baseId)
    {
        var raw = Dscp.Unpack(assets.Read("chr/ChrArc.aar"));
        var arc = new AlarArchive(raw);
        foreach (var e in arc.Entries)
        {
            if (!e.Name.EndsWith(".aar", StringComparison.Ordinal)) continue;
            var head = Head(raw.AsSpan(e.Offset, e.Size), 12);
            if (head.Length >= 12 && BinaryPrimitives.ReadUInt32LittleEndian(head) == 0x52414C41 && head[4] == 2
                && BinaryPrimitives.ReadInt32LittleEndian(head.AsSpan(8)) == baseId)
                return e.Name;
        }
        return null;
    }

    /// <summary>The first <paramref name="n"/> bytes of a DSCP (LZ77 type 0x10) or plain entry.</summary>
    private static byte[] Head(ReadOnlySpan<byte> src, int n)
    {
        if (!(src.Length >= 8 && src[0] == 'D' && src[1] == 'S' && src[2] == 'C' && src[3] == 'P')) return src[..Math.Min(n, src.Length)].ToArray();
        src = src[4..];
        int size = Math.Min(n, src[1] | src[2] << 8 | src[3] << 16), o = 4, k = 0;
        var dst = new byte[size];
        while (k < size)
        {
            byte flags = src[o++];
            for (int bit = 0; bit < 8 && k < size; bit++)
            {
                if ((flags & (0x80 >> bit)) == 0) { dst[k++] = src[o++]; continue; }
                int b1 = src[o++], b2 = src[o++];
                int len = (b1 >> 4) + 3, disp = ((b1 & 0xF) << 8 | b2) + 1;
                for (int i = 0; i < len && k < size; i++, k++) dst[k] = dst[k - disp];
            }
        }
        return dst;
    }
}
