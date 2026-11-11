namespace Jus.Game.Scenes.Ov06;

/// <summary>What the character state machine needs from the character's object (chara +0x1A8: object,
/// +0x10 collision object, whose +0x5C is the move object; +8 the display node) and its CharaData
/// (chara +0x1A0). The lead's battle scene implements it (collision, note track, sprite).</summary>
public interface IBattleCharaBody
{
    /// <summary>Collision object +0x5C.</summary>
    BattleMoveObject Move { get; }
    /// <summary>Collision object +0x78 (stage contact bits, 0x0207E864: 2 grounded, 4/8 walls, 0x100 solo
    /// floor, 0x200, 0x400 wall flag).</summary>
    uint Contact { get; }
    /// <summary>Node +0x48 (FUN_0215E91C / 0215A864 / 02157434): true = facing left (flipped). True when the
    /// object has no node.</summary>
    bool FacingLeft { get; }
    /// <summary>FUN_02083950(object, left): node vfunc 0x5C, joint update FUN_0207AA20, CharaData FUN_0207506C.</summary>
    void SetFacing(bool left);
    /// <summary>FUN_0215F278(CharaData, n) (after FUN_0207A878 on object +0x14): CharaData +0x1BC = n and the
    /// node plays motion PrmData base (+0x88) + n.</summary>
    void PlayMotion(int n);
    /// <summary>CharaData +0x1BC: the last motion number set.</summary>
    int Motion { get; }
    /// <summary>FUN_02155620(object +0x18): note track +0x90 bit 0x10000000 (the motion's end note).</summary>
    bool NoteTrackMotionEnded { get; }
    /// <summary>FUN_0215D4FC(CharaData) == false, i.e. node vfunc 0x68 ≠ 0 (inferred: the node's motion has
    /// finished playing).</summary>
    bool NodeMotionFinished { get; }
    /// <summary>The CharaData entry's colour (CommonHSV, entry +4) effect: FUN_0215D6A0(code) sets +0x5C/+0x5D/+0x5E;
    /// FUN_0215D6C0 = +0x5C ≠ 0; the clear writes +0x5C = 0, +0x54 = −1.</summary>
    void SetHsv(int code);
    bool HsvActive { get; }
    void ClearHsv();
}

/// <summary>The parts of the character the movement states call but which belong to other areas (attacks,
/// guard, grips, walls, drop-through, abilities, effects, deck). Each returns true when it took over (it
/// requested a state), as the original functions do. <see cref="BattleCharaNoHooks"/> does nothing.</summary>
public interface IBattleCharaHooks
{
    /// <summary>FUN_02159D7C(chara, kind): attack input table 0x02172178[kind] (0/2 ground, 1 air).</summary>
    bool TryAttack(BattleCharacter c, int kind);
    /// <summary>FUN_0215DCAC: drop through a floor (contact 0x300 and the +0x1D8 down detector or Down+A) → state 0xE.</summary>
    bool TryDropThrough(BattleCharacter c);
    /// <summary>FUN_0215E9A0: guard (Down) / ability 0x10 → state 3.</summary>
    bool TryGuard(BattleCharacter c);
    /// <summary>FUN_0215E470: collision +0x40 bit 0x400 → state 0xF.</summary>
    bool TryGrip(BattleCharacter c);
    /// <summary>FUN_0215E534: collision +0x40 bits 6 → state 0x10.</summary>
    bool TryWall(BattleCharacter c);
    /// <summary>FUN_0215FC78(chara +0x130, n): the type-1 ability object's event n (stand calls 7).</summary>
    void AbilityEvent(BattleCharacter c, int n);
    /// <summary>FUN_0215F6E4(chara, id, flag): an effect (the wall kick uses 0x230008).</summary>
    void Effect(BattleCharacter c, int id, int flag);
    /// <summary>FUN_02156DDC before the state machine (not in state 0x1B): touch → deck +0x5F3/+0x5F5/+0x5F6,
    /// L/R → FUN_02077BB4(deck, 1/2), then FUN_02158B20, FUN_0215C278, FUN_0215C360, FUN_0215A978(chara, 0).</summary>
    void BeforeStates(BattleCharacter c);
    /// <summary>FUN_02157494 flags bit 0x10 → deck current entry (+0x56C) +0x3C bit 1, else cleared.</summary>
    void SetEntryLock(BattleCharacter c, bool locked);
    /// <summary>FUN_0215D2E4 with +0x1E6 == 3: CharaData (+0x174 entry → +0xC → node +0x68) vfunc 0xFC instead
    /// of FUN_02157450.</summary>
    void LandingMotion3(BattleCharacter c);
}

public sealed class BattleCharaNoHooks : IBattleCharaHooks
{
    public static BattleCharaNoHooks Instance { get; } = new();
    public bool TryAttack(BattleCharacter c, int kind) => false;
    public bool TryDropThrough(BattleCharacter c) => false;
    public bool TryGuard(BattleCharacter c) => false;
    public bool TryGrip(BattleCharacter c) => false;
    public bool TryWall(BattleCharacter c) => false;
    public void AbilityEvent(BattleCharacter c, int n) { }
    public void Effect(BattleCharacter c, int id, int flag) { }
    public void BeforeStates(BattleCharacter c) { }
    public void SetEntryLock(BattleCharacter c, bool locked) { }
    public void LandingMotion3(BattleCharacter c) { }
}

/// <summary>
/// A battle character's movement (chara work 0x1F0, Battle_CharaCreate ov06 0x02156A38; task FUN_02156DDC).
/// Translated: the controller (chara +0x1C, <see cref="BattleInputController"/>), the state slot
/// (<see cref="BattleStateSlot{T}"/>), and the movement states
/// 0 stand (0x0215D3B4 / exit 0x0215D530), 1 walk (0x0215D760), 2 dash (0x0215D91C / 0x0215DA48),
/// 4 jump (0x0215DBA4), 5 air jump / wall kick (0x0215E2DC), 6 fall (0x0215DF18 / 0x0215E0C8),
/// 7 fast fall (0x0215E118 / 0x0215E1CC) and 0xD landing (0x0215D564 / 0x0215D6D4), with the checks
/// FUN_0215D2E4 (land → stand/landing), 0215D6F8 (walk), 0215D860 (dash), 0215DB50 (jump), 0215DEC8 (fall),
/// 0215E0CC (fast fall), 0215E1D0 (air jump / wall kick), 0215EF58 / 0215EFC0 (horizontal input) and 02158A68
/// (walk speed with status modifiers), and the double-tap detector at +0x1D4 (0x0215DA84 → 0x0215DAB0 →
/// 0x0215DACC → 0x0215DB24).
///
/// Naming: state 2 was called "jump" in the first notes; it is started by the +0x1D4 detector, which fires on
/// a second press of the facing direction within 12 frames after letting go (FUN_0215A824), and it runs
/// without gravity in the air until the motion's end note: a dash (name inferred). Jumping is state 4 (A).
/// Not here: the stats counters at chara +0x1A4 (results), the status slots +0x7C/+0x94 (only their ids
/// <see cref="Status0"/>/<see cref="Status1"/> are read), attacks and the other states (hooks).
/// </summary>
public sealed class BattleCharacter
{
    // state ids (FUN_02157494's second argument)
    public const byte StateStand = 0, StateWalk = 1, StateDash = 2, StateJump = 4, StateAirJump = 5, StateFall = 6,
        StateFastFall = 7, StateLanding = 0xD;

    private readonly IBattleCharaBody _body;
    private readonly IBattleCharaHooks _hooks;

    // cached state delegates: the slot compares state functions by identity, like the original's pointers
    private readonly Action<BattleCharacter> _stand, _standExit, _walk, _dash, _dashExit, _jump, _airJump,
        _fall, _fallExit, _fastFall, _fastFallExit, _landing, _landingExit;

    /// <summary>chara +0x00.</summary>
    public BattleStateSlot<BattleCharacter> Slot { get; } = new();
    /// <summary>chara +0x1C.</summary>
    public BattleInputController Input { get; }
    public IBattleCharaBody Body => _body;
    public BattleCharaParams Params { get; }

    /// <summary>chara +0x6C.</summary>
    public uint Bits => Input.Bits;
    /// <summary>chara +0x88 / +0xA0: the ids of status slot 0 / 1 (FUN_02158ED0 sets them; 0 = none).</summary>
    public short Status0 { get; set; }
    public short Status1 { get; set; }
    /// <summary>chara +0xB8 / +0xBA (FUN_02158A10).</summary>
    public short WalkSpeed { get; set; }
    public short JumpSpeed { get; set; }
    /// <summary>chara +0x128 / +0x12C (FUN_0215FAC4).</summary>
    public uint AbilityBits { get; set; }
    public uint AbilityBits2 { get; set; }
    /// <summary>chara +0xD8 max air actions, +0xD9 air actions used, +0xDA air jumps/dashes this airtime,
    /// +0xDB landing frames, +0xDC wall kicks, +0xDD wall kick direction (s8).</summary>
    public byte MaxAirActions { get; set; }
    public byte AirActions { get; set; }
    public byte AirCount { get; set; }
    public byte LandingFrames { get; set; }
    public byte WallKicks { get; set; }
    public sbyte WallKickDir { get; set; }
    /// <summary>chara +0xF5: attacks enabled (FUN_0214DA44 sets it after the start demo; read by FUN_02159D7C).</summary>
    public bool Active { get; set; }
    /// <summary>chara +0x102: counter decremented each frame (FUN_0215EF24; not in state 3).</summary>
    public short Counter102 { get; set; }
    /// <summary>chara +0x106.</summary>
    public short Value106 { get; set; }
    /// <summary>chara +0x1DE: the double-tap detector's frame counter; +0x1E6 landing motion step
    /// (1 = landed: motion 7, 2 = motion 8, 3 = the CharaData's own); +0x1E7 fall motion counter;
    /// +0x1E8 state frame counter; +0x1E9 landing flash frames; +0x1EC "in landing lag".</summary>
    public sbyte DashTimer { get; private set; }
    public sbyte LandStep { get; set; }
    public sbyte FallTimer { get; private set; }
    public sbyte StateTimer { get; private set; }
    public sbyte FlashTimer { get; private set; }
    public byte InLanding { get; private set; }

    private enum DashPhase { WaitForward, WaitRelease, WaitSecond, Window }
    private DashPhase _dash1D4;                                   // chara +0x1D4

    public BattleCharacter(IBattleCharaBody body, BattleCharaParams prm, BattleInputController? input = null,
        IBattleCharaHooks? hooks = null)
    {
        _body = body;
        _hooks = hooks ?? BattleCharaNoHooks.Instance;
        Params = prm;
        Input = input ?? new BattleInputController();
        _stand = Stand; _standExit = StandExit; _walk = Walk; _dash = Dash; _dashExit = DashExit; _jump = Jump;
        _airJump = AirJump; _fall = Fall; _fallExit = static _ => { }; _fastFall = FastFall; _fastFallExit = static _ => { };
        _landing = Landing; _landingExit = LandingExit;
        Setup();
    }

    /// <summary>The setup part of Battle_CharaCreate 0x02156A38 this area owns: FUN_02157114 (FUN_0215FAC4 ability
    /// bits, FUN_02158A10 speeds and +0xD8, ability bit 1 → +0xD8 = 2), FUN_02159C90 (slot), FUN_0215D2E4 (stand,
    /// motion 0), FUN_0215DA64 (+0x1D4). (FUN_0215DDEC, the +0x1D8 detector, belongs to the drop-through hook.)</summary>
    private void Setup()
    {
        AbilityBits = Params.AbilityBits0;
        AbilityBits2 = Params.AbilityBits1;
        WalkSpeed = Params.WalkSpeed;
        JumpSpeed = Params.JumpSpeed;
        MaxAirActions = Params.MaxAirActions;
        Land();
        ResetDashDetector();
    }

    /// <summary>FUN_02156DDC, the per-frame task (the parts of this area): the controller, the counters, the
    /// pre-state hooks, then the state machine.</summary>
    public void Update(in InputState pad)
    {
        Input.Update(pad);
        if (Slot.Id != 0x1B)
        {
            _hooks.BeforeStates(this);
            if (Slot.Id != 3 && Counter102 > 0) Counter102--;                // FUN_0215EF24
        }
        Slot.Run(this);
    }

    /// <summary>FUN_02157494(chara, id, state, exit, flags).</summary>
    public void Request(byte id, Action<BattleCharacter> state, Action<BattleCharacter>? exit, int flags)
    {
        Slot.Request(this, id, state, exit);
        _hooks.SetEntryLock(this, (flags & 0x10) != 0);
    }

    /// <summary>FUN_02157450(chara, n): motion n, then the facing is re-applied (FUN_02083950 with FUN_02157434).</summary>
    public void SetMotion(int n)
    {
        _body.PlayMotion(n);
        _body.SetFacing(_body.FacingLeft);
    }

    private bool Grounded => (_body.Contact & 2) != 0;                              // FUN_0215D904
    private bool Stunned => Status1 == 0x22;                                         // FUN_02159930
    private bool ForcedMove => Status1 == 0x15 || Status1 == 0x1E;                   // FUN_02159910 / FUN_021599D0

    // ---- checks -------------------------------------------------------------------------------------

    /// <summary>FUN_0215D2E4: the landing motion by +0x1E6, then stand (or the landing lag state 0xD when
    /// +0xDB ≠ 0).</summary>
    public void Land()
    {
        switch (LandStep)
        {
            case 1: SetMotion(7); break;
            case 2: SetMotion(8); break;
            case 3: _hooks.LandingMotion3(this); break;                                  // the CharaData node's vfunc 0xFC (not read)
            default: SetMotion(0); break;
        }
        if (LandingFrames == 0) Request(StateStand, _stand, _standExit, 0);
        else Request(StateLanding, _landing, _landingExit, 0);
    }

    /// <summary>FUN_0215DEC8: not grounded → fall.</summary>
    public bool CheckFall()
    {
        if (Grounded) return false;
        Request(StateFall, _fall, _fallExit, 0);
        return true;
    }

    /// <summary>FUN_0215D6F8: left/right (or status 0x15/0x1E), not stunned → walk.</summary>
    public void CheckWalk()
    {
        if (!Stunned && ((Bits & BattleInputController.LeftRight) != 0 || ForcedMove))
            Request(StateWalk, _walk, null, 0);
    }

    /// <summary>FUN_0215D860: the +0x1D4 detector fired → dash, unless airborne with no air action left.</summary>
    public bool CheckDash()
    {
        if (Stunned || !RunDashDetector()) return false;
        _dash1D4 = DashPhase.WaitForward;                                                // +0x1D4 = FUN_0215DA84
        if (!Grounded && MaxAirActions <= AirActions) return false;
        Request(StateDash, _dash, _dashExit, 0x10);
        return true;
    }

    /// <summary>FUN_0215DB50: A pressed, not stunned → jump.</summary>
    public bool CheckJump()
    {
        if (Stunned || (Bits & BattleInputController.APress) == 0) return false;
        Request(StateJump, _jump, null, 0);
        return true;
    }

    /// <summary>FUN_0215E0CC: A pressed with Down held → fast fall.</summary>
    public bool CheckFastFall()
    {
        if ((Bits & 0x12) != 0x12) return false;
        Request(StateFastFall, _fastFall, _fastFallExit, 0);
        return true;
    }

    /// <summary>FUN_0215E1D0: A pressed in the air: a wall kick (ability bit 2, once, touching a wall without
    /// the wall flag) or an air jump while air actions are left.</summary>
    public bool CheckAirJump()
    {
        if (Stunned || (Bits & BattleInputController.APress) == 0) return false;
        uint contact = _body.Contact;
        if ((AbilityBits & 4) != 0 && WallKicks == 0 && (contact & 0x400) == 0)
        {
            WallKickDir = (contact & 4) != 0 ? (sbyte)1 : (contact & 8) != 0 ? (sbyte)-1 : (sbyte)0;
            if (WallKickDir != 0)
            {
                WallKicks++;
                Request(StateAirJump, _airJump, null, 0);
                return true;
            }
        }
        if (AirActions < MaxAirActions)
        {
            WallKickDir = 0;
            Request(StateAirJump, _airJump, null, 0);
            return true;
        }
        return false;
    }

    /// <summary>FUN_0215EF58(chara, speed): left/right (or status 0x15/0x1E), not stunned → FUN_0215EFC0(speed, turn).</summary>
    public bool CheckMove(short speed)
    {
        if (Stunned) return false;
        if ((Bits & BattleInputController.LeftRight) == 0 && !ForcedMove) return false;
        Move(speed, true);
        return true;
    }

    /// <summary>FUN_0215EFC0(chara, speed, turn): input vx = ±speed (left when Left is held, or along the
    /// facing when neither direction is); with <paramref name="turn"/>, face that way and reset the
    /// double-tap detector when the facing changes.</summary>
    public void Move(short speed, bool turn)
    {
        bool left = (Bits & BattleInputController.LeftRight) == 0 ? _body.FacingLeft : (Bits & BattleInputController.Right) == 0;
        if (left) speed = (short)-speed;
        _body.Move.InVx = speed;
        if (!turn || left == _body.FacingLeft) return;
        _body.SetFacing(left);
        _dash1D4 = DashPhase.WaitForward;
    }

    /// <summary>FUN_02158A68: +0xB8, +25 % for status 0 = 8 and = 0x24, −70 % for status 1 = 0x16 (signed
    /// division FUN_0200D12C, truncating).</summary>
    public short CurrentWalkSpeed()
    {
        int v = WalkSpeed;
        if (Status0 == 8) v = (short)(v + (short)(WalkSpeed * 0x19 / 100));
        if (Status0 == 0x24) v = (short)(v + (short)((short)v * 0x19 / 100));
        if (Status1 == 0x16) v = (short)(v - (short)((short)v * 0x46 / 100));
        return (short)v;
    }

    /// <summary>FUN_0215DA64: +0x1D4 = FUN_0215DA84.</summary>
    public void ResetDashDetector() => _dash1D4 = DashPhase.WaitForward;

    /// <summary>The +0x1D4 callback chain. FUN_0215DA84: facing direction held (FUN_0215A824) → counter 0,
    /// 0x0215DAB0. 0x0215DAB0: neither left nor right → 0x0215DACC. 0x0215DACC: counter + 1; under 12, the
    /// facing direction again → counter 0, 0x0215DB24; at 12 back to 0x0215DA84. 0x0215DB24: true for 8
    /// frames (counter 0..7), then back to 0x0215DA84. Only 0x0215DB24 returns true.</summary>
    private bool RunDashDetector()
    {
        switch (_dash1D4)
        {
            case DashPhase.WaitForward:
                if (ForwardHeld()) { DashTimer = 0; _dash1D4 = DashPhase.WaitRelease; }
                return false;
            case DashPhase.WaitRelease:
                if ((Bits & BattleInputController.LeftRight) == 0) _dash1D4 = DashPhase.WaitSecond;
                return false;
            case DashPhase.WaitSecond:
                DashTimer++;
                if (DashTimer < 12)
                {
                    if (ForwardHeld()) { DashTimer = 0; _dash1D4 = DashPhase.Window; }
                }
                else _dash1D4 = DashPhase.WaitForward;
                return false;
            default:
                sbyte t = DashTimer++;
                if (t > 7) _dash1D4 = DashPhase.WaitForward;
                return t <= 7;
        }
    }

    /// <summary>FUN_0215A824: the direction the character faces is held (facing left → bit 4, else bit 8).</summary>
    private bool ForwardHeld() =>
        (Bits & (_body.FacingLeft ? BattleInputController.Left : BattleInputController.Right)) != 0;

    /// <summary>FUN_0215D53C: reset the air counters (and the ability object's +0x10, FUN_0215FCA0).</summary>
    private void ResetAir()
    {
        Value106 = 0;
        AirActions = 0;
        WallKicks = 0;
        AirCount = 0;
    }

    // ---- states -------------------------------------------------------------------------------------

    /// <summary>State 0, FUN_0215D3B4.</summary>
    private void Stand(BattleCharacter _)
    {
        if (Slot.FirstFrame())
        {
            ResetAir();
            InLanding = 0;
        }
        if (CheckFall()) return;
        if (_hooks.TryAttack(this, 2)) return;
        if (_hooks.TryAttack(this, 0)) return;
        if (_hooks.TryDropThrough(this)) return;
        if (_hooks.TryGuard(this)) return;
        if (CheckJump()) return;
        if (CheckDash()) return;
        CheckWalk();
        _hooks.AbilityEvent(this, 7);
        if (LandStep == 0) return;
        if (!_body.NodeMotionFinished) return;
        if (LandStep == 1)
        {
            LandStep = 2;
            SetMotion(8);
            return;
        }
        LandStep = 0;
        SetMotion(0);
    }

    /// <summary>FUN_0215D530.</summary>
    private void StandExit(BattleCharacter _) => LandStep = 0;

    /// <summary>State 1, FUN_0215D760.</summary>
    private void Walk(BattleCharacter _)
    {
        if (Slot.FirstFrame()) SetMotion(1);
        if (CheckFall()) return;
        if (_hooks.TryAttack(this, 2)) return;
        if (_hooks.TryAttack(this, 0)) return;
        if (_hooks.TryDropThrough(this)) return;
        if (_hooks.TryGuard(this)) return;
        if (CheckJump()) return;
        if (CheckDash()) return;
        if (!CheckMove(CurrentWalkSpeed())) Land();
    }

    /// <summary>State 2 (dash, name inferred), FUN_0215D91C. Its velocity comes from the motion's notes.</summary>
    private void Dash(BattleCharacter _)
    {
        if (Slot.FirstFrame())
        {
            SetMotion(2);
            if (!Grounded)
            {
                AirCount++;
                AirActions++;
                _body.Move.Flags |= BattleMoveObject.FlagNoGravity;
            }
            return;
        }
        if (!Grounded)
        {
            if (AirCount < 2 && _hooks.TryAttack(this, 1))
            {
                LandingFrames += 0xC;
                return;
            }
        }
        else
        {
            if (_hooks.TryAttack(this, 2)) return;
            if (_hooks.TryAttack(this, 0)) return;
        }
        if (!_body.NoteTrackMotionEnded) return;
        if (!CheckFall()) Land();
    }

    /// <summary>FUN_0215DA48.</summary>
    private void DashExit(BattleCharacter _) => _body.Move.Flags &= ~BattleMoveObject.FlagNoGravity;

    /// <summary>State 4 (jump), FUN_0215DBA4: motion 8 (crouch) for four frames, then on the fifth motion 4 and
    /// input vy = +0xBA while A is held (+9 landing frames) or 0xFB43 (a short hop, +6); fall on the sixth.</summary>
    private void Jump(BattleCharacter _)
    {
        if (Slot.FirstFrame())
        {
            SetMotion(8);
            StateTimer = 0;
            LandingFrames = 0;                                                         // (+0x1D8 = FUN_0215DDFC: the drop-through detector, hook side)
        }
        if (StateTimer == 4)
        {
            SetMotion(4);
            if ((Bits & BattleInputController.AHeld) == 0)
            {
                _body.Move.InVy = unchecked((short)0xFB43);                             // immediate at 0x0215DC40
                LandingFrames += 6;
            }
            else
            {
                _body.Move.InVy = JumpSpeed;
                LandingFrames += 9;
            }
            StateTimer++;
        }
        else if (StateTimer == 5) Request(StateFall, _fall, _fallExit, 0);
        else StateTimer++;
    }

    /// <summary>State 5, FUN_0215E2DC: an air jump (+0xDD = 0: vy 0, input vy +0xBA, motion 4) or a wall kick
    /// (motion 8, then after 4 frames motion 4, effect 0x230008, v = 0, input (±0xA00, +0xBA / 2)).</summary>
    private void AirJump(BattleCharacter _)
    {
        if (Slot.FirstFrame())
        {
            var m = _body.Move;
            m.Vy = 0;
            if (WallKickDir == 0)
            {
                AirCount++;
                AirActions++;
                m.InVy = JumpSpeed;
                SetMotion(4);
                StateTimer = 0;
                FallTimer = 0;
            }
            else
            {
                _body.SetFacing(WallKickDir < 0);
                WallKicks++;
                StateTimer = 0xC;
                SetMotion(8);
            }
            LandingFrames += 9;
        }
        if (StateTimer == 0)
        {
            if (!CheckFall()) Land();
            return;
        }
        StateTimer--;
        if (StateTimer == 8)
        {
            SetMotion(4);
            _hooks.Effect(this, 0x230008, 0);
            var m = _body.Move;
            m.Vx = 0;
            m.Vy = 0;
            m.InVx = (short)(WallKickDir * 0xA00);
            m.InVy = (short)(JumpSpeed / 2);
            WallKickDir = 0;
        }
    }

    /// <summary>State 6 (fall), FUN_0215DF18.</summary>
    private void Fall(BattleCharacter _)
    {
        var m = _body.Move;
        if (Slot.FirstFrame())
        {
            if ((m.Flags & BattleMoveObject.FlagFalling) == 0)
            {
                if (_body.Motion != 4) SetMotion(4);
                FallTimer = 1;
            }
            else
            {
                if (_body.Motion != 6) SetMotion(6);
                FallTimer = 0;
            }
        }
        if (Grounded)
        {
            LandStep = 1;
            Land();
            return;
        }
        if (_hooks.TryGrip(this)) return;
        if (_hooks.TryWall(this)) return;
        if (AirCount < 2 && _hooks.TryAttack(this, 1))
        {
            LandingFrames += 0xC;
            return;
        }
        if (CheckFastFall()) return;
        if (CheckAirJump()) return;
        if ((AbilityBits & 8) != 0 && CheckDash()) return;
        if ((m.Flags & BattleMoveObject.FlagFalling) != 0 && FallTimer != 0)
        {
            if (FallTimer == 1)
            {
                SetMotion(5);
                FallTimer++;
            }
            else if (FallTimer == 0xC)
            {
                SetMotion(6);
                FallTimer = 0;
            }
            else FallTimer++;
        }
        CheckMove(WalkSpeed);
    }

    /// <summary>State 7 (fast fall), FUN_0215E118: vy 0 and input vy 0xC00 on entry.</summary>
    private void FastFall(BattleCharacter _)
    {
        if (Slot.FirstFrame())
        {
            _body.Move.Vy = 0;
            _body.Move.InVy = 0xC00;
        }
        if (Grounded)
        {
            LandStep = 1;
            Land();
            return;
        }
        if (_hooks.TryGrip(this)) return;
        if (_hooks.TryWall(this)) return;
        CheckMove(WalkSpeed);
    }

    /// <summary>State 0xD (landing lag), FUN_0215D564: +0xDB frames (halved when Down was pressed in the last
    /// 4 frames, with flash 0x10 for 4 frames), then stand with motion 8.</summary>
    private void Landing(BattleCharacter _)
    {
        if (Slot.FirstFrame())
        {
            ResetAir();
            StateTimer = (sbyte)LandingFrames;
            LandingFrames = 0;
            if (Input.CountRecent(2, 4) != 0)
            {
                StateTimer >>= 1;
                _body.SetHsv(0x10);
            }
            FlashTimer = 4;
        }
        if (_body.HsvActive)
        {
            if (FlashTimer == 0) _body.ClearHsv();
            else FlashTimer--;
        }
        if (CheckFall()) return;
        if (_hooks.TryAttack(this, 2) || _hooks.TryAttack(this, 0))
        {
            LandStep = 0;
            return;
        }
        if (StateTimer == 0)
        {
            InLanding = 0;
            LandStep = 2;
            Land();
            return;
        }
        StateTimer--;
        InLanding = 1;
    }

    /// <summary>FUN_0215D6D4.</summary>
    private void LandingExit(BattleCharacter _)
    {
        LandingFrames = 0;
        _body.ClearHsv();
    }
}
