using System.Buffers.Binary;

namespace Jus.Game.Assets;

/// <summary>Nintendo LZ77 (type 0x10), as used inside the game's "DSCP" containers.</summary>
public static class Lz10
{
    public static byte[] Decompress(ReadOnlySpan<byte> src)
    {
        if (src.Length < 4 || src[0] != 0x10) throw new InvalidDataException("not LZ77 type 0x10");
        int size = src[1] | src[2] << 8 | src[3] << 16, o = 4, n = 0;
        var dst = new byte[size];
        while (n < size)
        {
            byte flags = src[o++];
            for (int bit = 0; bit < 8 && n < size; bit++)
            {
                if ((flags & (0x80 >> bit)) == 0) { dst[n++] = src[o++]; continue; }
                int b1 = src[o++], b2 = src[o++];
                int len = (b1 >> 4) + 3, disp = ((b1 & 0xF) << 8 | b2) + 1;
                for (int i = 0; i < len && n < size; i++, n++) dst[n] = dst[n - disp];
            }
        }
        return dst;
    }
}

/// <summary>"DSCP" + LZ77 data. Files without the magic are returned as they are.</summary>
public static class Dscp
{
    public static byte[] Unpack(byte[] file) =>
        file.Length >= 8 && file[0] == 'D' && file[1] == 'S' && file[2] == 'C' && file[3] == 'P'
            ? Lz10.Decompress(file.AsSpan(4))
            : file;
}

/// <summary>"DSIG" image (.dig): +5 format, +6 palette count (in 16-colour units), +8 width, +0xA
/// height (pixels), +0xC palettes (BGR555), then the pixels. Formats, by the engine's switch in
/// jus_Class_02094130::vfunc_07 (0x020394D0):
/// 0x10 jus_TagNCG1 4bpp 8x8 tiles; 0x11 jus_TagNG18 8bpp tiles with extended palettes;
/// 0x20 jus_TagPL4R linear 4bpp; 0x50 jus_TagLCP4 = LZ77-compressed linear 4bpp (decompressed with
/// FUN_020519C8, then uploaded like PL4R, FUN_02044774);
/// 0x30 jus_TagNFC4 (not in the ROM); 0x40 jus_TagFFL4 = 4bpp frames streamed from another file
/// through a u32 frame table (+8 = entry count; version 2 has one more u32 before it), used by the
/// battle characters (chr/*_4c.aar) — not ported.</summary>
public sealed class DsigImage
{
    public int Format { get; }
    public bool Is8Bpp => Format == 0x11;
    public int Width { get; }
    public int Height { get; }
    /// <summary>The palette as the game keeps it (BGR555); palette animations edit this.</summary>
    public ushort[] Palette555 { get; }
    /// <summary>The palette as BGRA, 16 entries per 4bpp palette (refreshed by <see cref="Refresh"/>).</summary>
    public uint[] Palette { get; }
    public byte[] Tiles { get; }
    public int PaletteCount => Palette.Length / 16;

    public DsigImage(byte[] data)
    {
        if (data.Length < 12 || BinaryPrimitives.ReadUInt32LittleEndian(data) != 0x47495344) throw new InvalidDataException("not DSIG");
        Format = data[5];
        // 0x20: 4bpp as well (0.5 bytes per pixel; used for the translucent Title effect sprites)
        if (Format is not (0x10 or 0x11 or 0x20 or 0x40 or 0x50)) throw new NotSupportedException($"DSIG format 0x{Format:X2}");
        int pals = data[6];                 // a byte: FFL4 files use +7 for something else (the engine reads +6 only)
        Width = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(8));
        Height = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(10));
        Palette555 = new ushort[pals * 16];
        for (int i = 0; i < Palette555.Length; i++)
            Palette555[i] = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(12 + 2 * i));
        Palette = new uint[Palette555.Length];
        Refresh();
        if (Format == 0x40)
        {
            // jus_TagFFL4: [version 2: u32] then a frame table {u16 count, u16} + count × {u16 offset/4,
            // u16 size} (offsets from the table start); each frame is LZ77 OBJ tile data (FUN_0203F440)
            _raw = data;
            _frameTable = 12 + pals * 32 + (data[4] == 1 ? 0 : 4);
            FrameCount = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(_frameTable));
            Tiles = [];
            return;
        }
        Tiles = Format == 0x50
            ? Lz10.Decompress(data.AsSpan(12 + pals * 32))
            : data.AsSpan(12 + pals * 32).ToArray();
    }

    private readonly byte[]? _raw;
    private readonly int _frameTable;
    private readonly Dictionary<int, byte[]> _frames = [];

    /// <summary>Format 0x40: frames of 4bpp OBJ tiles, chosen per cell by its first part's u16.</summary>
    public bool IsFrames => Format == 0x40;
    public int FrameCount { get; }

    /// <summary>Frame <paramref name="index"/> of a format-0x40 image (table entry index + 1), decompressed.</summary>
    public byte[] Frame(int index)
    {
        if (_raw is null || index < 0 || index >= FrameCount) return [];
        if (_frames.TryGetValue(index, out var f)) return f;
        int e = _frameTable + (index + 1) * 4;
        int off = _frameTable + BinaryPrimitives.ReadUInt16LittleEndian(_raw.AsSpan(e)) * 4;
        int size = BinaryPrimitives.ReadUInt16LittleEndian(_raw.AsSpan(e + 2));
        return _frames[index] = Lz10.Decompress(_raw.AsSpan(off, size));
    }

    public static DsigImage Load(IAssetSource assets, string path) => new(Dscp.Unpack(assets.Read(path)));
    public static DsigImage Load(ResourceManager res, string path) => new(res.Read(path));

    /// <summary>Re-convert <see cref="Palette555"/> after it was edited.</summary>
    public void Refresh()
    {
        for (int i = 0; i < Palette555.Length; i++) Palette[i] = Bgr555(Palette555[i]);
    }

    public static uint Bgr555(ushort c)
    {
        uint r = (uint)(c & 31), g = (uint)((c >> 5) & 31), b = (uint)((c >> 10) & 31);
        r = r << 3 | r >> 2; g = g << 3 | g >> 2; b = b << 3 | b >> 2;
        return 0xFF000000 | r << 16 | g << 8 | b;
    }

    /// <summary>Formats 0x20 and 0x50 (after decompression) are linear (texture-style) 4bpp bitmaps,
    /// row-major, not 8x8 tiles.</summary>
    public bool IsLinear => Format is 0x20 or 0x50;

    /// <summary>Colour index at bitmap position (x, y) of a linear 4bpp image (low nibble = even x).</summary>
    public int PixelAt(int x, int y)
    {
        if (x < 0 || y < 0 || x >= Width || y >= Height) return 0;
        int o = (y * Width + x) >> 1;
        return o < Tiles.Length ? (Tiles[o] >> ((x & 1) * 4)) & 0xF : 0;
    }

    /// <summary>Colour index at (x, y) when a linear texture is read as 4-colour (2bpp, GX format 2) at
    /// twice its 4bpp width, as 3D sprite parts with flag 0x40 do (low bits = leftmost pixel).</summary>
    public int PixelAt2Bpp(int x, int y)
    {
        int w2 = Width * 2;
        if (x < 0 || y < 0 || x >= w2 || y >= Height) return 0;
        int i = y * w2 + x;
        return (i >> 2) < Tiles.Length ? (Tiles[i >> 2] >> ((i & 3) * 2)) & 3 : 0;
    }

    /// <summary>Colour index of pixel (x, y) of tile <paramref name="tile"/>.</summary>
    public int Pixel(int tile, int x, int y)
    {
        if (IsLinear)
        {
            int cols = Width / 8;
            return PixelAt((tile % cols) * 8 + x, (tile / cols) * 8 + y);
        }
        if (Is8Bpp)
        {
            int p = tile * 64 + y * 8 + x;
            return p < Tiles.Length ? Tiles[p] : 0;
        }
        int o = tile * 32 + y * 4 + (x >> 1);
        return o < Tiles.Length ? (Tiles[o] >> ((x & 1) * 4)) & 0xF : 0;
    }
}

/// <summary>"ALTM" tile map (.atm): header 0x18 bytes (+0xC tile size, +0x10 width, +0x12 height
/// in tiles), then NDS BG screen entries (tile 0-9, h-flip 10, v-flip 11, palette 12-15).</summary>
public sealed class AltmMap
{
    public int Width { get; }
    public int Height { get; }
    public ushort[] Entries { get; }

    public AltmMap(byte[] data)
    {
        if (data.Length < 0x18 || BinaryPrimitives.ReadUInt32LittleEndian(data) != 0x4D544C41) throw new InvalidDataException("not ALTM");
        Width = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(0x10));
        Height = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(0x12));
        Entries = new ushort[Width * Height];
        for (int i = 0; i < Entries.Length; i++)
            Entries[i] = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(0x18 + 2 * i));
    }

    public static AltmMap Load(IAssetSource assets, string path) => new(Dscp.Unpack(assets.Read(path)));
    public static AltmMap Load(ResourceManager res, string path) => new(res.Read(path));
}

/// <summary>A tiled background: an ALTM map over a DSIG image, drawn natively into a screen.
/// Colour 0 is transparent (shows <see cref="Backdrop"/>), as on the DS.</summary>
public sealed class TileBackground(DsigImage image, AltmMap map)
{
    public DsigImage Image => image;
    public int ScrollX { get; set; }
    public int ScrollY { get; set; }
    public bool Visible { get; set; } = true;
    public uint Backdrop { get; set; } = 0xFF000000;

    /// <summary>Draw as a full-screen, wrapping layer; colour 0 shows <see cref="Backdrop"/>.</summary>
    public void Draw(IScreen screen) => Render(screen, wrap: true, opaque: true, 0, 0);

    /// <summary>Draw the map once with its top-left at (x, y); colour 0 leaves what is below.</summary>
    public void DrawAt(IScreen screen, int x, int y) => Render(screen, wrap: false, opaque: false, x, y);

    private void Render(IScreen screen, bool wrap, bool opaque, int ox, int oy)
    {
        if (!Visible) return;
        var px = screen.Pixels;
        int mapW = map.Width * 8, mapH = map.Height * 8;
        for (int y = 0; y < IScreen.Height; y++)
        {
            int sy = wrap ? ((y + ScrollY) % mapH + mapH) % mapH : y - oy;
            if (sy < 0 || sy >= mapH) continue;
            for (int x = 0; x < IScreen.Width; x++)
            {
                int sx = wrap ? ((x + ScrollX) % mapW + mapW) % mapW : x - ox;
                if (sx < 0 || sx >= mapW) continue;
                ushort e = map.Entries[(sy >> 3) * map.Width + (sx >> 3)];
                int tx = sx & 7, ty = sy & 7;
                if ((e & 0x400) != 0) tx = 7 - tx;
                if ((e & 0x800) != 0) ty = 7 - ty;
                int c = image.Pixel(e & 0x3FF, tx, ty);
                if (c == 0)
                {
                    if (opaque) px[y * IScreen.Width + x] = Backdrop;
                    continue;
                }
                // 8bpp maps use extended palettes (entry bits 12-15 pick a 256-colour bank);
                // 4bpp maps pick a 16-colour palette
                int index = image.Is8Bpp ? (e >> 12) * 256 + c : ((e >> 12) % Math.Max(1, image.PaletteCount)) * 16 + c;
                px[y * IScreen.Width + x] = index < image.Palette.Length ? image.Palette[index] : 0xFF000000;
            }
        }
    }
}
