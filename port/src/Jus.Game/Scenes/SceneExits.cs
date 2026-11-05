namespace Jus.Game.Scenes;

/// <summary>Translations of the 46 scene exit functions (scene table column 2). Each is called
/// as exit(&amp;Params[id], exitCode) when the scene finishes and decides the next scene.
/// Method names carry the original address; untranslated callees go through
/// <see cref="ISceneExternals"/>.</summary>
public sealed class SceneExits(SceneDirector d)
{
    private DirectorWork D => d.D;
    private StageWork Stage => d.G.Stage;
    private BattleSetupWork Battle => d.G.Battle;
    private ISceneExternals X => d.X;
    private ref SceneParams P(int id) => ref D.Params[id];

    /// <summary>Scene 16's lookup table at 0x02092430.</summary>
    private static readonly sbyte[] Scene16Table = [0, 1, 2, 0, 1, 1, 3, 3, 5, 5, 6, 8, 8, 0, 0, 0];

    public void Run(int scene, int code)
    {
        switch (scene)
        {
            case 0: Exit_0206e618(); break;
            case 1: Exit_0206e62c(code); break;
            case 2: Exit_0206e674(code); break;
            case 3: Exit_0206e70c(code); break;
            case 4: Exit_0206e8b8(code); break;
            case 5: Exit_0206ea84(code); break;
            case 6: Exit_0206eac0(code); break;
            case 7: Exit_0206eb68(code); break;
            case 8: Exit_0206ebf0(code); break;
            case 9: Exit_0206ec44(code); break;
            case 10: case 14: case 15: case 23: case 25: case 30: case 33: case 41: Exit_0206e5d0(scene); break;
            case 11: Exit_0206ecb8(code); break;
            case 12: Exit_0206ed80(code); break;
            case 13: Exit_0206f00c(); break;
            case 16: Exit_0206f088(code); break;
            case 17: Exit_0206f148(code); break;
            case 18: Exit_0206f2a4(); break;
            case 19: Exit_0206f300(); break;
            case 20: Exit_0206f3a8(); break;
            case 21: Exit_0206f3e4(code); break;
            case 22: Exit_0206f680(code); break;
            case 24: Exit_0206f954(code); break;
            case 26: Exit_0206f9d4(code); break;
            case 27: Exit_0206facc(code); break;
            case 28: Exit_0206fb34(code); break;
            case 29: Exit_0206fb78(code); break;
            case 31: case 38: case 39: case 40: Exit_0206e5e4(scene); break;
            case 32: Exit_0206fc00(code); break;
            case 34: Exit_0206fcb8(code); break;
            case 35: Exit_0206fe50(code); break;
            case 36: Exit_020701bc(code); break;
            case 37: Exit_02070230(code); break;
            case 42: Exit_02070264(code); break;
            case 43: Exit_020702e0(code); break;
            case 44: D.SceneId = 0x2D; break;                    // 0x02070354
            case 45: D.SceneId = 0x2B; break;                    // 0x02070368
            default: throw new ArgumentOutOfRangeException(nameof(scene));
        }
    }

    // Scene 0 (Copyright).
    private void Exit_0206e618() => D.SceneId = 1;

    // Scene 1 (Opening).
    private void Exit_0206e62c(int code)
    {
        if (code == 0) D.SceneId = 2;
        else if (code == 1) d.AutoSaveThen(2, 0);
        d.G.Save.SetProgressFlags(1, false);
    }

    // Scene 2 (Title).
    private void Exit_0206e674(int code)
    {
        if (code != 0)
        {
            if (code == 1) D.SceneId = 1;
            return;
        }
        X.ReseedRandom();
        if (X.TitleStartGame() == 0) { D.SceneId = 3; return; }
        d.RequestScene(true, 0xE, 3, -1, 0);
    }

    // Scene 3 (main menu).
    private void Exit_0206e70c(int code)
    {
        switch (code)
        {
            case 0: d.RequestScene(true, 0x10, -1, -1, 0); break;
            case 1: d.RequestScene(true, 0x15, -1, -1, 0); break;
            case 2: d.RequestScene(true, 0x23, -1, -1, 0); break;
            case 3: d.RequestScene(true, 0x1F, 3, -1, 0); break;
            case 4: d.RequestScene(true, 4, -1, 3, 7); break;
            case 5: d.RequestScene(true, 0x1D, 3, -1, 0); break;
            case 6: d.RequestScene(true, 0x20, 3, -1, 0); break;
            case 7: d.RequestScene(true, 0x22, 3, -1, 0); break;
            case 8: d.RequestScene(true, 2, 3, -1, 1); break;
        }
        if (code != 8) D.MenuCursor = (sbyte)code;
        D.Unk18 = 0;
    }

    // Scene 4 (DeckSelect).
    private void Exit_0206e8b8(int code)
    {
        if (D.Unk14 != 0) { D.SceneId = 7; return; }
        switch (code)
        {
            case 1:
                if (D.Unk18 == 0 && !X.IsWirelessActive()) d.GoBackWithAutoSave(4, 0);
                else D.SceneId = P(4).Back;
                break;
            case 2:
                d.RequestScene(true, 8, 9, 4, 0);
                d.RequestScene(false, 9, 4, -1, 0);
                D.AutoSaveArg = 0; D.AutoSavePending = true;
                break;
            case 3:
                d.RequestScene(true, 8, 4, 4, 1);
                D.AutoSaveArg = 0; D.AutoSavePending = true;
                break;
            case 4:
                d.RequestScene(true, 9, 4, -1, 1);
                D.AutoSaveArg = 0; D.AutoSavePending = true;
                break;
            case 5:
            case 6:
                D.SceneId = P(4).Back;
                break;
            default:                                               // 0 and anything else
                if (D.Unk18 == 0 && !X.IsWirelessActive()) d.GoNextWithAutoSave(4, 0);
                else D.SceneId = P(4).Next;
                break;
        }
        if (D.Unk15 != 0)
        {
            D.Unk15 = 0;
            // The original stores r4 here; r4 is only set for codes 0 and 1 (otherwise it holds
            // whatever the caller left in r4). The port keeps the previous value in that case.
            if (code == 0) D.Unk148 = 1;
            else if (code == 1) D.Unk148 = 2;
        }
    }

    // Scene 5.
    private void Exit_0206ea84(int code) => D.SceneId = code == 1 ? P(5).Next : P(5).Back;

    // Scene 6 (StageSelect).
    private void Exit_0206eac0(int code)
    {
        if (code == 0) D.SceneId = P(6).Next;
        else if (code == 1) D.SceneId = P(6).Back;
        else if (code == 2) { D.Unk15 = 0; D.SceneId = 0x25; }
    }

    // Scene 7.
    private void Exit_0206eb68(int code)
    {
        switch (code)
        {
            case 0: D.SceneId = P(7).Next; break;
            case 1: D.SceneId = P(7).Back; break;
            case 2: D.Unk14 = 1; D.SceneId = 4; break;
            case 3: D.Unk15 = 0; D.SceneId = 0x25; break;
        }
    }

    // Scene 8.
    private void Exit_0206ebf0(int code)
    {
        if (code == 0) D.SceneId = P(8).Next;
        else d.GoBackWithAutoSave(8, 0);
    }

    // Scene 9 (DeckMake).
    private void Exit_0206ec44(int code)
    {
        int hi = (code >> 8) & 0xFF;
        if (hi != 1) d.GoNextWithAutoSave(9, 0);
        else { Stage.Set8(0x6E, 0); D.SceneId = 0xB; }
        P(9).Arg = code;
        D.Unk17 = 0;
    }

    // Scenes 10, 14, 15, 23, 25, 30, 33, 41: continue to Next.
    private void Exit_0206e5d0(int scene) => D.SceneId = P(scene).Next;

    // Scenes 31, 38, 39, 40: tail jump to FUN_0206e590(params, 0).
    private void Exit_0206e5e4(int scene) => d.GoNextWithAutoSave(scene, 0);

    // Scene 11 (battle entry).
    private void Exit_0206ecb8(int code)
    {
        if (code == 3) D.SceneId = 0xB;
        else { D.Unk17 = 1; D.SceneId = 9; }
    }

    // Scene 12 (battle). Callee arguments follow the decompiler (calls without arguments may
    // take registers it did not show).
    private void Exit_0206ed80(int code)
    {
        switch (code)
        {
            case 0: D.SceneId = P(12).Next; break;
            case 1: D.SceneId = P(12).Back; break;
            case 2: D.SceneId = 4; break;
            case 3: D.SceneId = 0xC; return;
            case 4: D.Unk16 = 1; D.SceneId = 0xC; return;
        }
        switch (D.BattleKind)
        {
            case 0:
                if (code == 0)
                {
                    X.BattleBookkeeping(0x020727C8);
                    if (Stage.Raw[8] != 0 && Stage.S8(0) != -1) X.BattleBookkeeping(0x02071818);
                }
                break;
            case 1:
                if (code == 0)
                {
                    X.BattleBookkeeping(0x020727C8);
                    if (Stage.Raw[0x4A] != 0)
                    {
                        if (Stage.Raw[0xA] == 0 && Stage.S8(0x48) != -1) X.BattleBookkeeping(0x02071994);
                        D.AutoSaveArg = 0; D.AutoSavePending = true;
                    }
                }
                break;
            case 2:
            case 3:
                if (code == 0) X.BattleBookkeeping(0x020727C8);
                break;
            case 6:
                if (X.Fun02087724() != 2 && code == 0)
                {
                    X.BattleBookkeeping(0x020727C8);
                    if (X.IsWirelessActive())
                    {
                        int i = Battle.I32(8);
                        X.BattleBookkeeping(0x020726D8);
                        // 0x020AFEE6 = Stage+0xA, 0x020AFEEA = Stage+0xE, indexed by player
                        if (Battle.Raw[0x2D] == 0) { if (Stage.Raw[0xA + i] == 0) X.BattleBookkeeping(0x02072750); }
                        else if (Stage.Raw[0xE + i] == 0) X.BattleBookkeeping(0x02072750);
                        X.Fun0208779c();
                    }
                }
                break;
        }
        switch (D.BattleKind)
        {
            case 0: case 2: case 3: case 4: break;
            case 6: if (X.Fun02087724() == 2) return; break;
            default: return;                                       // 1, 5 and others
        }
        X.BattleBookkeeping(0x02071324, Battle.I32(0xC));
        if (Battle.Raw[0x20] == 1) X.BattleBookkeeping(0x02071958, Battle.Raw[0x24]);
        if (Battle.Raw[0x20] == 7) X.BattleBookkeeping(0x02071A94, Battle.Raw[0x24]);
        if (Battle.Raw[0x20] == 8) X.BattleBookkeeping(0x020719F4, Battle.Raw[0x24]);
    }

    // Scene 13.
    private void Exit_0206f00c()
    {
        if (P(13).Arg == 0) d.GoNextWithAutoSave(13, 0);
        else D.SceneId = P(13).Next;
    }

    // Scene 16 (JGalaxy).
    private void Exit_0206f088(int code)
    {
        switch (code & 0xF)
        {
            case 0: d.AutoSaveThen(3, 0); break;
            case 1: d.RequestScene(true, 0x1D, 0x10, -1, 0); break;
            case 2: d.RequestScene(true, 4, 0xC, 0x10, 7); break;
            case 3:
                d.RequestScene(true, 0x11, 4, 0x10, 0);
                P(16).Arg = 2;
                return;
        }
        P(16).Arg = Scene16Table[(code >> 4) & 0xF];
    }

    /// <summary>FUN_0207060c: Stage+2 (0x020AFEDE) is set.</summary>
    private bool Stage02Set() => Stage.S8(2) != -1;

    // Scene 17 (JGalaxyStageInfo).
    private void Exit_0206f148(int code)
    {
        if (code == 0)
        {
            int target = Stage.S8(3) == -1 && Stage.S8(5) == -1 ? 0xC : 0xE;
            if (!Stage02Set()) d.RequestScene(true, 4, target, 0x11, 5);
            else d.RequestScene(true, 5, target, 0x11, 0);
            if (Stage.S8(5) == -1)
            {
                if (Stage.S8(3) != -1) d.RequestScene(false, 0xE, 0xC, -1, Stage.S8(3));
            }
            else
            {
                d.RequestScene(false, 0xE, 0x12, -1, Stage.S8(5));
                d.RequestScene(false, 0x12, 0xC, -1, 0);
            }
            d.RequestScene(false, 0xC, 0x13, 0x10, 0);
            d.RequestScene(false, 0x13, 0x10, -1, 0);
        }
        else if (code == 1)
        {
            d.G.Session.ResetSlots();                              // FUN_0207062c
            d.RequestScene(true, 10, 0x13, -1, 0);
        }
        else if (code == 2)
        {
            D.SceneId = P(17).Back;
        }
    }

    // Scene 18 (JQuiz).
    private void Exit_0206f2a4()
    {
        d.G.Save.SetProgressFlags(0x20, true);
        if (Stage.S8(3) == -1) D.SceneId = P(18).Next;
        else d.RequestScene(true, 0xE, 0xC, -1, Stage.S8(3));
    }

    // Scene 19 (JGalaxyResult).
    private void Exit_0206f300()
    {
        if (Stage.Raw[8] != 0)
        {
            int v = Stage.S8(4);
            if (v != -1)
            {
                if (Stage.Raw[6] == 0) { d.RequestScene(true, 0xE, 0x10, -1, v); return; }
                d.RequestScene(true, 0xE, 0x14, -1, v);
                d.RequestScene(false, 0x14, 3, -1, 0);
                return;
            }
            if (Stage.Raw[6] != 0) { d.RequestScene(true, 0x14, 3, -1, 0); return; }
        }
        d.AutoSaveThen(0x10, 0);
    }

    // Scene 20 (Ending).
    private void Exit_0206f3a8()
    {
        d.G.Save.SetProgressFlags(8, true);
        d.GoNextWithAutoSave(20, 0);
    }

    /// <summary>FUN_0206f81c(arg): set up the story chain 4 → 0x17 → 0xF → 0xC → 0x18 → 0x1A.</summary>
    private void StoryChain_0206f81c(int arg)
    {
        Stage.Reset();                                             // FUN_020704a8
        if (X.Fun020703b8(arg) == 0)
        {
            D.Unk18 = 1;
            d.RequestScene(true, 4, 0x17, 0x15, 4);
            d.RequestScene(false, 0x17, 0xF, -1, arg);
        }
        else
        {
            d.RequestScene(true, 0x17, 0xF, -1, arg);
        }
        d.RequestScene(false, 0xF, 0xC, -1, 1);
        d.RequestScene(false, 0xC, 0x18, -1, 1);
        d.RequestScene(false, 0x18, 0x1A, -1, arg);
        d.RequestScene(false, 0x1A, 0x17, 0x15, 0x13);
        D.Unk11 = (byte)arg;
    }

    // Scene 21.
    private void Exit_0206f3e4(int code)
    {
        uint u = ((uint)code & 0xFF0000) >> 16;
        switch (u)
        {
            case 2: d.RequestScene(true, 0x16, 4, 0x15, 0); break;
            case 3:
                d.RequestScene(true, 4, 6, 0x15, 1);
                d.RequestScene(false, 6, 7, 4, 0);
                d.RequestScene(false, 7, 0xC, 6, 2);
                d.RequestScene(false, 0xC, 0xD, 0x15, 3);
                d.RequestScene(false, 0xD, 0x1A, -1, 0);
                d.RequestScene(false, 0x1A, 4, 0x15, 0x11);
                break;
            case 4:
                d.RequestScene(true, 4, 6, 0x15, 1);
                d.RequestScene(false, 6, 7, 4, 0);
                d.RequestScene(false, 7, 0xC, 6, 4);
                d.RequestScene(false, 0xC, 0x15, 0x15, 4);
                break;
            case 0x14:
            case 0x15:
                D.AutoSaveArg = 0; D.AutoSavePending = true;
                StoryChain_0206f81c(0);
                break;
            case 0x16:
                D.AutoSaveArg = 0; D.AutoSavePending = true;
                StoryChain_0206f81c(2);
                break;
            case 0x17:
                D.AutoSaveArg = 0; D.AutoSavePending = true;
                StoryChain_0206f81c(3);
                break;
            case 0x18: d.RequestScene(true, 0x1C, 0x15, -1, 0); break;
            case 0x20: d.AutoSaveThen(3, 0); break;
        }
        P(21).Arg = code;
    }

    // Scene 22.
    private void Exit_0206f680(int code)
    {
        if ((code & 0xFF00) == 0)
        {
            D.SceneId = P(22).Back;
        }
        else
        {
            if (!Stage02Set()) d.RequestScene(true, 4, 0xC, 0x16, 1);
            else d.RequestScene(true, 5, 0xC, 0x16, 1);
            d.RequestScene(false, 0xC, 0x19, 0x15, 2);
            d.RequestScene(false, 0x19, 0x1A, -1, 0);
            d.RequestScene(false, 0x1A, 0x16, 0x15, 0x12);
        }
        P(22).Arg = code;
    }

    // Scene 24.
    private void Exit_0206f954(int code)
    {
        int hi = (code & 0xFF00) >> 8;
        if (hi == 1) { d.AutoSaveThen(0x15, 0); return; }
        if (hi == 2) { d.RequestScene(true, 0x1B, 0x15, -1, P(24).Arg); return; }
        D.SceneId = P(24).Next;
    }

    // Scene 26.
    private void Exit_0206f9d4(int code)
    {
        switch ((uint)code >> 24)
        {
            case 1:
                if (P(26).Arg == 0x13) { D.SceneId = P(26).Next; return; }
                Stage.Set8(8, 0);
                Stage.SetI32(0x30, -1);
                D.SceneId = 0xC;
                return;
            case 3:
                X.Fun0207231c(D.Unk11);
                X.Fun020703c8(D.Unk11, 0);
                d.GoBackWithAutoSave(26, 0);
                return;
            case 4:
                d.GoNextWithAutoSave(26, 0);
                return;
        }
        if (P(26).Arg == 0x13) { d.GoBackWithAutoSave(26, 0); return; }
        D.SceneId = P(26).Back;
    }

    // Scene 27.
    private void Exit_0206facc(int code)
    {
        if ((code & 0xFF00) == 0) { d.GoNextWithAutoSave(27, 0); return; }
        d.RequestScene(true, 0xF, 0xC, -1, 1);
        d.RequestScene(false, 0xC, 0x15, 0x15, 1);
    }

    // Scene 28.
    private void Exit_0206fb34(int code)
    {
        P(28).Arg = code;
        D.SceneId = 0x15;
    }

    // Scene 29 (JPowerKomaList).
    private void Exit_0206fb78(int code)
    {
        if (code == -1) d.GoNextWithAutoSave(29, 0);
        else
        {
            d.RequestScene(true, 0x1E, 0x1D, -1, code);
            P(29).Arg = code;
        }
        D.Unk17 = 0;
    }

    // Scene 32.
    private void Exit_0206fc00(int code)
    {
        switch (X.Fun02166ef8(code))
        {
            case 0: d.GoNextWithAutoSave(32, 0); break;
            case 1: d.RequestScene(true, 0x21, 0x20, -1, 0); break;
            case 2: d.RequestScene(true, 0xE, 0x20, -1, X.Fun02166f04(code)); break;
            case 3: d.RequestScene(true, 8, 0x20, 0x20, 2); break;
        }
        P(32).Arg = code;
    }

    // Scene 34 (Option).
    private void Exit_0206fcb8(int code)
    {
        if (code is < 1 or > 5) { d.AutoSaveThen(3, 0); return; }
        X.OptionAction(code);
        if (code == 5)
        {
            d.AutoSaveThen(0, 1);
            D.MenuCursor = 0;                                      // strb [0x020AFCB0+0x10]
        }
        else
        {
            d.AutoSaveThen(3, 1);
        }
        X.Fun0207367c(0);
    }

    // Scene 35 (CommuMenu).
    private void Exit_0206fe50(int code)
    {
        switch (code)
        {
            case 0: d.AutoSaveThen(3, 0); break;
            case 1:
                d.RequestScene(true, 4, 8, 0x23, 10);
                d.RequestScene(false, 8, 4, 4, 4);
                break;
            case 5: D.SceneId = 0x2B; break;
            case 6:
                d.RequestScene(true, 4, 0x26, 0x23, 9);
                d.RequestScene(false, 0x26, 4, -1, 0);
                break;
            case 7:
                d.RequestScene(true, 4, 0x27, 0x23, 8);
                d.RequestScene(false, 0x27, 4, -1, 0);
                break;
            case 8: d.RequestScene(true, 0x28, 0x23, -1, 0); break;
            case 10: d.RequestScene(true, 4, 0x23, 0x23, 0xB); break;
            case 11: d.RequestScene(true, 8, 0x23, 0x23, 3); break;
            case 13: d.RequestScene(true, 0x29, 0x23, 0x23, 0xB); break;
            case 2: case 3: case 9: case 14: case 15:
                int state = X.Fun02087770();
                if (state is >= 0 and <= 2) X.LeaveCommunication(state);
                break;
        }
        P(35).Arg = code;
    }

    // Scene 36.
    private void Exit_020701bc(int code) => D.SceneId = code == 1 ? P(36).Next : P(36).Back;

    // Scene 37.
    private void Exit_02070230(int code)
    {
        if (code == 1) D.SceneId = P(37).Back;
        else d.GoNextWithAutoSave(37, 0);
    }

    // Scene 42 (CommuMenuWiFiError).
    private void Exit_02070264(int code)
    {
        switch (code)
        {
            case 1: D.CommuCode = 0xC; break;
            case 2: D.CommuCode = 0xE; break;
            case 3: D.CommuCode = 0xF; break;
            case 4: X.LeaveCommunication(1); return;
            case 5: X.LeaveCommunication(2); return;
            default: D.CommuCode = 0; break;
        }
        d.AutoSaveThen(0x23, 0);
    }

    // Scene 43 (Main_Communication).
    private void Exit_020702e0(int code)
    {
        if (code == 0) { D.SceneId = 0x2C; return; }
        if (code == 2) { D.SceneId = 0x23; return; }
        D.CommuCode = 5;
        d.AutoSaveThen(0x23, 0);
    }
}
