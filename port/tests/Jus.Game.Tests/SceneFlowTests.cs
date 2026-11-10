using System.Text.Json;
using Jus.Game;
using Jus.Game.Scenes;

namespace Jus.Game.Tests;

internal sealed class FakeScreen : IScreen
{
    public int Brightness { get; set; }
    private readonly uint[] _px = new uint[IScreen.Width * IScreen.Height];
    public Span<uint> Pixels => _px;
    public void Clear(uint bgra) => Array.Fill(_px, bgra);
    public void DrawText(int x, int y, string text, uint bgra = 0xFFFFFFFF) { }
}

internal sealed class FakeSave : ISaveStorage
{
    public int Flushes;
    public int Size => 0x10000;
    public void Read(int offset, Span<byte> destination) => destination.Clear();
    public void Write(int offset, ReadOnlySpan<byte> source) { }
    public void Flush() => Flushes++;
}

internal sealed class FakePlatform : IPlatform
{
    public IScreen TopScreen { get; } = new FakeScreen();
    public IScreen BottomScreen { get; } = new FakeScreen();
    public InputState Input { get; set; }
    public FakeSave SaveFile { get; } = new();
    public IAssetSource Assets { get; init; } = RomAssetsForTests.Instance;
    public RecordingSound SoundLog { get; } = new();
    public ISound Sound => SoundLog;
    public TimeSpan Clock { get; set; }
    public ISaveStorage Save => SaveFile;
    public List<string> Logs { get; } = [];
    public void Log(string message) => Logs.Add(message);
}

/// <summary>Externals with controllable answers; everything else neutral.</summary>
internal sealed class TestExternals : ISceneExternals
{
    public bool CommBoot, Wireless, WirelessError;
    public int TitleResult;
    public bool BootedForCommunication => CommBoot;
    public void ReseedRandom() { }
    public int TitleStartGame() => TitleResult;
    public bool IsWirelessActive() => Wireless;
    public bool HasWirelessError() => WirelessError;
    public void BeforeSceneCreate() { }
    public int Fun020703b8(int arg) => 0;
    public void Fun020703c8(int a, int b) { }
    public void Fun0207231c(int a) { }
    public int Fun02166ef8(int code) => 0;
    public int Fun02166f04(int code) => 0;
    public void OptionAction(int code) { }
    public void Fun0207367c(int a) { }
    public void LeaveCommunication(int kind) { }
    public int Fun02087770() => 0;
    public int Fun02087724() => 0;
    public void Fun0208779c() { }
    public void BattleBookkeeping(uint address, int arg = 0) { }
}

/// <summary>A scene that finishes on its first update with a preset exit code.</summary>
internal sealed class FinishWith(GameGlobals g, int code) : ISceneTask
{
    public bool Finished { get; private set; }
    public void Update() { g.Director.ExitCode = code; Finished = true; }
}

public sealed class SceneFlowTests
{
    private readonly FakePlatform _p = new();
    private readonly TestExternals _x = new();
    private readonly JusGame _game;
    private readonly Queue<int> _codes = new();
    private readonly List<SceneId?> _created = [];

    public SceneFlowTests()
    {
        _game = new JusGame(_p, _x);
        foreach (var s in SceneTable.All)
            _game.Register(s.Id, d => new FinishWith(d.G, _codes.Count > 0 ? _codes.Dequeue() : 0));
        _game.Director.SceneCreated += id => _created.Add(id);
    }

    /// <summary>Each scene finishes on the frame it is created; the exit runs on the next frame.</summary>
    private void Run(params int[] codes)
    {
        foreach (var c in codes) _codes.Enqueue(c);
        for (int i = 0; i < codes.Length; i++) _game.Frame();
    }

    private DirectorWork D => _game.Globals.Director;

    [Fact]
    public void BootStartsAtCopyrightThenOpeningThenTitle()
    {
        _game.Start();
        Run(0, 0, 0);    // Copyright → Opening → Title
        Assert.Equal([SceneId.Copyright, SceneId.Opening, SceneId.Title], _created);
        Assert.Equal(1u, _game.Globals.Save.ProgressFlags);   // Opening exit: FUN_0207120c(1, 0)
    }

    [Fact]
    public void CommunicationBootGoesToCommuMenuWithArg13()
    {
        _x.CommBoot = true;
        _game.Start();
        Assert.Equal(0x23, D.SceneId);
        Assert.Equal(2, D.MenuCursor);
        Assert.Equal(0xD, D.Params[0x23].Arg);
    }

    [Fact]
    public void TitleWithNothingNewGoesToMainMenuElseScene14ReturningToMenu()
    {
        _game.Start();
        Run(0, 0, 0);
        _codes.Enqueue(0);
        _game.Frame();                     // Title exit (code 0): FUN_02070518() == 0 → scene 3
        Assert.Equal(3, D.SceneId);

        var other = new SceneFlowTests();
        other._x.TitleResult = 1;
        other._game.Start();
        other.Run(0, 0, 0, 0);
        Assert.Equal(0xE, other.D.SceneId);
        Assert.Equal(3, other.D.Params[0xE].Next);
    }

    [Fact]
    public void MainMenuDeckSelectSetsBackAndArgAndRemembersCursor()
    {
        _game.Start();
        Run(0, 0, 0, 4);                   // Copyright, Opening, Title → main menu, which exits with 4
        _game.Frame();                     // menu exit runs, scene 4 is created
        Assert.Equal(4, D.SceneId);
        Assert.Equal(3, D.Params[4].Back);
        Assert.Equal(7, D.Params[4].Arg);
        Assert.Equal(4, D.MenuCursor);
        Assert.True(D.SceneChangeRequested == false);   // cleared when scene 4 was created
    }

    [Fact]
    public void JGalaxyStageInfoBuildsTheStageChain()
    {
        var g = _game.Globals;
        g.Stage.Reset();                    // S8(2..5) = -1: no special stage
        var exits = _game.Director.Exits;
        exits.Run(17, 0);
        Assert.Equal(4, D.SceneId);                         // FUN_0207060c false → scene 4
        Assert.Equal((0xC, 0x11, 5), (D.Params[4].Next, D.Params[4].Back, D.Params[4].Arg));
        Assert.Equal((0x13, 0x10), (D.Params[0xC].Next, D.Params[0xC].Back));
        Assert.Equal(0x10, D.Params[0x13].Next);
    }

    [Fact]
    public void Scene14ReturningToScene16RequestsAnAutosave()
    {
        _game.Start();
        D.SceneId = 0xE;
        D.Params[0xE] = new SceneParams { Back = 0x10, Next = 3 };
        _codes.Enqueue(0);
        _game.Frame();                     // creates scene 14
        _game.Frame();                     // finishes: autosave pending, exit → Next (3)
        Assert.Equal(3, D.SceneId);
    }

    [Fact]
    public void WirelessErrorDivertsToScene42WithoutRunningTheExit()
    {
        _game.Start();
        Run(0);                            // Copyright created
        _x.Wireless = _x.WirelessError = true;
        _game.Frame();
        Assert.Equal(0x2A, D.SceneId);
        Assert.Null(_game.Director.Current);     // created on the next frame
        _game.Frame();
        Assert.Equal(SceneId.CommuMenuWiFiError, _created[^1]);
    }

    [Fact]
    public void EndingSetsFlagAndAutosavesBeforeTheNextScene()
    {
        _game.Start();
        D.SceneId = 20;
        D.Params[20].Next = 3;
        _game.Frame();                     // Ending created (finishes in its first update)
        _game.Frame();                     // exit: FUN_0207120c(8, 1) + FUN_0206e590 → autosave task
        Assert.Equal(8u, _game.Globals.Save.ProgressFlags);
        Assert.Equal([SceneId.Ending, null], _created);
        for (int i = 0; i < 40 && _created.Count < 3; i++) _game.Frame();
        Assert.Equal([SceneId.Ending, null, (SceneId)3], _created);
        Assert.False(_game.Globals.Save.AutoSaveRequested);
        Assert.False(D.AutoSavePending);
        Assert.Equal(1, _p.SaveFile.Flushes);
    }

    [Fact]
    public void PendingAutosaveWithoutChangedDataSkipsTheSave()
    {
        _game.Start();
        Run(0, 1);                         // Copyright → Opening exits with 1: FUN_0206e574(2, 0)
        _game.Frame();
        Assert.Equal([SceneId.Copyright, SceneId.Opening, SceneId.Title], _created);
        Assert.Equal(0, _p.SaveFile.Flushes);   // FUN_0207120c(1, 0) did not request a save
    }

    [Fact]
    public void PlayTimeSaturates()
    {
        var s = new SaveWork { PlayFrames = SaveWork.PlayFramesMax - 1 };
        s.TickPlayTime();
        s.TickPlayTime();
        Assert.Equal(SaveWork.PlayFramesMax, s.PlayFrames);
    }

    [Fact]
    public void GeneratedTableMatchesSceneMap()
    {
        string path = Path.Combine(FindRoot(), "reverse_engineering", "reports", "layout", "scene_map.json");
        using var doc = JsonDocument.Parse(File.ReadAllText(path));
        var scenes = doc.RootElement.GetProperty("scenes").EnumerateArray().ToList();
        Assert.Equal(scenes.Count, SceneTable.All.Count);
        foreach (var (s, info) in scenes.Zip(SceneTable.All))
        {
            Assert.Equal(s.GetProperty("id").GetInt32(), (int)info.Id);
            Assert.Equal(s.GetProperty("overlay").GetInt32(), info.Overlay);
            Assert.Equal(Convert.ToUInt32(s.GetProperty("exit").GetProperty("address").GetString(), 16), info.Exit);
        }
    }

    private static string FindRoot()
    {
        for (var d = new DirectoryInfo(AppContext.BaseDirectory); d is not null; d = d.Parent)
            if (File.Exists(Path.Combine(d.FullName, "JUS.nds"))) return d.FullName;
        throw new FileNotFoundException("JUS.nds not found above the test directory");
    }
}



