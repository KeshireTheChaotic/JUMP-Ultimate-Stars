namespace Jus.Game.Scenes.Ov06;

/// <summary>
/// A movement object of BattleMove.cpp (0x40 bytes; pool of 0x80 in Battle_MoveManCreate 0x02082A38). The
/// collision object keeps a pointer to it at +0x5C. Units: positions in 1/256 px (24.8), velocities s16
/// in 1/256 px per frame.
/// </summary>
public sealed class BattleMoveObject
{
    // flags (+0x34)
    public const uint FlagNoGravity = 0x2, FlagFalling = 0x4, FlagUnk8 = 0x8, FlagRising = 0x10, FlagStopped = 0x20,
        FlagOneSideX = 0x40, FlagOtherSideX = 0x80, FlagKeepPrevious = 0x100, FlagFrozen = 0x600, FlagSoftFriction = 0x800;

    public int X, Y;                   // +0x0C, +0x10
    public int PrevX, PrevY;           // +0x14, +0x18
    public short Vx, Vy;               // +0x24, +0x26
    public short InVx, InVy;           // +0x2C, +0x2E: this frame's input velocity (cleared after the step)
    public short Ax, Ay;               // +0x30, +0x32: this frame's acceleration (cleared after the step)
    public uint Flags;                 // +0x34
    public short ExtraX;               // +0x38: a one-frame x offset
    public short LastExtraX;           // +0x3A
    public byte FrictionX, FrictionY;  // +0x3C, +0x3D (/256 per frame)
    public byte MaxSpeed;              // +0x3E (·256)

    /// <summary>One frame, FUN_02082E10 (read from the assembly; the decompiler drops its stores).</summary>
    public void Step(short gravity)
    {
        Flags &= 0xFFFFEFCB;                                           // literal 0x02083178: clear 4, 0x10, 0x20, 0x1000
        if ((Flags & FlagKeepPrevious) != 0) Flags &= ~FlagKeepPrevious;
        else { PrevX = X; PrevY = Y; }
        if ((Flags & FlagFrozen) != 0)
        {
            Flags |= FlagStopped;
            return;
        }
        if ((Flags & (FlagOneSideX | FlagOtherSideX)) != 0)
        {
            Vx = (short)(Vx + Ax);
            Vy = (short)(Vy + Ay + InVy);
            ExtraX = 0;
            if (((Flags & FlagOneSideX) != 0 && InVx > 0) || ((Flags & FlagOtherSideX) != 0 && InVx < 0))
                Vx = (short)(Vx + InVx);
            Flags &= ~(FlagOneSideX | FlagOtherSideX);
        }
        else
        {
            Vx = (short)(Vx + InVx + Ax);
            Vy = (short)(Vy + InVy + Ay);
        }
        // clamp both components to MaxSpeed·256
        int max = MaxSpeed << 8;
        if (Math.Abs((int)Vx) > max) Vx = (short)(Vx < 0 ? -max : max);
        if (Math.Abs((int)Vy) > max) Vy = (short)(Vy < 0 ? -max : max);
        // friction: (fric·v) << 8 >> 16 (smulbb, then the low 16 bits shifted down)
        int fx, fy = (short)((FrictionY * Vy) << 8 >> 16);
        if ((Flags & FlagSoftFriction) != 0)
        {
            if (InVx != 0) fx = (short)((FrictionX * Vx) << 8 >> 16);
            else
            {
                fx = (short)((Vx * 6) >> 8);
                if (fx == 0 && Vx != 0) fx = 1;
            }
            Flags &= ~FlagSoftFriction;
        }
        else fx = (short)((FrictionX * Vx) << 8 >> 16);
        Vx = (short)(Vx - fx);
        Vy = (short)(Vy - fy);
        if ((Flags & FlagNoGravity) == 0) Vy = (short)(Vy + gravity);
        X += Vx + ExtraX;
        Y += Vy;
        if (X < 0) X = 0;
        if (Y < 0) Y = 0;
        if (X >= 0x40000) X = 0x3FFFF;                                 // literal 0x02083174
        if (Y >= 0x40000) Y = 0x3FFFF;
        InVx = InVy = 0;
        Ax = Ay = 0;
        if (Vx < 0x10 && Vx >= -0x10) Vx = 0;
        if (Vy < 0x10 && Vy >= -0x10) Vy = 0;
        if (Vx == 0 && Vy == 0) Flags |= FlagStopped;
        LastExtraX = ExtraX;
        ExtraX = 0;
        if (Vy < 0) Flags |= FlagRising;
        if (Vy > 0) Flags |= FlagFalling;
    }
}

/// <summary>The move manager (Battle_MoveManCreate 0x02082A38): steps every registered object in order
/// (task 0x02082E10, priority 0xA1000), then hands positions to the display nodes (task 0x0208317C,
/// priority 0xA6000: node position = pos &lt;&lt; 4).</summary>
public sealed class BattleMoveManager
{
    private readonly List<BattleMoveObject> _objects = [];

    /// <summary>+0x2C: added to every object's vertical velocity unless it has flag 2 (note type 6 toggles
    /// that flag). Battle_MoveManCreate stores 0x29 (0x02082B68, a store the decompiler drops).</summary>
    public short Gravity { get; set; } = 0x29;
    /// <summary>+0x2E: 0x20 at creation (0x02082B70); not read by the step.</summary>
    public short Unk2E { get; set; } = 0x20;

    public IReadOnlyList<BattleMoveObject> Objects => _objects;

    public BattleMoveObject Add(BattleMoveObject o)
    {
        _objects.Add(o);
        return o;
    }

    public void Remove(BattleMoveObject o) => _objects.Remove(o);

    public void Step()
    {
        foreach (var o in _objects) o.Step(Gravity);
    }
}

/// <summary>
/// The character's state slot (chara +0x00…+0x1A): FUN_02159C90 init, FUN_02159D34 request, FUN_02159CC4
/// run, FUN_02157494 request + the "uses motion flag 2" bit. +4 current state, +8 its exit callback, +0xC
/// requested state, +0x10 the requested exit, +0x14 current flags (bit 0 = entered, FUN_0215D4E0), +0x16
/// requested flags, +0x18 current id, +0x19 requested id, +0x1A previous id.
/// </summary>
public sealed class BattleStateSlot<T>
{
    private Action<T>? _current, _exit, _next, _nextExit;
    public byte Id { get; private set; }
    public byte NextId { get; private set; }
    public byte PreviousId { get; private set; }
    public ushort StateFlags { get; set; }
    private ushort _nextFlags;
    private readonly Action<T> _idle = _ => { };      // FUN_02159D78 (returns)

    public BattleStateSlot()
    {
        _current = _next = _idle;                    // FUN_02159C90
    }

    /// <summary>FUN_02159D34: run the exit callback of a request still pending this frame (r0 = the
    /// character), then queue the next state.</summary>
    public void Request(T owner, byte id, Action<T> state, Action<T>? exit)
    {
        _nextExit?.Invoke(owner);
        _nextExit = exit;
        NextId = id;
        _next = state;
        _nextFlags = 0;
    }

    /// <summary>FUN_02159CC4: switch to a requested state (running the old exit callback), then run the state.</summary>
    public void Run(T owner)
    {
        if (!ReferenceEquals(_current, _next))
        {
            _exit?.Invoke(owner);
            PreviousId = Id;
            _current = _next;
            _exit = _nextExit;
            StateFlags = _nextFlags;
            Id = NextId;
            _nextExit = null;
        }
        _current!(owner);
    }

    /// <summary>FUN_0215D4E0: true on the first run of the current state (sets flag bit 0).</summary>
    public bool FirstFrame()
    {
        bool first = (StateFlags & 1) == 0;
        StateFlags |= 1;
        return first;
    }
}
