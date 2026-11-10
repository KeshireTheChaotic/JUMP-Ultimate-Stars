using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov00;

/// <summary>Scene 1, Opening.cpp (overlay 0): Opening_Add 0x0214D3C8.
///
/// Top screen: the opening movie (opening/opening.vx) on BG3 of the main engine (Movie_Create).
/// Bottom screen (sub engine): first the Actimagine logo, then a space background with a twinkling
/// star layer (opening/opening.aar, star palette script opening/star.bin).
///
/// Flow, per movie frame (the movie task's frame callback +0xD4, 30 fps):
///   0x0214DA58  wait for the start-up brightness ramp, then switch to 0x0214DAC8;
///   0x0214DAC8  soft reset check, skip (A|Start, only if the opening was seen before: save flag
///               0x020B0B90 bit 0), then the phase function +0x48:
///     0x0214DE6C  61 frames, then ramp the bottom screen to black (0, -1 per vblank, 16 steps);
///     0x0214E3C0  when dark: hide the logo, show space and stars, enable skip;
///     0x0214E478  5 frames, then ramp the bottom screen back in (-16, +1, 16 steps);
///     0x0214E4C4  nothing more until the movie ends.
/// Movie end 0x0214DE18 / skip 0x0214DD90: fade both screens to black, then 0x0214DB84 cleans up,
/// sets the "opening seen" flag (FUN_0207120c(1, 0)) and leaves with exit code +0x57.
///
/// Not translated: the PassMark password entry (0x02151570, callback 0x0214E6D0: a code from
/// bin/koma.bin plays SE 0x78/9, sets +0x57 = 1 and shows an overlay-12 animation), Secret_Create,
/// the overlay-12 object 0x021BA49C, and closing the lid (sleep). The movie's audio plays (MoviePlayer).</summary>
public sealed class OpeningScene : ISceneTask
{
    /// <summary>Brightness ramp run every vblank by 0x0214E61C (fields +0x58..+0x5C).</summary>
    private sealed class Ramp
    {
        public sbyte Level;        // +0x58
        public byte Count;         // +0x59
        public sbyte Step;         // +0x5A
        public byte Steps;         // +0x5B
        public bool BottomOnly;    // +0x5C == 1
        public bool Active;        // +0x56 bit 2: the vblank callback is registered

        /// <summary>FUN_0214e5b8(level, step, steps, mode).</summary>
        public void Start(int level, int step, int steps, bool bottomOnly)
        {
            Count = 0; Level = (sbyte)level; Steps = (byte)steps; Step = (sbyte)step; BottomOnly = bottomOnly;
            Active = true;
        }

        /// <summary>FUN_0214e55c: true once the ramp has run its course (and unregisters it).</summary>
        public bool Done()
        {
            if (Count <= Steps) return false;
            Active = false;
            return true;
        }

        /// <summary>0x0214E61C, once per vblank.</summary>
        public void VBlank(IPlatform p)
        {
            if (!Active) return;
            p.BottomScreen.Brightness = Level;
            if (!BottomOnly) p.TopScreen.Brightness = Level;
            Count++;
            if (Count <= Steps) Level = (sbyte)(Level + Step);
        }
    }

    private enum Phase { Logo, RampOut, Gap, RampIn, Doodle }

    /// <summary>Bottom BG3: 256x192 8bpp bitmap (0xC000 bytes) drawn on by touch; colours are
    /// indices into the space image's palette (0xB1..0xB9 hold the pen colours).</summary>
    private readonly byte[] _bitmap = new byte[IScreen.Width * IScreen.Height];
    private ushort _pen = 0xB1;             // +0x52
    private PadButtons _padPrev;            // pad state at the previous movie frame
    private bool _touching;                 // +0x56 bit 0
    private short _lastX, _lastY;           // +0x4C, +0x4E

    private readonly JusGame _game;
    private readonly MoviePlayer _movie;
    private readonly TileBackground _logo, _space, _star;
    private readonly List<PaletteAnimation> _starAnims;
    private readonly Ramp _ramp = new();
    private bool _started;                  // frame callback switched to 0x0214DAC8
    private Phase _phase = Phase.Logo;      // +0x48
    private ushort _counter;                // +0x54
    private bool _skipEnabled;              // +0x50
    private bool _leaving;                  // task switched to 0x0214DB84
    private int _result;                    // +0x57

    public OpeningScene(JusGame game)
    {
        _game = game;
        var p = game.Platform;
        p.Sound.FadeOutMusic(0);                                                   // FUN_02073410: stop sound
        _movie = new MoviePlayer(p.Assets.Read("opening/opening.vx"), p.Sound);    // Movie_Create(0, "opening/opening.vx", 0)
        _movie.FrameDecoded += OnMovieFrame;
        _movie.Ended += OnMovieEnded;
        var res = new ResourceManager(p.Assets);
        res.Mount("opening/opening.aar");
        _logo = new TileBackground(DsigImage.Load(res, "opening/actimagine.dig"), AltmMap.Load(res, "opening/actimagine.atm"));
        _space = new TileBackground(DsigImage.Load(res, "opening/space.dig"), AltmMap.Load(res, "opening/space.atm")) { Visible = false };
        var starImage = DsigImage.Load(res, "opening/star00.dig");
        _star = new TileBackground(starImage, AltmMap.Load(res, "opening/star00.atm")) { Visible = false };
        _starAnims = PaletteAnimation.Load(starImage, res.Read("opening/star.bin"));   // CommonPaletteAnime_Load(.., 0x80)
        p.Log("Opening: PassMark/Secret input and the overlay-12 effect are not translated yet");
        _ramp.Start(-16, 2, 8, bottomOnly: false);                                 // FUN_0214e5b8(this, -16, 2, 8, 0)
    }

    public bool Finished { get; private set; }
    /// <summary>Movie frames decoded so far.</summary>
    public int MovieFrame => _movie.Position;
    public bool SkipEnabled => _skipEnabled;

    public void Update()
    {
        if (Finished) return;
        var p = _game.Platform;
        _movie.Tick();                       // keeps playing during the fade-out (callback is a no-op then)
        _ramp.VBlank(p);
        if (_leaving && _game.Fade.Step())                                         // 0x0214DB84
        {
            _movie.Stop();                                                         // FUN_0214da24
            _game.Globals.Save.SetProgressFlags(1, false);                         // FUN_0207120c(1, 0)
            _game.Globals.Director.ExitCode = _result;                             // DAT_020afcb8 = +0x57
            Finished = true;
            return;
        }
        foreach (var a in _starAnims) a.Update();
        Draw();
    }

    /// <summary>The movie's per-frame callback: 0x0214DA58 until the start ramp is done, then 0x0214DAC8.</summary>
    private void OnMovieFrame()
    {
        if (_leaving) return;                                                      // callback = LAB_0214de00
        // The original samples the pad here, once per movie frame (FUN_02028930), so "just pressed"
        // is relative to the previous movie frame, not the previous display frame.
        var now = _game.Platform.Input;
        var input = now with { Trigger = now.Held & ~_padPrev, Release = _padPrev & ~now.Held };
        _padPrev = now.Held;
        if (CheckReset(input)) return;
        if (!_started)
        {
            if (!_ramp.Done()) return;
            _counter = 0;
            _started = true;
            return;
        }
        if (_skipEnabled && ((uint)input.Trigger & 0x8010) != 0 && (_game.Globals.Save.ProgressFlags & 1) != 0)
        {
            Leave();                                                               // FUN_0214dd90
            return;
        }
        switch (_phase)
        {
            case Phase.Logo:                                                       // 0x0214DE6C
                if (_counter++ < 0x3D) return;
                _phase = Phase.RampOut;
                _counter = 0;
                _ramp.Start(0, -1, 16, bottomOnly: true);
                break;
            case Phase.RampOut:                                                    // 0x0214E3C0
                if (!_ramp.Done()) return;
                _phase = Phase.Gap;
                _logo.Visible = false;
                _space.Visible = true;
                _star.Visible = true;
                _skipEnabled = true;
                _counter = 0;
                break;
            case Phase.Gap:                                                        // 0x0214E478
                if (_counter++ > 4)
                {
                    _phase = Phase.RampIn;
                    _ramp.Start(-16, 1, 16, bottomOnly: true);
                }
                break;
            case Phase.RampIn:                                                     // 0x0214E4C4
                if (_ramp.Done()) _phase = Phase.Doodle;
                break;
            case Phase.Doodle:                                                     // 0x0214DEB0
                Doodle(input);
                break;
        }
    }

    /// <summary>0x0214DEB0: draw on the bottom screen with the stylus while the movie plays.
    /// (The original also feeds the touch path to PassMark, which recognises drawn passwords.)</summary>
    private void Doodle(InputState input)
    {
        uint held = (uint)input.Held, trg = (uint)input.Trigger;
        if ((held & 0x100) != 0 && (held & 0x200) != 0) _pen = 0xB1;           // L+R: first colour
        else if ((trg & 0x100) != 0) { if (++_pen > 0xB9) _pen = 0xB1; }      // L: next colour
        else if ((trg & 0x200) != 0) { if (--_pen < 0xB1) _pen = 0xB9; }      // R: previous colour

        if (!input.Touching)
        {
            _touching = false;
        }
        else
        {
            int cx = input.TouchX << 12, cy = input.TouchY << 12;              // widget position, 20.12
            if (!_touching)
            {
                _touching = true;
                _lastX = (short)(cx / 4096);
                _lastY = (short)(cy / 4096);
            }
            else
            {
                Line(cx, cy);
                _lastX = (short)(cx / 4096);
                _lastY = (short)(cy / 4096);
            }
            _counter = 0;
        }
        if (_counter++ > 0x5A)                                                 // ~90 frames without touch
        {
            Array.Clear(_bitmap);                                              // (and PassMark reset, FUN_02151898)
            _counter = 0;
        }
    }

    /// <summary>The line from (+0x4C, +0x4E) to the current touch point, stepping along the longer axis
    /// in 8.8 fixed point, as 0x0214DEB0 does.</summary>
    private void Line(int cx, int cy)
    {
        int dy = (short)((_lastY * 0x1000 - cy) / 4096);
        int dx = (_lastX * 0x1000 - cx) / 4096;
        int curX = cx / 4096, curY = cy / 4096;
        if (Math.Abs(dy) < Math.Abs(dx))
        {
            int step = (short)Div(dy << 8, dx);
            int from, to, yy;
            if (!(cx < _lastX * 0x1000)) { from = _lastX; to = curX; yy = _lastY << 8; }
            else { from = curX; to = _lastX; yy = curY << 8; }
            for (int i = from; i <= to; i++, yy += step) Plot((short)i, (yy << 8) >> 16);
        }
        else
        {
            int step = (short)Div(dx << 8, dy);
            int from, to, xx;
            if (!(cy < _lastY * 0x1000)) { from = _lastY; to = curY; xx = _lastX << 8; }
            else { from = curY; to = _lastY; xx = curX << 8; }
            for (int i = from; i <= to; i++, xx += step) Plot((xx << 8) >> 16, (short)i);
        }
    }

    private static int Div(int a, int b) => b == 0 ? 0 : a / b;

    /// <summary>0x0214E2CC: a 2x2 dot at (x-1, y-1)..(x, y) (x not moved left at 0, y-1 skipped at 0).</summary>
    private void Plot(int x, int y)
    {
        if (x > 0) x--;
        void Set(int px, int py)
        {
            if (px >= 0 && px < IScreen.Width && py >= 0 && py < IScreen.Height) _bitmap[py * IScreen.Width + px] = (byte)_pen;
        }
        Set(x, y);
        if (y != 0) Set(x, y - 1);
        Set(x + 1, y);
        if (y != 0) Set(x + 1, y - 1);
    }

    /// <summary>Pen colour index (0xB1..0xB9) and the bitmap, for tests.</summary>
    public int Pen => _pen;
    public byte BitmapAt(int x, int y) => _bitmap[y * IScreen.Width + x];

    /// <summary>FUN_0214e4e4: L+R+Select+Start held exactly (and one of them just pressed) → soft reset.</summary>
    private bool CheckReset(InputState input)
    {
        if ((uint)input.Held == 0xC300 && ((uint)input.Trigger & 0xC300) != 0)
        {
            _game.RequestSoftReset();
            return true;
        }
        return false;
    }

    /// <summary>Movie end callback 0x0214DE18.</summary>
    private void OnMovieEnded()
    {
        if (!_leaving) Leave();
    }

    /// <summary>0x0214DD90 / 0x0214DE18: fade both screens to black, stop the movie, then 0x0214DB84.</summary>
    private void Leave()
    {
        _ramp.Active = false;
        _game.Fade.Start(FadeKind.ToBlack, 1);                                    // FUN_02073ebc(3, 1)
        _leaving = true;
    }

    private void Draw()
    {
        var p = _game.Platform;
        _movie.Draw(p.TopScreen);
        var bottom = p.BottomScreen;
        bottom.Clear(0xFF000000);
        _space.DrawAt(bottom, 0, 0);       // BG2
        _star.DrawAt(bottom, 0, 0);        // BG1, above
        _logo.DrawAt(bottom, 0, 0);        // BG1
        if (_space.Visible)                // BG3 bitmap, enabled with the space layer; 0 = transparent
        {
            var pal = _space.Image.Palette;
            var px = bottom.Pixels;
            for (int i = 0; i < _bitmap.Length; i++)
                if (_bitmap[i] != 0) px[i] = pal[_bitmap[i]];
        }
    }
}
