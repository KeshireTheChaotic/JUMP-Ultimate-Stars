using Jus.Game;
using Jus.Game.Scenes.Ov00;

namespace Jus.Game.Tests;

public sealed class OpeningTests
{
    private readonly FakePlatform _p = new();
    private readonly JusGame _game;

    public OpeningTests() => _game = new JusGame(_p, new TestExternals());

    private int Run(OpeningScene s, Func<int, PadButtons>? input = null, int limit = 4000, Func<int, bool>? stop = null)
    {
        var prev = default(InputState);
        for (int n = 1; n <= limit; n++)
        {
            prev = InputState.Next(prev, input?.Invoke(n) ?? 0, false, 0, 0);
            _p.Input = prev;
            s.Update();
            if (s.Finished || (stop?.Invoke(n) ?? false)) return n;
        }
        return -1;
    }

    [Fact]
    public void PlaysTheWholeMovieThenFadesOutAndMarksItSeen()
    {
        var s = new OpeningScene(_game);
        int n = Run(s);
        Assert.Equal(1715, s.MovieFrame);
        // 1715 frames at 30 fps on a 59.8261 Hz display, plus the 9-step fade
        Assert.InRange(n, 3415, 3430);
        Assert.Equal(0, _game.Globals.Director.ExitCode);
        Assert.Equal(1u, _game.Globals.Save.ProgressFlags & 1);
        Assert.Equal(-16, _p.TopScreen.Brightness);
    }

    [Fact]
    public void StartsDarkAndRampsUp()
    {
        var s = new OpeningScene(_game);
        Run(s, limit: 1);
        Assert.Equal(-16, _p.TopScreen.Brightness);          // first vblank applies the starting level
        Run(s, limit: 8);
        Assert.Equal(0, _p.TopScreen.Brightness);
        Assert.Equal(0, _p.BottomScreen.Brightness);
    }

    [Fact]
    public void LogoGivesWayToSpaceAfterAbout76MovieFrames()
    {
        var s = new OpeningScene(_game);
        Run(s, stop: _ => s.SkipEnabled);
        Assert.InRange(s.MovieFrame, 70, 82);
        Assert.Equal(-16, _p.BottomScreen.Brightness);       // bottom ramped to black meanwhile
        Assert.Equal(0, _p.TopScreen.Brightness);            // the movie stays visible
    }

    [Fact]
    public void SkipOnlyAfterTheOpeningWasSeen()
    {
        var first = new OpeningScene(_game);
        Run(first, n => n % 50 == 0 ? PadButtons.A : 0, stop: n => n == 600);
        Assert.False(first.Finished);                        // flag clear: A does nothing

        var p = new FakePlatform();
        var game = new JusGame(p, new TestExternals());
        game.Globals.Save.SetProgressFlags(1, false);
        var again = new OpeningScene(game);
        var prev = default(InputState);
        int n = 0;
        while (!again.Finished && n < 600)
        {
            n++;
            prev = InputState.Next(prev, n == 300 ? PadButtons.Start : 0, false, 0, 0);
            p.Input = prev;
            again.Update();
        }
        Assert.True(again.Finished);
        Assert.InRange(n, 300, 300 + 12);                    // next movie frame + 9-step fade
        Assert.True(again.MovieFrame < 200);
    }

    [Fact]
    public void StylusDrawsOnTheBottomScreenWithThePenColours()
    {
        var s = new OpeningScene(_game);
        Run(s, stop: _ => s.MovieFrame >= 110);
        var prev = _p.Input;
        void Step(PadButtons b, bool touch, int x, int y)
        {
            prev = InputState.Next(prev, b, touch, x, y);
            _p.Input = prev;
            s.Update();
        }
        // drag from (50,60) to (90,60), then lift; movie frames come every ~2 display frames
        for (int x = 50; x <= 90; x += 4) { Step(0, true, x, 60); Step(0, true, x, 60); }
        Step(0, false, 0, 0); Step(0, false, 0, 0);
        Assert.Equal(0xB1, s.BitmapAt(70, 60));
        Assert.Equal(0xB1, s.BitmapAt(70, 59));                // 2x2 brush
        Assert.Equal(0, s.BitmapAt(70, 70));
        // hold L for 4 display frames (≥ one movie frame), release, press again
        for (int i = 0; i < 4; i++) Step(PadButtons.L, false, 0, 0);
        for (int i = 0; i < 4; i++) Step(0, false, 0, 0);
        Assert.Equal(0xB2, s.Pen);                              // L: next colour
        for (int i = 0; i < 4; i++) Step(PadButtons.R, false, 0, 0);
        for (int i = 0; i < 4; i++) Step(0, false, 0, 0);
        for (int i = 0; i < 4; i++) Step(PadButtons.R, false, 0, 0);
        Assert.Equal(0xB9, s.Pen);                              // R twice: previous colour, wrapping
    }

    [Fact]
    public void LRSelectStartRequestsASoftReset()
    {
        var logs = _p.Logs;
        _game.Start();
        _game.Globals.Director.SceneId = 1;
        var prev = default(InputState);
        for (int n = 1; n < 60; n++)
        {
            var held = n >= 30 ? (PadButtons)0xC300 : 0;
            prev = InputState.Next(prev, held, false, 0, 0);
            _p.Input = prev;
            _game.Frame();
        }
        Assert.Contains("soft reset", logs);
    }
}
