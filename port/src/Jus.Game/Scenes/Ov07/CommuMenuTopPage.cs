using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov07;

/// <summary>
/// CommuMenu page 1, CommuMenuTop.cpp (overlay 7): CommuMenuTop_Add, Thumb 0x0214E150 (work 0xB0), its
/// tasks 0x0214ED54 (wait for the fade, enable input) and 0x0214EF7C (start-up), the cleanup 0x0214ED70
/// and the widget callbacks. The communication menu that TopMenu's "Communication" item leads to.
///
/// Screens are swapped (FUN_02150678(0x40, 0x20, 0x6000, 1) → FUN_02043264(1)): everything below is on
/// the bottom touch screen; the top screen shows CommonInfo (ov12 CommonInfo_Create(9, 0, 1, −1)).
///
/// Layout (all from CommuMenuTop_Add):
/// - BG3: CMMenuCmn_BaseBG_Create 0x021509AC: info/bg.dig/.atm with the palette Commu/com_bg.ncl, moved
///   by its widget's update 0x0215095C (counter +1 per frame, position (c>>2, −(c>>2)) px).
/// - BG2: Commu/top_right.atm/.dig (FUN_02150F80), attached to widget +0x58 inside the right container.
/// - Archives (Commu/commu_pack.aar, CMMenuCmn_PackArc_InitLoad 0x02150D44): Common/button.aar,
///   Commu/top_obj_3d.aar (group 0x810000), Commu/top_left_obj_3d.aar (0x818000).
/// - Title sprite 0x810000 at (128, 0), priority 0x70 (FUN_02150B7C).
/// - Back button 0x510000 at (256, 192) on the 2D display, box (−48, −16)–(0, 0), key B (FUN_02150BDC);
///   handler 0x0214F834: SE 0x78/1, leave (the exit code stays 0).
/// - Left container +0x2C (priority 0x14): motion 3 slides it in from x = −80 (frames 8–16, 'LI'),
///   motion 4 = in place. Child +0x48: the left column art, sprite 0x818000 cell 2 at (0, 96),
///   priority 0x88; it shows cell (id − 4) while left item id 4/5/6 has the focus, cell 2 otherwise
///   (FUN_0214F9DC). Three invisible focus/touch widgets, ids 4–6 (table 0x02169564).
/// - Right container +0x30 (priority 0xA): motion 1 slides it in from x = 448 (8 frames, 'LI'),
///   motion 2 = in place. Two panels at (92, 32): +0x34 ids 8–12 (5 items at (72, 16 + 27i)) and
///   +0x38 ids 13–15 (3 items at (72, 43 + 27i)); item art 0x810000 | (i + 4) (panel 1) or
///   0x810000 | (i + 10) (panel 2), priority 0x80, with a marker sprite (panel 1: cell 1 on every
///   item, panel 2: cell 2 on items 0 and 2, table 0x02168A1C) at (58, 0), priority 0x7E.
///   Item motions (FUN_0214F4C4, p = i for panel 1, i + 1 for panel 2): 5 = slide in from x + 164
///   (frames 2p + 4 → 2p + 12, 'LI'), 6 = shown, 7 = slide out (frames 0 → 8, hidden at 8), 8 = hidden.
/// - Arrow +0x7C: sprite 0x810003 (priority 0x70), moved next to the focused left item.
/// - Focus cursor: the global ALWidget focus decoration (DAT_021D5154, draw callbacks 0x0214F8C0 /
///   0x0214F970): a sprite sized to the focused widget's box (FUN_0214F908: shape → motion, table
///   0x02168A2C), its palette colours 0x21–0x23 glowing (CommonPaletteAnime kind 5 to 0x8DF, 30 steps).
///
/// Behaviour:
/// - Item locks: no usable deck (+0xAB = FUN_021517F4 false) shows alternate art on ids 8, 9, 11 (cells
///   0x10, 0x11, 0x12) and 13 (0x13); choosing them buzzes (SE 0x78/2) and shows CommonWindow message
///   0x50 (FUN_0214F814 / 0x0214EF08). Id 12 needs progress flag 0x20 (+0xAC; cell 9, SE 0x78/2 only).
/// - Focus on a left item (0x0214FA3C) opens its panel (id 4 → panel 1, id 5 → panel 2, id 6 → none),
///   closing the other one first (state +0xA4..+0xA7, tasks 0x0215054C / 0x021505A0; a pad trigger
///   0x3C finishes the animations at once, 0x021503D0); SE 0x78/3 on a move.
/// - A on left 4/5 (0x0214FD04) moves the focus into the panel; A on left 6: SE 0x78/0, exit code 1.
///   B in a panel (0x021503B0 / 0x021503C0) returns to left 4 / 5. Up/down follow the links
///   (FUN_0214F70C / FUN_0214F748): cyclic in each column.
/// - Item handlers (table at 0x02169504 by id; 0x0215022C): 8 → page 2, 9 → exit 6, 10 → page 6,
///   11 → exit 7, 12 → page 0xB, 13 → WFC connection then page 0xE, 14 → page 0x13, 15 → save (message
///   0x10) and exit 0xD. Pages get +0x14 = id − 7 (FUN_0214FA20) so they can return to the item.
/// - Leaving (FUN_0214F7DC → 0x0214ED70): 4 frames, fade to black (FUN_02073EBC(3, 1)), music fade
///   (FUN_020735E4).
///
/// Stand-ins (labelled): CommonInfo's character and text on the top screen (only info/bg is drawn) and
/// CommonWindow's message box (a debug text box that closes on A/B/touch); the focus cursor is drawn
/// at the focused widget's position (inferred). Touch = focus + decide (inferred from the collision
/// handlers, which react to event 0x80011000 with flag 4). Saving (RecordSave) for item 15 is not
/// translated.
/// </summary>
public sealed class CommuMenuTopPage : ISceneTask
{
    /// <summary>Left items, table 0x02169564 (0x1C bytes each): position, arrow position (+8/+0xC),
    /// box shape (+0x18), up link (+0x19), down link (+0x1A).</summary>
    private static readonly (int X, int Y, int ArrowX, int ArrowY, int Shape, int Up, int Down)[] LeftItems =
        [(0x25, 0x35, 0x52, 0x39, 1, 6, 5), (0x25, 0x6A, 0x52, 0x6F, 1, 4, 6), (0x24, 0xA0, 0, 0x180, 2, 5, 4)];

    /// <summary>Box shapes, filled by the overlay's static initializer 0x02168BEC (FUN_021502EC).</summary>
    private static readonly (int X0, int Y0, int X1, int Y1)[] Shapes =
        [(-48, -16, 0, 0), (-34, -25, 33, 25), (-21, -19, 21, 20), (-68, -12, 68, 12)];

    /// <summary>Focus cursor motion per shape, table 0x02168A2C (0 = none).</summary>
    private static readonly int[] CursorMotions = [0, 0x81000E, 0x81000F, 0x81000D];

    /// <summary>Panel 2 items with a marker sprite, bytes at 0x02168A1C.</summary>
    private static readonly bool[] Panel2Marker = [true, false, true];

    private enum Phase { Starting, Menu, Message, Leaving }

    private readonly JusGame _game;
    private readonly CommuMenuScene _menu;
    private readonly Stage _stage = new();
    private readonly TileBackground _baseBg, _topRight, _infoBg;
    private int _baseCounter;                                  // BaseBG work +4
    private readonly Widget _left, _right;                     // +0x2C, +0x30
    private readonly RecordedMotionPlayer _leftMotion, _rightMotion;
    private readonly SpriteWidget _leftArt, _arrow, _back, _cursor, _title;
    private readonly Dictionary<int, Widget> _byId = [];        // ids 4–6, 8–15
    private readonly RecordedMotionPlayer[][] _panelItems = new RecordedMotionPlayer[2][];
    private readonly PaletteAnimation _cursorGlow;

    private Phase _phase = Phase.Starting;
    private bool _fadeDone, _inputOn;
    private readonly int _param;                               // +0x8C
    private int _focusLeft, _focusItem, _mode;                 // +0x94, +0x98, +0x9C
    private bool _startInPanel;                                // +0xAA
    private readonly bool _hasDeck, _quizLocked;               // +0xAB, +0xAC
    private bool _initial = true;                              // +0xAD
    private int _focus;                                        // the focused widget id (0 = none)
    private sbyte _closingTarget = -1, _next = -1, _closing = -1, _opening = -1;   // +0xA4..+0xA7
    private Func<bool>? _panelTask;                            // +0xA0
    private int _message = -1, _messageFrames;
    private Action? _afterMessage;
    private int _leaveWait;

    /// <summary>The item FUN_0214F784 last chose the CommonInfo text for (ids 4–15).</summary>
    public int InfoItem { get; private set; }
    public int Focus => _focus;
    public int? Message => _message < 0 ? null : _message;
    public bool PanelVisible(int panel) => _panelItems[panel - 3].Any(m => m.Widget.Visible);
    public bool Finished { get; private set; }

    public CommuMenuTopPage(JusGame game, CommuMenuScene menu, int param)
    {
        _game = game;
        _menu = menu;
        _param = param;
        var p = game.Platform;
        var res = new ResourceManager(p.Assets);
        res.Mount("Commu/commu_pack.aar");                                     // CMMenuCmn_PackArc_InitLoad

        _hasDeck = HasUsableDeck(game.Globals.Save.Image.Data);                 // FUN_021517F4 (stand-in)
        _quizLocked = (game.Globals.Save.ProgressFlags & 0x20) == 0;            // 0x020B0B38 + 0x58 = save +0x8D8
        // +0x94 / +0x98 / +0x9C from the entry item
        if (param is >= 1 and <= 5) (_focusLeft, _focusItem, _mode) = (4, param + 7, 3);
        else if (param is >= 6 and <= 8) (_focusLeft, _focusItem, _mode) = (5, param + 7, 4);
        else (_focusLeft, _focusItem, _mode) = (param == 9 ? 6 : 4, 8, 1);
        _startInPanel = param != 0;

        // BG3: CMMenuCmn_BaseBG_Create; the palette comes from Commu/com_bg.ncl (FUN_0215102C → FUN_0201710C)
        var baseImg = DsigImage.Load(res, "info/bg.dig");
        ApplyNcl(baseImg, res.Read("Commu/com_bg.ncl"));
        _baseBg = new TileBackground(baseImg, AltmMap.Load(res, "info/bg.atm"));
        _topRight = new TileBackground(DsigImage.Load(res, "Commu/top_right.dig"), AltmMap.Load(res, "Commu/top_right.atm"));
        // CommonInfo (top screen) draws info/bg on the sub engine's BG2 (stand-in: background only)
        _infoBg = new TileBackground(DsigImage.Load(res, "info/bg.dig"), AltmMap.Load(res, "info/bg.atm"));

        res.Mount("Common/button.aar");
        res.Mount("Commu/top_obj_3d.aar");
        res.Mount("Commu/top_left_obj_3d.aar");
        var bank = new DstxBank(res.Read(0x810000, (byte)'@'));
        var motions = new AlmtMotionSet(res.Read(0x810000, (byte)'A'));
        var leftBank = new DstxBank(res.Read(0x818000, (byte)'@'));
        var leftMotions = new AlmtMotionSet(res.Read(0x818000, (byte)'A'));
        SpriteWidget Sprite(DstxBank b, AlmtMotionSet m, int id, int prio) => new(b, m, id) { DrawPrio = prio << 12 };

        // the focus cursor (ALWidget focus decoration) and its glow on colours 0x21-0x23
        _cursor = _stage.Add(Sprite(bank, motions, 0x81000D, 0x10));            // priority inferred (in front)
        _cursor.Visible = false;
        _cursorGlow = new PaletteAnimation(bank.Texture, 0x21, 3, 5) { P16 = 0x8DF, P18 = 0, P1A = 0x1E, Dir1B = 1, Flags1C = 1 };

        _title = _stage.Add(Sprite(bank, motions, 0x810000, 0x70));             // FUN_02150B7C(base, 0x810000, 0)
        _title.SetPixelPosition(0x80, 0);
        _back = _stage.Add(new SpriteWidget(new DstxBank(res.Read(0x510000, (byte)'@')), new AlmtMotionSet(res.Read(0x510000, (byte)'A')), 0x510000)
            { DrawPrio = 0x70000, TouchBox = Shapes[0] });                     // FUN_02150BDC
        _back.SetPixelPosition(0x100, 0xC0);

        // left container +0x2C, motions 3 (slide in) and 4 (in place)
        _left = _stage.Add(new Widget { DrawPrio = 0x14000 });
        _leftMotion = new RecordedMotionPlayer(_left);
        _leftMotion.Add(new RecordedMotion(3, [(0, -0x50000, 0), (8, -0x50000, 0), (16, 0, 0)], [(0, true)], linear: true));
        _leftMotion.Add(new RecordedMotion(4, [(0, 0, 0)], [(0, true)], linear: false));
        _leftArt = _left.Add(Sprite(leftBank, leftMotions, 0x818002, 0x88));   // +0x48: FUN_02151538(.., 0x818000, 2, 0x88, (0, 0x60))
        _leftArt.SetPixelPosition(0, 0x60);
        for (int i = 0; i < 3; i++)
        {
            var it = LeftItems[i];
            var w = _left.Add(new Widget { TouchBox = Shapes[it.Shape] });
            w.SetPixelPosition(it.X, it.Y);
            _byId[4 + i] = w;
        }

        // right container +0x30, motions 1 (slide in from x = 448) and 2 (in place); BG2 hangs on it
        _right = _stage.Add(new Widget { DrawPrio = 0xA000 });
        _rightMotion = new RecordedMotionPlayer(_right);
        _rightMotion.Add(new RecordedMotion(1, [(0, 0x1C0000, 0), (8, 0, 0)], [(0, true)], linear: true));
        _rightMotion.Add(new RecordedMotion(2, [(0, 0, 0)], [(0, true)], linear: false));
        for (int panel = 0; panel < 2; panel++)
        {
            var container = _right.Add(new Widget());
            container.SetPixelPosition(0x5C, 0x20);
            int n = panel == 0 ? 5 : 3;
            _panelItems[panel] = new RecordedMotionPlayer[n];
            for (int i = 0; i < n; i++)
            {
                int cell = panel == 0 ? i + 4 : i + 10;
                if (panel == 0 && i == 4 && _quizLocked) cell = 9;
                else if (!_hasDeck && panel == 0 && i is 0 or 1 or 3) cell = i == 3 ? 0x12 : 0x10 + i;
                else if (!_hasDeck && panel == 1 && i == 0) cell = 0x13;
                int bx = 0x48, by = (panel == 0 ? 0x10 : 0x2B) + 0x1B * i;
                var item = container.Add(Sprite(bank, motions, 0x810000 | cell, 0x80));
                item.TouchBox = Shapes[3];
                if (panel == 0 || Panel2Marker[i])
                {
                    var marker = item.Add(Sprite(bank, motions, 0x810000 | (panel == 0 ? 1 : 2), 0x7E));
                    marker.SetPixelPosition(0x3A, 0);
                }
                var m = new RecordedMotionPlayer(item);
                int q = panel == 0 ? i : i + 1;
                int bx12 = bx << 12, by12 = by << 12, outX = (bx + 0xA4) << 12;
                m.Add(new RecordedMotion(5, [(0, outX, by12), (2 * q + 4, outX, by12), (0x14 - 2 * (4 - q), bx12, by12)], [(0, true)], linear: true));
                m.Add(new RecordedMotion(6, [(0, bx12, by12), (1, bx12, by12)], [(0, true), (1, true)], linear: false));
                m.Add(new RecordedMotion(7, [(0, bx12, by12), (8, outX, by12)], [(0, true), (8, false)], linear: true));
                m.Add(new RecordedMotion(8, [(0, outX, by12), (1, outX, by12)], [(0, false), (1, false)], linear: false));
                m.Play(8);                                                     // FUN_02150448 / FUN_02150480(p, 8)
                _panelItems[panel][i] = m;
                _byId[(panel == 0 ? 8 : 13) + i] = item;
            }
        }
        _arrow = _stage.Add(Sprite(bank, motions, 0x810003, 0x70));            // FUN_021510F0(.., 0x810000, 3, 0x70)
        _arrow.SetPixelPosition(0, 0x180);

        Info(_mode == 1 ? _focusLeft : _focusItem);                              // FUN_0214F784
        game.Fade.Start(param == 8 ? FadeKind.FromWhite : FadeKind.FromBlack, 1);  // FUN_02073EBC(+0x8C == 8 ? 0 : 2, 1)
        game.PlayMusic(5, 0);                                                   // FUN_020734E0(5), FUN_0207361C(5, 0)
        _rightMotion.Play(1);
        _leftMotion.Play(3);
        p.Log("CommuMenuTop: CommonInfo (top screen text) and CommonWindow messages are stand-ins");
    }

    /// <summary>FUN_021517F4 builds every saved deck (ComicDeck, FUN_020769CC) and accepts the first one
    /// that FUN_0207879C and FUN_02078814 pass. STAND-IN (the ComicDeck object graph is not ported): a
    /// deck (count byte at save +0xAB4, 0x5C-byte decks at +0xB04) with a flagged (0x10) battle slot.</summary>
    public static bool HasUsableDeck(byte[] save)
    {
        int count = save[0xAB4];
        for (int d = 0; d < count; d++)
            for (int s = 0; s < 16; s++)
            {
                int o = 0xB04 + d * 0x5C + s * 4;
                if (BitConverter.ToInt16(save, o) >= 0 && (save[o + 3] & 0x10) != 0) return true;
            }
        return false;
    }

    /// <summary>Commu/com_bg.ncl: "NCCL" header (0x10) and a "PALT" section whose colours start at
    /// +0x10 (0x200 bytes, 256 colours). Section layout inferred from the file.</summary>
    private static void ApplyNcl(DsigImage image, byte[] ncl)
    {
        if (ncl.Length < 0x20 || ncl[0x10] != (byte)'P') return;
        int n = Math.Min(image.Palette555.Length, (ncl.Length - 0x20) / 2);
        for (int i = 0; i < n; i++) image.Palette555[i] = BitConverter.ToUInt16(ncl, 0x20 + 2 * i);
        image.Refresh();
    }

    public void Update()
    {
        if (Finished) return;
        var input = _game.Platform.Input;
        if (!_fadeDone && _game.Fade.Step())                                    // task 0x0214ED54
        {
            _fadeDone = true;
            _inputOn = true;                                                    // func_0x021b65cc
        }
        _baseCounter++;                                                         // 0x0215095C
        _leftMotion.Step();
        _rightMotion.Step();
        foreach (var panel in _panelItems) foreach (var m in panel) m.Step();
        switch (_phase)
        {
            case Phase.Starting: StartUp(input); break;
            case Phase.Menu:
                SkipPanelAnimations(input);
                _panelTask?.Invoke();
                if (_inputOn) HandleInput(input);
                break;
            case Phase.Message:
                bool close = _messageFrames > 0
                    ? --_messageFrames == 0
                    : (input.Trigger & (PadButtons.A | PadButtons.B)) != 0 || input.TouchTrigger;
                if (close)
                {
                    _message = -1;
                    _phase = Phase.Menu;
                    _afterMessage?.Invoke();
                }
                break;
            case Phase.Leaving:
                if (_leaveWait > 0)
                {
                    if (--_leaveWait == 0) _game.Fade.Start(FadeKind.ToBlack, 1);   // after 4 frames: FUN_02073EBC(3, 1)
                }
                else if (_game.Fade.Step())
                {
                    _game.Platform.Sound.FadeOutMusic(0);                       // FUN_020735E4
                    Finished = true;
                }
                break;
        }
        _stage.Update();
        _cursorGlow.Update();
        Draw();
    }

    /// <summary>Task 0x0214EF7C: wait for the left column's slide-in (any pad trigger, or entering on an
    /// item, snaps both containers in place), then the WFC checks on a plain entry, then the focus.</summary>
    private void StartUp(InputState input)
    {
        bool done = !_leftMotion.Playing;
        if (!done && (_startInPanel || input.Trigger != 0))
        {
            _rightMotion.Play(2);
            _leftMotion.Play(4);
            done = true;
        }
        if (!done) return;
        _phase = Phase.Menu;
        if (_param == 0)
        {
            var comm = _menu.Comm;
            if (!comm.InitWiFi()) ShowMessage(0x25, null);                     // func_0x02199e58 = 0
            var save = _game.Globals.Save.Image.Data;
            if (comm.EnsureUserData(save)) ShowMessage(0x44, null);            // 0x0219BA50 → FUN_021516F0(win, 0x44)
            comm.ExportUserData(save);                                          // 0x0219BACC
        }
        // FUN_0214FDA4 enables the widgets; then the focus
        if (_mode == 1) SetFocus(_focusLeft, byUser: false);
        else
        {
            SetFocus(_mode == 3 ? 4 : 5, byUser: false);
            SetFocus(_focusItem, byUser: false);
        }
        _startInPanel = false;
        _initial = false;
    }

    private void HandleInput(InputState input)
    {
        var trg = input.Trigger;
        if (input.TouchTrigger)
        {
            var hit = _stage.HitTest(input.TouchX, input.TouchY);
            if (hit == _back) { Back(); return; }
            int id = _byId.FirstOrDefault(kv => kv.Value == hit).Key;
            if (id != 0 && (id < 8 || PanelOf(id) == CurrentPanel()))
            {
                if (id != _focus) SetFocus(id, byUser: true);
                Decide(id);
                return;
            }
        }
        if (_focus == 0) return;
        if ((trg & PadButtons.Up) != 0) { SetFocus(Link(_focus, up: true), byUser: true); return; }
        if ((trg & PadButtons.Down) != 0) { SetFocus(Link(_focus, up: false), byUser: true); return; }
        if ((trg & PadButtons.A) != 0) { Decide(_focus); return; }
        if ((trg & PadButtons.B) != 0)
        {
            // in a panel the cancel goes back to its left item (0x021503B0 / 0x021503C0: +0x4C / +0x50);
            // on the left column B is the back button's key (0x20)
            if (_focus >= 8) SetFocus(_focus <= 12 ? 4 : 5, byUser: true);
            else Back();
        }
    }

    /// <summary>The up/down links: left items from table 0x02169564, panel items cyclic
    /// ((i ± 1) mod n, CommuMenuTop_Add's FUN_0200D12C loops).</summary>
    private static int Link(int id, bool up)
    {
        if (id <= 6) return up ? LeftItems[id - 4].Up : LeftItems[id - 4].Down;
        int first = id <= 12 ? 8 : 13, n = id <= 12 ? 5 : 3, i = id - first;
        return first + (up ? (i + n - 1) % n : (i + 1) % n);
    }

    private static int PanelOf(int id) => id is >= 8 and <= 12 ? 3 : id is >= 13 and <= 15 ? 4 : -1;
    private int CurrentPanel() => _focusLeft == 4 ? 3 : _focusLeft == 5 ? 4 : -1;

    /// <summary>The focus moves to <paramref name="id"/>; its focus-in callback 0x0214FA3C runs.</summary>
    private void SetFocus(int id, bool byUser)
    {
        _focus = id;
        if (id is >= 4 and <= 6)
        {
            int oldPanel = -1, newPanel = id == 4 ? 3 : id == 5 ? 4 : -1;
            if (_focusLeft != id)
            {
                if (_focusLeft == 4) oldPanel = 3;
                if (_focusLeft == 5) oldPanel = 4;
                _focusItem = 0;
            }
            _leftArt.SetMotion(0x818000 | (id - 4));                                           // FUN_0214F9DC(new, 1)
            _focusLeft = id;
            var it = LeftItems[id - 4];
            _arrow.SetPixelPosition(it.ArrowX, it.ArrowY);
            SwitchPanel(oldPanel, newPanel);
        }
        else _focusItem = id;
        Info(id);
        if (byUser && !_initial) _game.Platform.Sound.PlayEffect(0x78, 3);
    }

    /// <summary>The panel switch in 0x0214FA3C with its state bytes +0xA4 (panel to close), +0xA5 (panel
    /// to open), +0xA6 (closing), +0xA7 (opening) and the task +0xA0.</summary>
    private void SwitchPanel(int oldPanel, int newPanel)
    {
        sbyte o = (sbyte)oldPanel, n = (sbyte)newPanel;
        if (_next == n) return;
        if (_panelTask is null) { _closingTarget = o; _next = n; }
        else if (oldPanel < 0 || _opening != o)
        {
            if (oldPanel >= 0 && _closing == o) { _next = n; return; }
            if (newPanel >= 0 && _opening == n) return;
            if (newPanel < 0 || _closing != n) { _closingTarget = o; _next = n; }
            else { oldPanel = -1; _opening = -1; _closingTarget = -1; _next = n; }
        }
        else
        {
            PlayPanel(oldPanel, 8);
            oldPanel = -1;
            _opening = -1;
            _closingTarget = -1;
            _next = n;
        }
        if (oldPanel < 0)
        {
            _panelTask = null;
            if (newPanel >= 0)
            {
                _opening = n;
                PlayPanel(newPanel, _startInPanel ? 6 : 5);
                _panelTask = WaitOpened;
            }
        }
        else
        {
            _closing = o;
            PlayPanel(oldPanel, 7);
            _panelTask = WaitClosed;
        }
    }

    /// <summary>0x0215054C: once the closing panel's items stopped, open the next one.</summary>
    private bool WaitClosed()
    {
        if (PanelPlaying(_closingTarget)) return false;
        _closing = -1;
        if (_next >= 0)
        {
            _opening = _next;
            PlayPanel(_next, 5);
            _panelTask = WaitOpened;
        }
        else _panelTask = null;
        return true;
    }

    /// <summary>0x021505A0: once the opening panel's items stopped, done.</summary>
    private bool WaitOpened()
    {
        if (PanelPlaying(_next)) return false;
        _opening = -1;
        _panelTask = null;
        return true;
    }

    /// <summary>0x021503D0: a pad trigger in 0x3C (right, left, A, B) finishes the panel animations.</summary>
    private void SkipPanelAnimations(InputState input)
    {
        if (((uint)input.Trigger & 0x3C) == 0) return;
        if (_closing < 0)
        {
            if (_opening >= 0)
            {
                PlayPanel(_next, 6);
                _opening = -1;
            }
        }
        else
        {
            PlayPanel(_closingTarget, 8);
            if (_next >= 0) PlayPanel(_next, 6);
            _closing = -1;
        }
        _panelTask = null;
    }

    private bool PanelPlaying(int panel) => panel is 3 or 4 && _panelItems[panel - 3].Any(m => m.Playing);

    /// <summary>FUN_021504B8 → FUN_02150448 / FUN_02150480: one motion on every item of a panel.</summary>
    private void PlayPanel(int panel, int motion)
    {
        if (panel is not (3 or 4)) return;
        foreach (var m in _panelItems[panel - 3]) m.Play(motion);
    }

    /// <summary>FUN_0214F784: the CommonInfo text for the focused item (tables 0x02168A20 / 0x02168A3C;
    /// id 12 while locked uses message 4). STAND-IN: only the item is remembered.</summary>
    private void Info(int id) => InfoItem = id;

    /// <summary>Decide on a focused widget: the left items' collision handler 0x0214FD04 and focus target
    /// 0x02150344, the items' handler 0x0215022C → table 0x02169504[id].</summary>
    private void Decide(int id)
    {
        switch (id)
        {
            case 4 or 5:
                // FUN_0214FD04: focus into the panel; 0x02150344 gives its last focused item (inferred:
                // the first item when there is none yet)
                SetFocus(_focusItem is >= 8 && PanelOf(_focusItem) == CurrentPanel() ? _focusItem : id == 4 ? 8 : 13, byUser: true);
                break;
            case 6:
                _game.Platform.Sound.PlayEffect(0x78, 0);
                _menu.EndWith(1);                                               // FUN_0214DD6C(menu, 1)
                Leave();
                break;
            case 8: ToPage(id, 2, needsDeck: true, clearBattle: true); break;                 // 0x0214FDCC
            case 9: ToExit(id, 6, withArg: true); break;                                       // 0x0214FEB8
            case 10: ToPage(id, 6, needsDeck: false, clearBattle: false); break;              // 0x0214FE30
            case 11: ToExit(id, 7, withArg: false); break;                                     // 0x0214FE70
            case 12:                                                                           // 0x0214FF30
                if (_quizLocked) { _game.Platform.Sound.PlayEffect(0x78, 2); break; }
                ToPage(id, 0xB, needsDeck: false, clearBattle: false);
                break;
            case 13: WiFi(); break;                                                            // 0x0214FFE8
            case 14:                                                                           // 0x0214FF88
                _game.Platform.Sound.PlayEffect(0x78, 0);
                _menu.Arg14 = id - 7;
                _menu.Arg18 = 0;                                                // FUN_0214DD8C(menu, 0)
                _menu.Page = 0x13;
                Leave();
                break;
            case 15:                                                                           // 0x021501F8
                _game.Platform.Sound.PlayEffect(0x78, 0);
                // FUN_021516F0(win, 0x10): CommonWindow message 0x10 while RecordSave runs (not translated)
                _game.Platform.Log("CommuMenuTop: RecordSave before the WFC settings is not translated");
                ShowMessage(0x10, () => { _menu.EndWith(0xD); Leave(); }, frames: 30);
                break;
        }
    }

    private bool NoDeck()
    {
        if (_hasDeck) return false;
        _game.Platform.Sound.PlayEffect(0x78, 2);                               // FUN_0214F814 → 0x0214EF08
        ShowMessage(0x50, null);
        return true;
    }

    private void ToPage(int id, int page, bool needsDeck, bool clearBattle)
    {
        if (needsDeck && NoDeck()) return;
        _game.Platform.Sound.PlayEffect(0x78, 0);
        _menu.Arg14 = id - 7;                                                   // FUN_0214DD80(menu, FUN_0214FA20(id))
        _menu.Page = page;                                                      // FUN_0214DD60
        if (clearBattle) ClearBattleFlags();
        Leave();
    }

    private void ToExit(int id, int code, bool withArg)
    {
        if (NoDeck()) return;
        _game.Platform.Sound.PlayEffect(0x78, 0);
        if (withArg) _menu.Arg14 = id - 7;
        _menu.EndWith(code);
        ClearBattleFlags();
        Leave();
    }

    /// <summary>strb 0 to 0x020AFEB0 and 0x020AFEB4 (battle setup block +0x20 / +0x24).</summary>
    private void ClearBattleFlags()
    {
        _game.Globals.Battle.Raw[0x20] = 0;
        _game.Globals.Battle.Raw[0x24] = 0;
    }

    /// <summary>0x0214FFE8: Nintendo Wi-Fi Connection.</summary>
    private void WiFi()
    {
        if (NoDeck()) return;
        _game.Platform.Sound.PlayEffect(0x78, 0);
        var comm = _menu.Comm;
        if (!comm.InitWiFi()) { ShowMessage(0x25, null); return; }             // settings erased
        switch (comm.ConnectWfc())
        {
            case WfcConnectResult.Error:
                Leave();                                                        // the switch then opens page 0x18
                break;
            case WfcConnectResult.Cancelled:
                break;                                                          // back to the menu
            case WfcConnectResult.Connected:
                comm.ExportUserData(_game.Globals.Save.Image.Data);
                _menu.Arg14 = 13 - 7;
                _menu.Page = 0xE;
                ClearBattleFlags();
                Leave();
                break;
        }
    }

    /// <summary>0x0214F834: the back button (touch or B).</summary>
    private void Back()
    {
        _back.SetMotion(0x510001);                                              // the button's pressed motion (func_0x021b3fc4)
        _game.Platform.Sound.PlayEffect(0x78, 1);
        Leave();
    }

    /// <summary>FUN_0214F7DC: input off, then the cleanup 0x0214ED70 (4 frames, fade to black).</summary>
    private void Leave()
    {
        _inputOn = false;
        _focus = 0;
        _phase = Phase.Leaving;
        _leaveWait = 4;
    }

    /// <summary>STAND-IN for CommonWindow (ov12 0x021BA49C, bin/commwin.bin) message <paramref name="id"/>:
    /// FUN_021BAC28 opens it, the task waits for FUN_021BAD2C (closed). Closes on A/B/touch (inferred), or
    /// after <paramref name="frames"/> when given.</summary>
    private void ShowMessage(int id, Action? then, int frames = 0)
    {
        _message = id;
        _messageFrames = frames;
        _afterMessage = then;
        _phase = Phase.Message;
    }

    private void Draw()
    {
        var p = _game.Platform;
        var bottom = p.BottomScreen;
        bottom.Clear(0xFF000000);
        int s = _baseCounter >> 2;
        _baseBg.ScrollX = -s;
        _baseBg.ScrollY = s;
        _baseBg.Draw(bottom);
        _topRight.ScrollX = -(_right.X >> 12);
        _topRight.ScrollY = -(_right.Y >> 12);
        _topRight.Backdrop = 0;
        DrawLayer(bottom, _topRight);
        // the focus decoration over the focused widget
        if (_inputOn && _focus != 0 && _byId.TryGetValue(_focus, out var f) && f.WorldVisible)
        {
            int shape = _focus <= 6 ? LeftItems[_focus - 4].Shape : 3;
            if (CursorMotions[shape] != 0 && _cursor.MotionId != CursorMotions[shape]) _cursor.SetMotion(CursorMotions[shape]);
            (_cursor.X, _cursor.Y) = f.WorldPosition;
            _cursor.Visible = CursorMotions[shape] != 0;
        }
        else _cursor.Visible = false;
        _stage.Draw(bottom);

        var top = p.TopScreen;
        top.Clear(0xFF000000);
        _infoBg.Draw(top);
        top.DrawText(8, 8, $"CommonInfo item {InfoItem} (stand-in)", 0xFF9AA4B2);
        if (_message >= 0)
        {
            for (int y = 140; y < 184; y++) bottom.Pixels.Slice(y * IScreen.Width + 8, 240).Fill(0xFF202838);
            bottom.DrawText(16, 150, $"CommonWindow message 0x{_message:X2}");
            bottom.DrawText(16, 166, "(stand-in)", 0xFF9AA4B2);
        }
    }

    /// <summary>A wrapping BG layer whose colour 0 is transparent (Backdrop 0 marks it).</summary>
    private static void DrawLayer(IScreen screen, TileBackground bg)
    {
        Span<uint> under = screen.Pixels.ToArray();
        bg.Draw(screen);
        var px = screen.Pixels;
        for (int i = 0; i < px.Length; i++) if (px[i] == 0) px[i] = under[i];
    }
}
