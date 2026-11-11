using System.Buffers.Binary;

namespace Jus.Game.Scenes.Ov06;

/// <summary>One row of the attack table ov06 0x021712B8 (12 bytes): +0 motion (FUN_02157450), +4 the attacks this
/// one may not be cancelled into (bit n = attack n; ORed into chara +0xC4), +8 the state id passed to
/// FUN_02157494, +9 / +0xA the result-statistics counters bumped on start / on hit (−1 = none).</summary>
public readonly record struct BattleAttackRow(uint Motion, uint CancelMask, sbyte StateId, sbyte StartCounter, sbyte HitCounter);

/// <summary>The attack table (ov06 0x021712B8, 18 rows; JUS data, supplied by the tables export).
/// Attacks 1–10 are the normal moves, 11 the guard-type input (0x1000), 12 the special (needs chara +0xD1),
/// 13/14 the help koma (need FUN_0207834C), rows 13… also the special's rows by help type.</summary>
public sealed class BattleAttackTable(IReadOnlyList<BattleAttackRow> rows)
{
    public const uint Address = 0x021712B8;
    public const int RowCount = 18, RowSize = 12;
    public IReadOnlyList<BattleAttackRow> Rows { get; } = rows;
    public BattleAttackRow this[int i] => Rows[i];

    public static BattleAttackTable Parse(ReadOnlySpan<byte> raw)
    {
        var rows = new BattleAttackRow[raw.Length / RowSize];
        for (int i = 0; i < rows.Length; i++)
        {
            var r = raw.Slice(i * RowSize, RowSize);
            rows[i] = new BattleAttackRow(BinaryPrimitives.ReadUInt32LittleEndian(r), BinaryPrimitives.ReadUInt32LittleEndian(r[4..]),
                (sbyte)r[8], (sbyte)r[9], (sbyte)r[10]);
        }
        return new BattleAttackTable(rows);
    }
}

/// <summary>The chara work (Battle_CharaCreate ov06 0x02156A38, 0x1F0 bytes) fields the attack and damage code
/// reads and writes. Offsets are the original ones; the lead's chara class can hold one of these.</summary>
public sealed class BattleFighterCombat
{
    public required BattleHitObject Col;        // chara +0x1A8 → +0x10 (its +0x5C is the move object)
    public byte StateId;                        // +0x18 (the state slot's current id)
    public uint Input;                          // +0x6C: input bits from the controller (0x80/0x100 attack buttons,
                                                //        1/2 up/down?, 4/8 right/left, 0x40 help, 0x1000 guard; meaning of 1/2 inferred)
    public short Status88, StatusA0;            // +0x88 / +0xA0: status ids
    public uint BlockedAttacks;                 // +0xC0: attacks this character can't use
    public uint CancelMask;                     // +0xC4: attacks the current chain can't cancel into
    public byte Buffered;                       // +0xC8: the next attack requested during the current one
    public byte Combo;                          // +0xC9: chained attacks
    public sbyte Attack;                        // +0xCA: the attack being started
    public byte Row;                            // +0xCB: its row in the attack table
    public short Walk;                          // +0xCC: walking during the attack (frames; set by the note track)
    public short Invincible;                    // +0xCE: invincibility frames (blinking)
    public byte Blink;                          // +0xD0
    public bool SpecialReady;                   // +0xD1
    public bool SpecialFlag;                    // +0xD2
    public byte SpecialCount;                   // +0xD3
    public byte Hits0D7;                        // +0xD7: hits taken in a row while in damage
    public byte AirActions, AirCount;           // +0xD9 / +0xDA (BattleCharacter.AirActions / AirCount)
    public bool GroundCancel, AirCancel;        // +0xF3 / +0xF4: cancel windows (note commands 1 / 0x15)
    public bool Enabled = true;                 // +0xF5: the player can act (FUN_0214DA44)
    public bool WalkAllowed, WalkNeedsInput;    // +0xF6 / +0xF7
    public ushort Reaction;                     // +0x100: reaction kind (from collision +0x16C)
    public ushort Received106;                  // +0x106
    public short KnockVx, KnockVy;              // +0x10A / +0x10C: knockback velocity (accel adders 0x0215B6A0…)
    public short DamageGauge;                   // +0x10E: accumulates damage (≥ 600 → heavier reaction), −2 per frame
    public short DownTimer;                     // +0x110: clamp(stun + 0x14, 0x18, 0xB4)
    public ushort Shake112;                     // +0x112: (damage &gt;&gt; 6) &amp; 0xFF
    public sbyte StunTimer;                     // +0x115: clamp(stun + 0x14 + 0x02171488[state], 0x10, 0x3C)
    public sbyte Mash116;                       // +0x116
    public bool Mashed117;                      // +0x117
    public byte Counter118;                     // +0x118
    public sbyte Held11B = -1;                  // +0x11B
    public byte Held11C;                        // +0x11C
    public byte Flags11D;                       // +0x11D: bit 0 can't be KO'd, 1 held, 2 recovering
    public byte Element11E;                     // +0x11E: element effect of the hit (0–3, table 0x02172190)
    public bool Pierce11F;                      // +0x11F
    public int HelpUses1CC, HelpUses1D0;        // +0x1CC / +0x1D0
    public byte Phase1E9;                       // +0x1E9
    /// <summary>+0xFC: the damage sub-handler (returns true when the reaction is over).</summary>
    public Func<BattleFighterCombat, bool>? Reactor;

    public BattleMoveObject Move => Col.Move;
}

/// <summary>What the attack/damage code calls outside its data (the chara's other subsystems).</summary>
public interface IBattleFighterHooks
{
    /// <summary>FUN_02157494(chara, id, state, exit, 0x10).</summary>
    void RequestState(BattleFighterCombat c, byte id, BattleFighterState state);
    /// <summary>Chara +0x14 = 0: the current state runs its first frame again.</summary>
    void RestartState(BattleFighterCombat c);
    /// <summary>True on the first run of the current state (FUN_0215D4E0 / FUN_0215B158).</summary>
    bool FirstFrame(BattleFighterCombat c);
    /// <summary>FUN_02157450(chara, motion).</summary>
    void SetMotion(BattleFighterCombat c, uint motion);
    /// <summary>FUN_02155620: the note track's motion-end flag (+0x90 bit 0x10000000).</summary>
    bool MotionEnded(BattleFighterCombat c);
    /// <summary>FUN_0215BC10: the character's motion is still playing.</summary>
    bool MotionPlaying(BattleFighterCombat c);
    /// <summary>FUN_0215DEC8: not grounded → fall state (returns true when it switched).</summary>
    bool TryFall(BattleFighterCombat c);
    /// <summary>FUN_0215D2E4: back to stand.</summary>
    void Stand(BattleFighterCombat c);
    /// <summary>FUN_0215EFC0(chara, speed, …): walk during an attack.</summary>
    void Walk(BattleFighterCombat c);
    /// <summary>FUN_02083950(object, right): set the facing.</summary>
    void SetFacing(BattleFighterCombat c, bool right);
    /// <summary>FUN_0215A864 / FUN_0215B62C: the facing (1 = right).</summary>
    int Facing(BattleFighterCombat c);
    /// <summary>FUN_0215F334(charaData, visible).</summary>
    void SetVisible(BattleFighterCombat c, bool visible);
    /// <summary>The help type: CharaData +0x174 → +0x8C (attacks ≥ 13 use row attack + (type − 3)·2).</summary>
    int HelpType(BattleFighterCombat c);
    /// <summary>FUN_0207834C(deck, 1): a help koma can be used (false also notifies the deck: event 0xB).</summary>
    bool DeckCanUseHelp(BattleFighterCombat c);
    /// <summary>FUN_020783B8(deck, damage): subtracts HP through deck +0x56C; false when the HP is gone.</summary>
    bool DeckDamage(BattleFighterCombat c, int damage);
    /// <summary>FUN_020781E4(deck, delta): the koma gauge (+0x5C8, 0x6400 per level).</summary>
    void DeckGauge(BattleFighterCombat c, int delta);
    /// <summary>FUN_0207342C(arc, n).</summary>
    void PlaySe(int arc, int n);
    /// <summary>FUN_0215F6E4(chara, id, 1): a character effect.</summary>
    void Effect(BattleFighterCombat c, uint id);
}

/// <summary>The states the attack/damage code requests (id, ov06 state function / exit).</summary>
public enum BattleFighterState
{
    /// <summary>Attack: 0x02159EF8 / 0x0215A6AC, ids 9–0xC from the attack table.</summary>
    Attack,
    /// <summary>8: damage 0x0215AF34 / 0x0215B174.</summary>
    Damage,
    /// <summary>0x11: 0x0215BDF0 / 0x0215BE20 (status 0x12 after damage).</summary>
    Status12,
    /// <summary>0x12: 0x0215BE34 / 0x0215BE64 (status 0x20 after damage).</summary>
    Status20,
    /// <summary>0x14: 0x0215C090 / 0x0215C23C (hit while held).</summary>
    HeldHit,
    /// <summary>0x15: 0x0215C2F8 / 0x0215C35C (FUN_0215C278).</summary>
    State15,
    /// <summary>0x17: 0x0215C5D4 (or 0x0215C488 while the battle runs) / 0x0215C664 (fell into a pit, FUN_0215C360).</summary>
    Pit,
    /// <summary>0x18: 0x0215C704 (HP gone, FUN_0215C690).</summary>
    Ko,
}

/// <summary>
/// Attack selection and the attack state (ov06): FUN_02159D7C (start), the input selectors at 0x02172178
/// (FUN_0215A720 ground, FUN_0215A8C0 air, FUN_0215A8F8 dash), FUN_0215A824 (forward), state 0x02159EF8 and its
/// exit 0x0215A6AC.
///
/// Not translated (HUD/statistics only): the result-statistics counters (chara +0x1A4), the chara-info calls
/// FUN_0215FC78/FCB8/FCE4/FD48/FD58 and FUN_0206C650 (node reset), FUN_02158668 (+0xE2 gauge to the others),
/// the jump-input hook +0x1D4 = 0x0215DA84 (FUN_0215DA64), the deck flags at +0x56C → +0x3C (bits 0x10 / 0x20) and
/// FUN_02078A70 / FUN_021585B8 / FUN_021586C4 on exit.
/// </summary>
public sealed class BattleAttack(BattleAttackTable table, IBattleFighterHooks hooks)
{
    /// <summary>FUN_02159990: status 0x1A blocks the normal attacks.</summary>
    private static bool Blocked(BattleFighterCombat c) => c.StatusA0 == 0x1A;

    /// <summary>FUN_0215A824: the stick points forward (right when facing right).</summary>
    public bool Forward(BattleFighterCombat c) => hooks.Facing(c) == 1 ? (c.Input & 4) != 0 : (c.Input & 8) != 0;

    /// <summary>The selector table 0x02172178: n = 0 FUN_0215A720, 1 FUN_0215A8C0, 2 FUN_0215A8F8.</summary>
    public int Select(BattleFighterCombat c, int n) => n switch { 0 => SelectGround(c), 1 => SelectAir(c), _ => SelectDash(c) };

    /// <summary>FUN_0215A720 (ground): special 0xC (+0xD1), forward + 0x80/0x100 → 3/4, 0x81/0x101 → 5/6, 0x80/0x100
    /// → 1/2; then 0x1000 → 0xB; 0x41 → 0xE, 0x40 → 0xD.</summary>
    public int SelectGround(BattleFighterCombat c)
    {
        uint i = c.Input;
        if (!Blocked(c))
        {
            if (c.SpecialReady) return 0xC;
            if (!Forward(c))
            {
                if ((i & 0x81) == 0x81) return 5;
                if ((i & 0x101) == 0x101) return 6;
                if ((i & 0x80) != 0) return 1;
                if ((i & 0x100) != 0) return 2;
            }
            else
            {
                if ((i & 0x80) != 0) return 3;
                if ((i & 0x100) != 0) return 4;
            }
        }
        if ((i & 0x1000) != 0) return 0xB;
        if (!Blocked(c))
        {
            if ((i & 0x41) == 0x41) return 0xE;
            if ((i & 0x40) != 0) return 0xD;
        }
        return 0;
    }

    /// <summary>FUN_0215A8C0 (air): 0x80 → 9, 0x100 → 10.</summary>
    public static int SelectAir(BattleFighterCombat c)
    {
        if (Blocked(c)) return 0;
        if ((c.Input & 0x80) != 0) return 9;
        if ((c.Input & 0x100) != 0) return 10;
        return 0;
    }

    /// <summary>FUN_0215A8F8: 0x1000 → 0xB, 0x82 → 7, 0x102 → 8.</summary>
    public static int SelectDash(BattleFighterCombat c)
    {
        if ((c.Input & 0x1000) != 0) return 0xB;
        if (Blocked(c)) return 0;
        if ((c.Input & 0x82) == 0x82) return 7;
        if ((c.Input & 0x102) == 0x102) return 8;
        return 0;
    }

    /// <summary>FUN_02159D7C(chara, n): start an attack from a movement state. True when one started.</summary>
    public bool TryStart(BattleFighterCombat c, int n)
    {
        if (!c.Enabled) return false;
        int a = Select(c, n);
        if ((c.BlockedAttacks & (1u << a)) != 0) a = 0;
        c.CancelMask = 0;
        if (a == 0) return false;
        if (a == 0xD || a == 0xE)
        {
            if (!hooks.DeckCanUseHelp(c)) return false;
            c.CancelMask = 0xFFFFFFFF;
        }
        c.Attack = (sbyte)a;
        c.CancelMask |= table[a].CancelMask;
        c.Combo = 0;
        c.Move.Vx = c.Move.Vy = 0;
        c.Col.Flags78 |= 0x4000000;                                     // FUN_02159EDC(obj, 1)
        hooks.RequestState(c, (byte)table[a].StateId, BattleFighterState.Attack);
        if (a == 0xC)
        {
            c.CancelMask = 0xFFFFFFFF;
            c.HelpUses1D0 = c.HelpUses1CC;
            c.SpecialFlag = true;
            c.SpecialCount = 0;
        }
        else c.SpecialFlag = false;
        return true;
    }

    /// <summary>The attack state 0x02159EF8.</summary>
    public void Run(BattleFighterCombat c)
    {
        if (hooks.FirstFrame(c)) { Enter(c); return; }
        if (hooks.MotionEnded(c))
        {
            if (!hooks.TryFall(c)) hooks.Stand(c);
            return;
        }
        var col = c.Col;
        if ((col.Flags40 & 0x2000) != 0)                                // hit back: the collision's knockback as acceleration
        {
            c.Move.Vx = c.Move.Vy = 0;
            c.Move.Ax += col.KnockX;
            c.Move.Ay += col.KnockY;
        }
        else if (c.Walk != 0 && (!c.WalkNeedsInput || (c.Input & 0xC) != 0)) hooks.Walk(c);
        // +0x140 / +0x144 gains → FUN_020783CC / FUN_020781E4 on the deck, and the hit HUD: not translated
        int next = 0;
        bool window;
        bool grounded = (col.Flags78 & 2) != 0;                         // FUN_0215A708
        if (!grounded)
        {
            if (c.Buffered != 9 && c.Buffered != 10) c.Buffered = 0;
            window = false;
            if (c.AirCount < 2) { next = SelectAir(c); window = c.AirCancel; }
        }
        else
        {
            if (c.Buffered is 9 or 10) c.Buffered = 0;
            next = SelectGround(c);
            window = c.GroundCancel;
        }
        if (next != 0)
        {
            uint mask = c.BlockedAttacks;
            if (next != 0xC) mask |= c.CancelMask;
            if ((mask & (1u << next)) == 0) c.Buffered = (byte)next;
        }
        int chosen = 0;
        if (window && c.Buffered != 0)
        {
            switch (c.Buffered)
            {
                case 0xB:
                    break;
                case 0xC:
                    if (grounded)
                    {
                        int s = 0xC;
                        if (c.HelpUses1CC == c.HelpUses1D0)
                        {
                            if (!hooks.DeckCanUseHelp(c)) break;
                            s = (c.Input & 1) == 0 ? 0xD : 0xE;
                        }
                        c.SpecialFlag = true;
                        c.SpecialCount++;
                        chosen = s;
                    }
                    else c.Buffered = 0;                                 // + FUN_02078A70(deck)
                    break;
                case 0xD:
                case 0xE:
                    if (grounded && hooks.DeckCanUseHelp(c)) chosen = Chain(c);
                    break;
                default:
                    chosen = Chain(c);
                    break;
            }
        }
        if (chosen != 0)
        {
            c.Attack = (sbyte)chosen;
            hooks.RestartState(c);
        }
    }

    private int Chain(BattleFighterCombat c)
    {
        if ((c.CancelMask & (1u << c.Buffered)) != 0) return 0;
        c.CancelMask |= table[c.Buffered].CancelMask;
        c.Combo++;
        return c.Buffered;
    }

    /// <summary>The first frame of 0x02159EF8.</summary>
    private void Enter(BattleFighterCombat c)
    {
        int i = c.Attack;
        c.Col.Flags78 &= ~0x4000000u;                                   // FUN_02159EDC(obj, 0)
        if (i < 0xD)
        {
            hooks.SetMotion(c, table[i].Motion);
            if (i is 9 or 10)
            {
                c.AirActions++;
                c.AirCount++;
            }
        }
        else
        {
            i += (hooks.HelpType(c) - 3) * 2;
            hooks.SetMotion(c, table[i].Motion);
            hooks.Effect(c, 0x220009);
            hooks.PlaySe(0x7A, 0x32);
        }
        c.AirCancel = c.GroundCancel = false;
        c.Buffered = 0;
        c.Row = (byte)i;
        if (c.SpecialFlag)
        {
            c.SpecialFlag = false;
            hooks.Effect(c, 0x22000A);
            hooks.PlaySe(0x7A, i < 0xD ? c.SpecialCount + 0x2D : 0x31);
        }
        if (i == 7) hooks.Effect(c, 0x22000B);
        else if (i == 8) hooks.Effect(c, 0x22000F);
        c.Walk = 0;
        c.WalkAllowed = true;
        c.WalkNeedsInput = false;
    }

    /// <summary>The exit 0x0215A6AC: gravity back on (move +0x34 bit 2 cleared), +0x78 bit 0x4000000 cleared.</summary>
    public static void Exit(BattleFighterCombat c)
    {
        c.SpecialFlag = false;
        c.SpecialCount = 0;
        c.Move.Flags &= ~BattleMoveObject.FlagNoGravity;
        c.Col.Flags78 &= ~0x4000000u;
    }
}
