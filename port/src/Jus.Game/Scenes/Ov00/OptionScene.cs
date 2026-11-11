using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov00;

/// <summary>Optional host hook for the live sound settings Option changes. The original calls
/// FUN_0207336c (music volume, 0..127), FUN_020733b8 (effect volume) and FUN_0205af08 (mono: SND master
/// pan 0x40 via FUN_020566ac, stereo: reset via FUN_02056680). A host's <see cref="ISound"/> may
/// implement it; otherwise the values only go to the save.</summary>
public interface IOptionSoundSettings
{
    void SetMusicVolume(int volume);
    void SetEffectVolume(int volume);
    void SetMono(bool mono);
}

/// <summary>
/// Scene 34, Option.cpp (overlay 0): Option_Add 0x02157138, work 0xAC bytes.
///
/// Screens: FUN_02043264(1) swaps them, so the menu (main engine, display 0x0203B3E4) is on the bottom
/// touch screen and the helper window (<see cref="CommonInfo"/>, sub engine) on the top screen.
///
/// Bottom screen, back to front: BG2 info/bg (scrolled by a "Position" controller (0,0) → (256, −256),
/// 0x400 frames, flags 2 = wrap, repeating), BG1 option/option, then the sprites (BG0, by draw priority).
/// Everything under the root node [7] slides in from y = −12 over 8 frames (controller flags 0xB).
///
/// Rows (focus group 1, links up/down with wrap, 0x02158158/0x02158194), each with a focus handler at
/// +0xDC that shows a help message and binds the row's buttons to Left (8) / Right (4) (0x021B77A8):
/// - 0 Sound (0x021588B0, message 0x18): Stereo 0x021589D8 / Mono 0x02158A34 → +0x9D, sprite 0xB00001/2;
/// - 1 Music volume (0x021588F8, 0x19): − 0x02158A90 / + 0x02158B44 → +0x9E (0..6), sprite 0xB00003+n;
/// - 2 Effect volume (0x02158940, 0x1A): − 0x02158BF8 / + 0x02158CAC → +0x9F;
/// - 3 Helper (0x02158988, 0x1B): A → OptionInfoChara (0x02158D60);
/// - 4 Erase data (0x021589B0, 0x1C): A → OptionSaveDelete (0x02158DCC).
/// Volume levels map to 0..127 through ceil(i·127/6) = {0, 0x16, 0x2B, 0x40, 0x55, 0x6A, 0x7F}, the
/// table at 0x021600FC (derived; a test checks it), and back with FUN_02158750 (first level ≥ volume).
/// The cursor 0xB0000D (0xB0000E on row 3, 0xB0000F on row 4) follows the focused row (0x02158224) and
/// glows (CommonPaletteAnime kind 5 on colours 0x11–0x1F, 0x8DF, 30 steps). Focus moves play SE 0x78/3
/// (0x021B7260 with 0x30078 for the pad keys, through FUN_021582C0).
/// Back: widget 0x510000 (common/button.aar) at (256, 192), box (−48, −16)–(0, 0), key B; handler
/// FUN_02158E38: SE 0x78/1, then FUN_021586AC: if anything changed, FUN_02071E24 (save +0x8D8 bit
/// 0x100000 = mono), FUN_02071EA8 (+0x8DC music volume), FUN_02071ED8 (+0x8DD effect volume),
/// FUN_02071AD4 (+0x8DE helper), each requesting an autosave; fade to black (3, 1); cleanup 0x02157EDC:
/// exit code = +0xA4 (0 normally; 1–5 from Erase data), music faded out (FUN_020735e4).
///
/// Inferred (ALWidget focus manager, ov12): touching a row focuses it and presses it; touching a button
/// presses it; while a row is focused its Left/Right bindings press the buttons; the arrow buttons'
/// +0xA5 flag (probably hold-to-repeat) is not ported.
/// </summary>
public sealed class OptionScene : ISceneTask
{
    /// <summary>Layout from the overlay's static initializer 0x021602B0 (positions 0x02161424, x, y in
    /// pixels) and boxes 0x02161378 (x0, y0, x1, y1).</summary>
    private static readonly (int X, int Y)[] Pos =
    [
        (0x80, 0), (0x99, 0x33), (0xB8, 0x46), (0xB8, 0x59), (0x78, 0x70), (0x50, 0x7A), (0x100, 0xC0), (0x99, 0x46),
        (0x99, 0x59), (0x99, 0x7E), (0x99, 0x9C), (0x78, 0x33), (0xBA, 0x33), (0x96, 0x46), (0xC4, 0x46), (0x96, 0x59), (0xC4, 0x59),
    ];
    private static readonly (int X0, int Y0, int X1, int Y1)[] Box =
    [
        (-48, -16, 0, 0), (-80, -10, 80, 10), (-84, -16, 84, 16), (-84, -12, 84, 12), (-30, -10, 30, 10), (-16, -10, 10, 10), (-10, -10, 16, 10),
    ];
    /// <summary>Widget table 0x0216014C: {handler, position, box} for rows 0–4 and buttons 5–10.</summary>
    private static readonly (int Pos, int Box)[] Items = [(1, 1), (7, 1), (8, 1), (9, 2), (10, 3), (11, 4), (12, 4), (13, 5), (14, 6), (15, 5), (16, 6)];
    /// <summary>Sprite table 0x02160104: {resource, position, draw priority} (entry 0 is the panel 0xB00000).</summary>
    private static readonly (int Id, int Pos, int Prio)[] Sprites =
    [
        (0xB00000, 0, 0xA0), (0xB00001, 1, 0xA6), (0xB00003, 2, 0xA6), (0xB0000A, 2, 0xA5), (0xB0000B, 2, 0xA5),
        (0xB00003, 3, 0xA6), (0xB0000A, 3, 0xA5), (0xB0000B, 3, 0xA5), (0xB0000C, 4, 0xA3),
    ];

    /// <summary>The 0..127 volume of a level (table 0x021600FC = ceil(i·127/6)).</summary>
    public static int Volume(int level) => (level * 127 + 5) / 6;
    /// <summary>FUN_02158750: the first level whose volume is ≥ <paramref name="volume"/> (0 if none).</summary>
    public static int Level(int volume)
    {
        for (int i = 0; i <= 6; i++) if (volume <= Volume(i)) return i;
        return 0;
    }

    private enum Phase { FadeIn, Menu, Dim, Sub, Undim, FadeOut }

    private readonly JusGame _game;
    private readonly ResourceManager _res;
    private readonly TileBackground _bg2, _bg1;
    private readonly Stage _stage = new();
    private readonly Widget _root;                         // [7]
    private readonly SpriteWidget[] _sprites = new SpriteWidget[9];   // [10]..[18]
    private readonly Widget[] _items = new Widget[11];     // [0x17]..[0x21]
    private readonly SpriteWidget _back, _cursor;
    private readonly TextWidget _name;                     // [0x13]
    private readonly PaletteAnimation _cursorGlow;         // [0x23]
    private readonly Tween _bgScroll;
    private readonly Widget _bgNode = new();
    private readonly int?[] _keyOf = new int?[11];         // 0x021B77A8 bindings of items 5–10
    internal readonly AlftFont Font;
    internal readonly DstxBank DelBank, InfoBank;
    internal readonly AlmtMotionSet DelMotions, InfoMotions;

    private Phase _phase = Phase.FadeIn;
    private bool _locked = true;                           // 0x021B65BC until the fade-in ends (0x02157EB8)
    private int _focus;
    private int _dimLevel, _dimCounter, _dimTarget;        // blend fades 8/9 (0x02073F64, FUN_02073BE8/C10)
    private Action? _afterDim;
    private OptionSubScreen? _sub;

    private readonly bool _mono0;                          // +0x98, +0x99, +0x9A, +0x9B: the values on entry
    private readonly int _bgm0, _se0, _chara0;

    public CommonInfo Info { get; }                        // [0x22]
    /// <summary>+0x9D: mono.</summary>
    public bool Mono { get; private set; }
    /// <summary>+0x9E / +0x9F: music / effect volume level 0..6.</summary>
    public int MusicLevel { get; private set; }
    public int EffectLevel { get; private set; }
    /// <summary>+0xA0: helper character (-1 = random).</summary>
    public int Helper { get; internal set; }
    /// <summary>+0xA4: the exit code (Erase data sets 1–5).</summary>
    public int ExitCode { get; internal set; }
    public int Focus => _focus;
    public bool Finished { get; private set; }
    public OptionSubScreen? SubScreen => _sub;

    public OptionScene(JusGame game)
    {
        _game = game;
        var p = game.Platform;
        var save = game.Globals.Save;
        _res = new ResourceManager(p.Assets);
        _res.Mount("option/option.aar");
        _res.Mount("option/option_obj.aar");
        _res.Mount("option/del_info_obj.aar");
        _res.Mount("Common/button.aar");
        _res.Mount("option/info_obj.aar");
        // values on entry: progress flag 0x100000, the sound driver's volumes (read here from the save's
        // +0x8DC/+0x8DD, which the boot path FUN_02071e90 applies to the driver: inferred), +0x8DE
        _mono0 = Mono = (save.ProgressFlags & 0x100000) != 0;
        _bgm0 = MusicLevel = Level(save.Image.Data[0x8DC]);
        _se0 = EffectLevel = Level(save.Image.Data[0x8DD]);
        _chara0 = Helper = (sbyte)save.Image.Data[0x8DE];
        Info = new CommonInfo(game, 0x1E);                                   // CommonInfo_Create(0x1E, -1, 1, -1)

        _root = _stage.Add(new Widget());
        _bg1 = new TileBackground(DsigImage.Load(_res, "option/option.dig"), AltmMap.Load(_res, "option/option.atm"));
        _bg2 = new TileBackground(DsigImage.Load(_res, "info/bg.dig"), AltmMap.Load(_res, "info/bg.atm"));
        _bgScroll = _bgNode.Attach(Tween.Position(_bgNode, 0x100000, unchecked((int)0xFFF00000), 0x400, Tween.FlagWrap, repeat: true));

        var bank = new DstxBank(_res.Read(0xB00000, (byte)'@'));
        var motions = new AlmtMotionSet(_res.Read(0xB00000, (byte)'A'));
        DelBank = new DstxBank(_res.Read(0xB10000, (byte)'@'));
        DelMotions = new AlmtMotionSet(_res.Read(0xB10000, (byte)'A'));
        InfoBank = new DstxBank(_res.Read(0xB20000, (byte)'@'));
        InfoMotions = new AlmtMotionSet(_res.Read(0xB20000, (byte)'A'));
        for (int i = 0; i < 9; i++)                                          // FUN_021583DC per table entry
        {
            var s = Sprites[i];
            _sprites[i] = _root.Add(new SpriteWidget(bank, motions, s.Id) { DrawPrio = s.Prio << 12 });
            _sprites[i].SetPixelPosition(Pos[s.Pos].X, Pos[s.Pos].Y);
        }
        foreach (int a in new[] { 3, 4, 6, 7 }) ToEnd(_sprites[a]);         // [0xD], [0xE], [0x10], [0x11]: time = length
        _sprites[1].SetMotion(Mono ? 0xB00002 : 0xB00001);
        _sprites[2].SetMotion(0xB00003 + MusicLevel);
        _sprites[5].SetMotion(0xB00003 + EffectLevel);

        Font = new AlftFont(_res.Read("font/jskfont.aft"));                  // func_0x021c5f88
        _name = _root.Add(new TextWidget(new TextCanvas(Font, 0x90, 0x10) { Alignment = 2, PaletteIndex = 6 }) { DrawPrio = 0xA7000 });
        _name.SetPixelPosition(Pos[5].X, Pos[5].Y);
        SetName(Helper);

        _cursor = _root.Add(new SpriteWidget(bank, motions, 0xB0000D) { DrawPrio = 0xA4000 });   // FUN_021581D0
        _cursorGlow = new PaletteAnimation(bank.Texture, 0x11, 0xF, 5) { P16 = 0x8DF, P18 = 0, P1A = 0x1E, Dir1B = 1, Flags1C = 1 };

        _back = _stage.Add(new SpriteWidget(new DstxBank(_res.Read(0x510000, (byte)'@')), new AlmtMotionSet(_res.Read(0x510000, (byte)'A')), 0x510000)
            { DrawPrio = 0x60000, TouchBox = Box[0] });
        _back.SetPixelPosition(Pos[6].X, Pos[6].Y);
        for (int i = 0; i < 11; i++)                                         // ALWidgetImp::Create
        {
            var it = Items[i];
            _items[i] = _root.Add(new Widget { DrawPrio = (i < 5 ? 0xA9 : 0xA8) << 12, TouchBox = Box[it.Box] });
            _items[i].SetPixelPosition(Pos[it.Pos].X, Pos[it.Pos].Y);
        }

        game.PlayMusic(3, 0);                                                // FUN_020734e0(3), FUN_0207361c(3, 0)
        game.Fade.Start(FadeKind.FromBlack, 1);                              // FUN_02073ebc(2, 1)
        SetFocus(0, sound: false);                                           // 0x021B6214 on [0x14], [0x15], [0x17]
        _root.Y = unchecked((int)0xFFF40000);                                // (0, −12) → (0, 0), 8 frames, flags 0xB
        _root.Attach(new Tween(LinearInterpolator.Linear, [0, _root.Y], [0, 0], 8, 0xB, repeat: false, v => { _root.X = v[0]; _root.Y = v[1]; }));
    }

    private static void ToEnd(SpriteWidget w)
    {
        // vfunc 0xB8 with vfunc 0x98 << 12: the motion's time set to its length (shown at rest)
        for (int n = 0; n < 4096 && !w.AtEnd; n++) w.Actor.Update();
    }

    internal void SetName(int chara)
    {
        var c = _name.Canvas;
        c.Clear();
        c.Print(Info.Name(chara));                                           // func_0x021bd710 → vfunc 0x68
    }

    // ---------------------------------------------------------------- frame

    public void Update()
    {
        if (Finished) return;
        var fadeDone = _game.Fade.Step();
        switch (_phase)
        {
            case Phase.FadeIn:
                if (fadeDone) { _phase = Phase.Menu; _locked = false; }       // 0x02157EB8: 0x021B65CC
                break;
            case Phase.Menu:
                if (!_locked) HandleInput();
                break;
            case Phase.Dim:
            case Phase.Undim:
                if (StepDim()) { var a = _afterDim; _afterDim = null; a?.Invoke(); }
                break;
            case Phase.Sub:
                _sub!.Update(_game.Platform.Input);
                break;
            case Phase.FadeOut:
                if (fadeDone)                                                // cleanup 0x02157EDC
                {
                    _game.Globals.Director.ExitCode = ExitCode;              // DAT_020afcb8 = +0xA4
                    _game.Platform.Sound.FadeOutMusic(0);                    // FUN_020735e4
                    Finished = true;
                }
                break;
        }
        _bgScroll.Step();
        _stage.Update();
        _sub?.Tick();
        UpdateCursor();
        _cursorGlow.Update();
        Info.Update();
        Draw();
    }

    // ---------------------------------------------------------------- input

    private void HandleInput()
    {
        var input = _game.Platform.Input;
        uint trg = (uint)input.Trigger;
        if (input.TouchTrigger)
        {
            if (_back.Contains(input.TouchX, input.TouchY)) { Back(); return; }
            // the buttons (draw priority 0xA8) are in front of the rows (0xA9)
            for (int i = 10; i >= 0; i--)
                if (_items[i].Contains(input.TouchX, input.TouchY))
                {
                    if (i < 5) { if (i != _focus) SetFocus(i, sound: true); Press(i); }
                    else Press(i);
                    return;
                }
        }
        if ((trg & 0x20) != 0) { Back(); return; }                           // back widget bound to B
        if ((trg & 0x1) != 0) { SetFocus((_focus + 4) % 5, sound: true); return; }
        if ((trg & 0x2) != 0) { SetFocus((_focus + 1) % 5, sound: true); return; }
        for (int i = 5; i < 11; i++)
            if (_keyOf[i] is int k && (trg & (uint)k) != 0) { Press(i); return; }
        if ((trg & 0x10) != 0) Press(_focus);
    }

    /// <summary>0x021B6214(row, 1): focus a row and run its focus handler (+0xDC).</summary>
    private void SetFocus(int row, bool sound)
    {
        if (sound) _game.Platform.Sound.PlayEffect(0x78, 3);                 // 0x30078 via FUN_021582C0
        _focus = row;
        for (int i = 5; i < 11; i++) _keyOf[i] = null;                       // FUN_02158788: 0x021B77DC
        Info.Show(0x18 + row);                                               // 0x021588B0 … 0x021589B0
        if (row < 3)
        {
            _keyOf[5 + row * 2] = 8;                                         // Left
            _keyOf[6 + row * 2] = 4;                                         // Right
        }
    }

    private void Press(int item)
    {
        var snd = _game.Platform.Sound;
        switch (item)
        {
            case 3:                                                          // 0x02158D60
                snd.PlayEffect(0x78, 0);
                OpenSub(() => new InfoCharaScreen(this, _game));
                break;
            case 4:                                                          // 0x02158DCC
                snd.PlayEffect(0x78, 0);
                OpenSub(() => new SaveDeleteScreen(this, _game));
                break;
            case 5:
            case 6:                                                          // 0x021589D8 / 0x02158A34
                snd.PlayEffect(0x78, 3);
                Mono = item == 6;
                _sprites[1].SetMotion(Mono ? 0xB00002 : 0xB00001);
                (snd as IOptionSoundSettings)?.SetMono(Mono);                // 0x02073404 → FUN_0205af08
                SetFocusSilent(0);
                break;
            case 7:
            case 8:                                                          // 0x02158A90 / 0x02158B44
                snd.PlayEffect(0x78, 3);
                MusicLevel = item == 7 ? Math.Max(0, MusicLevel - 1) : Math.Min(6, MusicLevel + 1);
                (snd as IOptionSoundSettings)?.SetMusicVolume(Volume(MusicLevel));   // FUN_0207336c
                _sprites[2].SetMotion(0xB00003 + MusicLevel);
                _sprites[item == 7 ? 3 : 4].SetMotion(item == 7 ? 0xB0000A : 0xB0000B);  // time 0 + play
                SetFocusSilent(1);
                break;
            case 9:
            case 10:                                                         // 0x02158BF8 / 0x02158CAC
                snd.PlayEffect(0x78, 3);
                EffectLevel = item == 9 ? Math.Max(0, EffectLevel - 1) : Math.Min(6, EffectLevel + 1);
                (snd as IOptionSoundSettings)?.SetEffectVolume(Volume(EffectLevel)); // FUN_020733b8
                _sprites[5].SetMotion(0xB00003 + EffectLevel);
                _sprites[item == 9 ? 6 : 7].SetMotion(item == 9 ? 0xB0000A : 0xB0000B);
                SetFocusSilent(2);
                break;
        }
    }

    /// <summary>The handlers' 0x021B6214(row, 1): back to the row (its focus handler runs only when the
    /// focus changes: inferred).</summary>
    private void SetFocusSilent(int row)
    {
        if (_focus != row) SetFocus(row, sound: false);
    }

    /// <summary>FUN_02158E38: SE 0x78/1, then FUN_021586AC.</summary>
    private void Back()
    {
        _back.SetMotion(0x510001);                                           // 0x021B3FC4: pressed motion
        _game.Platform.Sound.PlayEffect(0x78, 1);
        Leave();
    }

    /// <summary>FUN_021586AC: store changed settings, fade to black, then the cleanup task.</summary>
    internal void Leave()
    {
        if (Mono != _mono0 || Helper != _chara0 || MusicLevel != _bgm0 || EffectLevel != _se0)
        {
            var save = _game.Globals.Save;
            var data = save.Image.Data;
            // FUN_02071E24(mono): bit 0x100000 of save +0x8D8
            if (Mono != ((save.ProgressFlags & 0x100000) != 0))
            {
                save.ProgressFlags = Mono ? save.ProgressFlags | 0x100000 : save.ProgressFlags & ~0x100000u;
                BitConverter.TryWriteBytes(data.AsSpan(0x8D8), save.ProgressFlags);
                save.Dirty.Add((0x8D8, 4));
                save.AutoSaveRequested = true;
            }
            SetByte(0x8DC, Volume(MusicLevel));                              // FUN_02071EA8
            SetByte(0x8DD, Volume(EffectLevel));                             // FUN_02071ED8
            SetByte(0x8DE, Helper);                                          // FUN_02071AD4
        }
        _game.Fade.Start(FadeKind.ToBlack, 1);                               // FUN_02073ebc(3, 1)
        _locked = true;                                                      // 0x021B65BC
        _phase = Phase.FadeOut;
    }

    private void SetByte(int offset, int value)
    {
        var save = _game.Globals.Save;
        if (save.Image.Data[offset] == (byte)value) return;
        save.Image.Data[offset] = (byte)value;
        save.Dirty.Add((offset, 1));
        save.AutoSaveRequested = true;
    }

    // ---------------------------------------------------------------- sub-screens

    /// <summary>0x02158D60 / 0x02158DCC: lock the menu (0x021B65D8), darken it (fade 9: layers 0x36,
    /// speed 0), then open the sub-screen.</summary>
    private void OpenSub(Func<OptionSubScreen> create)
    {
        _locked = true;
        StartDim(-8, Phase.Dim, () => { _sub = create(); _phase = Phase.Sub; });
    }

    /// <summary>FUN_021587B8 / FUN_02158820: undo the darkening (fade 8), unlock and refocus the menu.</summary>
    internal void CloseSub(Action? afterUndim = null)
    {
        StartDim(0, Phase.Undim, () =>
        {
            afterUndim?.Invoke();
            _sub = null;
            _locked = false;
            _phase = Phase.Menu;
            SetFocus(_focus, sound: false);                                  // 0x021B6214([0x14], 1)
        });
    }

    /// <summary>The main display's blend fade (0x02073F64(9 / 8, 0, 0x36)): 4 frames (+4 per frame,
    /// speed 0); level −(n)>>1 (darken) or (n − 16)>>1 (back to normal).</summary>
    private void StartDim(int target, Phase phase, Action after)
    {
        _dimTarget = target;
        _dimCounter = 0;
        _afterDim = after;
        _phase = phase;
        ApplyDim(0);
    }

    private bool StepDim()
    {
        _dimCounter += 4;
        int level = _dimCounter;
        bool done = level > 15;
        if (done) level = 16;
        ApplyDim(level);
        return done;
    }

    private void ApplyDim(int level) => _dimLevel = _dimTarget < 0 ? -level >> 1 : (level - 16) >> 1;

    /// <summary>The confirmation dialog's darkening (FUN_0215ABDC(display, 0x37, −8)): BG0 too.</summary>
    internal bool DimSprites { get; set; }
    public int DimLevel => _dimLevel;

    // ---------------------------------------------------------------- drawing

    /// <summary>0x02158224: the cursor follows the focused row; its motion depends on the row.</summary>
    private void UpdateCursor()
    {
        var it = _items[_focus];
        _cursor.X = it.X;
        _cursor.Y = it.Y;
        int id = _focus == 3 ? 0xB0000E : _focus == 4 ? 0xB0000F : 0xB0000D;
        if (_cursor.MotionId != id) _cursor.SetMotion(id);
    }

    private void Draw()
    {
        var p = _game.Platform;
        var bottom = p.BottomScreen;
        _bg2.ScrollX = -(_bgNode.X >> 12);
        _bg2.ScrollY = -(_bgNode.Y >> 12);
        _bg2.Draw(bottom);
        _bg1.DrawAt(bottom, _root.X >> 12, _root.Y >> 12);
        if (!DimSprites) Darken(bottom, _dimLevel);                          // mask 0x36: BG1, BG2, backdrop
        _stage.Draw(bottom);
        if (DimSprites) Darken(bottom, _dimLevel);                           // mask 0x37: BG0 as well
        _sub?.Draw(bottom);
        var top = p.TopScreen;
        top.Clear(0xFF000000);
        Info.Draw(top);
    }

    /// <summary>Blend mode 3 (darken) with EVY = −level, as the display's +0x8F4 field sets it.</summary>
    internal static void Darken(IScreen s, int level)
    {
        if (level >= 0) return;
        var px = s.Pixels;
        for (int i = 0; i < px.Length; i++) px[i] = Brightness.Apply(px[i], level);
    }

    internal Widget Root => _root;
}
