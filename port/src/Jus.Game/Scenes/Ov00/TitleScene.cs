using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov00;

/// <summary>Scene 2, Title.cpp (overlay 0): Title_Add 0x0214FB6C, tasks 0x02150B20 (wait for the
/// fade-in), 0x02150B74 (wait for the logo animation, show the start prompt), button callbacks
/// 0x02151470 (Start / A / touch: result 0) and 0x0215149C (B: result 1), 0x02150F48 (leave).
///
/// Translated: the eight scrolling "space" maps (four per screen, two BG layers each, tasks
/// 0x021512E8 / 0x021513B0), their palette animations (CommonPaletteAnime_Load), the logo actor
/// (motion 0x710000 build-up, then the 0x710001 glint loop) and subtitle 0x710002 on the top screen,
/// the start prompt 0x700000 with its glow (CommonPaletteAnime kind 5) on the bottom screen, the
/// effect glows 0x720000/0x720001 behind the logo (opacity, scale tween, title_effect.bin), the
/// fades, input and the result. Not yet: music, the display's own blend settings (+0x8E8..).</summary>
public sealed class TitleScene : ISceneTask
{
    /// <summary>One space map widget: 20.12 fixed-point vertical position, scrolled 0.5 px per frame.</summary>
    private sealed class SpaceMap(TileBackground bg, bool upper, int layer, int y, bool visible)
    {
        public readonly TileBackground Bg = bg;
        public readonly bool Upper = upper;          // true: task 0x021512E8 (…00 maps), false: 0x021513B0 (…01 maps)
        public readonly int Layer = layer;           // BG layer 2 or 3
        public int Y = y;
        public bool Visible = visible;
        public readonly List<PaletteAnimation> Anims = [];

        /// <summary>0x021512E8 / 0x021513B0.</summary>
        public void Scroll()
        {
            Y -= 0x800;
            if (Upper)
            {
                if (Y < -0xFFFFF) { Visible = false; Y += 0x200000; }
                else if (Y < 1) Visible = true;
            }
            else
            {
                if (Y < 1) { Visible = false; Y += 0x200000; }
                else if (Y < 0xC0001) Visible = true;
            }
        }
    }

    private enum Phase { WaitFadeIn, WaitLogo, Ready, WaitFadeOut }

    /// <summary>0x02150DA4: after 0x297FFA6 OS ticks (~83.1 s) on the title, leave with result 1
    /// (back to the opening movie).</summary>
    public static readonly TimeSpan IdleTimeout = OsTicks.ToTime(0x297FFA6);

    private readonly JusGame _game;
    private readonly SpaceMap[] _maps;
    private readonly SpriteActor _logo, _copy, _prompt;   // work +0x38, +0x3C, +0x40
    private readonly PaletteAnimation _startGlow;         // work +0x50
    private readonly SpriteActor _fx1, _fx2;              // work +0x44, +0x48
    private readonly List<PaletteAnimation> _fxGlow;      // work +0x74
    private int _fxTween = -1;                            // "Scale" controller frame, -1 = not running

    /// <summary>The effects' "Scale" controller (jus_TagIPMV via ALControllerImp::Create(.., 0x494C,
    /// target, 4, 0, 1)): from the current scale 1.2 to the target vector (1, 1, 1) built in the
    /// static initializer 0x0208C5E4, over 4 frames, once (flags 0xB: no halving, stop and destroy at
    /// the end). Interpolator 0x494C is the engine's linear 'LI' curve (<see cref="LinearInterpolator"/>).</summary>
    public const int FxTweenFrames = 4;
    private readonly TimeSpan _start;        // work +0x78 (OS tick at creation)
    private Phase _phase = Phase.WaitFadeIn;
    private int _result;                     // work +0x82

    public TitleScene(JusGame game)
    {
        _game = game;
        var res = new ResourceManager(game.Platform.Assets);
        res.Mount("title/title.aar");
        // logo_copy / start / title_effect archives hold the sprite actors (not drawn yet)
        SpaceMap Map(string name, bool upper, int layer, int y, bool visible, string anim)
        {
            var img = DsigImage.Load(res, $"title/{name}.dig");
            var m = new SpaceMap(new TileBackground(img, AltmMap.Load(res, $"title/{name}.atm")), upper, layer, y, visible);
            m.Anims.AddRange(PaletteAnimation.Load(img, res.Read($"title/{anim}.bin")));
            return m;
        }
        // Title_Add: maps 2..5 on FUN_0203b414 (top), 6..9 on FUN_0203b424 (bottom); palette scripts
        // in the order Title_Add loads them (the …01 maps get the other screen's script).
        _maps =
        [
            Map("space_top00", true, 2, 0, true, "space_top00"),
            Map("space_top01", false, 3, 0x100000, true, "space_under00"),
            Map("space_under00", true, 2, 0x100000, false, "space_under00"),
            Map("space_under01", false, 3, 0x200000, false, "space_top00"),
            Map("space_under00", true, 2, 0, true, "space_under00"),
            Map("space_under01", false, 3, 0x100000, true, "space_top00"),
            Map("space_top00", true, 2, 0x100000, false, "space_top00"),
            Map("space_top01", false, 3, 0x200000, false, "space_under00"),
        ];
        // Sprite actors (FUN_02151238(motion, texture, display, position)); positions are 20.12 in the original.
        res.Mount("title/logo_copy.aar");
        res.Mount("title/start.aar");
        var logoBank = new DstxBank(res.Read(0x710000, (byte)'@'));
        var logoMotions = new AlmtMotionSet(res.Read(0x710000, (byte)'A'));
        _logo = new SpriteActor(logoBank, logoMotions, 0x710000) { X = 128, Y = 72 };        // top, (0x80000, 0x48000)
        _copy = new SpriteActor(logoBank, logoMotions, 0x710002) { X = 128, Y = 168 };       // top, (0x80000, 0xA8000)
        _prompt = new SpriteActor(new DstxBank(res.Read(0x700000, (byte)'@')),
            new AlmtMotionSet(res.Read(0x700000, (byte)'A')), 0x700000) { X = 128, Y = 96 }; // bottom, (0x80000, 0x60000)
        // CommonPaletteAnime_Create(start palette, 0x11, 0xF, 5, 0x80): the start prompt's glow
        _startGlow = new PaletteAnimation(_prompt.Bank.Texture, 0x11, 0xF, 5) { P16 = 0x8DF, P18 = 0, P1A = 0x1E, Dir1B = 1, Flags1C = 1 };
        // Effect glows around the logo (display 0x0203B404, top): one bank, cells 0 and 1, opacity
        // 0.9 / 0.8 (vfunc 0xF8 with 0xE66 / 0xCCC), scale 1.2 (FUN_020235dc 0x1333), hidden until
        // the logo's build-up ends. title_effect.bin animates their shared palette.
        res.Mount("title/title_effect.aar");
        var fxBank = new DstxBank(res.Read(0x720000, (byte)'@'));
        var fxMotions = new AlmtMotionSet(res.Read(0x720000, (byte)'A'));
        _fx1 = new SpriteActor(fxBank, fxMotions, 0x720000) { X = 128, Y = 72, Alpha = 0xE66 / 4096.0, Scale = 0x1333 / 4096.0, Visible = false };
        _fx2 = new SpriteActor(fxBank, fxMotions, 0x720001) { X = 128, Y = 72, Alpha = 0xCCC / 4096.0, Scale = 0x1333 / 4096.0, Visible = false };
        _fxGlow = PaletteAnimation.Load(fxBank.Texture, res.Read("title/title_effect.bin"));
        game.PlayMusic(0, 0);                                                   // FUN_020734e0, FUN_0207361c(0, 0)
        _start = game.Platform.Clock;                                           // FUN_02054b44 → +0x78
        game.Fade.Start(FadeKind.FromBlack, 1);                                 // FUN_02073ebc(2, 1)
    }

    public bool Finished { get; private set; }
    /// <summary>Exit code: 0 = start (Start, A or touch), 1 = back to the opening (B).</summary>
    public int Result => _result;

    public void Update()
    {
        if (Finished) return;
        foreach (var m in _maps)
        {
            m.Scroll();
            foreach (var a in m.Anims) a.Update();
        }
        _startGlow.Update();
        switch (_phase)
        {
            case Phase.WaitFadeIn:                                              // 0x02150B20
                if (_game.Fade.Step())
                {
                    _logo.SetMotion(0x710000);                                  // restart the logo motion (vfunc 0x6C)
                    _phase = Phase.WaitLogo;                                    // widgets enabled (0x021B65CC)
                }
                break;
            case Phase.WaitLogo:                                                // 0x02150B74
                if (_logo.AtEnd)
                {
                    _logo.SetMotion(0x710001);                                  // the logo's looping glint
                    _fx1.Visible = _fx2.Visible = true;                         // vfunc 0xD8(1)
                    _fxTween = 0;                                               // attach the "Scale" controllers
                    _phase = Phase.Ready;
                }
                break;
            case Phase.Ready:                                                   // 0x02150DA4
                if (_game.Platform.Clock - _start >= IdleTimeout) Press(1, playEffect: false);
                break;
            case Phase.WaitFadeOut:                                             // 0x02150DEC
                if (_game.Fade.Step())
                {
                    _game.Platform.Sound.FadeOutMusic(0);                       // FUN_020735e4: stop the music
                    _game.Globals.Director.ExitCode = _result;                  // DAT_020afcb8 = +0x82
                    Finished = true;
                }
                break;
        }
        if (_phase is Phase.WaitLogo or Phase.Ready) HandleInput();
        _logo.Update();
        _copy.Update();
        _prompt.Update();
        _fx1.Update();
        _fx2.Update();
        foreach (var a in _fxGlow) a.Update();
        if (_fxTween >= 0 && _fxTween < FxTweenFrames)
        {
            _fxTween++;
            int s = LinearInterpolator.Vector(0x1333, 0x1000, _fxTween, 0, FxTweenFrames);
            _fx1.Scale = _fx2.Scale = s / 4096.0;
        }
        Draw();
    }

    /// <summary>For tests: the effects' visibility and scale.</summary>
    public (bool Visible, double Scale) Effects => (_fx1.Visible, _fx1.Scale);

    /// <summary>For tests: the logo's current motion and cell.</summary>
    public (int Motion, int Cell) Logo => (_logo.MotionId, _logo.Cell);

    /// <summary>The three widgets: Start (0x8000, with the touch box ±88 x ±24 around the bottom
    /// screen's centre), A (0x10) → 0x02151470; B (0x20) → 0x0215149C.</summary>
    private void HandleInput()
    {
        var input = _game.Platform.Input;
        bool touched = input.TouchTrigger && Math.Abs(input.TouchX - 128) <= 88 && Math.Abs(input.TouchY - 96) <= 24;
        if ((input.Trigger & (PadButtons.Start | PadButtons.A)) != 0 || touched) Press(0);
        else if ((input.Trigger & PadButtons.B) != 0) Press(1);
    }

    /// <summary>0x02151470 / 0x0215149C (with the effect) or the idle timeout, then 0x02150F48.</summary>
    private void Press(int result, bool playEffect = true)
    {
        if (playEffect) _game.Platform.Sound.PlayEffect(0x78, result);         // FUN_0207342c(0x78, result)
        _result = result;
        if (result == 1) _game.Platform.Sound.FadeOutMusic(8);                  // FUN_0207367c(8)
        _game.Fade.Start(FadeKind.ToBlack, 1);                                  // FUN_02073ebc(3, 1)
        _phase = Phase.WaitFadeOut;
    }

    private void Draw()
    {
        DrawScreen(_game.Platform.TopScreen, 0);
        DrawScreen(_game.Platform.BottomScreen, 4);
        _fx1.Draw(_game.Platform.TopScreen);                                   // behind the logo
        _fx2.Draw(_game.Platform.TopScreen);
        _logo.Draw(_game.Platform.TopScreen);
        _copy.Draw(_game.Platform.TopScreen);
        _prompt.Draw(_game.Platform.BottomScreen);
    }

    /// <summary>BG3 below BG2 (equal priority: the lower BG number is in front).</summary>
    private void DrawScreen(IScreen screen, int first)
    {
        screen.Clear(0xFF000000);
        for (int layer = 3; layer >= 2; layer--)
            for (int i = first; i < first + 4; i++)
            {
                var m = _maps[i];
                if (m.Layer == layer && m.Visible) m.Bg.DrawAt(screen, 0, m.Y >> 12);
            }
    }
}
