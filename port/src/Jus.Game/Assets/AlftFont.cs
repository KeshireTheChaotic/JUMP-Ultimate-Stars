using System.Buffers.Binary;

namespace Jus.Game.Assets;

/// <summary>
/// An "ALFT" font file (font/*.aft), as read by ALFont::Create (ov12 0x021CB140) and its classes.
///
/// Layout:
///   +0 "ALFT", +5 flags (bit 1 = glyphs cached on demand, class ALFont_021d4f60; else fixed bounds,
///   ALFont_021d4fb8; bit 2 = count the half-width glyphs, FUN_021CACE4), +8 u8 cell width, +9 u8 cell
///   height, +0xA u8 columns (glyphs per image row), +0xC u16 range count N, +0xE N × {u16 first, u16 last,
///   u16 glyph index} (Shift-JIS codes; ALFont_021d4ed0), then the glyph image at 0xE + 6N, rounded up to a
///   multiple of 4 (a DSIG, e.g. format 0x20 linear 4bpp, 512 px wide, 14 colour palettes).
///
/// Lookup (ALFont_021d4ed0::vfunc_04): the first range with first ≤ code ≤ last gives index − first + code;
/// no range gives glyph 0. Later ranges that repeat an earlier code (the files pad with many 0x8145
/// entries) are never reached. Glyph i sits at ((i mod W/w)·w, (i div W/w)·h) in the image
/// (ALFont_021d4f60::vfunc_07, the path without half-width glyphs).
///
/// font/DSFont.aft (flags 1, fixed bounds) holds a Windows BMP instead of a DSIG and is not supported.
/// </summary>
public sealed class AlftFont
{
    public int Flags { get; }
    public int CellWidth { get; }
    public int CellHeight { get; }
    public int Columns { get; }
    public IReadOnlyList<(int First, int Last, int Index)> Ranges { get; }
    public DsigImage Image { get; }
    /// <summary>+0x10 of the character map: the glyphs in the leading ranges below 0x100, counted only with flag 4.</summary>
    public int HalfWidthCount { get; }

    public AlftFont(byte[] data)
    {
        if (data.Length < 0x10 || BinaryPrimitives.ReadUInt32LittleEndian(data) != 0x54464C41) throw new InvalidDataException("not ALFT");
        Flags = data[5];
        CellWidth = data[8];
        CellHeight = data[9];
        Columns = data[10];
        int n = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(0xC));
        var ranges = new (int, int, int)[n];
        for (int i = 0; i < n; i++)
        {
            var s = data.AsSpan(0xE + 6 * i);
            ranges[i] = (BinaryPrimitives.ReadUInt16LittleEndian(s), BinaryPrimitives.ReadUInt16LittleEndian(s[2..]), BinaryPrimitives.ReadUInt16LittleEndian(s[4..]));
        }
        Ranges = ranges;
        int img = 0xE + 6 * n;
        if ((img & 3) == 2) img += 2;
        if (BinaryPrimitives.ReadUInt32LittleEndian(data.AsSpan(img)) != 0x47495344)
            throw new NotSupportedException("ALFT glyph image is not a DSIG");
        Image = new DsigImage(data[img..]);
        if ((Flags & 4) != 0)
            foreach (var (first, last, _) in ranges)
            {
                if (first > 0xFF) break;
                HalfWidthCount += last - first + 1;
            }
    }

    public static AlftFont Load(IAssetSource assets, string path) => new(assets.Read(path));

    /// <summary>ALFont_021d4ed0::vfunc_04: glyph index of a character code (0 when no range has it).</summary>
    public int GlyphIndex(int code)
    {
        foreach (var (first, last, index) in Ranges)
            if (first <= code && code <= last) return index + code - first;
        return 0;
    }

    /// <summary>ALFont_021d4ed0::vfunc_05: drawn at half the cell width.</summary>
    public bool IsHalfWidth(int code) => HalfWidthCount != 0 && HalfWidthCount != Ranges.Count && code < 0x100;

    /// <summary>Top-left corner of glyph <paramref name="index"/> in <see cref="Image"/>.</summary>
    public (int X, int Y) GlyphOrigin(int index)
    {
        int cols = Image.Width / CellWidth;
        return (index % cols * CellWidth, index / cols * CellHeight);
    }

    /// <summary>Colour index (0..15) of glyph pixel (x, y).</summary>
    public int GlyphPixel(int index, int x, int y)
    {
        var (gx, gy) = GlyphOrigin(index);
        return Image.PixelAt(gx + x, gy + y);
    }

    /// <summary>FUN_021CB4E8 / ALTextDS vfunc_37: the width of the first line of a Shift-JIS string —
    /// two-byte characters count a full cell, single bytes half a cell, ending at NUL or '\n'.</summary>
    public int MeasureLine(ReadOnlySpan<byte> text)
    {
        int w = 0;
        for (int i = 0; i < text.Length && text[i] != 0;)
        {
            byte b = text[i];
            if (ShiftJis.IsLead(b)) { w += CellWidth; i += 2; }
            else if (b == 10) break;
            else { w += CellWidth >> 1; i++; }
        }
        return w;
    }
}

/// <summary>Shift-JIS helpers: the engine treats 0x80–0x9F and 0xE0–0xFF as lead bytes.</summary>
public static class ShiftJis
{
    public static bool IsLead(byte b) => b is >= 0x80 and <= 0x9F or >= 0xE0;

    private static readonly System.Text.Encoding Encoding = CreateEncoding();

    private static System.Text.Encoding CreateEncoding()
    {
        System.Text.Encoding.RegisterProvider(System.Text.CodePagesEncodingProvider.Instance);
        return System.Text.Encoding.GetEncoding(932);
    }

    public static byte[] Encode(string s) => Encoding.GetBytes(s);
    public static string Decode(ReadOnlySpan<byte> b)
    {
        int n = b.IndexOf((byte)0);
        return Encoding.GetString(n < 0 ? b : b[..n]);
    }
}
