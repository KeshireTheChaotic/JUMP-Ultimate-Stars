namespace Jus.Game.Scenes.Ov06;

/// <summary>
/// The game's random generator: a plain MT19937 (Mersenne Twister) object, translated from arm9_main.
/// The global instance is created by FUN_02030D6C (pointer at 0x020A0DA8; the generator state sits at
/// object +4) and seeded at boot with OS_GetTick() (FUN_0206DF9C → FUN_02030F24). Callers draw with
/// FUN_02031070(*(0x020A0DA8) + 4), e.g. the battle camera quake (FUN_02151E2C) and the battle core
/// (FUN_02076510, FUN_02080D28, …).
/// <list type="bullet">
/// <item>FUN_02030F24 (seed): state[0] = seed, state[i] = 0x6C078965·(s ^ s &gt;&gt; 30) + i for i = 1..623;
/// +0x9C4 (left) = 1, +0x9C8 (seeded) = 1.</item>
/// <item>FUN_02030F68 (regenerate): seeds with 0x1571 when never seeded; left = 0x270, next = state[0];
/// the standard twist (227 + 396 + 1 words, matrix 0x9908B0DF).</item>
/// <item>FUN_02031070 (next): --left == 0 → regenerate; y = *next++; tempering y ^= y &gt;&gt; 11,
/// y ^= (y &amp; 0x13A58AD) &lt;&lt; 7, y ^= (y &amp; 0x1DF8C) &lt;&lt; 15, y ^= y &gt;&gt; 18.</item>
/// </list>
/// The output equals the reference genrand_int32 for the same seed.
/// </summary>
public sealed class Mt19937
{
    private const int N = 0x270, M = 0x18D;
    private readonly uint[] _mt = new uint[N];
    private int _left;           // +0x9C4
    private bool _seeded;        // +0x9C8
    private int _next;           // +0x9CC (index into the state)

    public Mt19937() { }

    public Mt19937(uint seed) => Seed(seed);

    /// <summary>FUN_02030F24.</summary>
    public void Seed(uint seed)
    {
        _mt[0] = seed;
        for (int i = 1; i < N; i++)
        {
            uint s = _mt[i - 1];
            _mt[i] = (s ^ (s >> 30)) * 0x6C078965u + (uint)i;
        }
        _left = 1;
        _seeded = true;
    }

    /// <summary>FUN_02030F68.</summary>
    private void Regenerate()
    {
        if (!_seeded) Seed(0x1571);
        _left = N;
        _next = 0;
        int k = 0;
        for (; k < N - M; k++) _mt[k] = _mt[k + M] ^ Twist(_mt[k], _mt[k + 1]);
        for (; k < N - 1; k++) _mt[k] = _mt[k + M - N] ^ Twist(_mt[k], _mt[k + 1]);
        _mt[N - 1] = _mt[M - 1] ^ Twist(_mt[N - 1], _mt[0]);
    }

    private static uint Twist(uint u, uint v) => (((u & 0x80000000u) | (v & 0x7FFFFFFFu)) >> 1) ^ ((v & 1) != 0 ? 0x9908B0DFu : 0u);

    /// <summary>FUN_02031070.</summary>
    public uint Next()
    {
        if (--_left == 0) Regenerate();
        uint y = _mt[_next++];
        y ^= y >> 11;
        y ^= (y & 0x13A58ADu) << 7;
        y ^= (y & 0x1DF8Cu) << 15;
        return y ^ (y >> 18);
    }
}

/// <summary>The CodeWarrior runtime divisions the battle code calls, with their exact edge cases.</summary>
public static class BattleDiv
{
    /// <summary>FUN_0200D12C: signed division truncating toward zero. A zero divisor branches straight to
    /// the sign fix-up (0x0200D148 → 0x0200D324), so the result is the dividend itself.</summary>
    public static int Div(int a, int b) => b == 0 ? a : (a == int.MinValue && b == -1 ? a : a / b);

    /// <summary>The remainder (r1) of the unsigned division FUN_0200D338. With a zero divisor it returns at
    /// once (0x0200D33C <c>bxeq lr</c>), leaving r1 = 0.</summary>
    public static uint UMod(uint a, uint b) => b == 0 ? 0 : a % b;
}
