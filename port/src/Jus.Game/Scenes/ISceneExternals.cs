namespace Jus.Game.Scenes;

/// <summary>Original functions the scene flow calls that are not translated yet. Each member names
/// the original address; implementations replace them one by one with translated C#.
/// <see cref="UntranslatedExternals"/> logs every call and returns the neutral value.</summary>
public interface ISceneExternals
{
    /// <summary>FUN_0206dd30: boot type word at 0x027FFC20 (non-zero = started from a communication
    /// / download-play boot). Always false for the Windows port.</summary>
    bool BootedForCommunication { get; }

    /// <summary>FUN_02054b44 + FUN_02030f24(*(0x020A0DA8+4), tick): reseed the game RNG from the clock.</summary>
    void ReseedRandom();
    /// <summary>FUN_02070518: title-screen "start game" setup; returns 0 when nothing new was unlocked.</summary>
    int TitleStartGame();
    /// <summary>FUN_02086bd4: wireless/communication session active.</summary>
    bool IsWirelessActive();
    /// <summary>FUN_02086c4c: wireless error raised (scene flow then goes to scene 42).</summary>
    bool HasWirelessError();
    /// <summary>FUN_02070fd4, FUN_0219ad18 (ov10), FUN_02070fe8: WiFiGame check run before each scene create.</summary>
    void BeforeSceneCreate();
    /// <summary>FUN_020703b8(arg) called by FUN_0206f81c.</summary>
    int Fun020703b8(int arg);
    /// <summary>FUN_020703c8(a, b) — scene 26 exit.</summary>
    void Fun020703c8(int a, int b);
    /// <summary>FUN_0207231c(a) — scene 26 exit.</summary>
    void Fun0207231c(int a);
    /// <summary>FUN_02166ef8(code) (overlay 5) — scene 32 exit; returns the branch to take.</summary>
    int Fun02166ef8(int code);
    /// <summary>FUN_02166f04(code) (overlay 5) — scene 32 exit.</summary>
    int Fun02166f04(int code);
    /// <summary>FUN_02070e98 / 02070e4c / 02070ec4 / 02070ef4 / 02070e34: option-menu actions 1..5 (scene 34).</summary>
    void OptionAction(int code);
    /// <summary>FUN_0207367c(0) — scene 34 exit.</summary>
    void Fun0207367c(int a);
    /// <summary>FUN_0207003c(kind): leave communication (scenes 35, 42).</summary>
    void LeaveCommunication(int kind);
    /// <summary>FUN_02087770: communication state for scene 35's exit (0..2).</summary>
    int Fun02087770();
    /// <summary>FUN_02087724: communication state for scene 12's exit (2 = skip bookkeeping).</summary>
    int Fun02087724();
    /// <summary>FUN_0208779c — scene 12 exit.</summary>
    void Fun0208779c();
    /// <summary>Scene 12 (battle) exit bookkeeping calls, by original address:
    /// 0x020727C8, 0x02071818, 0x02071994, 0x020726D8, 0x02072750, 0x02071324(a), 0x02071958(a),
    /// 0x02071A94(a), 0x020719F4(a).</summary>
    void BattleBookkeeping(uint address, int arg = 0);
}

/// <summary>Logs each call and returns 0/false so the scene graph can be walked before the
/// callees are translated.</summary>
public sealed class UntranslatedExternals(Action<string> log) : ISceneExternals
{
    private int Note(string what, int result = 0) { log($"untranslated: {what} -> {result}"); return result; }

    public bool BootedForCommunication => false;
    public void ReseedRandom() => Note("FUN_02054b44/FUN_02030f24 reseed");
    public int TitleStartGame() => Note("FUN_02070518");
    public bool IsWirelessActive() => Note("FUN_02086bd4") != 0;
    public bool HasWirelessError() => Note("FUN_02086c4c") != 0;
    public void BeforeSceneCreate() { }
    public int Fun020703b8(int arg) => Note($"FUN_020703b8({arg})");
    public void Fun020703c8(int a, int b) => Note($"FUN_020703c8({a},{b})");
    public void Fun0207231c(int a) => Note($"FUN_0207231c({a})");
    public int Fun02166ef8(int code) => Note($"FUN_02166ef8({code})");
    public int Fun02166f04(int code) => Note($"FUN_02166f04({code})");
    public void OptionAction(int code) => Note($"option action {code}");
    public void Fun0207367c(int a) => Note($"FUN_0207367c({a})");
    public void LeaveCommunication(int kind) => Note($"FUN_0207003c({kind})");
    public int Fun02087770() => Note("FUN_02087770");
    public int Fun02087724() => Note("FUN_02087724");
    public void Fun0208779c() => Note("FUN_0208779c");
    public void BattleBookkeeping(uint address, int arg = 0) => Note($"FUN_{address:x8}({arg})");
}
