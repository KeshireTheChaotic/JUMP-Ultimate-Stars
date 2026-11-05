namespace Jus.Game.Engine;

/// <summary>Kinds of the original screen fade (callback table at 0x0209E640).</summary>
public enum FadeKind
{
    /// <summary>0x020738D0: both screens, white → normal.</summary>
    FromWhite = 0,
    /// <summary>0x02073900: both screens, normal → white.</summary>
    ToWhite = 1,
    /// <summary>0x0207392C: both screens, black → normal.</summary>
    FromBlack = 2,
    /// <summary>0x0207395C: both screens, normal → black.</summary>
    ToBlack = 3,
    /// <summary>0x0207398C..0x020739E0: the same four on the main (top) display only.</summary>
    TopFromWhite = 4, TopToWhite = 5, TopFromBlack = 6, TopToBlack = 7,
}

/// <summary>Translation of the screen fade (state at 0x0214BD50): FUN_02073ebc / FUN_02073e90 start,
/// FUN_0207382c / FUN_0207387c step. Brightness goes through <see cref="IScreen.Brightness"/>
/// (the original writes it to the display object, +0x8F8, applied at vblank).</summary>
public sealed class ScreenFade(IPlatform platform)
{
    private FadeKind _kind;
    private int _shift;
    private ushort _counter;
    private bool _done = true;

    /// <summary>FUN_02073ebc(kind, speed): 0x3F is passed as the unused fourth field.</summary>
    public void Start(FadeKind kind, int speed)
    {
        _kind = kind;
        _shift = speed;
        _counter = 0;
        _done = false;
        Apply(0);                                   // FUN_02073e90 calls the callback with level 0
    }

    /// <summary>FUN_0207382c: advance one frame; true once the fade has completed (the frame after
    /// the last level was applied).</summary>
    public bool Step()
    {
        if (_done) return true;
        _counter += 4;
        int level = (_counter >> _shift) & 0xFFFF;
        if (level > 15)
        {
            _done = true;
            level = 16;
        }
        Apply(level);
        return false;
    }

    private void Apply(int level)
    {
        int value = _kind switch
        {
            FadeKind.FromWhite or FadeKind.TopFromWhite => 16 - level,
            FadeKind.ToWhite or FadeKind.TopToWhite => level,
            FadeKind.FromBlack or FadeKind.TopFromBlack => level - 16,
            _ => -level,
        };
        platform.TopScreen.Brightness = value;
        if (_kind < FadeKind.TopFromWhite) platform.BottomScreen.Brightness = value;
    }
}
