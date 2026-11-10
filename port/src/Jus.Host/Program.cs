using System.Diagnostics;
using System.Runtime.InteropServices;
using Jus.Game;

namespace Jus.Host;

/// <summary>Native Windows host: a Win32 window showing both screens (top above bottom),
/// keyboard/mouse input, the save file, and the frame loop at the original refresh rate.
///
/// Usage: JUS.exe [--frames N] [--press "A@30,Right@40,..."] [--snapshot dir]
///   --data dir    extracted game data (otherwise Data beside the executable, else JUS_DATA_ROOT); no ROM needed;
///   --rom path    explicitly use a ROM instead; --save-seed path seeds the first local save.
///   --mute        no audio output (scripted --frames runs are always silent).
///   --renderer vulkan|d3d12|gdi  presentation backend (default vulkan; falls back to GDI);
///   --present-capture file       with --frames: write the last presented frame as it is in the swap chain.
///   --frames N     run N frames, then exit (for tests); --press injects buttons at given frames;
///   --snapshot     writes top.bmp/bottom.bmp of the last frame.</summary>
internal static class Program
{
    /// <summary>The original refresh rate (NDS LCD: 59.8261 Hz).</summary>
    private const double FrameSeconds = 1.0 / 59.8261;

    private static HostPlatform? _platform;
    private static IPresenter? _presenter;
    private static Win32.WndProc? _wndProc;       // kept alive for the native callback
    private static nint _hwnd;
    private static bool _quit;

    [STAThread]
    private static int Main(string[] args)
    {
        var opt = Options.Parse(args);
        string data = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData), "JUS");
        Directory.CreateDirectory(data);
        using var log = new StreamWriter(Path.Combine(data, "jus.log"), append: false) { AutoFlush = true };

        Action<string> logLine = msg => { log.WriteLine(msg); Debug.WriteLine(msg); };
        IAssetSource assets;
        try
        {
            assets = AssetSelection.Open(opt.Data, opt.Rom, Environment.GetEnvironmentVariable("JUS_DATA_ROOT"),
                AppContext.BaseDirectory, logLine);
        }
        catch (Exception ex) when (ex is IOException or ArgumentException or UnauthorizedAccessException)
        {
            logLine($"{ex.Message} Use --data <extracted directory>, JUS_DATA_ROOT, or Data beside JUS.exe. --rom <path> selects ROM mode.");
            return 2;
        }

        _hwnd = CreateWindow();
        nint dc = Win32.GetDC(_hwnd);
        using var top = new GdiScreen(dc);
        using var bottom = new GdiScreen(dc);
        Win32.ReleaseDC(_hwnd, dc);

        string? seed = opt.SaveSeed ?? (opt.Rom is { } rom
            ? Path.Combine(Path.GetDirectoryName(Path.GetFullPath(rom))!, "JUS.sav") : null);
        var save = new FileSave(Path.Combine(data, "JUS.sav"), seed);
        // native SDAT player on the default output device; scripted runs (--frames) and --mute stay silent
        using var sound = opt.Frames is null && !opt.Mute ? HostSound.TryCreate(assets, output: true, logLine) : null;
        _platform = new HostPlatform(top, bottom, save, assets, sound ?? (ISound)new LoggingSound(logLine), logLine);
        using var presenter = PresenterFactory.Create(opt.Renderer, _hwnd, logLine);
        _presenter = presenter;
        var game = new JusGame(_platform);
        game.Director.SceneCreated += id => Win32.SetWindowText(_hwnd,
            id is { } s ? $"JUS — scene {(int)s:D2} {s}" : "JUS — saving");
        game.Start();

        Win32.timeBeginPeriod(1);
        try
        {
            var clock = Stopwatch.StartNew();
            double next = 0;
            long frames = 0;
            while (!_quit)
            {
                while (Win32.PeekMessage(out var msg, 0, 0, 0, Win32.PM_REMOVE))
                {
                    if (msg.message == Win32.WM_QUIT) { _quit = true; break; }
                    Win32.TranslateMessage(msg);
                    Win32.DispatchMessage(msg);
                }
                if (_quit) break;

                double now = clock.Elapsed.TotalSeconds;
                if (opt.Frames is null && now < next)
                {
                    if (next - now > 0.002) Thread.Sleep(1);
                    continue;
                }
                next = Math.Max(next + FrameSeconds, now - FrameSeconds);   // don't spiral after a stall

                var injected = opt.Injected(frames);
                _platform.BeginFrame(injected & ~TouchBit, (injected & TouchBit) != 0);
                game.Frame();
                if (opt.PresentCapture is { } cap && opt.Frames is { } last && frames == last - 1) _presenter.CaptureNext(cap);
                Present();
                frames++;
                if (opt.Snapshot is { } sdir && opt.SnapshotFrames.Contains(frames)) Snapshot(sdir, $"f{frames:D5}_");
                if (opt.Frames is { } n && frames >= n) break;
            }
        }
        finally
        {
            Win32.timeEndPeriod(1);
        }
        save.Flush();
        if (opt.Snapshot is { } dir) Snapshot(dir, "");
        if (_hwnd != 0) Win32.DestroyWindow(_hwnd);
        return 0;
    }

    /// <summary>Pseudo-button for --press: "Touch@N" touches the bottom screen centre on frame N.</summary>
    internal const PadButtons TouchBit = (PadButtons)0x8000_0000;

    private static void Snapshot(string dir, string prefix)
    {
        if (_platform is null) return;
        Directory.CreateDirectory(dir);
        Bmp.Write(Path.Combine(dir, prefix + "top.bmp"), _platform.Top.Presented);
        Bmp.Write(Path.Combine(dir, prefix + "bottom.bmp"), _platform.Bottom.Presented);
    }

    private static nint CreateWindow()
    {
        _wndProc = WndProc;
        nint instance = Win32.GetModuleHandle(0);
        const string cls = "JusHostWindow";
        var wc = new Win32.WNDCLASSEXW
        {
            cbSize = (uint)Marshal.SizeOf<Win32.WNDCLASSEXW>(),
            style = 0x0003,                                       // CS_HREDRAW | CS_VREDRAW
            lpfnWndProc = Marshal.GetFunctionPointerForDelegate(_wndProc),
            hInstance = instance,
            hCursor = Win32.LoadCursor(0, Win32.IDC_ARROW),
            hbrBackground = Win32.GetStockObject(4 /* BLACK_BRUSH */),
            lpszClassName = Marshal.StringToHGlobalUni(cls),
        };
        if (Win32.RegisterClassEx(wc) == 0) throw new InvalidOperationException($"RegisterClassEx failed: {Marshal.GetLastPInvokeError()}");
        var r = new Win32.RECT { right = IScreen.Width * 2, bottom = IScreen.Height * 4 };
        Win32.AdjustWindowRect(ref r, Win32.WS_OVERLAPPEDWINDOW, false);
        nint hwnd = Win32.CreateWindowEx(0, cls, "JUS", Win32.WS_OVERLAPPEDWINDOW | Win32.WS_VISIBLE,
            Win32.CW_USEDEFAULT, Win32.CW_USEDEFAULT, r.right - r.left, r.bottom - r.top, 0, 0, instance, 0);
        if (hwnd == 0) throw new InvalidOperationException($"CreateWindowEx failed: {Marshal.GetLastPInvokeError()}");
        return hwnd;
    }

    /// <summary>Where the two screens sit in the client area (aspect-preserving, centred).</summary>
    private static (int X, int Y, int W, int H) Layout()
    {
        Win32.GetClientRect(_hwnd, out var rc);
        int cw = Math.Max(1, rc.right), ch = Math.Max(1, rc.bottom);
        double scale = Math.Min(cw / (double)IScreen.Width, ch / (double)(IScreen.Height * 2));
        int w = (int)(IScreen.Width * scale), h = (int)(IScreen.Height * scale);
        return ((cw - w) / 2, (ch - 2 * h) / 2, w, h);
    }

    /// <summary>Hand both screens (brightness applied) to the selected presenter.</summary>
    private static void Present()
    {
        if (_platform is null || _presenter is null) return;
        _presenter.Present(_platform.Top.Presented, _platform.Bottom.Presented);
    }

    private static nint WndProc(nint hwnd, uint msg, nint wParam, nint lParam)
    {
        switch (msg)
        {
            case Win32.WM_CLOSE:
                _quit = true;
                Win32.DestroyWindow(hwnd);
                _hwnd = 0;
                return 0;
            case Win32.WM_DESTROY:
                Win32.PostQuitMessage(0);
                return 0;
            case Win32.WM_PAINT:
                var ps = default(Win32.PAINTSTRUCT);
                Win32.BeginPaint(hwnd, out ps);
                Win32.EndPaint(hwnd, ps);
                Present();
                return 0;
            case Win32.WM_KEYDOWN or Win32.WM_SYSKEYDOWN:
                if ((int)wParam == 0x1B) { Win32.SendClose(hwnd); return 0; }   // Esc
                _platform?.Key((int)wParam, true);
                return 0;
            case Win32.WM_KEYUP or Win32.WM_SYSKEYUP:
                _platform?.Key((int)wParam, false);
                return 0;
            case Win32.WM_KILLFOCUS:
                _platform?.ReleaseAll();
                break;
            case Win32.WM_LBUTTONDOWN or Win32.WM_MOUSEMOVE or Win32.WM_LBUTTONUP:
                if (_platform is not null)
                {
                    var (x, y, w, h) = Layout();
                    int mx = Win32.LoWord(lParam), my = Win32.HiWord(lParam);
                    bool down = msg != Win32.WM_LBUTTONUP && ((long)wParam & 1) != 0;
                    int tx = (mx - x) * IScreen.Width / Math.Max(1, w), ty = (my - y - h) * IScreen.Height / Math.Max(1, h);
                    bool inside = tx is >= 0 and < IScreen.Width && ty is >= 0 and < IScreen.Height;
                    _platform.Touch(down && inside, Math.Clamp(tx, 0, IScreen.Width - 1), Math.Clamp(ty, 0, IScreen.Height - 1));
                }
                return 0;
        }
        return Win32.DefWindowProc(hwnd, msg, wParam, lParam);
    }
}

/// <summary>Command-line options for scripted runs.</summary>
internal sealed record Options(long? Frames, string? Snapshot, Dictionary<long, PadButtons> Presses,
    HashSet<long> SnapshotFrames, string? Rom, string? Data, string? SaveSeed, bool Mute = false,
    string? Renderer = null, string? PresentCapture = null)
{
    public static Options Parse(string[] args)
    {
        long? frames = null; string? snap = null, rom = null, data = null, saveSeed = null, renderer = null, capture = null;
        bool mute = false;
        var presses = new Dictionary<long, PadButtons>();
        var at = new HashSet<long>();
        for (int i = 0; i < args.Length; i++)
        {
            switch (args[i])
            {
                case "--frames": frames = long.Parse(args[++i]); break;
                case "--snapshot": snap = args[++i]; break;
                case "--snapshot-at": foreach (var f in args[++i].Split(',')) at.Add(long.Parse(f)); break;
                case "--rom": rom = args[++i]; break;
                case "--data": data = args[++i]; break;
                case "--save-seed": saveSeed = args[++i]; break;
                case "--mute": mute = true; break;
                case "--renderer": renderer = args[++i]; break;
                case "--present-capture": capture = args[++i]; break;
                case "--press":
                    foreach (var item in args[++i].Split(',', StringSplitOptions.RemoveEmptyEntries))
                    {
                        var (b, f) = (item.Split('@')[0], long.Parse(item.Split('@')[1]));
                        var button = b.Equals("Touch", StringComparison.OrdinalIgnoreCase)
                            ? Program.TouchBit : Enum.Parse<PadButtons>(b, ignoreCase: true);
                        presses[f] = presses.GetValueOrDefault(f) | button;
                    }
                    break;
            }
        }
        return new(frames, snap, presses, at, rom, data, saveSeed, mute, renderer, capture);
    }

    /// <summary>Frames an injected press is held: scenes such as the Opening sample the pad once per
    /// movie frame (30 fps), so a 1-frame press could fall between two samples.</summary>
    public const int HoldFrames = 4;

    public PadButtons Injected(long frame)
    {
        var held = PadButtons.None;
        for (long f = frame - HoldFrames + 1; f <= frame; f++) held |= Presses.GetValueOrDefault(f);
        return held;
    }
}

/// <summary>Minimal 32-bit BMP writer for snapshots.</summary>
internal static class Bmp
{
    public static void Write(string path, ReadOnlySpan<uint> pixels) => Write(path, pixels, IScreen.Width, IScreen.Height);

    public static void Write(string path, ReadOnlySpan<uint> pixels, int w, int h)
    {
        int size = 54 + w * h * 4;
        pixels = pixels[..(w * h)];
        using var bw = new BinaryWriter(File.Create(path));
        bw.Write((ushort)0x4D42); bw.Write(size); bw.Write(0); bw.Write(54);
        bw.Write(40); bw.Write(w); bw.Write(-h); bw.Write((ushort)1); bw.Write((ushort)32);
        bw.Write(0); bw.Write(w * h * 4); bw.Write(2835); bw.Write(2835); bw.Write(0); bw.Write(0);
        foreach (uint p in pixels) bw.Write(p | 0xFF000000);
    }
}
