namespace Jus.Game.Scenes.Ov06;

/// <summary>
/// The character side of being hit (ov06): FUN_0215A978 (per frame: invincibility blink, taking the frame's damage,
/// KO, the damage request), the damage state 8 (0x0215AF34 / exit 0x0215B174) with its reaction handlers (the
/// table 0x021721A0 by reaction: 0x0215B6A0, 0x0215B72C, 0x0215B7CC, 0x0215B870, 0x0215BA40, 0x0215B68C,
/// 0x0215B568) and their follow-ups, FUN_0215C360 (pit) and FUN_0215C278 (state 0x15).
///
/// Not translated (HUD/statistics/effects): the result-statistics counters (+0x1A4), the chara-info calls
/// (FUN_0215FCCC/FCE4/FED8/FC78), FUN_0215B40C's CharaData effect reset, the element pre-handlers 0x02172190
/// (effects 0x23000C/0x230004/0x230006 every 6/10 frames), the camera quake FUN_021520DC(8, 4, 8) and the
/// landing effect 0x230001 (passed to <see cref="IBattleFighterHooks.Effect"/>), the held-hit branch's effect,
/// FUN_0215911C, FUN_0207CE7C/0207CEC8 (collision-parameter flag 0x10000000/0x20000000 on all boxes: the
/// "no hurt box" switch; modelled as <see cref="BattleFighterCombat.Col"/> +0x40 bit 0x10000000 only through
/// FUN_0215B4A8). Stand-ins: 0x0215BD18 (the get-up roll after pressing left/right) ends the reaction when the
/// motion stops; FUN_0215C2E0 (the state-0x15 condition) is a parameter.
/// </summary>
public sealed class BattleHitReaction(IBattleFighterHooks hooks, sbyte[] stunByState, uint[] reactionMotions, sbyte[] heavierReaction)
{
    /// <summary>ov06 0x02171488: stun bonus by state id (s8, 32 entries).</summary>
    public const uint StunByStateAddress = 0x02171488;
    /// <summary>ov06 0x021713E8: {motion, motion for element 2} per reaction (2 × u32, 16 rows).</summary>
    public const uint ReactionMotionsAddress = 0x021713E8;
    /// <summary>ov06 0x02171478: the heavier reaction once +0x10E reaches 600 (s8, −1 = none; 16 entries).</summary>
    public const uint HeavierReactionAddress = 0x02171478;

    /// <summary>The battle is running (Battle work +200 / 0xC8).</summary>
    public bool BattleRunning { get; set; } = true;

    /// <summary>FUN_0215A978(chara, hitStop): true when it changed the state.</summary>
    public bool Update(BattleFighterCombat c, bool hitStop)
    {
        if ((c.Flags11D & 2) != 0 && c.Held11C++ > 0x78) ReleaseHold(c);
        if (c.StateId == 0x17) return false;
        var col = c.Col;
        if ((col.Flags78 & BattleStageCollision.InPit) != 0) return false;     // FUN_0215AEA0
        if (c.Invincible != 0)
        {
            if (!hitStop) c.Invincible--;
            hooks.SetVisible(c, (c.Blink++ & 1) != 0);
            if (c.Invincible == 0)
            {
                col.Flags40 &= ~0x10000000u;                                 // FUN_0215B4A8(obj, 0)
                hooks.SetVisible(c, true);
            }
            else col.Flags40 |= 0x10000000;
            return false;
        }
        if (!BattleRunning) return false;
        if ((col.Flags40 & 0x10) == 0)
        {
            if (c.StateId == 8) return false;
            if (c.DamageGauge != 0)
            {
                c.DamageGauge -= 2;
                if (c.DamageGauge < 0) c.DamageGauge = 0;
            }
            return false;
        }
        c.Reaction = col.Reaction;
        if ((c.Flags11D & 2) != 0)                                          // hit while held
        {
            ReleaseHold(c);
            c.Move.Vx = c.Move.Vy = 0;
            c.Move.Flags |= 0x200;                                           // FUN_0215C070(obj, 1)
            hooks.RequestState(c, 0x14, BattleFighterState.HeldHit);
            return true;
        }
        if ((col.Flags40 & 0x10000) != 0) hooks.PlaySe(0x7A, 0x2C);          // guard hit (+ FUN_0215EF48)
        c.Element11E = 0;                                                    // FUN_0215B40C
        c.Received106 = (ushort)(col.Received150 & 0xFF);
        int dmg = col.Damage;
        if (c.Status88 == 0x23 || c.Status88 == 0xB) dmg >>= 1;              // FUN_02159A10 / FUN_021598D0
        hooks.DeckGauge(c, -col.Gauge);
        bool alive = hooks.DeckDamage(c, dmg);
        if (!alive && (c.Flags11D & 1) == 0)
        {
            CancelInvincibility(c);                                          // FUN_0215C690
            hooks.RequestState(c, 0x18, BattleFighterState.Ko);
        }
        else
        {
            c.Hits0D7 = c.StateId == 8 ? (byte)(c.Hits0D7 + 1) : (byte)0;
            c.Shake112 = (ushort)((dmg >> 6) & 0xFF);
            bool right = col.KnockX == 0 || col.Reaction == 8 ? (col.Flags40 & 0x20) != 0 : col.KnockX > 0;
            hooks.SetFacing(c, right);
            int stun = col.Stun + 0x14 + stunByState[c.StateId];
            c.StunTimer = (sbyte)Math.Clamp(stun, 0x10, 0x3C);
            c.DownTimer = (short)Math.Clamp(col.Stun + 0x14, 0x18, 0xB4);       // FUN_0215B520
            c.DamageGauge = (short)(c.DamageGauge + (short)((uint)(dmg << 12) >> 16));
            if (c.DamageGauge > 600) c.DamageGauge = 600;
            c.Element11E = col.Effect;
            c.Pierce11F = (col.Received150 & 0x3000000) != 0;
            hooks.RequestState(c, 8, BattleFighterState.Damage);
        }
        hooks.RestartState(c);
        return true;
    }

    /// <summary>FUN_0215C050.</summary>
    private static void ReleaseHold(BattleFighterCombat c)
    {
        c.Flags11D &= 0xFD;
        c.Held11B = -1;
        c.Held11C = 0;
    }

    /// <summary>FUN_0215B460.</summary>
    private void CancelInvincibility(BattleFighterCombat c)
    {
        if (c.Invincible == 0) return;
        c.Invincible = 0;
        hooks.SetVisible(c, true);
        c.Col.Flags40 &= ~0x10000000u;
    }

    /// <summary>FUN_0215C360: falling into a pit (+0x78 bit 0x400000) → state 0x17, SE 0x7A/2.</summary>
    public bool CheckPit(BattleFighterCombat c)
    {
        if (c.StateId is 0x17 or 0x18 || (c.Col.Flags78 & BattleStageCollision.InPit) == 0) return false;
        CancelInvincibility(c);
        ReleaseHold(c);
        hooks.RequestState(c, 0x17, BattleFighterState.Pit);
        hooks.PlaySe(0x7A, 2);
        return true;
    }

    /// <summary>FUN_0215C278: state 0x15 when FUN_0215C2E0 holds, unless in 0x15/8/0x17/0x18.</summary>
    public bool Check15(BattleFighterCombat c, bool condition)
    {
        if (!condition || c.StateId is 0x15 or 8 or 0x17 or 0x18) return false;
        hooks.RequestState(c, 0x15, BattleFighterState.State15);
        return true;
    }

    /// <summary>The damage state 0x0215AF34.</summary>
    public void RunDamage(BattleFighterCombat c)
    {
        if (hooks.FirstFrame(c))
        {
            if (c.DamageGauge > 599)
            {
                c.DamageGauge = 0;
                if (c.Reaction < heavierReaction.Length && heavierReaction[c.Reaction] != -1) c.Reaction = (ushort)heavierReaction[c.Reaction];
            }
            c.KnockVx = (short)(c.Col.KnockX * 100 / 100);                   // FUN_0200D12C (signed, truncating)
            c.KnockVy = (short)(c.Col.KnockY * 0x48 / 100);
            c.Reactor = Start(c.Reaction);
            c.Phase1E9 = 0;
            // grabbed (+0x28 joints): 0x0215B568 with zero velocity — joints are not modelled
        }
        if (!c.Reactor!(c)) return;
        c.Element11E = 0;
        if (c.StatusA0 == 0x12) { hooks.SetMotion(c, 0xB); hooks.RequestState(c, 0x11, BattleFighterState.Status12); return; }
        if (c.StatusA0 == 0x20) { hooks.RequestState(c, 0x12, BattleFighterState.Status20); return; }
        if (!hooks.TryFall(c)) hooks.Stand(c);
    }

    /// <summary>The exit 0x0215B174.</summary>
    public void ExitDamage(BattleFighterCombat c)
    {
        c.Shake112 = 0;
        hooks.SetVisible(c, true);
        c.Element11E = 0;
        c.Col.Flags78 &= ~0x4000000u;                                       // FUN_0215B1E8(obj, 0)
    }

    /// <summary>The table 0x021721A0 by reaction (12 entries): the first handler of each reaction.</summary>
    private Func<BattleFighterCombat, bool> Start(int reaction) => reaction switch
    {
        3 => Start72C,
        4 => Start7CC,
        5 => Start870,
        6 => StartA40,
        8 => x => Next(x, Handler648),                                         // 0x0215B68C
        >= 9 and <= 11 => Start568,
        _ => Start6A0,                                                        // 0, 1, 2, 7
    };

    private static bool Next(BattleFighterCombat c, Func<BattleFighterCombat, bool> f)
    {
        c.Reactor = f;
        return false;
    }

    private void AddKnock(BattleFighterCombat c)
    {
        c.Move.Ax += c.KnockVx;
        c.Move.Ay += c.KnockVy;
    }

    private uint ReactionMotion(BattleFighterCombat c, bool element2Column) =>
        reactionMotions[c.Reaction * 2 + (element2Column && c.Element11E == 2 ? 1 : 0)];

    /// <summary>FUN_0215B4FC: the stun timer runs out.</summary>
    private static bool StunOver(BattleFighterCombat c) => --c.StunTimer < 0;

    /// <summary>FUN_0215B53C.</summary>
    private static bool DownOver(BattleFighterCombat c)
    {
        bool over = --c.DownTimer < 0;
        if (over) c.DownTimer = 0;
        return over;
    }

    private static bool Grounded(BattleFighterCombat c) => (c.Col.Flags78 & 2) != 0;    // FUN_0215BA28

    /// <summary>FUN_0215B4C4.</summary>
    private static void AddStun(BattleFighterCombat c, int n) => c.StunTimer = (sbyte)Math.Clamp(c.StunTimer + n, 0x10, 0x3C);

    /// <summary>0x0215B6A0 (reactions 0, 1, 2, 7): knockback, the reaction motion, then the stun timer.</summary>
    private bool Start6A0(BattleFighterCombat c)
    {
        AddKnock(c);
        hooks.SetMotion(c, ReactionMotion(c, true));
        return Next(c, StunOver);
    }

    /// <summary>0x0215B72C (3): knockback, motion 0xC, then 0x0215B784 (turns every 8 frames) until the stun ends.</summary>
    private bool Start72C(BattleFighterCombat c)
    {
        AddKnock(c);
        hooks.SetMotion(c, 0xC);
        c.Counter118 = 0;
        return Next(c, Spin);
    }

    private bool Spin(BattleFighterCombat c)
    {
        if ((c.Counter118++ & 7) == 5) hooks.SetFacing(c, hooks.Facing(c) == 0);
        return StunOver(c);                                                   // FUN_0215B784 ends with FUN_0215B4FC, whose r0 it returns
    }

    /// <summary>0x0215B7CC (4): motion 0xC, 6 frames, then motion 0xF and the down timer (0x0215B818 → 0x0215B84C).</summary>
    private bool Start7CC(BattleFighterCombat c)
    {
        hooks.SetMotion(c, 0xC);
        c.StunTimer = 6;
        return Next(c, x =>
        {
            if (StunOver(x)) { hooks.SetMotion(x, 0xF); x.Reactor = Lying; }
            return false;
        });
    }

    /// <summary>0x0215B870 (5): the reaction motion, knockback, then 0x0215B910 (land, or recover with an attack button).</summary>
    private bool Start870(BattleFighterCombat c)
    {
        hooks.SetMotion(c, ReactionMotion(c, true));
        AddKnock(c);
        c.Mash116 = 0;
        c.Mashed117 = false;
        AddStun(c, c.StunTimer);
        return Next(c, Flying);
    }

    private bool Flying(BattleFighterCombat c)
    {
        if (c.Mash116 < 0x20) c.Mash116++;
        if ((c.Input & 0x180) != 0) { c.Mash116 = 0; c.Mashed117 = true; }
        if (StunOver(c)) return true;
        if (!Grounded(c)) return false;
        if (!c.Mashed117 || c.Mash116 > 7) Land(c);
        else
        {
            c.Reactor = Recover;                                             // 0x0215BB9C
            c.Flags11D |= 4;
        }
        return false;
    }

    /// <summary>0x0215BA40 (6): knockback, motion 0x13, double stun, then 0x0215BAB8 (land).</summary>
    private bool StartA40(BattleFighterCombat c)
    {
        AddKnock(c);
        hooks.SetMotion(c, 0x13);
        AddStun(c, c.StunTimer << 1);
        return Next(c, x =>
        {
            if (StunOver(x)) return true;
            if (Grounded(x)) Land(x);
            return false;
        });
    }

    /// <summary>The landing of 0x0215BAB8 / 0x0215B910: quake, effect 0x230001, SE 0x7A/0x29, then 0x0215BB34.</summary>
    private void Land(BattleFighterCombat c)
    {
        hooks.Effect(c, 0x230001);
        hooks.PlaySe(0x7A, 0x29);
        hooks.SetMotion(c, 0xF);                                             // 0x0215BB34
        c.Reactor = Lying;                                                   // 0x0215BB78
    }

    /// <summary>0x0215BB78 / 0x0215B84C: lie until the down timer ends, then motion 0x17 (0x0215BC44) and get up.</summary>
    private bool Lying(BattleFighterCombat c)
    {
        if (DownOver(c))
        {
            hooks.SetMotion(c, 0x17);
            c.Reactor = GettingUp;
        }
        return false;
    }

    /// <summary>0x0215BC8C: without left/right, done when the motion ends (40 invincible frames); with left/right,
    /// face that way and roll (0x0215BD18: STAND-IN, done when the motion ends).</summary>
    private bool GettingUp(BattleFighterCombat c)
    {
        if ((c.Input & 0xC) == 0)
        {
            bool playing = hooks.MotionPlaying(c);
            if (!playing) c.Invincible = 0x28;
            return !playing;
        }
        hooks.SetFacing(c, (c.Input & 8) == 0);
        c.Reactor = x => !hooks.MotionPlaying(x);
        return false;
    }

    /// <summary>0x0215BB9C → 0x0215BBD0: motion 0x17, done when it ends.</summary>
    private bool Recover(BattleFighterCombat c)
    {
        hooks.SetMotion(c, 0x17);
        c.Reactor = x =>
        {
            if (hooks.MotionPlaying(x)) return false;
            x.Flags11D &= 0xFB;
            return true;
        };
        return false;
    }

    /// <summary>0x0215B648 (8, and after 0x0215B568): visible, until the stun timer ends (while not held).</summary>
    private bool Handler648(BattleFighterCombat c)
    {
        hooks.SetVisible(c, true);
        return StunOver(c);
    }

    /// <summary>0x0215B568 (9–11): the reaction motion when pierced or reaction &gt; 8 (0xF/0x10 → 0xC); motions 0x33–0x36
    /// turn the character; then 0x0215B648.</summary>
    private bool Start568(BattleFighterCombat c)
    {
        uint m = reactionMotions[c.Reaction * 2];
        if (c.Pierce11F || c.Reaction > 8)
        {
            if (m - 0xF < 2) m = 0xC;
            hooks.SetMotion(c, m);
        }
        if (m > 0x32 && m < 0x37) hooks.SetFacing(c, hooks.Facing(c) == 0);
        if (c.Reaction == 0xD) hooks.SetVisible(c, false);
        return Next(c, Handler648);
    }
}
