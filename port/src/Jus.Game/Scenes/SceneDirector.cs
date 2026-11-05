namespace Jus.Game.Scenes;

/// <summary>A running scene (the original's scene task). Finished = task-&gt;+4-&gt;+0x224 != 0.
/// Before finishing, a scene stores its exit code in <see cref="DirectorWork.ExitCode"/>.</summary>
public interface ISceneTask
{
    bool Finished { get; }
    void Update();
}

/// <summary>Translation of the original scene director (0x0206E134 init, 0x0206E1DC
/// jus_Scene_Update, 0x0206E524/0x0206E574/0x0206E590/0x0206E5B0 transition helpers).
/// Overlay loading is gone: in the port every scene's code is always available, so the
/// overlay ids are kept only as information (<see cref="CurrentOverlay"/>).</summary>
public sealed class SceneDirector
{
    private readonly Func<SceneDirector, SceneId, ISceneTask> _createScene;
    private readonly Func<SceneDirector, int, ISceneTask> _createAutoSave;

    public SceneDirector(GameGlobals globals, ISceneExternals externals,
        Func<SceneDirector, SceneId, ISceneTask> createScene,
        Func<SceneDirector, int, ISceneTask> createAutoSave)
    {
        G = globals;
        X = externals;
        _createScene = createScene;
        _createAutoSave = createAutoSave;
        Exits = new SceneExits(this);
    }

    public GameGlobals G { get; }
    public ISceneExternals X { get; }
    public DirectorWork D => G.Director;
    public SceneExits Exits { get; }
    /// <summary>+0x04 (0x020AFCB4): the running scene task.</summary>
    public ISceneTask? Current { get; private set; }
    /// <summary>Slot-1 overlay the original would have loaded (information only).</summary>
    public int CurrentOverlay { get; private set; } = -1;
    /// <summary>Raised where the original fades both screens to black and resets the display
    /// before calling a scene's exit (0x0206E1DC: two vblank waits, brightness -16, FUN_0206e064).</summary>
    public event Action? SceneExiting;
    /// <summary>Raised after a scene or autosave task is created.</summary>
    public event Action<SceneId?>? SceneCreated;

    /// <summary>FUN_0206e134 (scene part). The original also clears the director block and all
    /// scene params first (FUN_0206df9c memsets 0x1C + 0x174 bytes) — a fresh <see cref="GameGlobals"/>.</summary>
    public void Init()
    {
        D.MenuCursor = 0;
        Current = null;
        if (!X.BootedForCommunication)
        {
            D.SceneId = 0;
        }
        else
        {
            D.MenuCursor = 2;
            RequestScene(true, 0x23, -1, -1, 0xD);
        }
    }

    /// <summary>Drop the running scene and start again at scene 0 (soft reset in the port).</summary>
    public void Restart()
    {
        Current = null;
        D.AutoSavePending = false;
        D.SceneId = 0;
    }

    /// <summary>0x0206E1DC jus_Scene_Update, run once per frame.</summary>
    public void Update()
    {
        G.Save.TickPlayTime();                                     // FUN_02070f44
        bool finished = Current is not null && Current.Finished;
        if (finished)
        {
            Current = null;
            if (!D.AutoSavePending)
            {
                SceneExiting?.Invoke();
                if (X.IsWirelessActive() && X.HasWirelessError())
                {
                    D.SceneId = 0x2A;
                    return;
                }
                if (D.SceneId == 0xE && D.Params[0xE].Back == 0x10)
                {
                    D.AutoSaveArg = 0;
                    D.AutoSavePending = true;
                }
                Exits.Run(D.SceneId, D.ExitCode);
            }
        }
        if (Current is null)
        {
            X.BeforeSceneCreate();                                 // only when slot 2 = ov10, which is always
            if (G.Save.AutoSaveRequested && D.AutoSavePending)
            {
                CurrentOverlay = 1;                                // jus_Overlay_SelectScene(1): AutoSaveLoad is in ov01
                Current = _createAutoSave(this, D.AutoSaveArg);
                SceneCreated?.Invoke(null);
            }
            else
            {
                D.AutoSavePending = false;
                var info = SceneTable.All[D.SceneId];
                if (info.Overlay >= 0) CurrentOverlay = info.Overlay;
                Current = _createScene(this, info.Id);
                D.SceneChangeRequested = false;
                SceneCreated?.Invoke(info.Id);
            }
        }
    }

    /// <summary>FUN_0206e524(go, scene, next, back, arg): set a scene's navigation parameters
    /// (-1 keeps a field) and, when <paramref name="go"/>, make it the next scene.</summary>
    public void RequestScene(bool go, int scene, int next, int back, int arg)
    {
        ref var p = ref D.Params[scene];
        if (back != -1) p.Back = (sbyte)back;
        if (next != -1) p.Next = (sbyte)next;
        p.Arg = arg;
        if (go)
        {
            D.SceneChangeRequested = true;
            D.SceneId = scene;
        }
    }

    /// <summary>FUN_0206e574(scene, arg): autosave (with arg), then go to scene.</summary>
    public void AutoSaveThen(int scene, int arg)
    {
        D.SceneId = scene;
        D.AutoSaveArg = arg;
        D.AutoSavePending = true;
    }

    /// <summary>FUN_0206e590(params, arg): go to the scene's Next target after an autosave.</summary>
    public void GoNextWithAutoSave(int fromScene, int arg)
    {
        D.SceneId = D.Params[fromScene].Next;
        D.AutoSaveArg = arg;
        D.AutoSavePending = true;
    }

    /// <summary>FUN_0206e5b0(params, arg): go to the scene's Back target after an autosave.</summary>
    public void GoBackWithAutoSave(int fromScene, int arg)
    {
        D.SceneId = D.Params[fromScene].Back;
        D.AutoSaveArg = arg;
        D.AutoSavePending = true;
    }
}
