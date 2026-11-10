namespace Jus.Game;

/// <summary>Buttons in the game's own pad layout, built from the key registers by
/// 0x0203A610 (jus_Class_020948e4::vfunc_05). Translated code uses these masks directly,
/// e.g. 0xC300 = L|R|Select|Start (soft reset), 0x8010 = Start|A (skip in Copyright).</summary>
[Flags]
public enum PadButtons : uint
{
    None = 0,
    Up = 0x0001, Down = 0x0002, Right = 0x0004, Left = 0x0008,
    A = 0x0010, B = 0x0020, X = 0x0040, Y = 0x0080,
    L = 0x0100, R = 0x0200,
    Debug = 0x2000, Select = 0x4000, Start = 0x8000,
}

/// <summary>One frame of input. Trigger/Release follow the original pad history:
/// trg = current &amp; ~previous (history at pad+0x18, indices at +0x70/+0x74).</summary>
public readonly record struct InputState(PadButtons Held, PadButtons Trigger, PadButtons Release,
    bool Touching, bool TouchTrigger, int TouchX, int TouchY)
{
    public static InputState Next(InputState previous, PadButtons held, bool touching, int x, int y) =>
        new(held, held & ~previous.Held, previous.Held & ~held, touching, touching && !previous.Touching, x, y);
}

/// <summary>A 256x192 screen. The original's 2D/3D engines are replaced by native drawing.</summary>
public interface IScreen
{
    const int Width = 256, Height = 192;
    /// <summary>BGRA8888 pixels, row-major, <see cref="Width"/> x <see cref="Height"/>.</summary>
    Span<uint> Pixels { get; }
    /// <summary>Master brightness as the original sets it (-16 = black .. 0 = normal .. 16 = white);
    /// applied when the host presents the screen.</summary>
    int Brightness { get; set; }
    void Clear(uint bgra);
    /// <summary>Debug text with the host's native font.</summary>
    void DrawText(int x, int y, string text, uint bgra = 0xFFFFFFFF);
}

/// <summary>The cartridge backup (64 KB EEPROM in the original), stored as a file.</summary>
public interface ISaveStorage
{
    int Size { get; }
    void Read(int offset, Span<byte> destination);
    void Write(int offset, ReadOnlySpan<byte> source);
    void Flush();
}

/// <summary>Game data files by relative game path, from external data or an explicit ROM source.</summary>
public interface IAssetSource
{
    byte[] Read(string path);
}

/// <summary>Sound output (the host plays the SDAT with Jus.Sound, or only logs).</summary>
public interface ISound
{
    /// <summary>FUN_0207342c(id, arg): sequence archive <paramref name="id"/>, sequence <paramref name="arg"/>.</summary>
    void PlayEffect(int id, int arg);
    /// <summary>FUN_020734e0 + FUN_0207361c(id, arg): start background music (sequence <paramref name="id"/>).</summary>
    void PlayMusic(int id, int arg) { }
    /// <summary>FUN_0207367c(frames): fade the music out.</summary>
    void FadeOutMusic(int frames) { }
    /// <summary>FUN_02073410: stop all sound at once (soft reset).</summary>
    void StopAll() { }
}

/// <summary>Everything the game needs from the operating system.</summary>
public interface IPlatform
{
    IScreen TopScreen { get; }
    IScreen BottomScreen { get; }
    InputState Input { get; }
    ISaveStorage Save { get; }
    IAssetSource Assets { get; }
    ISound Sound { get; }
    /// <summary>Monotonic real time (the original's OS_GetTick, FUN_02054b44).</summary>
    TimeSpan Clock => TimeSpan.FromMilliseconds(Environment.TickCount64);
    void Log(string message);
}

/// <summary>NitroSDK OS ticks: system clock 33.513982 MHz / 64.</summary>
public static class OsTicks
{
    public const double PerSecond = 33_513_982.0 / 64;
    public static TimeSpan ToTime(long ticks) => TimeSpan.FromSeconds(ticks / PerSecond);
}

/// <summary>Brightness as the DS applies it: towards white (b &gt; 0) or black (b &lt; 0) by |b|/16
/// per 5-bit channel.</summary>
public static class Brightness
{
    public static uint Apply(uint bgra, int b)
    {
        if (b == 0) return bgra;
        int k = Math.Clamp(Math.Abs(b), 0, 16);
        uint r = (bgra >> 16) & 0xFF, g = (bgra >> 8) & 0xFF, bl = bgra & 0xFF;
        if (b > 0) { r += (uint)((255 - r) * k / 16); g += (uint)((255 - g) * k / 16); bl += (uint)((255 - bl) * k / 16); }
        else { r -= (uint)(r * k / 16); g -= (uint)(g * k / 16); bl -= (uint)(bl * k / 16); }
        return 0xFF000000 | (r << 16) | (g << 8) | bl;
    }
}
