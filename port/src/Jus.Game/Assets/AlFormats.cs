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

/// <summary>"DSIG" image (.dig): +5 format (0x10 = 4bpp, 0x11 = 8bpp), +6 palette count (in
/// 16-colour units), +8 width, +0xA height (pixels), +0xC palettes (BGR555), then 8x8 tiles.</summary>
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
        if (Format is not (0x10 or 0x11)) throw new NotSupportedException($"DSIG format 0x{Format:X2}");
        int pals = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(6));
        Width = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(8));
        Height = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(10));
        Palette555 = new ushort[pals * 16];
        for (int i = 0; i < Palette555.Length; i++)
            Palette555[i] = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(12 + 2 * i));
        Palette = new uint[Palette555.Length];
        Refresh();
        Tiles = data.AsSpan(12 + pals * 32).ToArray();
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

    /// <summary>Colour index of pixel (x, y) of tile <paramref name="tile"/>.</summary>
    public int Pixel(int tile, int x, int y)
    {
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
