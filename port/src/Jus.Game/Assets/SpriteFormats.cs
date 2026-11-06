using System.Buffers.Binary;

namespace Jus.Game.Assets;

/// <summary>One OBJ piece of a sprite cell: first tile (1D mapping), offset from the actor's
/// origin, DS OBJ size code (see <see cref="DstxBank.Sizes"/>) and 16-colour palette.</summary>
public readonly record struct SpritePart(int Tile, int X, int Y, int Size, int Palette);

/// <summary>"DSTX" sprite bank (kind '@' in v2 archives; handler table 0x020942C8, create 0x020433EC):
/// +4 version, +5 type (3 = embedded texture), +6 u16 cell count, +8 u16 offset of the embedded
/// DSIG texture, +0xA u16 cell offsets (relative to +0xA); a cell is u16 part count followed by
/// 6-byte parts {u16 tile, s8 x, s8 y, u8 size code, u8 palette}.</summary>
public sealed class DstxBank
{
    /// <summary>DS OBJ sizes by code: square 8/16/32/64, wide 16x8/32x8/32x16/64x32, tall 8x16/8x32/16x32/32x64.</summary>
    public static readonly (int W, int H)[] Sizes =
    [
        (8, 8), (16, 16), (32, 32), (64, 64), (16, 8), (32, 8), (32, 16), (64, 32), (8, 16), (8, 32), (16, 32), (32, 64),
    ];

    public IReadOnlyList<SpritePart[]> Cells { get; }
    public DsigImage Texture { get; }

    public DstxBank(byte[] data)
    {
        if (BinaryPrimitives.ReadUInt32LittleEndian(data) != 0x58545344) throw new InvalidDataException("not DSTX");
        if ((data[5] & 0x7F) != 3 || (data[5] & 0x80) != 0) throw new NotSupportedException($"DSTX type 0x{data[5]:X2}");
        int count = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(6));
        int tex = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(8));
        var cells = new List<SpritePart[]>(count);
        for (int c = 0; c < count; c++)
        {
            int o = 10 + BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(10 + 2 * c));
            int n = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o));
            var parts = new SpritePart[n];
            for (int k = 0; k < n; k++)
            {
                int p = o + 2 + 6 * k;
                parts[k] = new(BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(p)), (sbyte)data[p + 2], (sbyte)data[p + 3], data[p + 4], data[p + 5]);
            }
            cells.Add(parts);
        }
        Cells = cells;
        Texture = new DsigImage(data.AsSpan(tex).ToArray());
    }
}

/// <summary>One motion of an "ALMT" set: keyed values of the "BoundsIndex" track (the cell to show),
/// in 1/60 s frames.</summary>
public sealed record SpriteMotion(int Id, int Length, IReadOnlyList<(int Frame, int Value)> Keys)
{
    /// <summary>Value at <paramref name="frame"/> (step interpolation: the last key at or before it).</summary>
    public int ValueAt(int frame)
    {
        int v = Keys.Count > 0 ? Keys[0].Value : 0;
        foreach (var (f, val) in Keys)
        {
            if (f > frame) break;
            v = val;
        }
        return v;
    }
}

/// <summary>"ALMT" motion set (kind 'A'): +6 track count, +7 motion count, +0xC target class
/// ("SP01" = sprite), +0x10 u32 motion offsets. A motion: u16 index, u16 group (id = group &lt;&lt; 16 |
/// index), u16 length, u16 rate (60), u16, u8 constant-track count, u8 keyed-track count, u16,
/// one u16 type per track, then the constant values, or (u16 frame, u16 value) keys ending with frame
/// 0xFFFF for a keyed track. Layout inferred from the Title data (logo: one track "BoundsIndex";
/// effects: constant "TextureID" (u32) + "BoundsIndex"); keyed multi-track motions are not read yet.</summary>
public sealed class AlmtMotionSet
{
    public IReadOnlyList<SpriteMotion> Motions { get; }

    public AlmtMotionSet(byte[] data)
    {
        if (BinaryPrimitives.ReadUInt32LittleEndian(data) != 0x544D4C41) throw new InvalidDataException("not ALMT");
        int count = data[7];
        var list = new List<SpriteMotion>(count);
        for (int i = 0; i < count; i++)
        {
            int o = BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(0x10 + 4 * i));
            int id = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o + 2)) << 16 | BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o));
            int length = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o + 4));
            // +10 u8 constant-track count, +11 u8 keyed-track count, +12 u16, +14 one u16 type per
            // track (6/0xC: 16-bit value, 8: 32-bit resource id such as TextureID), then the values.
            int constants = data[o + 10], keyed = data[o + 11];
            int types = constants + keyed;
            int p = o + 14 + 2 * types;
            var keys = new List<(int, int)>();
            // constant values first (type 8: u32 resource id such as TextureID, otherwise u16)
            int cellConst = -1;
            for (int t = 0; t < constants; t++)
            {
                int type = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o + 14 + 2 * t));
                if (type == 8) { p += 4; continue; }
                if (cellConst < 0) cellConst = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(p));
                p += 2;
            }
            if (keyed == 0)
            {
                if (cellConst >= 0) keys.Add((0, cellConst));
            }
            else
            {
                // The keyed track's (frame, value) pairs follow the constants, either directly or after one
                // more u16 (seen in top_button00 motions 0-11). Which one is not known from the engine yet,
                // so the reading whose frames strictly increase is used (heuristic).
                if (keyed != 1) throw new NotSupportedException("ALMT motions with several keyed tracks are not read yet");
                keys = ReadKeys(data, p) ?? ReadKeys(data, p + 2)
                    ?? throw new InvalidDataException($"ALMT motion 0x{id:X6}: no consistent key list");
                if (keys.Count == 0 || keys[0].Item1 != 0) keys.Insert(0, (0, 0));
            }
            list.Add(new SpriteMotion(id, length, keys));
        }
        Motions = list;
    }

    /// <summary>(frame, value) pairs up to frame 0xFFFF, or null if the frames do not strictly increase.</summary>
    private static List<(int, int)>? ReadKeys(byte[] data, int p)
    {
        var keys = new List<(int, int)>();
        int last = -1;
        while (p + 2 <= data.Length)
        {
            int f = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(p));
            if (f == 0xFFFF) return keys;
            if (f <= last || p + 4 > data.Length) return null;
            keys.Add((f, BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(p + 2))));
            last = f;
            p += 4;
        }
        return null;
    }

    public SpriteMotion Get(int id) => Motions.FirstOrDefault(m => m.Id == id)
        ?? throw new KeyNotFoundException($"motion 0x{id:X6}");
}
