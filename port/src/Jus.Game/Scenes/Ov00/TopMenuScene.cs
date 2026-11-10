using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov00;

/// <summary>Scene 3, TopMenu.cpp (overlay 0): TopMenu_Add 0x02153CFC (reached through
/// jus_Scene03_Create with the remembered cursor, director +0x10).
///
/// TopMenu swaps the screens: FUN_02043264(1) clears POWCNT1 bit 15, so the main engine (the
/// 0x0203B414 layers and display 0x0203B404, where the menu lives) drives the bottom touch screen.
///
/// Translated: background maps top_bg01 (BG2) / top_bg00 (BG3, 64x64) with top_bg00.bin; the eight
/// buttons from the table at 0x0216003C (position, resource 0x50000C+i, unlock check, links), their
/// labels (resource + 0xC, 20 px below); locked items (flag checks 0x02153CC4: progress 0x10,
/// 0x02153CE0: 0x20) show resource 0x50000C+alt and only buzz (0x02155C54: SE 0x78/2); the focus
/// pulse (jus_TagIPCT "Scale" 1.0 ↔ 0x111E over 30 frames, ping-pong, started on focus 0x02155A24 and
/// stopped on 0x02155B28); d-pad moves along the links (up/down: +0xC, left: +0xD, right: +0xE);
/// A / touch selects (0x02155B94: SE 0x78/0); B → result 8 (0x02155C00: SE 0x78/1); fades; exit code
/// = cursor (+0x7C, cleanup 0x0215512C).
/// Back button: widget 0x510000 (Common/button.aar) at (255, 191), touch box (−48, −16)–(0, 0), same as B.
/// Not yet: the top-screen character display (TopMenu_CharaCreate) and its top_jp button 0x530000
/// (record 0x02160024 at (240, 160); handler 0x02155C30 = SE 0x78/0 + FUN_02156180 on the character),
/// galaxy objects 0x520000–0x520003 (FUN_02155334, display 0x0203B404) with galaxy_obj.bin, the
/// JGalaxy-unlock check with Secret.</summary>
public sealed class TopMenuScene : ISceneTask
{
    /// <summary>Menu table 0x0216003C: x, y, unlock check, alt, links.</summary>
    private static readonly (int X, int Y, int Flag, int Alt, int UpDown, int Left, int Right)[] Items =
    [
        (36, 50, 0, 0, 4, 3, 1), (92, 50, 0x10, 9, 5, 0, 2), (148, 50, 0, 0, 6, 1, 3), (204, 50, 0x20, 8, 7, 2, 0),
        (36, 102, 0x10, 0xA, 0, 7, 5), (92, 102, 0x10, 0xB, 1, 4, 6), (148, 102, 0, 0, 2, 5, 7), (204, 102, 0, 0, 3, 6, 4),
    ];

    private enum Phase { FadeIn, Menu, FadeOut }

    private readonly JusGame _game;
    private readonly TileBackground _bg2, _bg3;
    private readonly List<PaletteAnimation> _bgAnims;
    private readonly SpriteActor[] _buttons = new SpriteActor[8], _labels = new SpriteActor[8];
    /// <summary>The on-screen back button: widget 0x510000 from Common/button.aar, record 0x02160030
    /// {x 255, y 191, resource 0x510000}, touch box (−48, −16)–(0, 0) around that anchor, B bound to it
    /// (key 0x20); its handler 0x02155C00 is the B path (SE 0x78/1, result 8).</summary>
    private readonly SpriteActor _back;
    public const int BackX = 255, BackY = 191;

    /// <summary>Galaxy objects 0x520000–0x520003 (FUN_02155334, bank 0x520000, draw priority 0xE0) as
    /// children of a parent node on the top_bg00 map; their offsets (20.12) from TopMenu_Add.</summary>
    private static readonly (int X, int Y)[] GalaxyOffsets = [(0x104000, 0xB8000), (0x9F000, 0xEB000), (0x100000, 0x60000), (0xC0000, 0x48000)];
    private readonly SpriteActor[] _galaxy = new SpriteActor[4];
    private readonly List<PaletteAnimation> _galaxyGlow;
    private int _orbit = 0x2000;                // work +0x80 (TopMenu_Add: piVar6[0x20] = 0x2000)
    private readonly bool[] _unlocked = new bool[8];
    private Phase _phase = Phase.FadeIn;
    private int _cursor;                    // +0x7C
    private int _pulse;                     // focus controller time, frames

    /// <summary>Focus pulse: 1.0 → 0x111E/4096 and back, 15 frames each way (30 frames, flags 0 halve it).</summary>
    public const int PulseHalf = 15;

    public TopMenuScene(JusGame game, int cursor)
    {
        _game = game;
        var p = game.Platform;
        var res = new ResourceManager(p.Assets);
        res.Mount("topmenu/topmenu.aar");
        res.Mount("topmenu/top_button00.aar");
        var bg00 = DsigImage.Load(res, "topmenu/top_bg00.dig");
        _bg2 = new TileBackground(DsigImage.Load(res, "topmenu/top_bg01.dig"), AltmMap.Load(res, "topmenu/top_bg01.atm"));
        _bg3 = new TileBackground(bg00, AltmMap.Load(res, "topmenu/top_bg00.atm"));
        _bgAnims = PaletteAnimation.Load(bg00, res.Read("topmenu/top_bg00.bin"));
        var bank = new DstxBank(res.Read(0x500000, (byte)'@'));
        var motions = new AlmtMotionSet(res.Read(0x500000, (byte)'A'));
        uint flags = game.Globals.Save.ProgressFlags;
        for (int i = 0; i < 8; i++)
        {
            var it = Items[i];
            _unlocked[i] = it.Flag == 0 || (flags & (uint)it.Flag) != 0;
            int id = 0x50000C + (_unlocked[i] ? i : it.Alt);
            _buttons[i] = new SpriteActor(bank, motions, id) { X = it.X, Y = it.Y };
            _labels[i] = new SpriteActor(bank, motions, id + 0xC) { X = it.X, Y = it.Y + 20 };
        }
        res.Mount("topmenu/galaxy_obj.aar");                                       // nested in topmenu.aar
        var gBank = new DstxBank(res.Read(0x520000, (byte)'@'));
        var gMotions = new AlmtMotionSet(res.Read(0x520000, (byte)'A'));
        for (int i = 0; i < 4; i++)
            _galaxy[i] = new SpriteActor(gBank, gMotions, 0x520000 + i) { Alpha = i < 2 ? 0xB33 / 4096.0 : 1.0 };   // FUN_02151054(0xB33) on the first two
        _galaxyGlow = PaletteAnimation.Load(gBank.Texture, res.Read("topmenu/galaxy_obj.bin"));
        PlaceGalaxy();
        res.Mount("Common/button.aar");
        _back = new SpriteActor(new DstxBank(res.Read(0x510000, (byte)'@')), new AlmtMotionSet(res.Read(0x510000, (byte)'A')), 0x510000)
            { X = BackX, Y = BackY };
        _cursor = Math.Clamp(cursor, 0, 7);
        p.Log("TopMenu: character display (and its top_jp button), galaxy objects and the Secret/JGalaxy check are not translated yet");
        game.PlayMusic(2, 0);                                                     // FUN_020734e0(2), FUN_0207361c(2, 0)
        game.Fade.Start(FadeKind.FromBlack, 1);                                   // FUN_02073ebc(2, 1)
    }

    public bool Finished { get; private set; }
    public int Cursor => _cursor;
    public double FocusScale => _buttons[_cursor].Scale;

    public void Update()
    {
        if (Finished) return;
        foreach (var a in _bgAnims) a.Update();
        switch (_phase)
        {
            case Phase.FadeIn:
                if (_game.Fade.Step()) _phase = Phase.Menu;
                break;
            case Phase.Menu:
                HandleInput();
                break;
            case Phase.FadeOut:
                if (_game.Fade.Step())
                {
                    _game.Platform.Sound.FadeOutMusic(0);                         // FUN_020735e4
                    _game.Globals.Director.ExitCode = _cursor;                    // DAT_020afcb8 = +0x7C
                    Finished = true;
                }
                break;
        }
        Pulse();
        foreach (var s in _buttons) s.Update();
        foreach (var s in _labels) s.Update();
        _back.Update();
        _orbit += 0x1B;                                  // the galaxy parent's update callback 0x02155890
        if (_orbit > 0x10000) _orbit -= 0x10000;
        PlaceGalaxy();
        foreach (var g in _galaxy) g.Update();
        foreach (var a in _galaxyGlow) a.Update();
        Draw();
    }

    private void HandleInput()
    {
        var input = _game.Platform.Input;
        uint trg = (uint)input.Trigger;
        var it = Items[_cursor];
        int next = _cursor;
        if ((trg & 0x3) != 0) next = it.UpDown;            // up / down
        else if ((trg & 0x8) != 0) next = it.Left;
        else if ((trg & 0x4) != 0) next = it.Right;
        if (next != _cursor) Focus(next);

        if (input.TouchTrigger && input.TouchX >= BackX - 48 && input.TouchX <= BackX && input.TouchY >= BackY - 16 && input.TouchY <= BackY)
        {
            Back();
            return;
        }
        if (input.TouchTrigger)
        {
            for (int i = 0; i < 8; i++)
            {
                // ALCollision box 0x18000 (radius 24) around each button (func 0x021B0F78)
                if (Math.Abs(input.TouchX - Items[i].X) <= 24 && Math.Abs(input.TouchY - Items[i].Y) <= 24)
                {
                    Focus(i);
                    Select();
                    return;
                }
            }
        }
        if ((trg & 0x10) != 0) Select();                  // A
        else if ((trg & 0x20) != 0) Back();               // B (widget 0x510000, key 0x20)
    }

    /// <summary>0x02155C00: the back widget (touch or B): press motion, SE 0x78/1, result 8, leave.</summary>
    private void Back()
    {
        _back.SetMotion(0x510001);                        // the widget's second motion (func_0x021b3fc4), inferred as "pressed"
        _game.Platform.Sound.PlayEffect(0x78, 1);
        _cursor = 8;
        Leave();
    }

    /// <summary>Focus in (0x02155A24) on the new item, focus out (0x02155B28) on the old one.</summary>
    private void Focus(int index)
    {
        _buttons[_cursor].Scale = 1.0;
        _cursor = index;
        _pulse = 0;
    }

    private void Select()
    {
        if (!_unlocked[_cursor])
        {
            _game.Platform.Sound.PlayEffect(0x78, 2);     // 0x02155C54: locked
            return;
        }
        _game.Platform.Sound.PlayEffect(0x78, 0);         // 0x02155B94
        Leave();
    }

    /// <summary>FUN_02155bb8: fade to black, then the cleanup task 0x0215512C.</summary>
    private void Leave()
    {
        _game.Fade.Start(FadeKind.ToBlack, 1);
        _phase = Phase.FadeOut;
    }

    private void Pulse()
    {
        if (_cursor > 7) return;
        _pulse++;
        // jus_TagIPCT::vfunc_22 with flags 0: ping-pong over the halved duration; time runs 1..15,
        // then 14..0, evaluated after each step with the linear 'LI' curve.
        int t = _pulse % (2 * PulseHalf);
        int frame = t <= PulseHalf ? t : 2 * PulseHalf - t;
        _buttons[_cursor].Scale = LinearInterpolator.Vector(0x1000, 0x111E, frame, 0, PulseHalf) / 4096.0;
    }

    /// <summary>The galaxy parent's position, 0x02155890 (single-precision soft-float, CodeWarrior
    /// float→int truncates): θ = trunc(float(2·counter)·π / 65536 · 4096) (20.12 radians),
    /// y = FX_Mul(100, cos θ) − 96 (FUN_02009838 = cos), x = trunc(float(FX_Mul(−100, sin θ))·0.6) − 64
    /// (FUN_02009C54 = sin). (Corrected 2026-11-10: the two were swapped at first.)</summary>
    public static (int X, int Y) GalaxyParent(int counter)
    {
        int theta = LinearInterpolator.AngleToRadians(counter);
        int y = LinearInterpolator.FxMul(100 << 12, LinearInterpolator.CosFx(theta)) - 0x60000;
        int x = (int)((float)LinearInterpolator.FxMul(-100 << 12, LinearInterpolator.SinFx(theta)) * 0.6f) - 0x40000;
        return (x, y);
    }

    private void PlaceGalaxy()
    {
        var (px, py) = GalaxyParent(_orbit);
        for (int i = 0; i < 4; i++)
        {
            _galaxy[i].X = (px + GalaxyOffsets[i].X) >> 12;
            _galaxy[i].Y = (py + GalaxyOffsets[i].Y) >> 12;
        }
    }

    private void Draw()
    {
        var p = _game.Platform;
        // screens swapped: the main engine (menu) is on the bottom screen
        var menu = p.BottomScreen;
        menu.Clear(0xFF000000);
        _bg3.DrawAt(menu, 0, 0);
        foreach (var g in _galaxy) g.Draw(menu);          // on the top_bg00 map, under the top_bg01 frame
        _bg2.DrawAt(menu, 0, 0);
        for (int i = 0; i < 8; i++)
        {
            _buttons[i].Draw(menu);
            _labels[i].Draw(menu);
        }
        _back.Draw(menu);
        p.TopScreen.Clear(0xFF000000);
    }
}
