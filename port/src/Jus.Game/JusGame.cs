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
        Register(SceneId.Copyright, d => new Scenes.Ov00.CopyrightScene(this));
        Register(SceneId.Title, d => new Scenes.Ov00.TitleScene(this));
        Register(SceneId.Opening, d => new Scenes.Ov00.OpeningScene(this));
    }

    public IPlatform Platform { get; }
    /// <summary>The global screen fade (0x0214BD50).</summary>
    public Engine.ScreenFade Fade { get; }
    public GameGlobals Globals { get; } = new();
    public SceneDirector Director { get; }
    public long FrameCount { get; private set; }

    /// <summary>Register a translated scene. Unregistered scenes run as <see cref="PlaceholderScene"/>.</summary>
    public void Register(SceneId id, Func<SceneDirector, ISceneTask> factory) => _scenes[id] = factory;

    public void Start() => Director.Init();

    private bool _resetRequested;

    /// <summary>L+R+Select+Start while soft reset is allowed (original FUN_0206dcec(0), not translated:
    /// the port restarts the scene flow at Copyright and keeps the save state).</summary>
    public void RequestSoftReset() => _resetRequested = true;

    /// <summary>One frame: the director runs first (it is the first task the original registers),
    /// then the current scene.</summary>
    public void Frame()
    {
        if (_resetRequested)
        {
            _resetRequested = false;
            Platform.Log("soft reset");
            Director.Restart();
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
