using Jus.Game.Assets;

namespace Jus.Game.Scenes.Ov03;

/// <summary>One J Arena "job" (a sub-scene of JArena.cpp's job host).</summary>
public interface IJArenaJob
{
    /// <summary>One frame: logic and drawing.</summary>
    void Update();
}

/// <summary>
/// J Arena (overlay 3), JArena.cpp. Scenes 15 is VsCall; scenes 21, 23, 24, 26 and 27 all enter the same job
/// host <c>JArena::JArena_AddJob</c> 0x0214CD5C through the overlay veneers 0x0214CD20/2C/38/44/50, with
/// one argument: low byte = job (+0x1C), byte 1 = cursor (+0x1D).
/// - Scene 21 (jus_Scene21_Create 0x0206F3CC): Params[21].Arg as it is (TopMenu passes 0 → job 0; the exit
///   0x0206F3E4 stores the job's exit code back into Params[21].Arg, so returning lands on job 0 with the
///   cursor in byte 1).
/// - Scene 23 (0x0206F90C): byte table 0x02092424[Params[23].Arg] (jobs 5–8).
/// - Scene 24 (0x0206F930): byte table 0x02092428[Params[24].Arg] (jobs 9–0xC).
/// - Scene 26 (0x0206F9B8): Params[26].Arg &amp; 0xFF (jobs 0x11–0x13 from the exits' story/arena chains).
/// - Scene 27 (0x0206FAA8): byte table 0x0209242C[Params[27].Arg] (jobs 0x1B–0x1E).
///
/// Job functions (table 0x0215D2AC, by job): 0 <c>JArenaTopMenu::JATopMenu_Add</c> 0x0214D958,
/// 1 <c>JARankMenu_Add</c> 0x0214EE54, 5–8 0x021503A0.., 9–0xC 0x0215178C.., 0xD <c>JARBAftLstAll_Add</c>
/// 0x0215261C, 0xE <c>JARBAftLstSel_Add</c> 0x02155940, 0xF <c>JAGetJPower_Add</c> 0x0215B44C,
/// 0x11–0x13 0x02158A84.., 0x1B–0x1E 0x02159D1C..; the others are empty.
///
/// Translated here (the host): AddJob's set-up (music, the "flag 0x40" bit), the first-frame job start
/// FUN_0214CFF8, the job switch / exit code FUN_0214D28C, and the teardown (music stop). Job 0 is translated
/// in <see cref="JArenaTopMenu"/>; every other job is a labelled stand-in (<see cref="JArenaStandInJob"/>).
/// Not translated: FUN_0214D1DC (per-group unique-index table for the ranking jobs, from FUN_02072244),
/// the job-5..8 sound call FUN_0207367C(8), the SE hook table registered with 0x021B7260 is applied by the
/// jobs themselves (see <see cref="JArenaTopMenu"/>).
/// </summary>
public sealed class JArenaScene : ISceneTask
{
    /// <summary>Next-job ids that leave the scene (byte list 0x0215D29C, terminated by 0xFF):
    /// FUN_0214D28C searches it; any other id is started inside the scene.</summary>
    public static bool LeavesScene(int job) => job is 2 or 3 or 4 or 0x19 or 0x10 or (>= 0x14 and <= 0x18) or 0x1F or 0x20;

    /// <summary>Music per job, table 0x0215D334 ({s32 check, s32 sequence} × job): jobs 0–2 have
    /// {0x34, 0x34}, all others −1 (no change). Summarised as a rule, not copied as a table.</summary>
    public static int JobMusic(int job) => job is >= 0 and <= 2 ? 0x34 : -1;

    private readonly JusGame _game;
    private IJArenaJob? _job;
    private bool _startPending = true;     // the task's update is FUN_0214CFF8 (set by AddJob and by FUN_0214D28C)

    public JArenaScene(JusGame game, int arg)
    {
        _game = game;
        Job = arg & 0xFF;                                  // +0x1C
        Cursor = (arg >> 8) & 0xFF;                        // +0x1D
        int music = JobMusic(Job);
        if (music >= 0) game.PlayMusic(music, 0);          // FUN_020734e0(+0) + FUN_0207361c(+4, 0)
        if ((game.Globals.Save.Image.Data[SaveImage.ProgressFlagsOffset] & 0x40) != 0)
            Flags |= 1;                                    // DAT_020b0b90 & 0x40 → +0x18 |= 1
        Font = AlftFont.Load(game.Platform.Assets, "font/jskfont.aft");   // func_0x021caa0c("font/jskfont.aft")
    }

    public JusGame Game => _game;
    /// <summary>+0x1C: the current job.</summary>
    public int Job { get; private set; }
    /// <summary>+0x1D: the cursor handed to the job.</summary>
    public int Cursor { get; private set; }
    /// <summary>+0x18: bit 0 = progress flag 0x40, bit 2 = keep the music on exit.</summary>
    public int Flags { get; private set; }
    /// <summary>+0x1F: "direct" mode (set by no code read so far; 0).</summary>
    public int Direct { get; private set; }
    /// <summary>+0xC: the scene's font (jskfont).</summary>
    public AlftFont Font { get; }
    public IJArenaJob? CurrentJob => _job;
    public bool Finished { get; private set; }

    public void Update()
    {
        if (Finished) return;
        if (_startPending)
        {
            _startPending = false;
            StartOrFinish();                               // the job's Add runs this frame; its widgets update from the next
            return;
        }
        _job?.Update();
    }

    /// <summary>FUN_0214CFF8: start the current job if it has a function and +0x1F is clear; otherwise tear
    /// the scene down (unless +0x18 bit 2: FUN_0207367c(8), FUN_0207372c(8), FUN_020735e4 = music out).</summary>
    private void StartOrFinish()
    {
        _job = null;
        var job = Direct == 0 ? CreateJob(Job) : null;
        if (job is not null)
        {
            _job = job;
            return;
        }
        if ((Flags & 4) == 0) _game.Platform.Sound.FadeOutMusic(0);
        Finished = true;
    }

    private IJArenaJob? CreateJob(int job) => job switch
    {
        0 => new JArenaTopMenu(this),
        1 or (>= 5 and <= 0xF) or (>= 0x11 and <= 0x13) or (>= 0x1B and <= 0x1E) => new JArenaStandInJob(this, job),
        _ => null,
    };

    /// <summary>FUN_0214D28C(task, self, next, cursor): a job ends. A next job from the leave list
    /// (<see cref="LeavesScene"/>) or +0x1F set ends the scene with exit code
    /// +0x1F &lt;&lt; 24 | next &lt;&lt; 16 | (cursor &amp; 0xFF) &lt;&lt; 8 | self (next 2/0x18/0x10 also keep the
    /// music: +0x18 |= 4); otherwise the next job starts in the scene with +0x1D = cursor (a negative cursor
    /// picks 0/1/4 from the (self, next) pair). Either way the task's update becomes FUN_0214CFF8 again.</summary>
    public void EndJob(int self, int next, int cursor)
    {
        bool leave = LeavesScene(next);
        Job = next;                                                      // +0x1C = (char)next
        if (!leave && Direct == 0)
        {
            if (cursor < 0)
            {
                if (next == 0)
                {
                    if (self == 1) Cursor = 0;
                    if (self == 2) Cursor = 1;
                }
                if (next == 1 && self == 0x18) Cursor = 4;
            }
            else Cursor = cursor & 0xFF;
            // _DAT_021d514c = FUN_0214d1b0 (the SE hook; the jobs play their SEs directly in the port)
        }
        else
        {
            if (next is 2 or 0x18 or 0x10) Flags |= 4;
            if (Direct != 0)
            {
                if (next == 0x21) next = 0;
                if (cursor < 0) cursor = 0;
            }
            _game.Globals.Director.ExitCode = Direct << 24 | next << 16 | (cursor & 0xFF) << 8 | self;   // DAT_020afcb8
        }
        _startPending = true;
    }

    /// <summary>NitroFS path lookup is case-insensitive (FS_FindPathName); the port's file systems are not,
    /// so names such as "Info/bg.dig" are retried in lower case.</summary>
    public static byte[] ReadAnyCase(ResourceManager res, string path)
    {
        try { return res.Read(path); }
        catch (FileNotFoundException) { return res.Read(path.ToLowerInvariant()); }
        catch (KeyNotFoundException) { return res.Read(path.ToLowerInvariant()); }
    }

    /// <summary>FUN_020703D8: clear the battle set-up block 0x020AFE90 (0x4C bytes), set +0 = 1, then
    /// FUN_02070414 (its defaults), then +0xC = 0. Called by JATopMenu for jobs 3 and 4.</summary>
    public static void ResetBattleSetup(GameGlobals g)
    {
        var b = g.Battle.Raw;
        Array.Clear(b);
        BitConverter.TryWriteBytes(b.AsSpan(0), 1);
        // FUN_02070414 (base 0x020AFE40, so +0x5C = battle +0xC)
        BitConverter.TryWriteBytes(b.AsSpan(0xC), 0xD);
        BitConverter.TryWriteBytes(b.AsSpan(0x10), 0);
        BitConverter.TryWriteBytes(b.AsSpan(0x1C), 0x116F);
        b[0x2B] = 1; b[0x2C] = 1; b[0x2A] = 0; b[0x2D] = 0; b[0x32] = 0; b[0x33] = 0;
        for (int i = 0; i < 4; i++)
        {
            b[0x20 + i] = (byte)(i != 0 ? 1 : 0);
            b[0x24 + i] = 0;
            b[0x34 + i] = 0;
            b[0x2E + i] = 1;
        }
        b[0x2E] = 0;
        BitConverter.TryWriteBytes(b.AsSpan(0xC), 0);
    }
}

/// <summary>Stand-in for a J Arena job that is not translated yet (everything but job 0). It shows the job
/// id and finishes on A or B through the real job switch, so the flow can be walked. NOT original
/// behaviour.</summary>
public sealed class JArenaStandInJob(JArenaScene host, int job) : IJArenaJob
{
    public int Id => job;

    public void Update()
    {
        var p = host.Game.Platform;
        p.TopScreen.Brightness = p.BottomScreen.Brightness = 0;
        p.TopScreen.Clear(0xFF000000);
        p.BottomScreen.Clear(0xFF101030);
        p.BottomScreen.DrawText(8, 8, $"J ARENA job 0x{job:X2} (not translated)");
        p.BottomScreen.DrawText(8, 24, job == 1 ? "A/B: back to the J Arena menu" : "A/B: leave the scene");
        var trg = p.Input.Trigger;
        if ((trg & (PadButtons.A | PadButtons.B)) == 0) return;
        // job 1 (JARankMenu) is reached from job 0 inside scene 21: go back to it; the jobs of scenes
        // 23/24/26/27 leave with next job 0x20, whose exit-code bytes route those scenes' exits to Next/Back
        if (job == 1) host.EndJob(job, 0, -1);
        else host.EndJob(job, 0x20, 0);
    }
}
