using Jus.Game;

namespace Jus.Host;

/// <summary>A 256x192 screen backed by GDI DIB sections: the game writes pixels directly and
/// can draw debug text with the system font. Brightness is applied into a second DIB when the
/// window presents the screen.</summary>
internal sealed unsafe class GdiScreen : IScreen, IDisposable
{
    private readonly Dib _draw, _out;

    public GdiScreen(nint windowDc)
    {
        _draw = new Dib(windowDc);
        _out = new Dib(windowDc);
        Win32.SetBkMode(_draw.Dc, Win32.TRANSPARENT);
        Win32.SelectObject(_draw.Dc, Win32.GetStockObject(17 /* DEFAULT_GUI_FONT */));
    }

    public Span<uint> Pixels => _draw.Pixels;
    public int Brightness { get; set; }

    public void Clear(uint bgra) => Pixels.Fill(bgra);

    public void DrawText(int x, int y, string text, uint bgra = 0xFFFFFFFF)
    {
        uint colorref = ((bgra & 0xFF) << 16) | (bgra & 0xFF00) | ((bgra >> 16) & 0xFF);   // 0x00BBGGRR
        Win32.SetTextColor(_draw.Dc, colorref);
        Win32.TextOut(_draw.Dc, x, y, text, text.Length);
    }

    /// <summary>Device context holding the frame as it should appear (brightness applied).</summary>
    public nint PresentDc()
    {
        if (Brightness == 0) return _draw.Dc;
        var src = _draw.Pixels;
        var dst = _out.Pixels;
        for (int i = 0; i < src.Length; i++) dst[i] = Jus.Game.Brightness.Apply(src[i], Brightness);
        return _out.Dc;
    }

    /// <summary>The frame as presented (for snapshots).</summary>
    public ReadOnlySpan<uint> Presented
    {
        get { PresentDc(); return Brightness == 0 ? _draw.Pixels : _out.Pixels; }
    }

    public void Dispose()
    {
        _draw.Dispose();
        _out.Dispose();
    }

    private sealed class Dib : IDisposable
    {
        private readonly nint _bitmap, _old;
        private readonly uint* _bits;

        public Dib(nint windowDc)
        {
            var bmi = new Win32.BITMAPINFOHEADER
            {
                biSize = (uint)sizeof(Win32.BITMAPINFOHEADER),
                biWidth = IScreen.Width,
                biHeight = -IScreen.Height,     // top-down
                biPlanes = 1,
                biBitCount = 32,
            };
            Dc = Win32.CreateCompatibleDC(windowDc);
            _bitmap = Win32.CreateDIBSection(windowDc, bmi, Win32.DIB_RGB_COLORS, out var bits, 0, 0);
            if (Dc == 0 || _bitmap == 0) throw new InvalidOperationException("CreateDIBSection failed");
            _bits = (uint*)bits;
            _old = Win32.SelectObject(Dc, _bitmap);
        }

        public nint Dc { get; }
        public Span<uint> Pixels => new(_bits, IScreen.Width * IScreen.Height);

        public void Dispose()
        {
            Win32.SelectObject(Dc, _old);
            Win32.DeleteObject(_bitmap);
            Win32.DeleteDC(Dc);
        }
    }
}
