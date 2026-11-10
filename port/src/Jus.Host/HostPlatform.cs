using Jus.Game;

namespace Jus.Host;

/// <summary>Keyboard/mouse → game input, screens, save, assets and sound for the game.
/// Keys: arrows = D-pad, X = A, Z = B, S = X, A = Y, Q = L, W = R, Enter = Start, Backspace = Select,
/// left mouse on the bottom screen = touch, Esc = quit.</summary>
internal sealed class HostPlatform(GdiScreen top, GdiScreen bottom, ISaveStorage save, IAssetSource assets,
    ISound sound, Action<string> log) : IPlatform
{
    private static readonly Dictionary<int, PadButtons> KeyMap = new()
    {
        [0x26] = PadButtons.Up, [0x28] = PadButtons.Down, [0x25] = PadButtons.Left, [0x27] = PadButtons.Right,
        ['X'] = PadButtons.A, ['Z'] = PadButtons.B, ['S'] = PadButtons.X, ['A'] = PadButtons.Y,
        ['Q'] = PadButtons.L, ['W'] = PadButtons.R, [0x0D] = PadButtons.Start, [0x08] = PadButtons.Select,
    };

    private PadButtons _keys;
    private bool _touching;
    private int _tx, _ty;

    public GdiScreen Top => top;
    public GdiScreen Bottom => bottom;
    public IScreen TopScreen => top;
    public IScreen BottomScreen => bottom;
    public InputState Input { get; private set; }
    public ISaveStorage Save => save;
    public IAssetSource Assets => assets;
    public ISound Sound => sound;
    public void Log(string message) => log(message);

    public void Key(int vk, bool down)
    {
        if (!KeyMap.TryGetValue(vk, out var b)) return;
        _keys = down ? _keys | b : _keys & ~b;
    }

    public void Touch(bool down, int x, int y) => (_touching, _tx, _ty) = (down, x, y);
    public void ReleaseAll() { _keys = PadButtons.None; _touching = false; }

    /// <summary>Latch input once per frame (the original samples the pad once per vblank).</summary>
    public void BeginFrame(PadButtons injected, bool injectedTouch) =>
        Input = InputState.Next(Input, _keys | injected, _touching || injectedTouch, _tx, _ty);
}
