using Jus.Game;
using Jus.Game.Assets;
using Jus.Game.Engine;
using Jus.Game.Scenes.Ov00;

namespace Jus.Game.Tests;

public sealed class CopyrightTests
{
    private readonly FakePlatform _p = new();
    private readonly JusGame _game;

    public CopyrightTests() => _game = new JusGame(_p, new TestExternals());

    private int RunUntilFinished(CopyrightScene s, Func<int, PadButtons>? input = null, int limit = 1000)
    {
        var prev = default(InputState);
        for (int n = 1; n <= limit; n++)
        {
            prev = InputState.Next(prev, input?.Invoke(n) ?? PadButtons.None, false, 0, 0);
            _p.Input = prev;
            s.Update();
            if (s.Finished) return n;
        }
        return -1;
    }

    [Fact]
    public void FadesInFromWhiteShows180FramesAndFadesOutToBlack()
    {
        var s = new CopyrightScene(_game);
        Assert.Equal(16, _p.TopScreen.Brightness);          // callback with level 0: full white
        Assert.False(_game.Globals.SoftResetEnabled);
        // 9 fade-in steps (8 levels + the poll that sees "done"), 181 shown frames, 9 fade-out steps
        Assert.Equal(9 + 181 + 9, RunUntilFinished(s));
        Assert.Equal(-16, _p.TopScreen.Brightness);
        Assert.Equal(-16, _p.BottomScreen.Brightness);
        Assert.True(_game.Globals.SoftResetEnabled);
    }

    [Fact]
    public void AOrStartSkips()
    {
        Assert.Equal(9 + 1 + 9, RunUntilFinished(new CopyrightScene(_game), n => n == 10 ? PadButtons.A : 0));
        Assert.Equal(9 + 5 + 9, RunUntilFinished(new CopyrightScene(_game), n => n == 14 ? PadButtons.Start : 0));
        // B does not skip
        Assert.Equal(199, RunUntilFinished(new CopyrightScene(_game), n => n == 10 ? PadButtons.B : 0));
    }

    [Fact]
    public void HiddenInputPlaysEffect0x78AndSetsTheFlag()
    {
        var seq = new[] { PadButtons.Right, PadButtons.Up, PadButtons.Left, PadButtons.Down, PadButtons.Right, PadButtons.Left };
        var s = new CopyrightScene(_game);
        RunUntilFinished(s, n => n >= 20 && n < 20 + 2 * seq.Length && (n - 20) % 2 == 0 ? seq[(n - 20) / 2] : 0);
        Assert.Equal([(0x78, 0xB)], _p.SoundLog.Effects);
        Assert.Equal(1, _game.Globals.Session.Unk00);
        Assert.Equal(7, s.SecretState);
    }

    [Fact]
    public void WrongDirectionResetsTheHiddenInput()
    {
        var seq = new[] { PadButtons.Right, PadButtons.Up, PadButtons.Right, PadButtons.Down, PadButtons.Right, PadButtons.Left };
        var s = new CopyrightScene(_game);
        RunUntilFinished(s, n => n >= 20 && n < 20 + 2 * seq.Length && (n - 20) % 2 == 0 ? seq[(n - 20) / 2] : 0);
        Assert.Empty(_p.SoundLog.Effects);
    }

    [Fact]
    public void FadeTiming()
    {
        var f = new ScreenFade(_p);
        f.Start(FadeKind.FromBlack, 1);
        Assert.Equal(-16, _p.BottomScreen.Brightness);
        var levels = new List<int>();
        while (!f.Step()) levels.Add(_p.BottomScreen.Brightness);
        Assert.Equal([-14, -12, -10, -8, -6, -4, -2, 0], levels);
        f.Start(FadeKind.TopToWhite, 2);
        _p.BottomScreen.Brightness = 0;
        int n = 0;
        while (!f.Step()) n++;
        Assert.Equal(16, n);                     // counter >> 2: 16 steps to reach level 16
        Assert.Equal(16, _p.TopScreen.Brightness);
        Assert.Equal(0, _p.BottomScreen.Brightness);
    }

    [Fact]
    public void CopyrightImagesDecode()
    {
        var a = RomAssetsForTests.Instance;
        var img = DsigImage.Load(a, "copyright/nintendo.dig");
        Assert.Equal((256, 32, 1), (img.Width, img.Height, img.PaletteCount));
        var map = AltmMap.Load(a, "copyright/nintendo.atm");
        Assert.Equal((32, 32), (map.Width, map.Height));
        var screen = new FakeScreen();
        new TileBackground(img, map).Draw(screen);
        var colours = screen.Pixels.ToArray().Distinct().ToList();
        Assert.True(colours.Count >= 8, "logo should use most of the palette");
        Assert.DoesNotContain(0xFF000000u, colours);   // no transparent (backdrop) pixels
    }
}
