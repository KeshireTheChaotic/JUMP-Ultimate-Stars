using Jus.Game.Scenes;

namespace Jus.Game;

/// <summary>The game: owns the global state and the scene director and runs one frame at a time.
/// Hosts call <see cref="Frame"/> at the original refresh rate (~59.83 Hz).</summary>
public sealed class JusGame
{
    private readonly Dictionary<SceneId, Func<SceneDirector, ISceneTask>> _scenes = [];

    public JusGame(IPlatform platform, ISceneExternals? externals = null)
    {
        Platform = platform;
        Director = new SceneDirector(Globals, externals ?? new UntranslatedExternals(platform.Log),
            CreateScene, (d, arg) => new AutoSaveTask(this, arg));
        Director.SceneCreated += id => platform.Log(id is { } s
            ? $"scene {(int)s:D2} {s} (overlay {SceneTable.All[(int)s].Overlay})"
            : $"autosave (arg {Globals.Director.AutoSaveArg})");
        // jus_Scene_Update before an exit: brightness -16 on both displays, display reset (FUN_0206e064)
        Director.SceneExiting += () =>
        {
            foreach (var s in new[] { platform.TopScreen, platform.BottomScreen })
            {
                s.Brightness = -16;
                s.Clear(0xFF000000);
            }
        };
        Fade = new Engine.ScreenFade(platform);
        // the JUS game tables exported from the player's ROM (jus extract → Data/jus/arm9tables.json)
        Tables = Assets.JusTables.TryLoad(platform.Assets);
        if (Tables is null) platform.Log("JUS tables (jus/arm9tables.json) not found: re-run `jus extract`; scenes that need them use stand-ins");
        else
        {
            Scenes.Ov00.CommonInfo.SeriesCode = c => (uint)c < (uint)Tables.SeriesCodes.Length ? Tables.SeriesCodes[c] : null;
            Scenes.Ov00.CommonInfo.RandomName = Tables.CommonInfoRandom;
            Scenes.Ov00.CommonInfo.CloseName = Tables.OptionClose;
        }
        Register(SceneId.Copyright, d => new Scenes.Ov00.CopyrightScene(this));
        Register(SceneId.Title, d => new Scenes.Ov00.TitleScene(this));
        Register(SceneId.Opening, d => new Scenes.Ov00.OpeningScene(this));
        Register(SceneId.TopMenu, d => new Scenes.Ov00.TopMenuScene(this, d.D.MenuCursor));     // jus_Scene03_Create
        Register(SceneId.JGalaxy, d =>
        {
            Globals.Stage.Reset();                                                              // jus_Scene16_Create: FUN_020704a8
            return new Scenes.Ov02.JGalaxyScene(this, d.D.Params[16].Arg);
        });
        // overlay 1 (subagent translation, merged 2026-11-10; artwork still stand-in text panels)
        Register(SceneId.JGalaxyStageInfo, d => new Scenes.Ov01.JGalaxyStageInfoScene(this));                // 0x0214CD20
        Register(SceneId.DeckSelect, d => new Scenes.Ov01.DeckSelectScene(this, d.D.Params[4].Arg & 0xFF));   // jus_Scene04_Create 0x0206E884
        Register(SceneId.Result13, d => new Scenes.Ov01.ResultScene(this, d.D.Params[13].Arg & 0xFF));        // jus_Scene13_Create 0x0206EFF0
        Register(SceneId.JGalaxyResult, d => new Scenes.Ov01.JGalaxyResultScene(this));                      // 0x0214DCB0
        Register(SceneId.Result45, d => new Scenes.Ov01.ResultScene(this, 4));                               // jus_Scene45_Create 0x0207037C
        // overlay 5 (subagent translation, merged 2026-11-10; deck rules translated, editing UI a stand-in)
        Register(SceneId.DeckMake, d =>                                                                      // jus_Scene09_Create 0x0206EC18
        {
            if (d.D.Unk17 == 0) d.G.Session.ResetSlots();                                                    // FUN_0207062c
            return new Scenes.Ov05.DeckMakeScene(this, d.D.Params[9].Arg);
        });
        Register(SceneId.KomaBook, d => { d.G.Session.ResetSlots(); return new Scenes.Ov05.KomaBookScene(this); });   // jus_Scene33_Create 0x0206FCA8
        // overlay 3, J Arena (subagent translation, merged 2026-11-10; the menu, job 0, is translated, other jobs are stand-ins).
        Register(SceneId.JArena21, d => new Scenes.Ov03.JArenaScene(this, d.D.Params[21].Arg));            // jus_Scene21_Create 0x0206F3CC
        Register(SceneId.JArena26, d => new Scenes.Ov03.JArenaScene(this, d.D.Params[26].Arg & 0xFF));     // jus_Scene26_Create 0x0206F9B8
        if (Tables is { } jt)
        {
            // jus_Scene23/24/27_Create: job = byte table 0x02092424/28/2C [Arg] (exported JUS tables)
            Register(SceneId.JArena23, d => new Scenes.Ov03.JArenaScene(this, jt.JArenaJob(0, d.D.Params[23].Arg)));
            Register(SceneId.JArena24, d => new Scenes.Ov03.JArenaScene(this, jt.JArenaJob(1, d.D.Params[24].Arg)));
            Register(SceneId.JArena27, d => new Scenes.Ov03.JArenaScene(this, jt.JArenaJob(2, d.D.Params[27].Arg)));
        }
        // overlay 7, communication menus (subagent translation, merged 2026-11-10; the top menu is translated, the
        // communication pages are stand-ins behind ICommLink/NoCommLink, which finds no partner)
        var comm = new Scenes.Ov07.NoCommLink();
        Register(SceneId.CommuMenu35, d =>                                                                  // jus_Scene35_Create 0x0206FD54
        {
            if (Globals.Director.SceneChangeRequested)                                                     // FUN_0206E5F4
            {
                Globals.Director.SceneChangeRequested = false;
                d.X.ReseedRandom();                                                                        // OS_GetTick + FUN_02030F24
                Globals.Battle.Reset();                                                                    // FUN_020703D8
            }
            return Scenes.Ov07.CommuMenuScene.Create35(this, comm);
        });
        Register(SceneId.CommuMenu38, d => Scenes.Ov07.CommuMenuScene.Create38(this, comm));              // 0x0214DCA8
        Register(SceneId.CommuMenu39, d => Scenes.Ov07.CommuMenuScene.Create39(this, comm));              // 0x0214DCC4
        // overlay 0, Option and Ending (subagent translation, merged 2026-11-10; Option nearly complete, Ending's first two parts stand-ins)
        Register(SceneId.Option, d => new Scenes.Ov00.OptionScene(this));                                  // Option_Add 0x02157138 (direct)
        Register(SceneId.Ending, d => new Scenes.Ov00.EndingScene(this));                                  // Ending_Add 0x0214E860 (direct)
        // overlay 6, battle (subagent translation, merged 2026-11-10; a shell: stage, characters idle, camera, exit codes on
        // stand-in keys). Stage table 0x02092D08 from the exported JUS tables.
        Register(SceneId.Battle11, d => new Scenes.Ov06.BattleScene(this, Scenes.Ov06.BattleSetup.FromGlobals(this, 5), StageTable));
        Register(SceneId.Battle12, d => new Scenes.Ov06.BattleScene(this, Scenes.Ov06.BattleSetup.FromGlobals(this, Scenes.Ov06.BattleSetup.KindForScene12(d.D)), StageTable));
        Register(SceneId.Battle44, d => new Scenes.Ov06.BattleScene(this, Scenes.Ov06.BattleSetup.FromGlobals(this, 6), StageTable));
        // overlay 4, J Quiz (subagent translation, merged 2026-11-10; partial, see TODO.md)
        Register(SceneId.JQuiz31, d => new Scenes.Ov04.JQuizScene(this, SceneId.JQuiz31));
        Register(SceneId.JQuiz40, d => new Scenes.Ov04.JQuizScene(this, SceneId.JQuiz40));
        Register(SceneId.JQuiz18, d => new Scenes.Ov04.JQuizScene(this, SceneId.JQuiz18));
    }

    public IPlatform Platform { get; }
    /// <summary>The JUS game tables (null when the data predates them).</summary>
    public Assets.JusTables? Tables { get; }
    private Assets.IOv06StageTable? StageTable => Tables is null ? null : new Assets.Ov06JusTablesStageTable(Tables);
    /// <summary>The global screen fade (0x0214BD50).</summary>
    public Engine.ScreenFade Fade { get; private set; }
    public GameGlobals Globals { get; } = new();
    public SceneDirector Director { get; }
    public long FrameCount { get; private set; }

    /// <summary>Register a translated scene. Unregistered scenes run as <see cref="PlaceholderScene"/>.</summary>
    public void Register(SceneId id, Func<SceneDirector, ISceneTask> factory) => _scenes[id] = factory;

    /// <summary>Boot: load the save (RecordLoad, via the boot autosave/load task in FUN_0206df9c), then
    /// start the scene director.</summary>
    public void Start()
    {
        var result = Globals.Save.Load(Platform.Save);
        Platform.Log($"save: {result} (progress flags 0x{Globals.Save.ProgressFlags:X}, play {Globals.Save.PlayFrames / 60} s)");
        Director.Init();
    }

    private Engine.BgmData? _bgm;
    private int _music = -1;                 // DAT_0214bc1c: the music id last requested

    /// <summary>FUN_020734e0(id) + FUN_0207361c(id, arg): start background music. A new id is looked up in
    /// the BGM table and marked as heard in the save (FUN_02071514); the sequence then starts.</summary>
    public void PlayMusic(int id, int arg)
    {
        if (_music != id)
        {
            _music = id;
            try
            {
                _bgm ??= new Engine.BgmData(Assets.Dscp.Unpack(Platform.Assets.Read("bin/bgm.bin")));
                int index = _bgm.IndexOf(id);
                if (index >= 0) Globals.Save.MarkBgmHeard(index);
            }
            catch (IOException) { }          // no table: only the heard flag is skipped
        }
        Platform.Sound.PlayMusic(id, arg);
    }

    private bool _resetRequested;

    /// <summary>L+R+Select+Start while soft reset is allowed: FUN_0206dcec(0), run at the start of the
    /// next frame.</summary>
    public void RequestSoftReset() => _resetRequested = true;

    /// <summary>FUN_0206dcec(param): shut down communication (FUN_0208b784(1); not ported), stop all sound
    /// (FUN_02073410), switch off every BG layer on both engines (DISPCNT &amp;= ~0x1F00), then
    /// OS_ResetSystem(param) (FUN_020552d0: stops DMA, masks IRQs, reboots). The reboot clears .bss and
    /// runs the boot path again, which reloads the save from backup memory and starts at scene 0.</summary>
    private void SoftReset()
    {
        Platform.Log("soft reset (OS_ResetSystem)");
        Platform.Sound.StopAll();
        foreach (var s in new[] { Platform.TopScreen, Platform.BottomScreen }) s.Clear(0xFF000000);
        Globals.Reboot();
        _music = -1;
        Fade = new Engine.ScreenFade(Platform);
        Director.Restart();
        Start();
    }

    /// <summary>One frame: the director runs first (it is the first task the original registers),
    /// then the current scene.</summary>
    public void Frame()
    {
        if (_resetRequested)
        {
            _resetRequested = false;
            SoftReset();
        }
        Director.Update();
        Director.Current?.Update();
        FrameCount++;
    }

    private ISceneTask CreateScene(SceneDirector d, SceneId id)
    {
        if (_scenes.TryGetValue(id, out var f)) return f(d);
        Platform.TopScreen.Brightness = Platform.BottomScreen.Brightness = 0;   // placeholders draw at full brightness
        return new PlaceholderScene(this, id);
    }
}

/// <summary>Stands in for a scene that is not translated yet: shows the scene's table entry and
/// navigation parameters and lets the player finish it with any exit code, so the translated
/// director and exit functions can be walked through the real scene graph.
/// Controls: Left/Right ±1, Up/Down ±0x100, L/R ±0x10000, Y/X ±0x1000000, A = finish.</summary>
public sealed class PlaceholderScene(JusGame game, SceneId id) : ISceneTask
{
    private int _code;
    public bool Finished { get; private set; }

    public void Update()
    {
        if (Finished) return;
        var input = game.Platform.Input;
        var t = input.Trigger;
        if (t.HasFlag(PadButtons.Right)) _code += 1;
        if (t.HasFlag(PadButtons.Left)) _code -= 1;
        if (t.HasFlag(PadButtons.Up)) _code += 0x100;
        if (t.HasFlag(PadButtons.Down)) _code -= 0x100;
        if (t.HasFlag(PadButtons.R)) _code += 0x10000;
        if (t.HasFlag(PadButtons.L)) _code -= 0x10000;
        if (t.HasFlag(PadButtons.X)) _code += 0x1000000;
        if (t.HasFlag(PadButtons.Y)) _code -= 0x1000000;
        if (t.HasFlag(PadButtons.A))
        {
            game.Globals.Director.ExitCode = _code;
            Finished = true;
        }
        Draw();
    }

    private void Draw()
    {
        var info = SceneTable.All[(int)id];
        var p = game.Globals.Director.Params[(int)id];
        var top = game.Platform.TopScreen;
        top.Clear(0xFF101828);
        top.DrawText(8, 8, $"Scene {(int)id:D2}  {id}");
        top.DrawText(8, 28, $"overlay {info.Overlay}   untranslated");
        top.DrawText(8, 48, $"create 0x{info.Create:X8}");
        top.DrawText(8, 64, $"exit   0x{info.Exit:X8}");
        top.DrawText(8, 88, $"next {p.Next}  back {p.Back}  arg {p.Arg}");
        top.DrawText(8, 168, $"play {game.Globals.Save.PlayFrames / 60}s  frame {game.FrameCount}", 0xFF9AA4B2);
        var bottom = game.Platform.BottomScreen;
        bottom.Clear(0xFF0B1220);
        bottom.DrawText(8, 8, "exit code");
        bottom.DrawText(8, 28, $"{_code}  (0x{_code:X8})", 0xFFFFD166);
        bottom.DrawText(8, 60, "Left/Right +-1   Up/Down +-0x100", 0xFF9AA4B2);
        bottom.DrawText(8, 76, "L/R +-0x10000   Y/X +-0x1000000", 0xFF9AA4B2);
        bottom.DrawText(8, 100, "A: finish scene with this code");
    }
}

/// <summary>Stands in for AutoSaveLoad::AutoSave_Add (overlay 1) until it is translated: writes
/// the save and clears the save-requested flag, which lets the director create the next scene.</summary>
public sealed class AutoSaveTask(JusGame game, int arg) : ISceneTask
{
    private int _frames;
    public bool Finished { get; private set; }

    public void Update()
    {
        if (Finished) return;
        if (_frames++ == 0)
        {
            game.Platform.Save.Flush();
            game.Globals.Save.AutoSaveRequested = false;
            game.Globals.Save.Dirty.Clear();
        }
        game.Platform.BottomScreen.Clear(0xFF000000);
        game.Platform.BottomScreen.DrawText(8, 88, $"Saving... (arg {arg})");
        if (_frames >= 30) Finished = true;
    }
}
