using System.Runtime.InteropServices;

namespace Jus.Game;

// The original keeps game state in fixed .bss blocks. The port keeps the same layouts (offsets in
// field names and comments) so translated functions stay one-to-one with the decompiled code.
// Fields are named once their meaning is known; Unk_xx keeps the original offset otherwise.

/// <summary>Per-scene navigation parameters: 8 bytes at 0x020AFCCC + id*8.</summary>
[StructLayout(LayoutKind.Explicit, Size = 8)]
public struct SceneParams
{
    /// <summary>+0: scene to return to on "back" (FUN_0206e524 argument 4).</summary>
    [FieldOffset(0)] public sbyte Back;
    /// <summary>+1: scene to continue to on "next" (FUN_0206e524 argument 3).</summary>
    [FieldOffset(1)] public sbyte Next;
    /// <summary>+4: scene argument (FUN_0206e524 argument 5); exits also store their exit code here.</summary>
    [FieldOffset(4)] public int Arg;
}

/// <summary>Scene director state, 0x020AFCB0 (0x1C bytes) — fields the port uses.</summary>
public sealed class DirectorWork
{
    /// <summary>+0x08 (0x020AFCB8): exit code the finished scene left.</summary>
    public int ExitCode;
    /// <summary>+0x0C (0x020AFCBC): argument for the pending autosave task.</summary>
    public int AutoSaveArg;
    /// <summary>+0x10 (0x020AFCC0): main-menu cursor (scene 3 stores its exit code; 2 on a communication boot).</summary>
    public sbyte MenuCursor;
    /// <summary>+0x11 (0x020AFCC1): set by FUN_0206f81c, read by scene 26's exit.</summary>
    public byte Unk11;
    /// <summary>+0x12 (0x020AFCC2): a scene change was requested with FUN_0206e524(go=1).</summary>
    public bool SceneChangeRequested;
    /// <summary>+0x13 (0x020AFCC3): an autosave runs before the next scene is created.</summary>
    public bool AutoSavePending;
    /// <summary>+0x14..+0x18: flags shared between scene exits (meaning per use site).</summary>
    public byte Unk14, Unk15, Unk16, Unk17, Unk18;
    /// <summary>+0x80 (0x020AFD30): battle kind; selects scene 12's bookkeeping.</summary>
    public int BattleKind;
    /// <summary>+0x138 (0x020AFDE8): communication error/menu code passed back to scene 35.</summary>
    public int CommuCode;
    /// <summary>+0x148 (0x020AFDF8): set by scene 4's exit.</summary>
    public int Unk148;
    /// <summary>+0x18C (0x020AFE3C): current scene; exits write the next scene here.</summary>
    public int SceneId;

    /// <summary>0x020AFCCC: navigation parameters for every scene.</summary>
    public SceneParams[] Params = new SceneParams[SceneTable.Count];
}

/// <summary>Session block 0x020AFE40 — arrays cleared by FUN_0207062c.</summary>
public sealed class SessionWork
{
    /// <summary>0x020AFE40: set to 1 by Copyright's hidden input (FUN_02070d40); cleared by
    /// FUN_020704f4. Its readers are not found yet.</summary>
    public int Unk00;
    /// <summary>0x020AFE44: 6 ints, cleared to 0.</summary>
    public int[] Unk04 = new int[6];
    /// <summary>0x020AFE5C: 6 ints, cleared to -1.</summary>
    public int[] Unk1C = new int[6];
    /// <summary>0x020AFE74: 6 ints, cleared to 0.</summary>
    public int[] Unk34 = new int[6];
    /// <summary>0x020AFE8C.</summary>
    public int Unk4C;

    /// <summary>FUN_0207062c.</summary>
    public void ResetSlots()
    {
        for (int i = 0; i < 6; i++) { Unk1C[i] = -1; Unk34[i] = 0; }
        Unk4C = 0;
        for (int i = 0; i < 6; i++) Unk04[i] = 0;
    }
}

/// <summary>Battle setup block 0x020AFE90 (0x4C bytes) — raw, reset by FUN_020703d8.</summary>
public sealed class BattleSetupWork
{
    public readonly byte[] Raw = new byte[0x4C];
    public int I32(int o) => BitConverter.ToInt32(Raw, o);
}

/// <summary>Stage/progress work block 0x020AFEDC (0x70 bytes), reset by FUN_020704a8.</summary>
public sealed class StageWork
{
    public readonly byte[] Raw = new byte[0x70];
    public sbyte S8(int o) => (sbyte)Raw[o];
    public void Set8(int o, int v) => Raw[o] = (byte)v;
    public int I32(int o) => BitConverter.ToInt32(Raw, o);
    public void SetI32(int o, int v) => BitConverter.TryWriteBytes(Raw.AsSpan(o), v);

    /// <summary>FUN_020704a8.</summary>
    public void Reset()
    {
        Array.Clear(Raw);
        BitConverter.TryWriteBytes(Raw.AsSpan(0x6C), (ushort)0xFFFF);   // 0x020AFF48
        Raw[0x02] = 0xFF;                                               // 0x020AFEDE
        SetI32(0x30, -1);                                               // 0x020AFF0C
        Raw[0x03] = Raw[0x04] = Raw[0x05] = 0xFF;                       // 0x020AFEDF..E1
        Raw[0x48] = 0xFF;                                               // 0x020AFF24
    }
}

/// <summary>The parts of the save image (0x020B02B8, 0x7558 bytes) the scene flow touches.</summary>
public sealed class SaveWork
{
    /// <summary>The whole loaded image (<see cref="SaveImage"/>); later scenes read decks etc. from it.</summary>
    public SaveImage Image { get; } = new();
    public SaveLoadResult LoadResult { get; private set; } = SaveLoadResult.NoData;

    /// <summary>RecordLoad at boot: fill the image and the fields mirrored here.</summary>
    public SaveLoadResult Load(ISaveStorage storage)
    {
        LoadResult = Image.Load(storage);
        if (LoadResult is SaveLoadResult.Ok or SaveLoadResult.OneCopyBad)
        {
            ProgressFlags = Image.ProgressFlags;
            PlayFrames = Image.PlayFrames;
        }
        return LoadResult;
    }

    /// <summary>Save +0x8D8 (0x020B0B90): progress/event flag bits.</summary>
    public uint ProgressFlags;
    /// <summary>0x020B02AC: save data changed; an autosave runs at the next scene change.</summary>
    public bool AutoSaveRequested;
    /// <summary>Save ranges marked dirty (FUN_02073114(offset, size)).</summary>
    public readonly List<(int Offset, int Size)> Dirty = [];

    /// <summary>Play time in frames for the active profile (save record 0x020B76E4 + profile*0x28).</summary>
    public uint PlayFrames;
    /// <summary>99:59:59 + 59 frames at 60 fps.</summary>
    public const uint PlayFramesMax = 21_599_999;

    /// <summary>FUN_02070f44: count one frame of play time, saturating at <see cref="PlayFramesMax"/>.</summary>
    public void TickPlayTime() => PlayFrames = PlayFrames < PlayFramesMax ? PlayFrames + 1 : PlayFramesMax;

    /// <summary>FUN_0207120c(flags, requestSave): set progress flags; optionally request an autosave.</summary>
    public void SetProgressFlags(uint flags, bool requestSave)
    {
        if (flags == (flags & ProgressFlags)) return;
        ProgressFlags |= flags;
        Dirty.Add((0x8D8, 4));
        if (requestSave) AutoSaveRequested = true;
    }
}

/// <summary>All global blocks the translated scene flow uses.</summary>
public sealed class GameGlobals
{
    /// <summary>0x020AFC9C (FUN_0206dcdc): L+R+Select+Start soft reset allowed (scenes switch it
    /// off while they run, e.g. Copyright).</summary>
    public bool SoftResetEnabled = true;
    public DirectorWork Director { get; } = new();
    public SessionWork Session { get; } = new();
    public BattleSetupWork Battle { get; } = new();
    public StageWork Stage { get; } = new();
    public SaveWork Save { get; } = new();
}
