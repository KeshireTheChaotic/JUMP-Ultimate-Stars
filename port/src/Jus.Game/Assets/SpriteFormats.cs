using System.Buffers.Binary;

namespace Jus.Game.Assets;

/// <summary>One OBJ piece of a sprite cell: first tile (1D mapping), offset from the actor's
/// origin, DS OBJ size code (see <see cref="DstxBank.Sizes"/>) and 16-colour palette.</summary>
public readonly record struct SpritePart(int Tile, int X, int Y, int Size, int Palette);

/// <summary>A block cell of a DSTX type 4–6 bank: <see cref="Width"/> x <see cref="Height"/> 8x8 tiles,
/// row-major, starting at tile <see cref="FirstTile"/> of the texture (jus_TagBBDS, 4 bytes per cell).</summary>
public readonly record struct DstxBlock(int FirstTile, int Width, int Height);

/// <summary>"DSTX" sprite bank (kind '@' in v2 archives; handler table 0x020942C8, create 0x020433EC):
/// +4 version, +5 type, +6 u16 cell count, +8 u16 offset of the embedded DSIG texture, +0xA cells.
/// <para>Type 3 (OBJ sprites): +0xA u16 cell offsets (relative to +0xA); a cell is u16 part count followed
/// by 6-byte parts {u16 tile, s8 x, s8 y, u8 size code, u8 palette}. Bit 0x80 (type 0x83) = the texture
/// is referenced through a pointer instead of embedded (not ported).</para>
/// <para>Types 4–6 (texture blocks; 4 = the koma card images): +0xA one {u16 first tile, u8 width,
/// u8 height} per cell, in tiles (FUN_02044DFC → jus_TagBBDS). Types 5/6 append more data after the cells
/// (a table of (count + 1) u32 + 8 bytes; type 6 marks it with 2), not read. Checked over the whole ROM:
/// 947 of 948 type 4–6 banks fit (the exception is deckmake/list02.dtx, type 6). Where the engine places
/// a block relative to the actor is not read yet. Types 0–2 create nothing.</para></summary>
public sealed class DstxBank
{
    /// <summary>DS OBJ sizes by code: square 8/16/32/64, wide 16x8/32x8/32x16/64x32, tall 8x16/8x32/16x32/32x64.</summary>
    public static readonly (int W, int H)[] Sizes =
    [
        (8, 8), (16, 16), (32, 32), (64, 64), (16, 8), (32, 8), (32, 16), (64, 32), (8, 16), (8, 32), (16, 32), (32, 64),
    ];

    public int Type { get; }
    /// <summary>OBJ cells (type 3); empty for block banks.</summary>
    public IReadOnlyList<SpritePart[]> Cells { get; }
    /// <summary>Block cells (types 4–6); empty for OBJ banks.</summary>
    public IReadOnlyList<DstxBlock> Blocks { get; } = [];
    public DsigImage Texture { get; }

    /// <summary>+4 version: 1 = OBJ-style banks; 2 = 3D sprite banks (jus_TagSPD3), whose cells end with
    /// four s16 bounds (culling) after the parts.</summary>
    public int Version { get; }
    /// <summary>For type 0x83: the resource id of the texture (the u32 at the +8 offset).</summary>
    public int TextureId { get; } = -1;

    /// <param name="textureById">Resolves a texture resource id to DSIG bytes; required for type 0x83
    /// banks, whose texture is referenced instead of embedded (create 0x020433EC → FUN_020165dc).</param>
    public DstxBank(byte[] data, Func<int, byte[]>? textureById = null)
    {
        if (BinaryPrimitives.ReadUInt32LittleEndian(data) != 0x58545344) throw new InvalidDataException("not DSTX");
        Version = data[4];
        Type = data[5];
        int count = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(6));
        int tex = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(8));
        if (Type == 0x83)
        {
            TextureId = BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(tex));
            if (textureById is null) throw new NotSupportedException($"DSTX type 0x83 needs its texture 0x{TextureId:X6}");
            Texture = new DsigImage(textureById(TextureId));
            Cells = ReadCells(data, count);
            return;
        }
        if (Type is 4 or 5 or 6)
        {
            var blocks = new DstxBlock[count];
            var blockCells = new List<SpritePart[]>(count);
            for (int c = 0; c < count; c++)
            {
                int entry = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(0xA + 4 * c));
                blocks[c] = new(entry & 0x3FF, data[0xC + 4 * c], data[0xD + 4 * c]);
                blockCells.Add(BlockParts(entry, data[0xC + 4 * c], data[0xD + 4 * c]));
            }
            Blocks = blocks;
            Cells = blockCells;
            int extra = 12 + 4 * count;
            if (Type != 4 && tex > extra)
            {
                // types 5/6: a tile map. One u16 offset per block (from the map start), then one entry per
                // tile, row by row: type 5 = u8 tile number, type 6 = u16 BG-style entry.
                ExtraData = data.AsSpan(extra, tex - extra).ToArray();
                int size = Type == 6 ? 2 : 1;
                for (int c = 0; c < count; c++)
                {
                    int o = extra + BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(extra + 2 * c));
                    int baseEntry = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(0xA + 4 * c));
                    int w = blocks[c].Width, h = blocks[c].Height;
                    if (o + w * h * size > tex) continue;                      // keep the plain block
                    var parts = new SpritePart[w * h];
                    for (int i = 0; i < parts.Length; i++)
                    {
                        int entry = size == 2 ? BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o + 2 * i)) : (baseEntry & ~0x3FF) | ((baseEntry + data[o + i]) & 0x3FF);
                        parts[i] = new SpritePart(entry & 0x3FF, i % w * 8, i / w * 8, ((entry >> 10) & 3) << 4, entry >> 12);
                    }
                    blockCells[c] = parts;
                }
            }
            Texture = new DsigImage(data.AsSpan(tex).ToArray());
            return;
        }
        if (Type != 3) throw new NotSupportedException($"DSTX type 0x{Type:X2}");
        Cells = ReadCells(data, count);
        Texture = new DsigImage(data.AsSpan(tex).ToArray());
    }

    /// <summary>Types 5/6: the tile map between the block table and the texture (FUN_020433EC keeps a
    /// pointer and length; type 6 marks it with 2 = bytes per entry).</summary>
    public byte[] ExtraData { get; } = [];

    /// <summary>FUN_02043C7C: a block as OBJ parts. The block's u16 is a BG-style entry (tile bits 0–9,
    /// h-flip 10, v-flip 11, palette 12–15); its top-left is the actor's origin; each 8 px row is cut
    /// greedily into 32x8 (size 5), 16x8 (size 4) and 8x8 (size 0) parts with consecutive tiles.</summary>
    public static SpritePart[] BlockParts(int entry, int width, int height)
    {
        var parts = new List<SpritePart>();
        int tile = entry & 0x3FF, flip = ((entry >> 10) & 3) << 4, palette = entry >> 12;
        for (int row = 0; row < height; row++)
            for (int x = 0, left = width; left > 0;)
            {
                int step = left >= 4 ? 4 : left >= 2 ? 2 : 1;
                parts.Add(new SpritePart(tile, x * 8, row * 8, flip | (step == 4 ? 5 : step == 2 ? 4 : 0), palette));
                tile += step; x += step; left -= step;
            }
        return parts.ToArray();
    }

    private static List<SpritePart[]> ReadCells(byte[] data, int count)
    {
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
        return cells;
    }
}

/// <summary>One motion of an "ALMT" set: keyed values of the "BoundsIndex" track (the cell to show),
/// in 1/60 s frames. <paramref name="Loop"/> is the motion's flag bit 0 (record +7); playback of
/// looping motions is not ported yet (no translated scene has a keyed looping motion).</summary>
public sealed record SpriteMotion(int Id, int Length, IReadOnlyList<(int Frame, int Value)> Keys, bool Loop = false)
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

/// <summary>
/// "ALMT" motion set (kind 'A'): +4 version, +6 target count, +7 motion count, +0xC target class
/// ("SP01" = sprite), +0x10 u32 motion offsets. Layout read from the engine's motion binder
/// jus_Class_0209cac0::vfunc_53 (0x0201F11C) and its helpers 0x0201F6BC / 0x0201F6F4; the engine's
/// record pointer is 0x20 bytes before the offsets used here.
/// <para>A motion at o: +0 u32 id (index | group &lt;&lt; 16), +4 u16 length, +6 u8 rate (60), +7 flags
/// (bit 0 = loop), +8 one u16 track-block offset per target, relative to o − 0x20 (cumulative from
/// version 2 on).</para>
/// <para>A track block B: B[0] constant-track count C, B[1] keyed-track count K, then one property
/// index byte per track (constant tracks first; on a keyed track bit 0x80 = an interpolator id is
/// stored as the u16 just before its keys), padding to an even offset, then one s16 offset per track
/// (relative to B, bit 0 cleared). A constant track points at its value; a keyed track at
/// [u16 frame][(size + 1) / 2 halfwords] keys, ended by frame 0xFFFF. For the SP01 class property 0
/// is BoundsIndex (16-bit, the cell) and 1 is TextureID (32-bit).</para>
/// </summary>
public sealed class AlmtMotionSet
{
    public const int BoundsIndex = 0, TextureId = 1;

    public IReadOnlyList<SpriteMotion> Motions { get; }
    /// <summary>The target classes (e.g. "SP01"); motions here are read for target 0.</summary>
    public IReadOnlyList<string> TargetClasses { get; }

    /// <summary>The raw file, for readers of other tracks (e.g. the battle NoteTrack).</summary>
    public byte[] Data { get; }
    public int Version { get; }
    /// <summary>Property names (+8 count; u16 offsets at 0xC + 4·targets + 4·motions; FUN_02020514), e.g.
    /// "BoundsIndex", "TextureID", "CollisionRect0", "NoteTrack". Track property indices index this list.</summary>
    public IReadOnlyList<string> PropertyNames { get; }

    public AlmtMotionSet(byte[] data)
    {
        if (BinaryPrimitives.ReadUInt32LittleEndian(data) != 0x544D4C41) throw new InvalidDataException("not ALMT");
        Data = data;
        Version = data[4];
        int targets = Math.Max(1, (int)data[6]), count = data[7];
        int names = 0xC + 4 * targets + 4 * count;
        PropertyNames = Enumerable.Range(0, data[8]).Select(i =>
        {
            int o = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(names + 2 * i));
            int e = Array.IndexOf(data, (byte)0, o);
            return o < data.Length && e > o ? System.Text.Encoding.ASCII.GetString(data, o, e - o) : "";
        }).ToArray();
        TargetClasses = Enumerable.Range(0, targets).Select(t => System.Text.Encoding.ASCII.GetString(data, 0xC + 4 * t, 4)).ToArray();
        int table = 0xC + 4 * targets;               // one 4-character target class per target, then the offsets
        var list = new List<SpriteMotion>(count);
        for (int i = 0; i < count; i++)
        {
            int o = BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(table + 4 * i));
            int id = BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(o));
            int length = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o + 4));
            bool loop = (data[o + 7] & 1) != 0;
            int b = o - 0x20 + BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o + 8));   // target 0
            var keys = new List<(int, int)>();
            foreach (var t in Tracks(data, b))
            {
                if (t.Property != BoundsIndex) continue;
                if (!t.Keyed)
                {
                    keys.Add((0, BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(t.Offset))));
                    continue;
                }
                for (int p = t.Offset; ; p += 4)
                {
                    int f = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(p));
                    if (f == 0xFFFF) break;
                    keys.Add((f, BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(p + 2))));
                }
            }
            if (keys.Count == 0 || keys[0].Item1 != 0) keys.Insert(0, (0, 0));
            list.Add(new SpriteMotion(id, length, keys, loop));
        }
        Motions = list;
    }

    /// <summary>One track of a block: property index, keyed or constant, absolute offset of its value or
    /// keys, and the interpolator id (0 = none: the property's default, step for BoundsIndex).</summary>
    public readonly record struct Track(int Property, bool Keyed, int Offset, int Interpolator);

    /// <summary>The tracks of the block at <paramref name="b"/> (FUN_0201F6BC / FUN_0201F6F4).</summary>
    public static List<Track> Tracks(byte[] data, int b)
    {
        int c = data[b], k = data[b + 1], n = c + k;
        int table = b + 2 + n + (n & 1);
        var list = new List<Track>(n);
        for (int j = 0; j < n; j++)
        {
            int prop = data[b + 2 + j];
            int at = b + (BinaryPrimitives.ReadInt16LittleEndian(data.AsSpan(table + 2 * j)) & ~1);
            bool keyed = j >= c;
            int interp = keyed && (prop & 0x80) != 0 ? BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(at - 2)) : 0;
            list.Add(new Track(keyed ? prop & 0x7F : prop, keyed, at, interp));
        }
        return list;
    }

    /// <summary>Index of a property name, or −1.</summary>
    public int PropertyIndex(string name) => PropertyNames.ToList().IndexOf(name);

    /// <summary>Every track of a motion with its target index; track blocks are one u16 per target at
    /// record +8, relative to o − 0x20, cumulative from version 2 on (a 0 entry = no block).</summary>
    public List<(int Target, Track Track)> MotionTracks(int id)
    {
        int targets = TargetClasses.Count, table = 0xC + 4 * targets;
        int index = Motions.ToList().FindIndex(m => m.Id == id);
        if (index < 0) throw new KeyNotFoundException($"motion 0x{id:X6}");
        int o = BinaryPrimitives.ReadInt32LittleEndian(Data.AsSpan(table + 4 * index));
        var list = new List<(int, Track)>();
        int cum = 0;
        for (int t = 0; t < targets; t++)
        {
            int rel = BinaryPrimitives.ReadUInt16LittleEndian(Data.AsSpan(o + 8 + 2 * t));
            cum += rel;
            if (rel == 0) continue;
            int b = o - 0x20 + (Version >= 2 ? cum : rel);
            foreach (var tr in Tracks(Data, b)) list.Add((t, tr));
        }
        return list;
    }

    public SpriteMotion Get(int id) => Motions.FirstOrDefault(m => m.Id == id)
        ?? throw new KeyNotFoundException($"motion 0x{id:X6}");
}
