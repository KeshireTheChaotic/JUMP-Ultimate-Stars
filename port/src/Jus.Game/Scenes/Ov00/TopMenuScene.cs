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
/// Not yet: the top-screen character display (TopMenu_CharaCreate), galaxy objects 0x520000 and
/// galaxy_obj.bin, the top_jp button 0x530000, the on-screen back button art 0x510000, the
/// JGalaxy-unlock check with Secret, music 2.</summary>
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
        _cursor = Math.Clamp(cursor, 0, 7);
        p.Log("TopMenu: character display, galaxy objects, top_jp and the back-button art are not translated yet");
        p.Sound.PlayMusic(2, 0);                                                  // FUN_020734e0(2), FUN_0207361c(2, 0)
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
        else if ((trg & 0x20) != 0)                       // B (widget 0x510000, key 0x20)
        {
            _game.Platform.Sound.PlayEffect(0x78, 1);
            _cursor = 8;
            Leave();
        }
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
        int t = _pulse % (2 * PulseHalf);
        double f = t <= PulseHalf ? t / (double)PulseHalf : (2 * PulseHalf - t) / (double)PulseHalf;
        _buttons[_cursor].Scale = 1.0 + (0x111E / 4096.0 - 1.0) * f;
    }

    private void Draw()
    {
        var p = _game.Platform;
        // screens swapped: the main engine (menu) is on the bottom screen
        var menu = p.BottomScreen;
        menu.Clear(0xFF000000);
        _bg3.DrawAt(menu, 0, 0);
        _bg2.DrawAt(menu, 0, 0);
        for (int i = 0; i < 8; i++)
        {
            _buttons[i].Draw(menu);
            _labels[i].Draw(menu);
        }
        p.TopScreen.Clear(0xFF000000);
    }
}
