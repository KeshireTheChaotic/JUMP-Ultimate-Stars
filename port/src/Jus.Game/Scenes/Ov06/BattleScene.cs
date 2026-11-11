using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov06;

/// <summary>Scenes 11, 12 and 44: Battle.cpp (overlay 6), Battle_Add 0x0214CD20. A first slice of the
/// battle; see BATTLE_MAP.md next to this file for the function map.
///
/// Translated:
/// <list type="bullet">
/// <item>Setup (Battle_Add): kind (+0x154), player count/local player/stage from 0x020AFE90; music choice
/// (0x020AFEB9 → 0x26, 0x020AFF25 → 0x25, else the stage table's ids); fade in from black
/// (FUN_02073EBC(2, 1)).</item>
/// <item>Stage background (BattleMapInit 0x02161CB4 → BattleMapBG_Create 0x02083FCC): stage/stage.aar,
/// stage/&lt;name&gt;.aar and .bin; three BG layers (main engine BG1–3, i.e. the top screen) with map
/// 0x400000+i (layer 1: 0x400003 for kind 7) and image 0x400100+i (FUN_02084F10), placed at the layer
/// record's (x, y) under the camera node, shown when the record's +9 is set.</item>
/// <item>Characters (Battle_CharaCreate 0x02156A38, FUN_0215F3E0/0215F578, CharaData_Create 0x02074580 →
/// FUN_02074728): each player's first battle koma in deck order, its base sprite bank / motion set
/// (resource = character base) from chr/&lt;name&gt;.aar (ChrArc.aar) and chr/&lt;name&gt;c.aar, at the stage's
/// start position (FUN_02162B60: map info +8/+0x18/+0x28) and facing (FUN_02083950).</item>
/// <item>Camera (Battle_CameraCreate 0x02151BE8, FUN_02152078, update FUN_02151E2C): follows the local
/// player's position with a quarter-step ease; world → screen = p − camera + (0x80, 0x78).</item>
/// <item>The end sequence: FUN_0214DF14 (stop) → wait 0x14 (FUN_0214DF64) → fade to black
/// (FUN_0214DF88: FUN_02073EBC(3, 1)) → FUN_0214DFB0 (code 0 and the rule's result 0 → code 4) → cleanup →
/// FUN_0214E11C: director exit code = work +0x164, music fade (FUN_0207367C(0)).</item>
/// </list>
/// Stand-ins (clearly not the original): the battle itself (no input to the characters, physics, hits,
/// HUD, rules, KO demo, pause menu); the characters play their idle motion (base + 0, inferred from TopMenu's
/// idle state 0x02156984); the bottom screen shows a label. Stand-in end keys, Select held plus:
/// A = battle over, local player won (rule result 1 → code 0); B = battle over, lost (result 0 → code 4);
/// X = pause "retry" (code 3, pause case 8); Y = pause "deck select" (code 2, cases 6/7);
/// L = pause "quit" (code 1, case 5). Which pause item is which is not read yet.</summary>
public sealed class BattleScene : ISceneTask
{
    private enum Phase { FadeIn, Battle, EndWait, FadeOut }

    /// <summary>One player's character on the field.</summary>
    public sealed class Fighter
    {
        public required Ov06Koma Koma { get; init; }
        public required int Base { get; init; }
        public required string Archive { get; init; }
        public required Ov06CharaSprite Sprite { get; init; }
        /// <summary>Position in 24.8 fixed-point pixels (physics object +0xC/+0x10).</summary>
        public int X, Y;
    }

    private readonly JusGame _game;
    private readonly BattleSetup _setup;
    private readonly List<(TileBackground Bg, int X, int Y, int Priority, int Index)> _layers = [];
    private readonly Fighter?[] _fighters;
    private Phase _phase = Phase.FadeIn;
    private int _code;                       // work +0x164
    private bool _won;                       // stand-in for the rule's result function (0x02170EB4[rule])
    private int _wait;
    private int _camX, _camY;                // camera +0x20/+0x24 (24.8)
    private readonly int _music = -1;

    public string? StageName { get; }
    public IReadOnlyList<Fighter?> Fighters => _fighters;
    public int CameraX => _camX >> 8;
    public int CameraY => _camY >> 8;
    public bool Finished { get; private set; }

    public BattleScene(JusGame game, BattleSetup setup, IOv06StageTable? stages)
    {
        _game = game;
        _setup = setup;
        var p = game.Platform;
        var res = new ResourceManager(p.Assets);
        // Battle_Add: +0x158 count, +0x15C local, +0x160 stage
        StageName = stages?.Name(setup.Stage);
        Ov06StageInfo? info = null;
        if (StageName is null)
            p.Log($"Battle: stage {setup.Stage} has no name (the arm9 stage table 0x02092D08 was not supplied); no background");
        else
        {
            res.Mount("stage/stage.aar");                                             // BattleMapBG_Create: FUN_020101f4("stage/stage.aar")
            res.Mount($"stage/{StageName}.aar");                                      // "stage/" + name + ".aar"
            info = new Ov06StageInfo(res.Read($"stage/{StageName}.bin"));            // ALStreamImp "stage/" + name + ".bin"
            for (int i = 0; i < 3; i++)
            {
                var l = info.Layers[i];
                if (l.Vram == 0) continue;                                            // +9 == 0: no layer created
                int map = 0x400000 + i;
                if (i == 0 && setup.Kind == 7) map = 0x400003;                        // BattleMapInit param_2 == 1 → param_6
                var image = Image(res, 0x400100 + i);
                if (image is null) continue;
                _layers.Add((new TileBackground(image, Ov06PackedMap.Load(res.Read(map, (byte)'F'))), l.X, l.Y, l.Priority, i + 1));
            }
            // back to front: higher BG priority first; equal priority → the higher BG number is behind
            _layers.Sort((a, b) => a.Priority != b.Priority ? b.Priority.CompareTo(a.Priority) : b.Index.CompareTo(a.Index));
        }

        var komas = Ov06KomaTable.Load(p.Assets);
        _fighters = new Fighter?[setup.PlayerCount];
        bool chrMounted = false;
        for (int i = 0; i < setup.PlayerCount; i++)
        {
            var deck = i < setup.Decks.Count ? setup.Decks[i] : null;
            if (deck is null || new Ov06Deck(deck).StartingKoma(komas) is not { } koma)
            {
                p.Log($"Battle: player {i} has no deck with a battle koma");
                continue;
            }
            int baseId = komas.BattleCharacterBase(koma.Character);
            string? name = baseId < 0 ? null : Ov06CharaArchives.FindByBase(p.Assets, baseId);
            if (name is null)
            {
                p.Log($"Battle: no character archive for koma {koma.Id} (character {koma.Character})");
                continue;
            }
            if (!chrMounted) { res.Mount("chr/ChrArc.aar"); chrMounted = true; }
            res.Mount(name);                                                          // FUN_020101f4("chr/" + name)
            try { res.Mount(name[..^4] + "c.aar"); } catch (IOException) { }         // FUN_02033bb8: only if it exists
            var bank = new DstxBank(res.Read(baseId, (byte)'@'), id => res.Read(id, (byte)'B'));
            var motions = new AlmtMotionSet(res.Read(baseId, (byte)'A'));
            var start = info?.Starts[i] ?? (0, 0);
            _fighters[i] = new Fighter
            {
                Koma = koma, Base = baseId, Archive = name,
                Sprite = new Ov06CharaSprite(bank, motions, baseId) { Flipped = info?.StartFlipped[i] ?? false },
                X = start.X, Y = start.Y,
            };
        }
        // FUN_02152078(local): the camera jumps to its target
        if (_fighters.ElementAtOrDefault(setup.LocalPlayer) is { } me) { _camX = me.X; _camY = me.Y; }

        // Battle_Add: FUN_020734e0(music) (0x020AFEB9 → 0x26, 0x020AFF25 → 0x25, else table +4); played by
        // FUN_0214D9C8 once the fade-in ends (table +6)
        if (game.Globals.Battle.Raw[0x29] != 0) _music = 0x26;
        else if (game.Globals.Stage.Raw[0x49] != 0) _music = 0x25;
        else if (stages?.Music(setup.Stage) is { } m) _music = m.Play;
        p.Log("Battle: slice only — stage, characters (idle) and camera; Select+A win, Select+B lose, Select+X retry, Select+Y deck select, Select+L quit (stand-ins)");
        game.Fade.Start(FadeKind.FromBlack, 1);                                      // FUN_02073ebc(2, 1)
        Draw();
    }

    /// <summary>FUN_02035E88(id): the image object for a resource id, from a sprite bank ('@', its texture)
    /// or a plain image ('B'). The stage's layer 1 uses DSTX 0x400100's embedded DSIG.</summary>
    private static DsigImage? Image(ResourceManager res, int id)
    {
        try { return new DstxBank(res.Read(id, (byte)'@')).Texture; } catch (FileNotFoundException) { }
        try { return new DsigImage(res.Read(id, (byte)'B')); } catch (FileNotFoundException) { }
        return null;
    }

    public void Update()
    {
        if (Finished) return;
        switch (_phase)
        {
            case Phase.FadeIn:                                                        // FUN_0214DAA4 → FUN_0214DADC
                if (_game.Fade.Step())
                {
                    if (_music >= 0) _game.PlayMusic(_music, 0);                     // FUN_0214D9C8
                    _phase = Phase.Battle;                                           // (the start demo FUN_02153108 is not translated)
                }
                break;
            case Phase.Battle:
                StandInInput();
                break;
            case Phase.EndWait:                                                       // FUN_0214DF64: wait 0x14
                if (--_wait <= 0)
                {
                    _game.Fade.Start(FadeKind.ToBlack, 1);                            // FUN_0214DF88: FUN_02073ebc(3, 1)
                    _phase = Phase.FadeOut;
                }
                break;
            case Phase.FadeOut:                                                       // FUN_0214DFB0
                if (_game.Fade.Step())
                {
                    if (_code == 0 && !_won) _code = 4;
                    _game.Globals.Director.ExitCode = _code;                          // FUN_0214E11C: DAT_020afcb8 = +0x164
                    _game.Platform.Sound.FadeOutMusic(0);                             // FUN_0207367c(0)
                    Finished = true;
                }
                break;
        }
        foreach (var f in _fighters) f?.Sprite.Update();
        CameraStep();
        Draw();
    }

    /// <summary>STAND-IN for the battle's end conditions and pause menu (see the class summary).</summary>
    private void StandInInput()
    {
        var input = _game.Platform.Input;
        if ((input.Held & PadButtons.Select) == 0) return;
        var t = input.Trigger;
        if (t.HasFlag(PadButtons.A)) End(0, won: true);
        else if (t.HasFlag(PadButtons.B)) End(0, won: false);
        else if (t.HasFlag(PadButtons.X)) End(3, false);
        else if (t.HasFlag(PadButtons.Y)) End(2, false);
        else if (t.HasFlag(PadButtons.L)) End(1, false);
    }

    /// <summary>FUN_0214DF14 with work +0x164 = <paramref name="code"/>.</summary>
    private void End(int code, bool won)
    {
        _code = code;
        _won = won;
        _wait = 0x14;
        _phase = Phase.EndWait;
    }

    /// <summary>FUN_02151E2C: +0x20/+0x24 move a quarter of the way to the target, without overshooting.</summary>
    private void CameraStep()
    {
        if (_fighters.ElementAtOrDefault(_setup.LocalPlayer) is not { } me) return;
        static int Step(int cur, int target)
        {
            int d = target - cur, next = cur + (d >> 2);
            if (d > 0 && next > target) next = target;
            if (d < 0 && next < target) next = target;
            return next;
        }
        _camX = Step(_camX, me.X);
        _camY = Step(_camY, me.Y);
    }

    /// <summary>Screen position of a world point (pixels): camera node A at (0x80 − cx, 0x78 − cy).</summary>
    public (int X, int Y) ToScreen(int wx, int wy) => (wx + 0x80 - (_camX >> 8), wy + 0x78 - (_camY >> 8));

    private void Draw()
    {
        var top = _game.Platform.TopScreen;
        // backdrop: BG palette colour 0 (inferred: layer images' palette 0 entry 0 of the farthest layer)
        uint backdrop = _layers.Count > 0 && _layers[0].Bg.Image.Palette.Length > 0 ? _layers[0].Bg.Image.Palette[0] : 0xFF000000;
        top.Clear(backdrop);
        foreach (var (bg, x, y, _, _) in _layers)
        {
            var (sx, sy) = ToScreen(x, y);
            bg.DrawAt(top, sx, sy);
        }
        // characters in front of the stage layers (inferred from their draw priority 0xA2 on the OBJ engine)
        foreach (var f in _fighters)
        {
            if (f is null) continue;
            var (sx, sy) = ToScreen(f.X >> 8, f.Y >> 8);
            f.Sprite.Draw(top, sx, sy);
        }
        if (StageName is null) top.DrawText(8, 8, "stage table not supplied", 0xFFFFD166);
        var bottom = _game.Platform.BottomScreen;
        bottom.Clear(0xFF0B1220);
        bottom.DrawText(8, 8, "Battle (slice, stand-in HUD)");
        bottom.DrawText(8, 28, $"kind {_setup.Kind}  stage {_setup.Stage} {StageName}", 0xFF9AA4B2);
        for (int i = 0; i < _fighters.Length; i++)
            bottom.DrawText(8, 48 + 14 * i, _fighters[i] is { } f ? $"P{i + 1} {f.Archive} koma {f.Koma.Id}" : $"P{i + 1} -", 0xFF9AA4B2);
        bottom.DrawText(8, 120, "Select+A win  Select+B lose", 0xFFFFD166);
        bottom.DrawText(8, 136, "Select+X retry  Y deck  L quit", 0xFFFFD166);
    }
}
