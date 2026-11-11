namespace Jus.Game.Scenes.Ov06;

/// <summary>
/// The battle character's controller (chara +0x1C, 0x60 bytes): FUN_021610D4 init, FUN_02161134 update
/// (calls the callback at +8), the pad callback FUN_02161148, and the history queries FUN_021613C4 /
/// FUN_02161440. Battle_Add step 12 gives it the pad pair FUN_02028920(i) (pad device 0x020A1EFC[i]) /
/// FUN_020208EC(i) (pointer device 0x020A1EBC[i]); the wireless (FUN_020875B0/D8) and CPU (ov10
/// 0x02173004/14) controllers fill the same +0x50 word their own way and are not translated here.
///
/// Field map (relative to the controller, chara offset in brackets):
/// +0x0C 16 × {u16 bits, u16 frames} history ring, +0x4C ring index (init 0x10), +0x50 bits [chara +0x6C],
/// +0x54 u16 bits of the current run, +0x56 u16 frames of the current run, +0x58/+0x59 touch x/y [+0x74/+0x75],
/// +0x5A/+0x5B touch flags [+0x76/+0x77], +0x5C left/right swap [+0x78] (status 0x1C, FUN_02159538).
/// </summary>
public sealed class BattleInputController
{
    // +0x50 bits, as FUN_02161148 builds them from the game pad (PadButtons, 0x0203A610)
    public const uint Up = 0x1;              // Up held
    public const uint Down = 0x2;            // Down held
    public const uint Left = 0x4;            // Left held (pad 8)
    public const uint Right = 0x8;           // Right held (pad 4)
    public const uint LeftRight = Left | Right;
    public const uint APress = 0x10;         // A pressed this frame
    public const uint AHeld = 0x20;          // A held
    public const uint XPress = 0x40;         // X pressed
    public const uint BPress = 0x80;         // B pressed
    public const uint YPress = 0x100;        // Y pressed
    public const uint XHeld = 0x200;         // X held
    public const uint BHeld = 0x400;         // B held
    public const uint YHeld = 0x800;         // Y held
    public const uint SelectPress = 0x1000;  // Select pressed
    public const uint SelectHeld = 0x2000;   // Select held
    public const uint LPress = 0x4000;       // L pressed
    public const uint RPress = 0x8000;       // R pressed

    private readonly ushort[] _histBits = new ushort[16];     // +0x0C + 4i
    private readonly ushort[] _histFrames = new ushort[16];   // +0x0E + 4i
    private int _index = 0x10;                                // +0x4C (FUN_021610D4: 0x10)

    /// <summary>False when FUN_021610D4 got no pad or pointer device: the callback is then the empty
    /// 0x02161144 and <see cref="Bits"/> is never written.</summary>
    public bool Connected { get; }
    /// <summary>+0x50 (chara +0x6C).</summary>
    public uint Bits { get; private set; }
    /// <summary>+0x54: the bits of the run in progress (low 16 bits of +0x50).</summary>
    public ushort RunBits { get; private set; }
    /// <summary>+0x56: frames the current bits have stayed the same (a new run starts after 600).</summary>
    public ushort RunFrames { get; private set; }
    /// <summary>+0x58 / +0x59: the pointer position in pixels (fx32 → int, truncated), stored as bytes.</summary>
    public byte TouchX { get; private set; }
    public byte TouchY { get; private set; }
    /// <summary>+0x5A: pointer device vfunc 0x128 bit 0 (inferred: touch pressed this frame).</summary>
    public bool TouchPress { get; private set; }
    /// <summary>+0x5B: pointer device vfunc 0x130 bit 0 (inferred: touch held).</summary>
    public bool TouchHeld { get; private set; }
    /// <summary>+0x5C (chara +0x78): swaps Left/Right after mapping. Set by status 0x1C's handler
    /// FUN_02159538, cleared when the slot-1 status ends (FUN_0215911C).</summary>
    public bool SwapLeftRight { get; set; }

    /// <summary>FUN_021610D4 (the device enable calls FUN_02029284 / FUN_02020C44 are host-side).</summary>
    public BattleInputController(bool connected = true)
    {
        Connected = connected;
        RunBits = 0;
        _index = 0x10;
    }

    /// <summary>FUN_02161134 → FUN_02161148 with the pad's current and previous words (game pad layout) and
    /// the pointer device's state.</summary>
    public void Update(PadButtons held, PadButtons previous, bool touchPress, bool touchHeld, int touchX, int touchY)
    {
        if (!Connected) return;                                               // 0x02161144: bx lr
        uint cur = (uint)held, trg = (uint)held & ~(uint)previous;
        uint b = 0;
        if ((cur & 0x8) != 0) b |= Left;
        if ((cur & 0x4) != 0) b |= Right;
        if ((cur & 0x1) != 0) b |= Up;
        if ((cur & 0x2) != 0) b |= Down;                                      // (stored twice in the original)
        if ((trg & 0x10) != 0) b |= APress;
        if ((cur & 0x10) != 0) b |= AHeld;
        if ((trg & 0x20) != 0) b |= BPress;
        if ((cur & 0x20) != 0) b |= BHeld;
        if ((trg & 0x80) != 0) b |= YPress;
        if ((cur & 0x80) != 0) b |= YHeld;
        if ((trg & 0x40) != 0) b |= XPress;
        if ((cur & 0x40) != 0) b |= XHeld;
        if ((trg & 0x100) != 0) b |= LPress;
        if ((trg & 0x200) != 0) b |= RPress;
        if ((trg & 0x4000) != 0) b |= SelectPress;
        if ((cur & 0x4000) != 0) b |= SelectHeld;
        if (SwapLeftRight)                                                    // 0x02161290: Left wins when both are held
        {
            if ((b & Left) != 0) b = (b & ~Left) | Right;
            else if ((b & Right) != 0) b = (b & ~Right) | Left;
        }
        Bits = b;
        // run-length history (0x021612C4…): a new entry when the bits change or a run reaches 600 frames
        ushort low = (ushort)b;
        bool push = RunBits != low;
        if (!push)
        {
            RunFrames++;
            push = RunFrames >= 0x258;
        }
        if (push)
        {
            if (++_index >= 0x10) _index = 0;
            _histBits[_index] = RunBits;
            _histFrames[_index] = RunFrames;
            RunBits = low;
            RunFrames = 0;
        }
        TouchPress = touchPress;
        TouchHeld = touchHeld;
        TouchX = (byte)touchX;
        TouchY = (byte)touchY;
    }

    /// <summary>The same as <see cref="Update(PadButtons, PadButtons, bool, bool, int, int)"/> from an
    /// <see cref="InputState"/> (previous = held &amp; ~trigger, which gives the same trigger bits).</summary>
    public void Update(in InputState input) =>
        Update(input.Held, input.Held & ~input.Trigger, input.TouchTrigger, input.Touching, input.TouchX, input.TouchY);

    /// <summary>FUN_021613C4(ctrl, mask, frames): how many runs with any of <paramref name="mask"/> fall in
    /// the last <paramref name="frames"/> frames (0 when the current run is already longer). The current
    /// run counts first; older runs are added while the summed length stays ≤ frames.</summary>
    public int CountRecent(ushort mask, int frames)
    {
        int total = RunFrames;
        if (total > frames) return 0;
        int count = (RunBits & mask) != 0 ? 1 : 0;
        int idx = _index, p = _index;
        for (int n = 0x10; n != 0; n--)
        {
            total += _histFrames[p];
            if (total > frames) break;
            ushort bits = _histBits[p];
            p--;
            if ((bits & mask) != 0) count++;
            if (--idx < 0) { idx = 0xF; p = 0xF; }
        }
        return count;
    }

    /// <summary>FUN_02161440(ctrl, mask, &amp;frames): true when none of <paramref name="mask"/> is in the
    /// current bits. <paramref name="frames"/> = the current run's length (if held) plus the lengths of the
    /// preceding history runs that contain the mask. As in the original, wrapping from entry 0 continues at
    /// entry 14 (the pointer is set to entry 15 and then decremented).</summary>
    public bool NotHeld(uint mask, out int frames)
    {
        bool notHeld = (Bits & mask) == 0;
        int total = notHeld ? 0 : RunFrames;
        int idx = _index, p = _index;
        for (int n = 0x10; n != 0; n--)
        {
            if ((_histBits[p] & mask) == 0) break;
            int len = _histFrames[p];
            if (--idx < 0) { p = 0xF; idx = 0xF; }
            total += len;
            p--;                                                              // (16 iterations never take p below 0 after the wrap)
        }
        frames = total;
        return notHeld;
    }
}
