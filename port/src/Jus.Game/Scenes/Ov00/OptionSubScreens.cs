using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov00;

/// <summary>A panel that slides over the Option menu (display 0x0203B404). Both panels animate their
/// group node with two "Position" motions built in their create functions (FUN_02023C60/C80 with 'LI'):
/// open = (256, 0) → (0, 0) over 8 frames, close = (0, 0) → (256, 0); the end of each posts message
/// 0x10 / 0x20 to the group's handler.</summary>
public abstract class OptionSubScreen
{
    protected readonly OptionScene Option;
    protected readonly JusGame Game;
    protected readonly Stage Stage = new();
    protected readonly Widget Group;
    private Tween? _slide;
    private bool _closing;
    protected bool Locked = true;            // 0x021B65D8 until the open motion has ended

    protected OptionSubScreen(OptionScene option, JusGame game)
    {
        Option = option;
        Game = game;
        Group = Stage.Add(new Widget { X = 0x100000 });
        _slide = Group.Attach(Tween.Position(Group, 0, 0, 8, Tween.FlagWrap, repeat: false));
    }

    public bool Closing => _closing;

    /// <summary>One frame of the panel's input (only while it is unlocked).</summary>
    public void Update(InputState input)
    {
        if (!Locked && !_closing) HandleInput(input);
    }

    /// <summary>Widgets, motions and the end-of-motion messages.</summary>
    public void Tick()
    {
        Stage.Update();
        Step();
        if (_slide is { Running: false })
        {
            _slide = null;
            if (_closing) { Group.Visible = false; Closed(); }     // message 0x20
            else Locked = false;                                    // message 0x10: 0x021B65E0
        }
    }

    /// <summary>vfunc 0x148(0x20): play the close motion; input stays locked.</summary>
    protected void Close()
    {
        _closing = true;
        Locked = true;
        _slide = Group.Attach(Tween.Position(Group, 0x100000, 0, 8, Tween.FlagWrap, repeat: false));
    }

    protected virtual void Step() { }
    protected abstract void HandleInput(InputState input);
    protected abstract void Closed();
    public virtual void Draw(IScreen screen) => Stage.Draw(screen);
}

/// <summary>
/// OptionInfoChara.cpp: OptionInfoChara_Create 0x02158E74 (work 0x4C), opened from row 3 (0x02158D60 →
/// FUN_021595A8).
///
/// Entries (+0x20, count +0x18): -1 (random), 0 (Jump), then every helper owned (save +0x8EC bits
/// 1..0x29); with no helper owned the list is just 0. A last entry closes the panel.
/// - List box (0x021AE114) at (0x48, 0x28), 0x88×0x70, rows of 0x10 (FUN_02159784): the row sprite
///   0xB20000 at (0x4C, 8) (priority 0x84), the name (jskfont, palette 6, priority 0x83); the cursor
///   0xB10006 at (0x46, 8) (0x021599C4/0x02159A40, priority 0x82); frame 0xB20001 at (0x98, 6), 0x85.
/// - Focus (FUN_02159F18) → FUN_02159DE4(character, message 0x24, 0x25 for random, 0x26 for the close
///   entry, with the entry's or the window's own character): a different character starts a 16-frame
///   countdown (+0x14) after which the helper window switches character (task 0x02159E2C).
/// - A (FUN_02159F98): SE 0x78/0; a character becomes +0x1D and the name label changes; message 0x1B;
///   close. B (FUN_0215A0AC): SE 0x78/1, message 0x1B with the window's character; close.
/// - Closed (FUN_02159E9C → FUN_02158820): undo the darkening, wait for the countdown, Option +0xA0 =
///   +0x1D.
/// Stand-ins: the scroll bar (0x021AF358 / FUN_02159AA4 / FUN_02159D0C: sprites 0xB10000/2/4) is not
/// drawn; the list scrolls to keep the focused row visible and up/down stop at the ends (inferred). The
/// names of the random and close entries come from strings in the overlays (ov12 0x021D4084, ov00
/// 0x02161674) that are not in the data files; they are left empty.
/// </summary>
public sealed class InfoCharaScreen : OptionSubScreen
{
    private const int ListX = 0x48, ListY = 0x28, Rows = 7;
    private readonly List<int> _entries = [];           // +0x20
    private readonly List<Widget> _rows = [];
    private readonly SpriteWidget _cursor;
    private int _focus, _top;
    private int _chosen, _windowChara;                  // +0x1D, +0x1E
    private int _pending, _shown, _countdown, _message; // +0x1C, +0x1F, +0x14, +0x10

    public IReadOnlyList<int> Entries => _entries;
    public int Selected => _focus;
    public int Chosen => _chosen;

    public InfoCharaScreen(OptionScene option, JusGame game) : base(option, game)
    {
        var data = game.Globals.Save.Image.Data;
        _entries.Add(-1);
        _entries.Add(0);
        for (int i = 1; i < 0x2A; i++)
            if ((BitConverter.ToUInt32(data, 0x8EC + (i >> 5) * 4) & (1u << (i & 31))) != 0) _entries.Add(i);
        if (_entries.Count == 2) _entries.RemoveAt(0);
        var frame = Group.Add(new SpriteWidget(option.InfoBank, option.InfoMotions, 0xB20001) { DrawPrio = 0x85000 });
        frame.SetPixelPosition(0x98, 6);
        for (int i = 0; i <= _entries.Count; i++)
        {
            var row = Group.Add(new Widget { DrawPrio = 0xA2000, TouchBox = (0, 0, 0x88, 0x10) });
            var spr = row.Add(new SpriteWidget(option.InfoBank, option.InfoMotions, 0xB20000) { DrawPrio = 0x84000 });
            spr.SetPixelPosition(0x4C, 8);
            var text = new TextCanvas(option.Font, 0x88, 0x10) { PaletteIndex = 6 };
            if (i < _entries.Count) text.Print(option.Info.Name(_entries[i]));
            else text.Print(CommonInfo.CloseName);                                   // ov00 0x02161674
            row.Add(new TextWidget(text) { DrawPrio = 0x83000 });
            _rows.Add(row);
        }
        _cursor = Group.Add(new SpriteWidget(option.DelBank, option.DelMotions, 0xB10006) { DrawPrio = 0x82000 });
        // FUN_021595A8
        _chosen = option.Helper;
        _windowChara = option.Info.Character;
        _pending = _shown = _chosen;
        _message = _chosen == -1 ? 0x25 : 0x24;
        int sel = _entries.IndexOf(_chosen);
        _focus = sel < 0 ? 0 : sel;
        option.Info.Show(_message);
        Layout();
    }

    private void Layout()
    {
        if (_focus < _top) _top = _focus;
        if (_focus >= _top + Rows) _top = _focus - Rows + 1;
        for (int i = 0; i < _rows.Count; i++)
        {
            _rows[i].SetPixelPosition(ListX, ListY + (i - _top) * 0x10);
            _rows[i].Visible = i >= _top && i < _top + Rows;
        }
        _cursor.SetPixelPosition(ListX + 0x46, ListY + (_focus - _top) * 0x10 + 8);
    }

    protected override void HandleInput(InputState input)
    {
        uint trg = (uint)input.Trigger;
        if (input.TouchTrigger)
        {
            for (int i = 0; i < _rows.Count; i++)
                if (_rows[i].Visible && _rows[i].Contains(input.TouchX, input.TouchY)) { Focus(i); Press(); return; }
        }
        if ((trg & 0x20) != 0)                                           // FUN_0215A0AC
        {
            Game.Platform.Sound.PlayEffect(0x78, 1);
            Request(_windowChara, 0x1B);
            Close();
            return;
        }
        if ((trg & 0x1) != 0 && _focus > 0) { Game.Platform.Sound.PlayEffect(0x78, 3); Focus(_focus - 1); }
        else if ((trg & 0x2) != 0 && _focus < _rows.Count - 1) { Game.Platform.Sound.PlayEffect(0x78, 3); Focus(_focus + 1); }
        else if ((trg & 0x10) != 0) Press();
    }

    /// <summary>FUN_02159F18.</summary>
    private void Focus(int i)
    {
        _focus = i;
        Layout();
        if (i == _entries.Count) Request(_windowChara, 0x26);
        else if (_entries[i] == -1) Request(_windowChara, 0x25);
        else Request(_entries[i], 0x24);
    }

    /// <summary>FUN_02159F98.</summary>
    private void Press()
    {
        Game.Platform.Sound.PlayEffect(0x78, 0);
        if (_focus == _entries.Count) { Request(_windowChara, 0x1B); Close(); return; }
        int c = _entries[_focus];
        if (_chosen == c) Request(_windowChara, 0x1B);
        else { _chosen = c; Request(_chosen, 0x1B); }
        Option.SetName(_chosen);
        Close();
    }

    /// <summary>FUN_02159DE4(this, character, message).</summary>
    private void Request(int chara, int message)
    {
        _message = message;
        if (_pending != chara) { _pending = chara; _countdown = 0x10; }
        if (_countdown != 0 && _shown != chara) return;
        Option.Info.Show(_message);
    }

    /// <summary>Task 0x02159E2C.</summary>
    protected override void Step()
    {
        if (_countdown == 0 || --_countdown != 0 || _pending == _shown) return;
        _shown = _pending;
        Option.Info.SetCharacter(_shown);
        Option.Info.Show(_message);
    }

    /// <summary>FUN_02158820: undo the darkening, wait for the countdown (+0x14), then take the choice.</summary>
    protected override void Closed() => Option.CloseSub(() =>
    {
        while (_countdown != 0) Step();
        Option.Helper = _chosen;                                         // +0xA0 = +0x1D
    });
}

/// <summary>
/// OptionSaveDelete.cpp: OptionSaveDelete_Create 0x0215A0E4 (work 0x2C), opened from row 4 (0x02158DCC →
/// FUN_0215A8D8).
///
/// Panel 0xB10009 at (152, 96) (priority 0x82); with progress flag 0x10 clear the cover sprites
/// 0xB1000A/B/C, with 0x20 clear 0xB1000D (0x81) mark the locked rows. Six rows (table 0x021601A4:
/// {focus handler, position, box, message handler}) at x 153, y 47/70/93/116/139/160 (static initializer
/// 0x02160794), boxes (−82, −11)–(82, 10) and (−32, −11)–(32, 10) for the last; rows 0–2 are disabled
/// without flag 0x10, row 3 without flag 0x20 (vfunc 0x148(8)). The focused row shows message
/// 0x1D + row (0x0215ACD4), the last 0x23 (0x0215ACFC). The cursor 0xB10007 (0xB10008 on the last row)
/// glows like Option's.
/// A on rows 0–4 (0x0215AD9C / AD20 / AE18 / AE94 / AF10): SE 0x78/0 and FUN_0215AABC — the confirmation
/// window (CommonWindow 0x021BA49C on main BG3, messages 0x79 then 0x7A, both must be answered yes) with
/// everything darkened (FUN_0215ABDC(0x37, −8)); yes twice sets Option +0xA4 = 2 / 1 / 3 / 4 / 5 and
/// leaves Option (FUN_021586AC). The last row (0x0215AF8C, SE 0x78/0) and B (FUN_0215B008, SE 0x78/1)
/// close the panel; closed (FUN_0215AC08 → FUN_021587B8): undo the darkening, message 0x1C.
/// Stand-in: CommonWindow (ov12, bin/commwin.bin) is not ported; the confirmation is drawn as a plain
/// box with the host's debug text (A = yes, B = no). Up/down skip disabled rows (inferred).
/// </summary>
public sealed class SaveDeleteScreen : OptionSubScreen
{
    private static readonly int[] RowY = [0x2F, 0x46, 0x5D, 0x74, 0x8B, 0xA0];
    private static readonly int[] Codes = [2, 1, 3, 4, 5];
    private readonly Widget[] _rows = new Widget[6];
    private readonly bool[] _enabled = new bool[6];
    private readonly SpriteWidget _cursor;
    private readonly PaletteAnimation _glow;
    private int _focus;
    private int _confirm;                                // 0 none, else the message being asked (0x79/0x7A)

    public int Selected => _focus;
    public int ConfirmMessage => _confirm;
    public bool IsEnabled(int row) => _enabled[row];

    public SaveDeleteScreen(OptionScene option, JusGame game) : base(option, game)
    {
        uint flags = game.Globals.Save.ProgressFlags;
        var panel = Group.Add(new SpriteWidget(option.DelBank, option.DelMotions, 0xB10009) { DrawPrio = 0x82000 });
        panel.SetPixelPosition(0x98, 0x60);
        var covers = new List<int>();
        if ((flags & 0x10) == 0) covers.AddRange([0xB1000A, 0xB1000B, 0xB1000C]);
        if ((flags & 0x20) == 0) covers.Add(0xB1000D);
        foreach (int id in covers)
        {
            var c = Group.Add(new SpriteWidget(option.DelBank, option.DelMotions, id) { DrawPrio = 0x81000 });
            c.SetPixelPosition(0x98, 0x60);
        }
        for (int i = 0; i < 6; i++)
        {
            _rows[i] = Group.Add(new Widget { DrawPrio = 0xA1000, TouchBox = i < 5 ? (-82, -11, 82, 10) : (-32, -11, 32, 10) });
            _rows[i].SetPixelPosition(0x99, RowY[i]);
            _enabled[i] = i switch { < 3 => (flags & 0x10) != 0, 3 => (flags & 0x20) != 0, _ => true };
        }
        _cursor = Group.Add(new SpriteWidget(option.DelBank, option.DelMotions, 0xB10007) { DrawPrio = 0x80000 });
        _glow = new PaletteAnimation(option.DelBank.Texture, 0x11, 0xF, 5) { P16 = 0x8DF, P18 = 0, P1A = 0x1E, Dir1B = 1, Flags1C = 1 };
        _focus = Array.IndexOf(_enabled, true);                          // FUN_0215A8D8
        Focus(_focus);
    }

    private void Focus(int i)
    {
        _focus = i;
        _cursor.X = _rows[i].X;
        _cursor.Y = _rows[i].Y;
        int id = i == 5 ? 0xB10008 : 0xB10007;                           // 0x0215AA18
        if (_cursor.MotionId != id) _cursor.SetMotion(id);
        Option.Info.Show(i == 5 ? 0x23 : 0x1D + i);
    }

    private int Next(int dir)
    {
        int i = _focus;
        do i = (i + dir + 6) % 6; while (!_enabled[i]);
        return i;
    }

    protected override void HandleInput(InputState input)
    {
        uint trg = (uint)input.Trigger;
        if (_confirm != 0)
        {
            if ((trg & 0x10) != 0)                                       // yes
            {
                if (_confirm == 0x79) { _confirm = 0x7A; return; }
                _confirm = 0;
                Option.ExitCode = Codes[_focus];                         // +0xA4
                Option.Leave();
                Locked = true;
            }
            else if ((trg & 0x20) != 0)                                  // no
            {
                _confirm = 0;
                Option.DimSprites = false;                               // FUN_0215ABDC(0x36, −8)
            }
            return;
        }
        if (input.TouchTrigger)
        {
            for (int i = 0; i < 6; i++)
                if (_enabled[i] && _rows[i].Contains(input.TouchX, input.TouchY)) { if (i != _focus) Focus(i); Press(); return; }
        }
        if ((trg & 0x20) != 0)                                           // FUN_0215B008
        {
            Game.Platform.Sound.PlayEffect(0x78, 1);
            Close();
            return;
        }
        if ((trg & 0x1) != 0) { Game.Platform.Sound.PlayEffect(0x78, 3); Focus(Next(-1)); }
        else if ((trg & 0x2) != 0) { Game.Platform.Sound.PlayEffect(0x78, 3); Focus(Next(1)); }
        else if ((trg & 0x10) != 0) Press();
    }

    private void Press()
    {
        Game.Platform.Sound.PlayEffect(0x78, 0);
        if (_focus == 5) { Close(); return; }                            // 0x0215AF8C
        _confirm = 0x79;                                                 // FUN_0215AABC
        Option.DimSprites = true;                                        // FUN_0215ABDC(0x37, −8)
    }

    protected override void Step() => _glow.Update();

    protected override void Closed() => Option.CloseSub();

    public override void Draw(IScreen screen)
    {
        base.Draw(screen);
        if (_confirm == 0) return;
        // stand-in for CommonWindow (not ported)
        var px = screen.Pixels;
        for (int y = 64; y < 128; y++)
            for (int x = 24; x < 232; x++) px[y * IScreen.Width + x] = 0xFF202838;
        screen.DrawText(32, 72, $"CommonWindow message 0x{_confirm:X2}");
        screen.DrawText(32, 100, "A: yes   B: no");
    }
}
