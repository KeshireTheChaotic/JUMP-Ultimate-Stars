namespace Jus.Game.Scenes.Ov06;

/// <summary>The JUS data tables the battle rules, flow and pause read (ov06). They come from
/// <c>Data/jus/arm9tables.json</c> (key <c>battleRules</c>, see the report snippet for JusTablesExport); tests read
/// them from the ROM. Never literals in the source.
/// <list type="bullet">
/// <item><see cref="RuleSelect"/>: 0x02170D9C, 22 pairs {rule, row} indexed by 0x020AFEA0 (Battle_Add default case).</item>
/// <item><see cref="Rows"/>: 0x02170D88, 10 pairs {pause kind, window kind} (Battle_Add's uVar12).</item>
/// <item><see cref="CpuLevels"/>: 0x02170DC8, 4 bytes: the AI level per pause CPU option (FUN_0214F07C).</item>
/// <item><see cref="PauseMenus"/>: 0x02170DCC, 7 rows of 0x20 bytes (Battle_PauseCreate, FUN_0214EC78).</item>
/// <item><see cref="Demo"/>: 0x0217104C, 3 rows of 12 bytes {archive name, resource, s16 cell, s16 SE} (FUN_02153108).</item>
/// </list></summary>
public sealed record BattleRuleTables(int[] RuleSelect, int[] Rows, int[] CpuLevels, int[] PauseMenus, BattleDemoRow[] Demo)
{
    public const int PauseRowSize = 0x20;
    /// <summary>Pause row <paramref name="kind"/>: [0] item count, [1] first item y, [2..7] item kinds, [8..0x1F] six
    /// u32 label resources.</summary>
    public BattlePauseRow PauseRow(int kind)
    {
        int o = kind * PauseRowSize;
        var m = PauseMenus;
        int count = m[o];
        var kinds = new int[count];
        var res = new int[count];
        for (int i = 0; i < count; i++)
        {
            kinds[i] = m[o + 2 + i];
            int r = o + 8 + i * 4;
            res[i] = m[r] | m[r + 1] << 8 | m[r + 2] << 16 | m[r + 3] << 24;
        }
        return new BattlePauseRow(count, m[o + 1], kinds, res);
    }
}

/// <summary>One row of the start/end demo table 0x0217104C (FUN_02153108): archive ("battle/get.aar" /
/// "battle/set.aar"), sprite resource base, cell offset, SE (−1 = none).</summary>
public sealed record BattleDemoRow(string Archive, int Resource, int Cell, int Se);

/// <summary>One pause menu row (table 0x02170DCC).</summary>
public sealed record BattlePauseRow(int Count, int FirstY, int[] Kinds, int[] Labels);

/// <summary>What the rule functions read from the rest of the battle (characters, decks, map, tutorial). The
/// characters are battle work +0xDC + 4i, the deck objects +0x118 + 4i.</summary>
public interface IBattleRuleWorld
{
    /// <summary>FUN_02078660(deck, 0, 1) on chara +0x1B4: the deck still has a battle koma that is not used up
    /// (an entry with +0x40 == 0 and no flag 0x1000).</summary>
    bool HasKomaLeft(int player);
    /// <summary>Chara +0x18: the current state id (the state slot's id byte).</summary>
    int CharaState(int player);
    /// <summary>Chara +0x100 (u16), read by FUN_0215B440 while the state is 8.</summary>
    int CharaStateArg(int player);
    /// <summary>Deck +0x56C (current koma entry) +0x41.</summary>
    int CurrentKomaByte41(int player);
    /// <summary>FUN_020789C0(deck): the +0x41 byte of the deck's flagged (+0xF bit 4) entry, or 0. Written to
    /// stage work +0x12 + i by FUN_0214F950.</summary>
    int DeckResult(int player);
    /// <summary>Map work (battle work +0x104) +0x3C flags; rules set bit 0 and rule 0xF reads bit 1.</summary>
    uint MapFlags { get; set; }
    /// <summary>Battle work +0x13C (tutorial) → +0x3C ≠ 0 (rule 0xC check FUN_021506EC).</summary>
    bool TutorialFinished { get; }
    /// <summary>Rule 8 (training) FUN_02150E74: <c>*(0x0214BE10)</c> +0x184 + 0x188 + 0x190 + 0x194 for
    /// <paramref name="which"/> 0, +0x18C for 1 (the damage dealt this frame, inferred).</summary>
    int TrainingDamage(int which);
    /// <summary>Rule 8: FUN_020783CC(deck, 0x80) and FUN_020781E4(deck, 0x200).</summary>
    void RefillDeck(int player);
    /// <summary>Chara +0x11D bit 0 (FUN_02150E04 sets it, FUN_02150E3C clears it; rule 0xC sets it on player 0).</summary>
    void SetCharaFlag11D(int player, bool set);
    /// <summary>FUN_0215041C's first call: FUN_02160A48(chara 0 +0x1A4), the "bin/clear.bin" condition check that
    /// fills 0x020AFF28.</summary>
    void MissionClearCheck();
    /// <summary>Rule 0xC init with ov10 controllers (+0x16E): ov10 0x021731F0(+0x130) and 0x0217329C(+0x130, −1, 1).</summary>
    void TutorialCpuSetup();
}

/// <summary>The battle rules: the rule part of the battle work (0x02172960 +0x00..+0xCC), rule setup FUN_0214F804,
/// the rule table ov06 0x02170EAC (31 rows of {init, check, result}, all Thumb) and the score events the character
/// code sends. The table holds code pointers, so it is translated as the dispatch in <see cref="Init"/>,
/// <see cref="CheckRule"/> and <see cref="ResultRule"/> (one case per function).
///
/// Rules (from the functions; names are ours): 0 time (KO count), 1 stock, 2 points race (FUN_02150134 target),
/// 3 sudden death of 1 (time 0x116F, ranks carried from stage work +0xA), 4–7 the team versions, 8 training (no
/// end), 9/0x16 time mission, 0xA–0xB/0xD/0x19–0x1D mission versions of the others, 0xC tutorial, 0xE–0x18 and 0x1E
/// mission goals on character states. A check returns true when the battle ends. A result returns whether the
/// outcome is decided (stage work +0x09, 0x020AFEE5): false means a draw, so Battle sets exit code 4 and scene 12
/// replays as sudden death (kinds 7/8/9 → rule 3, or 7 for teams).</summary>
public sealed class BattleRules
{
    private readonly GameGlobals _g;
    private readonly IBattleRuleWorld _world;
    private readonly Action<int, int> _se;

    // ---- battle work fields (offsets in the 0x170-byte battle work) ----
    /// <summary>+0x00: the check function; false = FUN_02150F64 (returns 0), true = the rule's check.</summary>
    public bool CheckEnabled { get; private set; }
    /// <summary>+0x04: bit 0 set by FUN_02150E3C / cleared by FUN_02150E04 (pause option 3; rule 8 refills the
    /// decks while it is clear); bit 4 set by the stock init FUN_0214FDB4.</summary>
    public uint Flags;
    /// <summary>+0x08.</summary>
    public int Rule { get; private set; }
    /// <summary>+0x0C: the time limit in frames.</summary>
    public int TimeLimit;
    /// <summary>+0x10: the remaining time in frames, −1 = none.</summary>
    public int Time;
    /// <summary>+0x14.</summary>
    public int Count { get; private set; }
    /// <summary>+0x18: players still in (stock rules).</summary>
    public int Survivors;
    /// <summary>+0x1C: per-player score (KO count; points in the target rules; mission values).</summary>
    public readonly int[] Score = new int[4];
    /// <summary>+0x2C: KO points with the bonus (FUN_0215CE28).</summary>
    public readonly int[] KoPoints = new int[4];
    /// <summary>+0x3C: score B (FUN_0215CC2C; −1 per own KO).</summary>
    public readonly int[] ScoreB = new int[4];
    /// <summary>+0x4C: rank (number of players ahead; 0 = first).</summary>
    public readonly int[] Rank = new int[4];
    /// <summary>+0x5C: the rank of the previous check.</summary>
    public readonly int[] PrevRank = new int[4];
    /// <summary>+0x6C / +0x8C / +0x9C: counters the KO handler FUN_0215CE28 fills (summed for players 1..3 into
    /// stage work +0x40/+0x42/+0x3E by FUN_0214FA24).</summary>
    public readonly int[] Stat6C = new int[4], Stat8C = new int[4], Stat9C = new int[4];
    /// <summary>+0xAC: score mode; 0 = FUN_0215CC04/0215CC2C count, 1 = target mode (FUN_02150134; FUN_0214FFDC
    /// drops points), 2 = rule 0x15, 6 = tutorial.</summary>
    public int Mode;
    /// <summary>+0xB0 / +0xB4: limit and counter of the mission goals.</summary>
    public int GoalLimit, GoalCounter;
    /// <summary>+0xB8 / +0xBC: training damage and its maximum (≤ 0xF9C0).</summary>
    public int TrainingDamage, TrainingDamageMax;
    /// <summary>+0xC0 + i: how often player i lost first place (capped at 0xFE).</summary>
    public readonly byte[] LostTop = new byte[4];
    /// <summary>+0xC4 / +0xC5: training combo and its maximum (≤ 99).</summary>
    public int TrainingCombo, TrainingComboMax;
    /// <summary>+0xC6: target (FUN_02150134).</summary>
    public int Target;
    /// <summary>+0xC7: team count = max(0x020AFEBE + i) + 1.</summary>
    public int Teams { get; private set; }
    /// <summary>+0xC8: rules active (FUN_0214F91C on, FUN_0214F938 off).</summary>
    public bool Active { get; private set; }
    /// <summary>+0xC9: stock mode (FUN_0214FD84 may rank out a player).</summary>
    public bool StockMode;
    /// <summary>+0xCA: target mode.</summary>
    public bool TargetMode;
    /// <summary>+0xCB: KO popups on (FUN_0215F744 is called by the KO handlers).</summary>
    public bool KoPopups;
    /// <summary>+0xCC: the 0x5A0 countdown SE (FUN_0214F998); 1 by default, cleared by rules 0xD/0x15/0x1A.</summary>
    public bool CountdownSe;
    /// <summary>ov06 .bss 0x02172964: rule 0x12's streak counter (kept per instance; the original keeps it while ov06
    /// stays loaded).</summary>
    public int Rule12Streak;

    /// <summary>Battle setup block 0x020AFE90 (+0x18 0x020AFEA8, +0x1C 0x020AFEAC time, +0x2A 0x020AFEBA no time,
    /// +0x2E 0x020AFEBE teams).</summary>
    private byte[] Setup8 => _g.Battle.Raw;
    private int SetupArg => BitConverter.ToInt32(Setup8, 0x18);                  // 0x020AFEA8
    private int SetupTime { get => BitConverter.ToInt32(Setup8, 0x1C); set => BitConverter.TryWriteBytes(Setup8.AsSpan(0x1C), value); }
    private int Team(int i) => (sbyte)Setup8[0x2E + i];                          // 0x020AFEBE + i (ldrsb)
    private StageWork Stage => _g.Stage;

    public BattleRules(GameGlobals globals, IBattleRuleWorld world, Action<int, int> se)
    {
        _g = globals;
        _world = world;
        _se = se;
    }

    // ---- setup and selection ----

    /// <summary>Battle_Add step 5 (ov06 0x0214CE28 switch, read from the assembly): the rule index and the row of
    /// <see cref="BattleRuleTables.Rows"/> for a battle kind. Kinds 0/2 → <see cref="BattleRuleTables.RuleSelect"/>
    /// [0x020AFEA0]; 1 → row 3, rule = 0x020AFEA0; 3 → row 4, +4 for teams (0x020AFEBD); 4 → rule 8, row 5 (≤ 2
    /// players) or 6, sets 0x020AFEBA; 5 → rule 8, row 7, count 2, local 0, sets 0x020AFEBA; 6 → row 8 (9 when
    /// watching, FUN_02087724() == 2), +4 for teams; 7/8/9 (sudden death) → rule 3 (+4 for teams), row 8/4/3. Kind 2
    /// forces pause kind 3. Kinds ≥ 10 leave the rule register unset in the original (not reachable).</summary>
    public static (int Rule, int PauseKind, int WindowKind, int Count, int Local) Select(int kind, GameGlobals g,
        int count, int local, bool watching, BattleRuleTables t)
    {
        var raw = g.Battle.Raw;
        int sel = BitConverter.ToInt32(raw, 0x10);                                    // 0x020AFEA0
        bool team = raw[0x2D] != 0;                                                   // 0x020AFEBD
        int rule = sel, row = 0;
        switch (kind)
        {
            case 0: case 2: rule = t.RuleSelect[sel * 2]; row = t.RuleSelect[sel * 2 + 1]; break;
            case 1: row = 3; break;
            case 3: row = 4; if (team) rule += 4; break;
            case 4: rule = 8; row = count < 3 ? 5 : 6; raw[0x2A] = 1; break;           // 0x020AFEBA = 1
            case 5: raw[0x2A] = 1; count = 2; local = 0; rule = 8; row = 7; break;
            case 6: row = 8; if (team) rule += 4; if (watching) row = 9; break;
            case 7: case 8: case 9:
                rule = 3;
                row = kind == 7 ? 8 : kind == 9 ? 3 : 4;                               // 0x0214CEC2: r4 = r6 (3) for 9
                if (team) rule += 4;
                break;
        }
        int pause = t.Rows[row * 2], window = t.Rows[row * 2 + 1];
        if (kind == 2) pause = 3;
        return (rule, pause, window, count, local);
    }

    /// <summary>FUN_02150F68: rules that show a target count (2, 6, 0xB, 0xD, 0xE, 0x1A, 0x1D); Battle_Add passes it on.</summary>
    public static bool ShowsTarget(int rule) => rule is 2 or 6 or 0xB or 0xD or 0xE or 0x1A or 0x1D;

    /// <summary>FUN_02150318: the sudden-death rules 3 and 7.</summary>
    public bool SuddenDeath => Rule is 3 or 7;

    /// <summary>FUN_0214F804(work, rule, count).</summary>
    public void Setup(int rule, int count)
    {
        CheckEnabled = false;                                                         // FUN_02150F64 + 1
        Rule = rule;
        Count = count;
        Survivors = count;
        StockMode = false; TargetMode = false; Active = false; KoPopups = false;
        CountdownSe = true;
        Teams = 0;
        Mode = 0;
        for (int i = 0; i < Count; i++)
            if (Teams <= Team(i)) Teams = Team(i);                                     // byte vs signed byte
        Teams = (byte)(Teams + 1);
        Init(rule);
        int time = SetupTime;                                                          // read after the init
        if (Setup8[0x2A] != 0) { Time = -1; return; }                                  // 0x020AFEBA
        if (rule is 3 or 7) { Time = TimeLimit = 0x116F; return; }
        Time = TimeLimit = time;
    }

    /// <summary>FUN_0214F91C: the rule's check becomes active and +0xC8 = 1 (called by FUN_0214DA44 when the start
    /// demo lets the battle begin).</summary>
    public void Enable() { CheckEnabled = true; Active = true; }

    /// <summary>FUN_0214F938: back to FUN_02150F64, +0xC8 = 0 (when the check ends the battle).</summary>
    public void Disable() { CheckEnabled = false; Active = false; }

    /// <summary>FUN_0214F948: <c>work[0](work)</c>. True ends the battle.</summary>
    public bool Check() => CheckEnabled && CheckRule(Rule);

    /// <summary>FUN_0214F950: the rule's result (stage work fields) and, per player, FUN_020789C0(deck) → stage work
    /// +0x12 + i. Returns whether the outcome is decided; 0 makes FUN_0214DFB0 use exit code 4.</summary>
    public bool Result()
    {
        bool r = ResultRule(Rule);
        for (int i = 0; i < Count; i++) Stage.Set8(0x12 + i, _world.DeckResult(i));
        return r;
    }

    // ---- events from the characters ----

    /// <summary>FUN_0215CC04(work, player, delta): +0x1C, only while active and in mode 0.</summary>
    public void AddScore(int player, int delta) { if (Active && Mode == 0) Score[player] += delta; }

    /// <summary>FUN_0215CC2C(work, player, delta): +0x3C, only while active and in mode 0.</summary>
    public void AddScoreB(int player, int delta) { if (Active && Mode == 0) ScoreB[player] += delta; }

    /// <summary>The rule bookkeeping of the KO handler FUN_0215CE28(chara, fell) for one KO'd player. Per attacker
    /// (chara +0x106/+0x108 bits): FUN_0215CC04(attacker, bonus + 1) and, while active in mode 0, +0x2C += bonus + 1
    /// (bonus = 1 when the KO'd character's data +0x174 → +0x19 is 0 and the hit was direct, computed by the caller).
    /// Then the victim: FUN_0215CC04/0215CC2C(victim, −1); FUN_0215D1F4 → <see cref="DropPoints"/>(victim, no koma
    /// left); and +0x6C[victim]++ unless <paramref name="fell"/>. Returns the dropped points (FUN_0215D1F4 spawns
    /// that many 0xC0 effects when <paramref name="fell"/> is false). The popups (FUN_0215F744 while
    /// <see cref="KoPopups"/>), the per-attacker-0 stats and the KO demo call are the caller's.</summary>
    public int Ko(int victim, ReadOnlySpan<(int Attacker, int Bonus)> attackers, bool fell, bool victimHasKomaLeft)
    {
        foreach (var (a, bonus) in attackers)
        {
            AddScore(a, bonus + 1);
            if (Active && Mode == 0) KoPoints[a] += bonus + 1;
        }
        AddScore(victim, -1);
        AddScoreB(victim, -1);
        int dropped = DropPoints(victim, !victimHasKomaLeft);
        if (!fell) Stat6C[victim]++;
        return dropped;
    }

    /// <summary>The rule part of FUN_0215CA44 (a self-KO): unless sudden death, FUN_0215CC04/0215CC2C(victim,
    /// −(n + 1)) with n = 1 when the deck has no koma left.</summary>
    public void SelfKo(int victim, bool hasKomaLeft)
    {
        if (SuddenDeath) return;
        int d = -((hasKomaLeft ? 0 : 1) + 1);
        AddScore(victim, d);
        AddScoreB(victim, d);
    }

    /// <summary>FUN_0214FD84(work, player), from FUN_0215CCD4 when the deck has no koma left: in stock mode a player
    /// still at rank 0 gets rank = survivors (FUN_0214FE44 settles it at the next check). True = taken out.</summary>
    public bool Eliminate(int player)
    {
        if (!Active || !StockMode) return false;
        if (Rank[player] == 0) Rank[player] = Survivors;
        return true;
    }

    /// <summary>FUN_0214FFDC(work, player, all): in target mode (+0xAC == 1) a KO costs one point (+0x1C and +0x3C −1),
    /// or all of them; returns how many.</summary>
    public int DropPoints(int player, bool all)
    {
        if (!Active || Mode != 1) return 0;
        int v = Score[player];
        if (v == 0) return 0;
        if (!all) { Score[player] = v - 1; ScoreB[player]--; return 1; }
        Score[player] = 0;
        ScoreB[player] -= v;
        return v;
    }

    /// <summary>FUN_0214FFA8: points still in play, target − Σ score (≥ 0), 0 outside target mode.</summary>
    public int PointsLeft()
    {
        if (!TargetMode) return 0;
        int s = 0;
        for (int i = 0; i < Count; i++) s += Score[i];
        int v = Target - s;
        return v < 0 ? 0 : v;
    }

    /// <summary>FUN_02150E04 (pause option 3 = 0) / FUN_02150E3C (= 1): flag bit 0 and every chara's +0x11D bit 0.</summary>
    public void SetOption3(bool on)
    {
        if (on) Flags |= 1; else Flags &= ~1u;
        for (int i = 0; i < Count; i++) _world.SetCharaFlag11D(i, !on);
    }

    // ---- time (FUN_0214F8C4 / 8E0 / 8F8 / 90C) ----

    /// <summary>FUN_0214F8C4: (limit − time) / 0x90, 0 without a limit.</summary>
    public int ElapsedUnits => Time == -1 ? 0 : (TimeLimit - Time) / 0x90;
    /// <summary>FUN_0214F8E0: time / 0x90.</summary>
    public int RemainingUnits => Time == -1 ? 0 : Time / 0x90;
    /// <summary>FUN_0214F8F8: limit − time in frames.</summary>
    public int ElapsedFrames => Time == -1 ? 0 : TimeLimit - Time;
    /// <summary>FUN_0214F90C: time in frames (0 without a limit).</summary>
    public int RemainingFrames => Time == -1 ? 0 : Time;

    /// <summary>FUN_0214F998: the battle clock. SE 0x7A/3 at 0x5A0 frames (with +0xCC); SE 0x7A/4 every 0x90 frames
    /// from 0x2D0 down; true (time up, SE 0x7A/6) once it drops below 0x90.</summary>
    private bool Clock()
    {
        if (Time == -1) return false;
        if (CountdownSe && Time == 0x5A0) _se(0x7A, 3);
        if (Time <= 0x2D0 && Time % 0x90 == 0) _se(0x7A, 4);
        Time--;
        if (Time < 0x90) { _se(0x7A, 6); return true; }
        return false;
    }

    /// <summary>FUN_0214F9FC: the mission clock; true (SE 0x7A/6) when it reaches 0.</summary>
    private bool MissionClock()
    {
        int t = Time;
        if (t == -1) return false;
        Time = t - 1;
        if (t - 1 < 1) { _se(0x7A, 6); return true; }
        return false;
    }

    // ---- rule table 0x02170EAC ----

    private void Init(int rule)
    {
        switch (rule)
        {
            case 0: case 4: KoPopups = true; break;                                    // 0x0214FA70 / 0x0214FB34
            case 1: case 5: InitStock(); break;                                        // 0x0214FDB4 / thunk 0x0214FEC0
            case 2: case 6: InitTarget(); break;                                       // 0x02150028 / thunk 0x02150148
            case 3: case 7: InitSuddenDeath(); break;                                  // 0x02150330 / thunk 0x021503AC
            case 8: SetOption3(false); break;                                          // thunk 0x02150D68 → 0x02150E04
            case 9: case 0x16: KoPopups = true; DefaultTime(0x332F); break;            // 0x0215044C
            case 0xA: case 0x19: case 0x1C: InitStock(); DefaultTime(0x332F); break;   // 0x021504E4 / 0x02150560
            case 0xB: case 0x1D: InitTarget(); DefaultTime(0x332F); break;            // 0x021505DC / 0x02150630
            case 0xC:                                                                  // 0x02150684
                Setup8[0x2A] = 1;                                                      // 0x020AFEBA
                _world.MapFlags |= 1;
                Mode = 6;
                _world.SetCharaFlag11D(0, true);
                _world.TutorialCpuSetup();                                             // only with ov10 controllers (+0x16E)
                break;
            case 0xD: case 0x1A:                                                       // 0x0215071C / 0x02150774
                CountdownSe = false;
                SetTarget(SetupArg == 0 ? 1 : SetupArg);
                break;
            case 0xE:                                                                  // 0x021507D8
                SetTarget(1);
                GoalLimit = SetupArg == 0 ? 0x35F : SetupArg;
                GoalCounter = 0;
                DefaultTime(0x2A30);
                break;
            case 0xF: DefaultTime(0x2A30); break;                                     // 0x02150868
            case 0x10: case 0x1E: _world.MapFlags |= 1; InitStock(); DefaultTime(0x2A30); break; // 0x021508BC
            case 0x11: case 0x12:                                                      // 0x02150950 / 0x021509F0
                for (int i = 1; i < Count; i++) Rank[i] = 0;
                DefaultTime(0x2A30);
                break;
            case 0x13:                                                                 // 0x02150ACC
                GoalLimit = SetupArg == 0 ? 0x2A30 : SetupArg;
                GoalCounter = 0;
                SetupTime = 18000;
                Stage.Set8(0x08, 0);                                                   // 0x020AFEE4
                break;
            case 0x14:                                                                 // 0x02150B60
                _world.MapFlags |= 1;
                GoalLimit = SetupArg == 0 ? 0x2A30 : SetupArg;
                GoalCounter = 0;
                SetupTime = 18000;
                break;
            case 0x15: Mode = 2; CountdownSe = false; DefaultTime(0x224F); break;     // 0x02150BFC
            case 0x17:                                                                 // 0x02150CE4
                KoPopups = true; DefaultTime(0x332F);                                  // → 0x0215044C
                for (int i = 1; i < Count; i++) Score[i] = SetupArg;
                break;
            case 0x18: DefaultTime(0x224F); break;                                    // 0x02150D18
            case 0x1B: KoPopups = true; DefaultTime(0x332F); break;                   // 0x02150498
        }
    }

    private void DefaultTime(int frames) { if (SetupTime == 0) SetupTime = frames; }

    /// <summary>FUN_0214FDB4.</summary>
    private void InitStock()
    {
        StockMode = true;
        Flags |= 0x10;
        for (int i = 0; i < Count; i++) { PrevRank[i] = 0; Rank[i] = 0; }
    }

    /// <summary>FUN_02150134(work, n): target mode with target n (byte), +0xAC = 1.</summary>
    private void SetTarget(int n) { TargetMode = true; Target = (byte)n; Mode = 1; }

    /// <summary>FUN_02150028: target = count + 1, every player starts with 1 point.</summary>
    private void InitTarget()
    {
        SetTarget(Count + 1);
        for (int i = 0; i < Count; i++) Score[i] = 1;
    }

    /// <summary>FUN_02150330: stock, with the ranks of the drawn battle (stage work +0xA + i); players already
    /// ranked out are not survivors.</summary>
    private void InitSuddenDeath()
    {
        InitStock();
        Survivors = Count;
        for (int i = 0; i < Count; i++)
        {
            int r = Stage.S8(0x0A + i);
            PrevRank[i] = r; Rank[i] = r;
            if (r != 0) Survivors--;
        }
    }

    private bool CheckRule(int rule)
    {
        switch (rule)
        {
            case 0: case 9: case 0x15: case 0x16: case 0x17:                           // 0x0214FA78 / 0x02150C20
                RankByScore(); return Clock();
            case 1: case 3: return CheckStock();                                       // 0x0214FDDC / 0x0215036C
            case 2: case 0xB: case 0xD: return CheckTarget();                          // 0x0215004C
            case 0x1A: return CheckTarget();                                           // thunk 0x02150794
            case 4: case 0x1B: TeamRankByScore(out _); return Clock();                 // 0x0214FB3C
            case 5: case 7: return CheckTeamStock();                                   // 0x0214FEC8 / 0x021503B4
            case 6: case 0x1D: return CheckTeamTarget();                               // 0x02150150
            case 8: CheckTraining(); return false;                                     // 0x02150D70
            case 0xA: return !_world.HasKomaLeft(0) || CheckStock();                   // 0x02150500
            case 0xC: return _world.TutorialFinished;                                  // 0x021506EC
            case 0xE:                                                                  // 0x02150814
                GoalCounter = Score[0] < Target ? 0 : GoalCounter + 1;
                if (GoalCounter < GoalLimit) return MissionClock();
                MissionClear(); return true;
            case 0xF:                                                                  // 0x02150880
                if ((_world.MapFlags & 2) == 0) return MissionClock();
                MissionClear(); return true;
            case 0x10: case 0x1E:                                                      // 0x021508F0
                {
                    if (!_world.HasKomaLeft(0)) return true;
                    int s = _world.CharaState(1);
                    if (s is 0x1B or 0x18) { MissionClear(); return true; }
                    return MissionClock();
                }
            case 0x11:                                                                 // 0x0215097C
                {
                    for (int i = 1; i < Count; i++)
                        if (_world.CharaState(i) == 8 && _world.CharaStateArg(i) == 7) Rank[i] = 1; // FUN_0215B440(chara, 7)
                    bool all = true;
                    for (int i = 1; i < Count; i++) if (Rank[i] == 0) all = false;
                    if (all) { MissionClear(); return true; }
                    return MissionClock();
                }
            case 0x12:                                                                 // 0x02150A1C
                {
                    int c = _world.CurrentKomaByte41(1);
                    for (int i = 2; i < Count; i++) Rank[i] = c == _world.CurrentKomaByte41(i) ? 1 : 0;
                    bool all = true;
                    for (int i = 2; i < Count; i++) if (Rank[i] == 0) all = false;
                    if (all)
                    {
                        if (Rule12Streak > 3) { MissionClear(); return true; }
                        Rule12Streak++;
                    }
                    else Rule12Streak = 0;
                    return MissionClock();
                }
            case 0x13:                                                                 // 0x02150B00
                {
                    int s = _world.CharaState(1);
                    if (s is 8 or 0x17) return true;
                    if (GoalLimit <= ++GoalCounter) MissionClear();
                    return MissionClock();
                }
            case 0x14:                                                                 // 0x02150BA0
                if (_world.CharaState(0) == 8) return true;
                if (GoalLimit <= ++GoalCounter) MissionClear();
                return MissionClock();
            case 0x18:                                                                 // 0x02150D30
                if (_world.CharaState(1) == 8) { MissionClear(); return true; }
                return MissionClock();
            case 0x19: case 0x1C: return !_world.HasKomaLeft(0) || CheckTeamStock();   // 0x0215057C
        }
        return false;
    }

    /// <summary>0x0214FA78's ranking: rank = players with a strictly higher score; a player who was first (previous
    /// rank 0) and changes rank loses the top (+0xC0, ≤ 0xFE).</summary>
    private void RankByScore()
    {
        for (int i = 0; i < Count; i++)
        {
            Rank[i] = 0;
            for (int j = 0; j < Count; j++)
                if (i != j && Score[i] < Score[j]) Rank[i]++;
            TrackTop(i);
        }
    }

    private void TrackTop(int i)
    {
        if (PrevRank[i] == Rank[i]) return;
        if (PrevRank[i] == 0 && LostTop[i] < 0xFE) LostTop[i]++;
        PrevRank[i] = Rank[i];
    }

    /// <summary>0x0214FB3C / 0x02150150: team scores (Σ of the members), team ranks, each player gets its team's rank.
    /// The lost-top tracking loops over the team count but indexes the player arrays (as in the original).</summary>
    private void TeamRankByScore(out int[] sums)
    {
        sums = new int[Math.Max(Teams, 4)];
        var rank = new int[Math.Max(Teams, 4)];
        for (int i = 0; i < Count; i++) sums[Team(i)] += Score[i];
        for (int t = 0; t < Teams; t++)
        {
            rank[t] = 0;
            for (int u = 0; u < Teams; u++)
                if (t != u && sums[t] < sums[u]) rank[t]++;
        }
        for (int i = 0; i < Count; i++) Rank[i] = rank[Team(i)];
        for (int t = 0; t < Teams; t++) TrackTop(t);
    }

    /// <summary>0x0214FDDC: FUN_0214FE44 (≤ 1 survivor) or the clock.</summary>
    private bool CheckStock() => SettleEliminations() || Clock();

    /// <summary>FUN_0214FE44: each player ranked out since the last check takes the place after the remaining
    /// survivors; true when fewer than 2 are left.</summary>
    private bool SettleEliminations()
    {
        int n = Survivors;
        for (int i = 0; i < Count; i++) if (PrevRank[i] != Rank[i]) n--;
        for (int i = 0; i < Count; i++)
            if (PrevRank[i] != Rank[i]) { Rank[i] = n; PrevRank[i] = n; }
        Survivors = n;
        return n < 2;
    }

    /// <summary>0x0215004C: rank by score; true when someone reached the target, else the clock.</summary>
    private bool CheckTarget()
    {
        RankByScore();
        for (int i = 0; i < Count; i++) if (Target <= Score[i]) return true;
        return Clock();
    }

    /// <summary>0x0214FEC8: settle, then FUN_0214FFF40 == 1 (one team left), else the clock.</summary>
    private bool CheckTeamStock()
    {
        if (SettleEliminations()) return true;
        if (TeamsInFirst() == 1) return true;
        return Clock();
    }

    /// <summary>0x02150150: team ranks; true when a team's sum reached the target, else the clock.</summary>
    private bool CheckTeamTarget()
    {
        TeamRankByScore(out var sums);
        for (int t = 0; t < Teams; t++) if (Target <= sums[t]) return true;
        return Clock();
    }

    /// <summary>FUN_0214FF40: the number of teams whose best member has rank 0.</summary>
    private int TeamsInFirst()
    {
        var best = TeamBest();
        int n = 0;
        for (int t = 0; t < Teams; t++) if (best[t] == 0) n++;
        return n;
    }

    /// <summary>Per team the lowest member rank (start value = count).</summary>
    private int[] TeamBest()
    {
        var best = new int[Math.Max(Teams, 4)];
        for (int t = 0; t < Teams; t++) best[t] = Count;
        for (int i = 0; i < Count; i++) best[Team(i)] = Math.Min(best[Team(i)], Rank[i]);
        return best;
    }

    /// <summary>0x02150D70: training. With ≤ 2 players in the battle work (+0x158) and more than one counted: the
    /// combo resets unless player 1 is in state 8 and the hit-stop reset flag (+0x16D) is clear; then
    /// FUN_02150E74(0) and (1). While flag bit 0 is clear every deck is refilled.</summary>
    private void CheckTraining()
    {
        if ((BattlePlayers < 0 ? Count : BattlePlayers) < 3 && Count > 1)
        {
            if (_world.CharaState(1) != 8 || HitStopResetPending) { TrainingCombo = 0; TrainingDamage = 0; }
            TrainingHit(0);
            TrainingHit(1);
        }
        if ((Flags & 1) == 0)
            for (int i = 0; i < Count; i++) _world.RefillDeck(i);
    }

    /// <summary>Battle work +0x158 (player count), set by the flow; defaults to <see cref="Count"/>.</summary>
    public int BattlePlayers { get; set; } = -1;
    /// <summary>Battle work +0x16D, the hit-stop reset flag (owned by <see cref="BattleFlow"/>).</summary>
    public bool HitStopResetPending { get; set; }

    /// <summary>FUN_02150E74(work, which): a hit adds to the combo (≤ 99) and damage (0..0xF9C0), keeps the maxima, and
    /// saves new records: combo above save +0x8E0 (0x020B0B98) → FUN_02071D5C, damage >> 6 above save +0x8E2 →
    /// FUN_02071D84 (each marks the field dirty and sets 0x020B02AC).</summary>
    private void TrainingHit(int which)
    {
        int d = _world.TrainingDamage(which);
        if (d == 0) return;
        TrainingCombo = Math.Min(TrainingCombo + 1, 99);
        TrainingDamage = Math.Clamp(TrainingDamage + d, 0, 0xF9C0);
        if (TrainingComboMax < TrainingCombo) TrainingComboMax = TrainingCombo;
        if (TrainingDamageMax < TrainingDamage) TrainingDamageMax = TrainingDamage;
        var save = _g.Save;
        if (SaveU16(0x8E0) < TrainingCombo) SetRecord(0x8E0, TrainingCombo);
        int dmg = TrainingDamage >> 6;
        if (SaveU16(0x8E2) < dmg) SetRecord(0x8E2, dmg & 0xFFFF);
        void SetRecord(int o, int v)
        {
            if (SaveU16(o) == v) return;
            BitConverter.TryWriteBytes(save.Image.Data.AsSpan(o), (ushort)v);
            save.Dirty.Add((o, 2));
            save.AutoSaveRequested = true;
        }
    }

    private int SaveU16(int o) => BitConverter.ToUInt16(_g.Save.Image.Data, o);

    /// <summary>Training records for the pause (FUN_0214EBE8): save +0x8E0 max combo, +0x8E2 max damage >> 6.</summary>
    public (int Combo, int Damage) TrainingRecords => (SaveU16(0x8E0), SaveU16(0x8E2));

    /// <summary>FUN_0215041C: the clear.bin check, then stage work +0x08 (0x020AFEE4) = 1 the first time.</summary>
    private bool MissionClear()
    {
        _world.MissionClearCheck();
        if (Stage.Raw[0x08] != 0) return false;
        Stage.Set8(0x08, 1);
        return true;
    }

    private bool ResultRule(int rule)
    {
        switch (rule)
        {
            case 0: return ResultTime();                                               // 0x0214FAE4
            case 1: return ResultStock();                                              // 0x0214FDF4
            case 2: return ResultTarget();                                             // 0x021500D8
            case 3:                                                                    // 0x02150384
                for (int i = 0; i < Count; i++) Stage.Set8(0x0A + i, Rank[i]);
                DecideByRankZero();
                return true;
            case 4: return ResultTeamTime();                                           // 0x0214FC34
            case 5: return ResultTeamStock();                                          // 0x0214FEF0
            case 6: return ResultTeamTarget();                                         // 0x02150268
            case 7:                                                                    // 0x021503DC
                for (int i = 0; i < Count; i++) Stage.Set8(0x0A + i, Rank[i]);
                SetDecided(TeamsInFirst() < 2);
                TeamPlaces();
                return true;
            case 8: return false;                                                      // 0x02150E00
            case 9: case 0x16: case 0x17:                                              // 0x02150470 (0x17 via thunk 0x02150D10)
                Stage.Set8(0x07, 1);                                                   // 0x020AFEE3
                if (ResultTime() && Rank[0] == 0) MissionClear();
                return true;
            case 0xA:                                                                  // 0x02150530
                if (ResultStock() && Rank[0] == 0) MissionClear();
                Stage.SetI32(0x30, ElapsedFrames / 0x90);                              // 0x020AFF0C
                return true;
            case 0xB: case 0xD:                                                        // 0x02150600 / 0x02150744
                if (ResultTarget() && Rank[0] == 0) MissionClear();
                Stage.SetI32(0x30, ElapsedFrames / 0x90);
                return true;
            case 0xC: MissionClear(); return true;                                     // 0x02150710
            case 0xE: case 0xF: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x18: case 0x1E:
                Stage.SetI32(0x30, ElapsedFrames);                                     // 0x02150854 … 0x02150D54
                return true;
            case 0x15:                                                                 // 0x02150C8C
                {
                    Stage.Set8(0x07, 1);
                    int n0 = 0;
                    for (int i = 0; i < Count; i++)
                    {
                        if (Rank[i] == 0) n0++;
                        Stage.Set8(0x0A + i, Rank[i]);
                        SetS16(0x16, i, Score[i]);
                    }
                    if (n0 > 1) { SetDecided(false); return true; }
                    SetDecided(true);
                    if (Rank[0] == 0) MissionClear();
                    return true;
                }
            case 0x19: case 0x1C:                                                      // 0x021505AC
                if (ResultTeamStock() && Rank[0] == 0) MissionClear();
                Stage.SetI32(0x30, ElapsedFrames / 0x90);
                return true;
            case 0x1A:                                                                 // 0x0215079C
                if (ResultTarget() && Rank[0] == 0 && Target <= Score[0]) MissionClear();
                Stage.SetI32(0x30, ElapsedFrames / 0x90);
                return true;
            case 0x1B:                                                                 // 0x021504BC
                Stage.Set8(0x07, 1);
                if (ResultTeamTime() && Rank[0] == 0) MissionClear();
                return true;
            case 0x1D:                                                                 // 0x02150654
                if (ResultTeamTarget() && Rank[0] == 0) MissionClear();
                Stage.SetI32(0x30, ElapsedFrames / 0x90);
                return true;
        }
        return false;
    }

    private void SetS16(int o, int i, int v) => BitConverter.TryWriteBytes(Stage.Raw.AsSpan(o + i * 2), (short)v);
    private void SetDecided(bool d) => Stage.Set8(0x09, d ? 1 : 0);                   // 0x020AFEE5

    /// <summary>Ranks and the three scores to stage work +0xA / +0x16 / +0x1E / +0x26.</summary>
    private void WriteScores(bool koPoints, bool scoreB)
    {
        for (int i = 0; i < Count; i++)
        {
            Stage.Set8(0x0A + i, Rank[i]);
            SetS16(0x16, i, Score[i]);
            SetS16(0x1E, i, koPoints ? KoPoints[i] : 0);
            SetS16(0x26, i, scoreB ? ScoreB[i] : 0);
        }
    }

    /// <summary>FUN_0214FA24: Σ over players 1..3 of +0x9C → +0x3E, +0x6C → +0x40, +0x8C → +0x42; remaining units →
    /// +0x46; player 0's +0x6C → +0x44 (halfwords).</summary>
    private void WriteStats()
    {
        int a = 0, b = 0, c = 0;
        for (int i = 1; i < 4; i++) { a += Stat9C[i]; b += Stat6C[i]; c += Stat8C[i]; }
        BitConverter.TryWriteBytes(Stage.Raw.AsSpan(0x3E), (short)a);
        BitConverter.TryWriteBytes(Stage.Raw.AsSpan(0x40), (short)b);
        BitConverter.TryWriteBytes(Stage.Raw.AsSpan(0x42), (short)c);
        BitConverter.TryWriteBytes(Stage.Raw.AsSpan(0x46), (short)RemainingUnits);
        BitConverter.TryWriteBytes(Stage.Raw.AsSpan(0x44), (short)Stat6C[0]);
    }

    private int RankZeroCount()
    {
        int n = 0;
        for (int i = 0; i < Count; i++) if (Rank[i] == 0) n++;
        return n;
    }

    /// <summary>0x0214FAE4.</summary>
    private bool ResultTime()
    {
        int n0 = RankZeroCount();
        WriteScores(true, true);
        WriteStats();
        bool d = n0 < 2;
        SetDecided(d);
        return d;
    }

    /// <summary>FUN_0214FE8C: decided = fewer than 2 players at rank 0; a draw keeps that many survivors.</summary>
    private bool DecideByRankZero()
    {
        int n = RankZeroCount();
        if (n >= 2) Survivors = n;
        bool d = n < 2;
        SetDecided(d);
        return d;
    }

    /// <summary>0x0214FDF4: player 0 winning sets stage work +0x3C (0x020AFF18) = 1.</summary>
    private bool ResultStock()
    {
        for (int i = 0; i < Count; i++) Stage.Set8(0x0A + i, Rank[i]);
        for (int i = 0; i < Count; i++) { SetS16(0x16, i, 0); SetS16(0x1E, i, 0); SetS16(0x26, i, 0); }
        WriteStats();
        if (!DecideByRankZero()) return false;
        if (Rank[0] == 0) SetS16(0x3C, 0, 1);
        return true;
    }

    /// <summary>0x021500D8.</summary>
    private bool ResultTarget()
    {
        int n0 = RankZeroCount();
        for (int i = 0; i < Count; i++) { Stage.Set8(0x0A + i, Rank[i]); SetS16(0x16, i, Score[i]); }
        WriteStats();
        if (n0 > 1) { SetDecided(false); return false; }
        if (Rank[0] == 0) SetS16(0x3C, 0, 1);
        SetDecided(true);
        return true;
    }

    /// <summary>0x0214FC34: team ranks are the rank of each team's last member (local array of 3, as the original).</summary>
    private bool ResultTeamTime()
    {
        var teamRank = new int[Math.Max(Teams, 4)];
        for (int i = 0; i < Count; i++) teamRank[Team(i)] = Rank[i];
        WriteScores(true, true);
        WriteStats();
        int n = 0;
        for (int t = 0; t < Teams; t++) if (teamRank[t] == 0) n++;
        if (n < 2) TeamPlaces();
        SetDecided(n < 2);
        return n < 2;
    }

    /// <summary>0x0214FEF0.</summary>
    private bool ResultTeamStock()
    {
        for (int i = 0; i < Count; i++) Stage.Set8(0x0A + i, Rank[i]);
        for (int i = 0; i < Count; i++) { SetS16(0x16, i, 0); SetS16(0x1E, i, 0); SetS16(0x26, i, 0); }
        WriteStats();
        int n = TeamsInFirst();
        if (n < 2) TeamPlaces();
        SetDecided(n < 2);
        return n < 2;
    }

    /// <summary>0x02150268.</summary>
    private bool ResultTeamTarget()
    {
        var best = TeamBest();
        for (int i = 0; i < Count; i++)
        {
            Stage.Set8(0x0A + i, Rank[i]);
            SetS16(0x16, i, Score[i]);
            SetS16(0x1E, i, 0);
            SetS16(0x26, i, 0);
        }
        WriteStats();
        int n = 0;
        for (int t = 0; t < Teams; t++) if (best[t] == 0) n++;
        if (n < 2) TeamPlaces();
        SetDecided(n < 2);
        return n < 2;
    }

    /// <summary>FUN_0214FCC8: team places from the best member rank (a team is behind every team with a lower best
    /// rank) → stage work +0x0E + i (0x020AFEEA) for each player's team.</summary>
    private void TeamPlaces()
    {
        var best = TeamBest();
        var place = new int[Math.Max(Teams, 4)];
        for (int t = 0; t < Teams; t++)
            for (int u = 0; u < Teams; u++)
                if (t != u && best[u] < best[t]) place[t]++;
        for (int i = 0; i < Count; i++) Stage.Set8(0x0E + i, place[Team(i)]);
    }
}
