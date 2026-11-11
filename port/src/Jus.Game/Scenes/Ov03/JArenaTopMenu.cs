using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov03;

/// <summary>
/// J Arena job 0, the J Arena menu: <c>JArenaTopMenu::JATopMenu_Add</c> 0x0214D958 (JArenaTopMenu.cpp,
/// work 0x6C). Four items — Ranking tournament, J-Galaxy missions (score attack), vs. AI, training (help
/// texts 0x29–0x2C) — leading to jobs 1–4 (byte table 0x0215D444 = index + 1) and a back button.
///
/// Screens: FUN_02043264(1) swaps them, so the main engine (the menu: layers 0x0203B414, displays
/// 0x0203B404 3D / 0x0203B3E4 OBJ) is the bottom touch screen and the sub engine (the CommonInfo panel) the
/// top one.
///
/// Translated:
/// - Main BG1 = Info/bg (FUN_0214D3A8, tables 0x0215DB3C/0x0215DB34; priority 3), scrolled by the widget
///   +0x4C's update 0x0214ED44 (position (n/4, −n/4), n = +0x68 + 1 per frame); BG2 = JArena/arena_top
///   (priority 2, 512×256) in widget +0x48 with a "Position" track 0 → (256, 0), 8 → (0, 0), 'LI'.
/// - Archives (0x0215DB44): JArena/arena_top_jp.aar (0x800000), JArena/arena_top_obj.aar (0x810000),
///   Common/button.aar (0x510000), all inside JArena/JArena.aar (mounted by JArena_AddJob).
/// - Widgets (3D display unless noted; DrawPrio in brackets):
///   band 0x810000 at (128, 0) [0x81]; back button 0x510000 (OBJ display, (256, 192), [0xA0], key B, states
///   4–7 = 0x510001); four items 0x810005 + i at (184, 48 + 32·i) [0x86], each with a "Position" track
///   (344, y) → (184, y) over 8 frames ('LI'), linked in a ring (up = previous, down = next, vfunc 0x160);
///   three title sprites 0x800000 at (64, 106) [0x84/0x83/0x82], motion 2k+1, appear motion 2k
///   (FUN_02023894 at creation); the focus skin (0x0214EC20, 0x810002 [0x85], at (384, 256) until it follows
///   the focused item: 0x0214ECCC, child at (0, 1)).
/// - Appear chain: at the end of Add, group +0x28 (0x102) gets event 0x10, so arena_top slides in; its end
///   handler 0x0214E9EC posts 0x10 to the title group +0x2C and the item group +0x24: the items slide in,
///   and each item's start handler 0x0214EA7C focuses the remembered cursor (+1 = JArena +0x1D). The item
///   group's end handler 0x0214EA48 gives the group focus (input on).
/// - Focus (event 1, 0x0214ED04 → 0x0214ED1C): CommonInfo message 0x29 + item (table 0x0215D448).
/// - SE table (JArena_AddJob → 0x021B7260, played through the hook FUN_0214D1B0): Up/Down/Left/Right and
///   list touch = SE 0x78/3, A none, B 0x78/1.
/// - Decide an item (event 4): start 0x0214EAB0 = SE 0x78/0 + input lock (0x021B65BC); end 0x0214EAC8:
///   +0 = next job, +1 = item, groups unfocused, jobs 3/4 reset the battle set-up (FUN_020703D8), fade to
///   black (3, 1), then 0x0214E6EC.
/// - Back (event 4 on the button, B or touch): start 0x0214EB7C = SE 0x78/1 + lock; end 0x0214EB94: +0 =
///   0x20, fade to black, then 0x0214E6EC.
/// - 0x0214E6EC: when the fade is done, FUN_0214D28C(JArena, 0, +0, +1) (see <see cref="JArenaScene.EndJob"/>):
///   job 1 starts in the scene; jobs 2/3/4 and 0x20 leave with exit code next &lt;&lt; 16 | item &lt;&lt; 8.
/// - Fade from black (2, 1) at the end of Add; task 0x0214E6C4 steps it.
///
/// Inferred (marked in the code): the item press has no state motion, so its end handler runs the next
/// frame; input starts once the item slide has finished; the title sprites switch to their state-0 motion
/// when the appear motion ends; touch boxes are the current cell's OBJ bounding box (ALCollision 0x0215DB68
/// is built with empty data, 0x0214E81C).
/// Not translated: the four calls through DAT_020a0e18 (the engine's deferred-work hook; nothing to do
/// natively), FUN_02028920(0) at +8, key repeat.
/// </summary>
public sealed class JArenaTopMenu : IJArenaJob
{
    private enum Phase { ArenaSlide, ItemSlide, Menu, Pressing, FadeOut }

    public const int ItemX = 0xB8, ItemY0 = 0x30, ItemStep = 0x20, SlideFrames = 8, SlideOffset = 0xA0;

    private readonly JArenaScene _host;
    private readonly JusGame _game;
    private readonly Stage _stage = new();
    private const int SpritePlane = 0, ObjPlane = 1;
    private readonly TileBackground _bg, _arena;
    private readonly SpriteWidget[] _items = new SpriteWidget[4];
    private readonly SpriteWidget[] _title = new SpriteWidget[3];
    private readonly SpriteWidget _skin, _band, _back;
    private readonly JArenaInfoPanel _info;
    private Phase _phase = Phase.ArenaSlide;
    private int _slide;                 // frames of the running slide
    private int _scroll;                // +0x68
    private int _arenaX = 256 << 12;    // widget +0x48 "Position".x
    private bool _fadingIn = true;
    private int _pressed = -1;          // item being decided, or 4 = back button
    private bool _focusOn;

    /// <summary>+0: the next job (0x21 = none yet).</summary>
    public int NextJob { get; private set; } = 0x21;
    /// <summary>+1: the cursor (item index).</summary>
    public int Cursor { get; private set; }
    public bool InputEnabled => _phase == Phase.Menu;
    public JArenaInfoPanel Info => _info;

    public JArenaTopMenu(JArenaScene host)
    {
        _host = host;
        _game = host.Game;
        Cursor = host.Cursor;                                          // puVar1[1] = JArena +0x1D
        var p = _game.Platform;
        var res = new ResourceManager(p.Assets);
        res.Mount("JArena/JArena.aar");                                // JArena_AddJob: FUN_020101f4("JArena/JArena.aar")
        var bgImage = new DsigImage(JArenaScene.ReadAnyCase(res, "Info/bg.dig"));
        _bg = new TileBackground(bgImage, new AltmMap(JArenaScene.ReadAnyCase(res, "Info/bg.atm"))) { Backdrop = bgImage.Palette[0] };
        _arena = new TileBackground(DsigImage.Load(res, "JArena/arena_top.dig"), AltmMap.Load(res, "JArena/arena_top.atm"));
        res.Mount("JArena/arena_top_jp.aar");
        res.Mount("JArena/arena_top_obj.aar");
        res.Mount("Common/button.aar");
        var jpBank = new DstxBank(res.Read(0x800000, (byte)'@'));
        var jpMotions = new AlmtMotionSet(res.Read(0x800000, (byte)'A'));
        var objBank = new DstxBank(res.Read(0x810000, (byte)'@'));
        var objMotions = new AlmtMotionSet(res.Read(0x810000, (byte)'A'));

        // back button: ALWidgetImp::Create(root, display 0x0203B3E4, 0x510000, 0, 0xA0, (0x100, 0xC0))
        _back = _stage.Add(new SpriteWidget(new DstxBank(res.Read(0x510000, (byte)'@')), new AlmtMotionSet(res.Read(0x510000, (byte)'A')), 0x510000)
            { Layer = ObjPlane, DrawPrio = 0xA0 << 12 });
        _back.SetPixelPosition(0x100, 0xC0);
        // band: 0x810000 motion 0 at (0x80, 0), priority 0x81
        _band = _stage.Add(new SpriteWidget(objBank, objMotions, 0x810000) { Layer = SpritePlane, DrawPrio = 0x81 << 12 });
        _band.SetPixelPosition(0x80, 0);
        // items: 0x810000 motion i + 5, priority 0x86, created at (x + 0xA0, y)
        for (int i = 0; i < 4; i++)
        {
            _items[i] = _stage.Add(new SpriteWidget(objBank, objMotions, 0x810005 + i) { Layer = SpritePlane, DrawPrio = 0x86 << 12 });
            _items[i].SetPixelPosition(ItemX + SlideOffset, ItemYOf(i));
        }
        // title sprites: 0x800000 motion 2k+1 at (0x40, 0x6A), priority 0x84 − k; appear motion 2k set at once
        for (int k = 0; k < 3; k++)
        {
            _title[k] = _stage.Add(new SpriteWidget(jpBank, jpMotions, 0x800000 + 2 * k + 1) { Layer = SpritePlane, DrawPrio = (0x84 - k) << 12 });
            _title[k].SetPixelPosition(0x40, 0x6A);
            _title[k].SetMotion(0x800000 + 2 * k);                     // FUN_02023894(node, 2k | 0x800000, 0)
        }
        // focus skin 0x0214EC20: 0x810002, priority 0x85, at (0x180000, 0x100000) until a focus
        _skin = _stage.Add(new SpriteWidget(objBank, objMotions, 0x810002) { Layer = SpritePlane, DrawPrio = 0x85 << 12 });
        _skin.X = 0x180000;
        _skin.Y = 0x100000 + 0x1000;

        _info = new JArenaInfoPanel(_game, 1, 1, -1);                  // func_0x021bcf1c(1, 1, 1, -1)
        if (Cursor < 4) _info.SetMessage(0x29 + Cursor);               // FUN_0214ED1C(work, cursor): 0x0215D448[cursor]
        _game.Fade.Start(FadeKind.FromBlack, 1);                       // FUN_02073ebc(2, 1)
    }

    public static int ItemYOf(int i) => ItemY0 + ItemStep * i;

    public (int X, int Y) ItemPosition(int i) => (_items[i].X >> 12, _items[i].Y >> 12);
    public int ArenaX => _arenaX >> 12;

    public void Update()
    {
        if (_fadingIn && _game.Fade.Step()) _fadingIn = false;       // task 0x0214E6C4
        switch (_phase)
        {
            case Phase.ArenaSlide:
                // widget +0x48 motion 2: Position (256, 0) → (0, 0), keys 0 and 8, 'LI'
                _slide++;
                _arenaX = LinearInterpolator.Vector(256 << 12, 0, _slide, 0, SlideFrames);
                if (_slide >= SlideFrames)
                {
                    // 0x0214E9EC: event 0x10 to the title group and the item group
                    _phase = Phase.ItemSlide;
                    _slide = 0;
                    if (Cursor < 4) Focus(Cursor, sound: false);      // 0x0214EA7C: the item whose index == +1
                }
                break;
            case Phase.ItemSlide:
                _slide++;
                for (int i = 0; i < 4; i++)
                    _items[i].X = LinearInterpolator.Vector((ItemX + SlideOffset) << 12, ItemX << 12, _slide, 0, SlideFrames);
                if (_slide >= SlideFrames) _phase = Phase.Menu;        // 0x0214EA48: the group takes focus (inferred: input on)
                break;
            case Phase.Menu:
                HandleInput();
                break;
            case Phase.Pressing:
                // decide end handlers: items have no press motion (inferred: next frame); the button waits for 0x510001
                if (_pressed < 4 || _back.AtEnd) EndDecide();
                break;
            case Phase.FadeOut:
                if (_game.Fade.Step())
                {
                    // 0x0214E6EC
                    _host.EndJob(0, NextJob, (sbyte)Cursor);
                    return;
                }
                break;
        }
        // title sprites: appear motion, then the state-0 motion (inferred)
        for (int k = 0; k < 3; k++)
            if (_title[k].MotionId == 0x800000 + 2 * k && _title[k].AtEnd) _title[k].SetMotion(0x800000 + 2 * k + 1);
        _scroll++;                                                     // 0x0214ED44
        _stage.Update();
        FollowFocus();
        _info.Update();
        Draw();
    }

    private void HandleInput()
    {
        var input = _game.Platform.Input;
        uint trg = (uint)input.Trigger;
        if ((trg & 1) != 0) { Focus((Cursor + 3) % 4, sound: true); }        // up: link 1 = previous (ring)
        else if ((trg & 2) != 0) { Focus((Cursor + 1) % 4, sound: true); }   // down: link 2 = next (ring)

        if (input.TouchTrigger)
        {
            var hit = HitTest(input.TouchX, input.TouchY);
            if (hit == 4) { PressBack(keyHook: false); return; }
            if (hit >= 0)
            {
                if (hit != Cursor) Focus(hit, sound: false);
                PressItem();
                return;
            }
        }
        if ((trg & 0x10) != 0) PressItem();                            // A: SE table entry −1 (none)
        else if ((trg & 0x20) != 0) PressBack(keyHook: true);           // B is bound to the button (0x021B77A8)
    }

    /// <summary>Front-most widget under the stylus: 4 = back button, 0–3 = item, −1 = none.</summary>
    private int HitTest(int x, int y)
    {
        if (Contains(_back, x, y)) return 4;
        for (int i = 0; i < 4; i++) if (Contains(_items[i], x, y)) return i;
        return -1;
    }

    /// <summary>The current cell's bounding box (inferred collision, see the class notes).</summary>
    private static bool Contains(SpriteWidget w, int x, int y)
    {
        var bank = w.Actor.Bank;
        int cell = w.Cell;
        if (cell < 0 || cell >= bank.Cells.Count) return false;
        int px = x - (w.X >> 12), py = y - (w.Y >> 12);
        foreach (var part in bank.Cells[cell])
        {
            var (pw, ph) = DstxBank.Sizes[Math.Min(part.Size & 0xF, DstxBank.Sizes.Length - 1)];
            if (px >= part.X && px < part.X + pw && py >= part.Y && py < part.Y + ph) return true;
        }
        return false;
    }

    /// <summary>Focus event 1 on item <paramref name="i"/>: 0x0214ED04 → help message 0x29 + i.</summary>
    private void Focus(int i, bool sound)
    {
        if (sound) _game.Platform.Sound.PlayEffect(0x78, 3);          // SE hook: key 1/2 → 0x30078
        Cursor = i;
        _focusOn = true;
        _info.SetMessage(0x29 + i);
    }

    private void FollowFocus()
    {
        if (!_focusOn) return;
        // 0x0214ECCC: the skin follows the focused widget's position; its sprite child sits at (0, 1)
        _skin.X = _items[Cursor].X;
        _skin.Y = _items[Cursor].Y + 0x1000;
    }

    /// <summary>0x0214EAB0: SE 0x78/0, input lock.</summary>
    private void PressItem()
    {
        _game.Platform.Sound.PlayEffect(0x78, 0);
        _pressed = Cursor;
        _phase = Phase.Pressing;
    }

    /// <summary>0x0214EB7C (after the key's SE from the hook table when B was used): SE 0x78/1, input lock,
    /// press motion 0x510001 (states 4–7, 0x021B3FC4).</summary>
    private void PressBack(bool keyHook)
    {
        if (keyHook) _game.Platform.Sound.PlayEffect(0x78, 1);        // hook: key 0x20 → 0x10078
        _game.Platform.Sound.PlayEffect(0x78, 1);
        _back.SetMotion(0x510001);
        _pressed = 4;
        _phase = Phase.Pressing;
    }

    /// <summary>0x0214EAC8 (item) / 0x0214EB94 (back).</summary>
    private void EndDecide()
    {
        if (_pressed == 4)
        {
            NextJob = 0x20;
        }
        else
        {
            NextJob = _pressed + 1;                                    // byte table 0x0215D444
            Cursor = _pressed;
            if (NextJob is 3 or 4) JArenaScene.ResetBattleSetup(_game.Globals);   // FUN_020703D8
        }
        _focusOn = false;                                              // 021b6214(+0x20/+0x24, 0)
        _back.SetMotion(0x510000);
        _game.Fade.Start(FadeKind.ToBlack, 1);                         // FUN_02073ebc(3, 1)
        _phase = Phase.FadeOut;
    }

    private void Draw()
    {
        var p = _game.Platform;
        var menu = p.BottomScreen;                                     // main engine, screens swapped
        int n = _scroll >> 2;
        _bg.ScrollX = -n;                                              // position (n, −n); BG offset = −position (inferred)
        _bg.ScrollY = n;
        _bg.Draw(menu);
        _arena.DrawAt(menu, _arenaX >> 12, 0);
        _stage.Draw(menu, SpritePlane);
        _stage.Draw(menu, ObjPlane);
        _info.Draw(p.TopScreen);
    }
}
