using Jus.Game;
using Jus.Game.Scenes.Ov00;

namespace Jus.Game.Tests;

public sealed class TopMenuTests
{
    private readonly FakePlatform _p = new();
    private readonly JusGame _game;

    public TopMenuTests() => _game = new JusGame(_p, new TestExternals());

    private int Run(TopMenuScene s, Func<int, PadButtons>? input = null, int limit = 600, (int X, int Y)? touchAt = null, int touchFrame = -1)
    {
        var prev = default(InputState);
        for (int n = 1; n <= limit; n++)
        {
            bool touch = n == touchFrame;
            prev = InputState.Next(prev, input?.Invoke(n) ?? 0, touch, touchAt?.X ?? 0, touchAt?.Y ?? 0);
            _p.Input = prev;
            s.Update();
            if (s.Finished) return n;
        }
        return -1;
    }

    [Fact]
    public void DpadFollowsTheLinksAndASelectsAnUnlockedItem()
    {
        var s = new TopMenuScene(_game, 0);
        // 9 fade frames, then Right → 1, Down → 5, Left → 4, Down → 0 (rows toggle), Left → 3 (wrap)
        var moves = new Dictionary<int, PadButtons> { [12] = PadButtons.Right, [14] = PadButtons.Down, [16] = PadButtons.Left, [18] = PadButtons.Down, [20] = PadButtons.Left };
        Run(s, n => moves.GetValueOrDefault(n), limit: 21);
        Assert.Equal(3, s.Cursor);
        Run(s, n => n == 2 ? PadButtons.Right : 0, limit: 3);     // 3 → 0
        Assert.Equal(0, s.Cursor);
        int n = Run(s, n => n == 2 ? PadButtons.A : 0);
        Assert.Equal(2 + 9, n);
        Assert.Equal(0, _game.Globals.Director.ExitCode);         // JGalaxy (story)
        Assert.Contains((0x78, 0), _p.SoundLog.Effects);
    }

    [Fact]
    public void LockedItemsOnlyBuzzOnAFreshSave()
    {
        var s = new TopMenuScene(_game, 1);                       // item 1 needs progress flag 0x10
        Assert.Equal(-1, Run(s, n => n == 12 ? PadButtons.A : 0, limit: 60));
        Assert.Equal([(0x78, 2)], _p.SoundLog.Effects);
    }

    [Fact]
    public void BGoesBackToTheTitleAndTouchSelects()
    {
        var s = new TopMenuScene(_game, 6);
        Run(s, n => n == 12 ? PadButtons.B : 0);
        Assert.Equal(8, _game.Globals.Director.ExitCode);

        var t = new TopMenuScene(new JusGame(_p, new TestExternals()), 0);
        Run(t, touchAt: (204, 102), touchFrame: 12);              // Option
        Assert.Equal(7, t.Cursor);
    }

    [Fact]
    public void TouchingTheBackButtonGoesBackToTheTitle()
    {
        var s = new TopMenuScene(_game, 0);
        Run(s, limit: 10);
        // the button art is drawn in the bottom-right corner of the touch screen
        var px = _p.BottomScreen.Pixels.ToArray();
        Assert.Contains(Enumerable.Range(176, 15).SelectMany(y => Enumerable.Range(208, 47).Select(x => px[y * 256 + x])),
            c => c != px[0]);
        Assert.True(Run(s, touchAt: (240, 184), touchFrame: 2) > 0);
        Assert.Equal(8, _game.Globals.Director.ExitCode);
        Assert.Contains((0x78, 1), _p.SoundLog.Effects);
    }

    [Fact]
    public void GalaxyParentFollowsTheOrbitArithmetic()
    {
        // counter 0x2000: θ = trunc(16384·π/65536·4096) = 3216; sin → 2895, cos → 2897 (20.12, truncated)
        // y = (409600·2897 >> 12) − 0x60000 = −103516 (cos); x = trunc(−289500·0.6) − 0x40000 = −435844 (sin)
        Assert.Equal((-435844, -103516), TopMenuScene.GalaxyParent(0x2000));
        // a quarter turn later (45° → 135°): sin is the same, cos flips sign: about 141 px up, no sideways move
        var (x1, y1) = TopMenuScene.GalaxyParent(0x6000);
        Assert.InRange((x1 - -435844) >> 12, -1, 1);
        Assert.InRange((y1 - -103516) >> 12, -145, -138);
    }

    [Fact]
    public void FocusPulses()
    {
        var s = new TopMenuScene(_game, 2);
        Run(s, limit: TopMenuScene.PulseHalf);                   // the initial focus pulses from creation
        Assert.True(s.FocusScale > 1.06);
        Run(s, limit: TopMenuScene.PulseHalf);
        Assert.Equal(1.0, s.FocusScale, 3);
    }
}
