using Jus.Game;

namespace Jus.Host;

/// <summary>Puts the two 256x192 screens (top above bottom, brightness already applied) into the window,
/// scaled to fit with the aspect ratio kept. Implementations: GDI, Vulkan, Direct3D 12 (--renderer).</summary>
internal interface IPresenter : IDisposable
{
    string Name { get; }
    void Present(ReadOnlySpan<uint> top, ReadOnlySpan<uint> bottom);
    /// <summary>Write the next presented frame, as it is in the swap chain, to a BMP (verification).</summary>
    void CaptureNext(string path) { }
}

internal static class PresenterFactory
{
    /// <summary>The requested backend, falling back to GDI (and logging why) if it cannot start.</summary>
    public static IPresenter Create(string? name, nint hwnd, Action<string> log)
    {
        string want = (name ?? "vulkan").ToLowerInvariant();
        foreach (var candidate in want == "gdi" ? ["gdi"] : new[] { want, "gdi" })
        {
            try
            {
                IPresenter p = candidate switch
                {
                    "vulkan" => new VulkanPresenter(hwnd),
                    "d3d12" => new D3D12Presenter(hwnd),
                    "gdi" => new GdiPresenter(hwnd),
                    _ => throw new ArgumentException($"unknown renderer '{candidate}' (vulkan, d3d12, gdi)"),
                };
                log($"renderer: {p.Name}");
                return p;
            }
            catch (Exception ex) when (candidate != "gdi")
            {
                log($"renderer: {candidate} unavailable ({ex.Message}); falling back");
            }
        }
        throw new InvalidOperationException("no renderer");
    }

    /// <summary>Where the two screens sit in a client area of the given size (aspect kept, centred).</summary>
    public static (int X, int Y, int W, int H) Layout(int clientW, int clientH)
    {
        int cw = Math.Max(1, clientW), ch = Math.Max(1, clientH);
        double scale = Math.Min(cw / (double)IScreen.Width, ch / (double)(IScreen.Height * 2));
        int w = Math.Max(1, (int)(IScreen.Width * scale)), h = Math.Max(1, (int)(IScreen.Height * scale));
        return ((cw - w) / 2, (ch - 2 * h) / 2, w, h);
    }

    /// <summary>Both screens stacked into one 256x384 BGRA image (what the GPU presenters upload).</summary>
    public static void Stack(ReadOnlySpan<uint> top, ReadOnlySpan<uint> bottom, Span<uint> dst)
    {
        top.CopyTo(dst);
        bottom.CopyTo(dst[top.Length..]);
    }
}

/// <summary>The original GDI path: StretchBlt from DIB sections (nearest neighbour).</summary>
internal sealed unsafe class GdiPresenter : IPresenter
{
    private readonly nint _hwnd, _dc, _bitmap, _old;
    private readonly uint* _bits;

    public GdiPresenter(nint hwnd)
    {
        _hwnd = hwnd;
        nint wdc = Win32.GetDC(hwnd);
        var bmi = new Win32.BITMAPINFOHEADER
        {
            biSize = (uint)sizeof(Win32.BITMAPINFOHEADER), biWidth = IScreen.Width, biHeight = -IScreen.Height * 2,
            biPlanes = 1, biBitCount = 32,
        };
        _dc = Win32.CreateCompatibleDC(wdc);
        _bitmap = Win32.CreateDIBSection(wdc, bmi, Win32.DIB_RGB_COLORS, out var bits, 0, 0);
        Win32.ReleaseDC(hwnd, wdc);
        if (_dc == 0 || _bitmap == 0) throw new InvalidOperationException("CreateDIBSection failed");
        _bits = (uint*)bits;
        _old = Win32.SelectObject(_dc, _bitmap);
    }

    public string Name => "GDI";

    public void Present(ReadOnlySpan<uint> top, ReadOnlySpan<uint> bottom)
    {
        PresenterFactory.Stack(top, bottom, new Span<uint>(_bits, IScreen.Width * IScreen.Height * 2));
        Win32.GetClientRect(_hwnd, out var rc);
        var (x, y, w, h) = PresenterFactory.Layout(rc.right, rc.bottom);
        nint dc = Win32.GetDC(_hwnd);
        Win32.SetStretchBltMode(dc, Win32.COLORONCOLOR);
        Win32.StretchBlt(dc, x, y, w, 2 * h, _dc, 0, 0, IScreen.Width, IScreen.Height * 2, Win32.SRCCOPY);
        Win32.ReleaseDC(_hwnd, dc);
    }

    public void Dispose()
    {
        Win32.SelectObject(_dc, _old);
        Win32.DeleteObject(_bitmap);
        Win32.DeleteDC(_dc);
    }
}
