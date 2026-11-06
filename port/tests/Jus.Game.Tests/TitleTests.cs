using Jus.Game;
using Jus.Game.Assets;
using Jus.Game.Engine;
using Jus.Game.Scenes.Ov00;

namespace Jus.Game.Tests;

public sealed class TitleTests
{
    private readonly FakePlatform _p = new();
    private readonly JusGame _game;

    public TitleTests() => _game = new JusGame(_p, new TestExternals());

    /// <summary>Runs until finished; <paramref name="input"/> may return buttons or touch per frame.</summary>
    private int Run(TitleScene s, Func<int, (PadButtons Buttons, (int X, int Y)? Touch)>? input = null, int limit = 2000)
    {
        var prev = default(InputState);
        for (int n = 1; n <= limit; n++)
        {
            var (b, touch) = input?.Invoke(n) ?? (PadButtons.None, null);
            prev = InputState.Next(prev, b, touch is not null, touch?.X ?? 0, touch?.Y ?? 0);
            _p.Input = prev;
            s.Update();
            if (s.Finished) return n;
        }
        return -1;
    }

    [Fact]
    public void StartOrAStartsTheGame()
    {
        var s = new TitleScene(_game);
        Assert.Equal(-16, _p.TopScreen.Brightness);                       // fade in from black
        int n = Run(s, f => (f == 20 ? PadButtons.A : 0, null));
        Assert.Equal(20 + 9, n);                                          // pressed on frame 20, 9-step fade out
        Assert.Equal(0, s.Result);
        Assert.Equal(0, _game.Globals.Director.ExitCode);
        Assert.Equal([(0x78, 0)], _p.SoundLog.Effects);
    }

    [Fact]
    public void ButtonsAreIgnoredDuringTheFadeIn()
    {
        var s = new TitleScene(_game);
        Assert.Equal(30 + 9, Run(s, f => (f == 5 || f == 30 ? PadButtons.Start : 0, null)));
    }

    [Fact]
    public void BGoesBackToTheOpening()
    {
        var s = new TitleScene(_game);
        Run(s, f => (f == 20 ? PadButtons.B : 0, null));
        Assert.Equal(1, s.Result);
        Assert.Equal([(0x78, 1)], _p.SoundLog.Effects);
    }

    [Fact]
    public void TouchOnlyInsideTheStartBox()
    {
        var s = new TitleScene(_game);
        Assert.Equal(-1, Run(s, f => (0, f == 20 ? (128 + 89, 96) : null), limit: 100));   // just outside
        var t = new TitleScene(new JusGame(_p, new TestExternals()));
        Assert.Equal(20 + 9, Run(t, f => (0, f == 20 ? (128 - 88, 96 + 24) : null)));       // on the edge
    }

    [Fact]
    public void IdleTimeoutReturnsToTheOpeningWithoutAnEffect()
    {
        var s = new TitleScene(_game);
        int n = Run(s, f => { if (f == 15) _p.Clock += TitleScene.IdleTimeout; return (0, null); });
        // the idle task (0x02150DA4) only runs after the logo motion ended: ready at frame 25,
        // timeout seen on frame 26, then the 9-step fade
        Assert.Equal(26 + 9, n);
        Assert.Equal(1, s.Result);
        Assert.Empty(_p.SoundLog.Effects);
        Assert.InRange(TitleScene.IdleTimeout.TotalSeconds, 83.0, 83.2);
    }

    [Fact]
    public void LogoBuildsUpThenLoopsItsGlint()
    {
        var s = new TitleScene(_game);
        Run(s, limit: 9);                                   // fade-in done; logo motion restarted
        Assert.False(s.Effects.Visible);                    // effects wait for the logo's build-up
        var cells = new List<int>();
        for (int i = 0; i < 17; i++) { Run(s, limit: 1); cells.Add(s.Logo.Cell); }
        // motion 0x710000 keys: frame 0 → cell 0, 4 → 1, 8 → 2, 12 → 3, 14 → 4 (recorded from frame 2)
        Assert.Equal([0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 4, 4, 4], cells.Take(15));
        Run(s, limit: 2);
        Assert.Equal(0x710001, s.Logo.Motion);
        Assert.True(s.Effects.Visible);                         // shown with the glint
        Run(s, limit: TitleScene.FxTweenFrames);
        Assert.Equal(1.0, s.Effects.Scale, 6);                 // 1.2 → 1.0 over 4 frames
        var glint = new List<int>();
        for (int i = 0; i < 20; i++) { Run(s, limit: 1); glint.Add(s.Logo.Cell); }
        Assert.Equal(6, glint[^1]);                             // the white flash (cell 5) settles on the logo
        Assert.DoesNotContain(5, glint.SkipWhile(c => c == 5).ToList());   // no strobe
    }

    [Fact]
    public void SpriteBanksDecode()
    {
        var res = new ResourceManager(RomAssetsForTests.Instance);
        res.Mount("title/title.aar");
        res.Mount("title/logo_copy.aar");
        var bank = new DstxBank(res.Read(0x710000, (byte)'@'));
        Assert.Equal(8, bank.Cells.Count);
        Assert.Equal((256, 296, 5), (bank.Texture.Width, bank.Texture.Height, bank.Texture.PaletteCount));
        Assert.Equal(new SpritePart(9, -32, -16, 2, 0), bank.Cells[2][0]);   // 32x32 piece
        var set = new AlmtMotionSet(res.Read(0x710000, (byte)'A'));
        Assert.Equal([0x710000, 0x710001, 0x710002], set.Motions.Select(m => m.Id));
        Assert.Equal(16, set.Get(0x710000).Length);
        Assert.Equal(7, set.Get(0x710002).ValueAt(100));                     // constant: the subtitle cell
        res.Mount("title/title_effect.aar");
        var fx = new AlmtMotionSet(res.Read(0x720000, (byte)'A'));            // TextureID (u32) + BoundsIndex
        Assert.Equal(0, fx.Get(0x720000).ValueAt(0));
        Assert.Equal(1, fx.Get(0x720001).ValueAt(0));
        var fxBank = new DstxBank(res.Read(0x720000, (byte)'@'));
        Assert.Equal((0x20, 16, 2), (fxBank.Texture.Format, fxBank.Texture.PaletteCount, fxBank.Cells.Count));
    }

    [Fact]
    public void TitleArchivesParse()
    {
        var res = new ResourceManager(RomAssetsForTests.Instance);
        var title = res.Mount("title/title.aar");
        Assert.Equal(3, title.Version);
        Assert.Equal(14, title.Entries.Count);
        var logo = res.Mount("title/logo_copy.aar");                          // nested, DSCP-compressed, version 2
        Assert.Equal(2, logo.Version);
        Assert.Equal("DSTX", System.Text.Encoding.ASCII.GetString(res.Read(0x710000, (byte)'@'), 0, 4));
        var img = DsigImage.Load(res, "title/space_under01.dig");
        Assert.True(img.Is8Bpp);
        Assert.Equal((256, 192, 30), (img.Width, img.Height, img.PaletteCount));
    }

    [Fact]
    public void PaletteLerpMatchesTheOriginalArithmetic()
    {
        // FUN_0206b8b0: per channel from + t*(to-from)/steps, truncating toward zero
        Assert.Equal((ushort)0x0000, PaletteAnimation.Lerp(0x0000, 0x7FFF, 0, 16));
        Assert.Equal((ushort)0x7FFF, PaletteAnimation.Lerp(0x0000, 0x7FFF, 16, 16));
        Assert.Equal((ushort)(15 | 15 << 5 | 15 << 10), PaletteAnimation.Lerp(0x0000, 0x7FFF, 8, 16));
        Assert.Equal((ushort)(30 - 1), PaletteAnimation.Lerp(30, 0, 1, 16));   // 30 + (-30/16 → -1)
    }
}
