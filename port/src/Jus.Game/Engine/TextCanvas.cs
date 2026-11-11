using Jus.Game.Assets;

namespace Jus.Game.Engine;

/// <summary>
/// Native ALTextDS (ov12, vtable 0x021D4A2C): a 4bpp text bitmap that Shift-JIS strings are printed into
/// with an <see cref="AlftFont"/>, then drawn with one of the font image's palettes.
///
/// From the engine:
/// - Size (vfunc_34/35/36): width and height are rounded up to multiples of 8.
/// - Alignment (vfunc_33, +0xF8): 0 left, 1 right, 2 centre. Print (vfunc_26, 0x021C69F4) applies it once,
///   before the first character, from the width of the first line (vfunc_37): x = width − line (right) or
///   (width − line) / 2 (centre, unsigned), y unchanged.
/// - Print walks the string: lead bytes 0x80–0x9F / 0xE0–0xFF take two bytes (code = b0 &lt;&lt; 8 | b1);
///   '\n' (vfunc_29, 0x021C6B04) sets x = 0 and moves y down by the cell height; anything else goes to
///   <see cref="Put"/>.
/// - Put (vfunc_25, 0x021C8B18): ' ' advances half a cell, 0x8140 (ideographic space) a full cell; any other
///   code copies the glyph's whole cell to the cursor and advances a full cell, or half a cell for
///   half-width glyphs (font flag 4 only). Each 8x8 tile it touches takes the current palette index
///   (SetFontPaletteIndex, +0x174 / the tile map at +0x194).
/// - Clear (vfunc_28): cursor to (0, 0), bitmap cleared.
///
/// Drawing: colour 0 is empty. In the engine's default mode (+0x172 = 0) a copied glyph's colour 0 is
/// written as colour 1; no glyph in the ROM's fonts uses colour 1 itself, so 1 is treated as empty too
/// (inferred: the palettes' entry 1 is a strong red or blue that would otherwise box every glyph; to check
/// in melonDS).
/// </summary>
public sealed class TextCanvas
{
    private readonly byte[] _pixels;
    private readonly byte[] _tilePalette;

    public AlftFont Font { get; set; }
    public int Width { get; }
    public int Height { get; }
    public int Alignment { get; set; }
    public int PaletteIndex { get; set; }
    public int CursorX { get; set; }
    public int CursorY { get; set; }

    public TextCanvas(AlftFont font, int width, int height)
    {
        Font = font;
        Width = (width + 7) & ~7;
        Height = (height + 7) & ~7;
        _pixels = new byte[Width * Height];
        _tilePalette = new byte[(Width / 8) * (Height / 8)];
    }

    public int PixelAt(int x, int y) => x < 0 || y < 0 || x >= Width || y >= Height ? 0 : _pixels[y * Width + x];
    public int PaletteAt(int x, int y) => _tilePalette[(y >> 3) * (Width >> 3) + (x >> 3)];

    public void Clear()
    {
        CursorX = CursorY = 0;
        Array.Clear(_pixels);
    }

    public void Print(string text) => Print(ShiftJis.Encode(text));

    public void Print(ReadOnlySpan<byte> text)
    {
        if (Alignment == 1) CursorX = Width - Font.MeasureLine(text);
        else if (Alignment == 2) CursorX = (int)((uint)(Width - Font.MeasureLine(text)) >> 1);
        for (int i = 0; i < text.Length && text[i] != 0;)
        {
            byte b = text[i];
            if (ShiftJis.IsLead(b))
            {
                Put(b << 8 | (i + 1 < text.Length ? text[i + 1] : 0));
                i += 2;
            }
            else
            {
                if (b == 10) NewLine();
                else Put(b);
                i++;
            }
        }
    }

    public void NewLine()
    {
        CursorX = 0;
        CursorY += Font.CellHeight;
    }

    public void Put(int code)
    {
        int w = Font.CellWidth, h = Font.CellHeight;
        if (code == 0x20) { CursorX += w >> 1; return; }
        if (code == 0x8140) { CursorX += w; return; }
        int glyph = Font.GlyphIndex(code);
        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++)
            {
                int px = CursorX + x, py = CursorY + y;
                if (px < 0 || py < 0 || px >= Width || py >= Height) continue;
                int c = Font.GlyphPixel(glyph, x, y);
                _pixels[py * Width + px] = (byte)(c == 0 ? 1 : c);
            }
        for (int ty = Math.Max(0, CursorY) >> 3; ty < Math.Min(Height, CursorY + h + 7) >> 3; ty++)
            for (int tx = Math.Max(0, CursorX) >> 3; tx < Math.Min(Width, CursorX + w + 7) >> 3; tx++)
                _tilePalette[ty * (Width >> 3) + tx] = (byte)PaletteIndex;
        CursorX += Font.IsHalfWidth(code) ? w >> 1 : w;
    }

    /// <summary>Draw the bitmap with its top-left corner at (x, y).</summary>
    public void Draw(IScreen screen, int x, int y, double alpha = 1.0)
    {
        var px = screen.Pixels;
        var pal = Font.Image.Palette;
        int a = (int)Math.Round(Math.Clamp(alpha, 0, 1) * 256);
        for (int ty = 0; ty < Height; ty++)
        {
            int dy = y + ty;
            if (dy < 0 || dy >= IScreen.Height) continue;
            for (int tx = 0; tx < Width; tx++)
            {
                int dx = x + tx;
                if (dx < 0 || dx >= IScreen.Width) continue;
                int c = _pixels[ty * Width + tx];
                if (c <= 1) continue;
                int index = PaletteAt(tx, ty) * 16 + c;
                if (index >= pal.Length) continue;
                ref uint dst = ref px[dy * IScreen.Width + dx];
                dst = a >= 256 ? pal[index] : Blend(pal[index], dst, a);
            }
        }
    }

    private static uint Blend(uint src, uint dst, int a)
    {
        uint Ch(int shift) => (uint)((((src >> shift) & 0xFF) * a + ((dst >> shift) & 0xFF) * (256 - a)) >> 8);
        return 0xFF000000 | Ch(16) << 16 | Ch(8) << 8 | Ch(0);
    }
}

/// <summary>A text widget: a <see cref="TextCanvas"/> drawn with its top-left corner at the widget's
/// position (the anchor is inferred; the engine draws the bitmap as a node in the widget tree).</summary>
public sealed class TextWidget(TextCanvas canvas) : Widget
{
    public TextCanvas Canvas => canvas;

    public override void Draw(IScreen screen)
    {
        var (x, y) = WorldPosition;
        canvas.Draw(screen, x >> 12, y >> 12, Alpha / 4096.0);
    }
}
