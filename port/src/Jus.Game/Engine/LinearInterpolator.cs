namespace Jus.Game.Engine;

/// <summary>
/// The engine's 'LI' interpolator (id 0x494C, bytes "LI"), registered per value type by FUN_02019228
/// (vec3 0x020188AC, 16-bit 0x020189B0, int 0x02018AE4). The other registered ids are 'SI' 0x4953,
/// 'HS' 0x5348 and 'D2' 0x3244 (not used by the translated scenes, not ported).
///
/// Between keys k0 and k1 (frames) at controller time <c>time</c> (20.12, +0x1000 per frame):
///   t = (time - k0·0x1000) / (k1 - k0)          signed integer divide FUN_0200d12c (truncates)
///   vec3 / 16-bit: v = a + FX_Mul(b - a, t)     FX_Mul = (long)x·t >> 12 (floor), FUN_02018AC8
///   int (1/2-byte): v = (a·0x1000 + (b - a)·t) / 0x1000, rounding toward zero
/// At time == k0 the key value itself is used.
/// </summary>
public static class LinearInterpolator
{
    /// <summary>FX_Mul (FUN_02018AC8): 20.12 multiply, arithmetic shift (floor).</summary>
    public static int FxMul(int x, int y) => (int)(((long)x * y) >> 12);

    /// <summary>The interpolation parameter t (20.12) for frame <paramref name="frame"/> between key frames.</summary>
    public static int Param(int frame, int k0, int k1) => ((frame - k0) << 12) / (k1 - k0);

    /// <summary>One component of a vec3 / 16-bit-vector property (e.g. "Scale", "Position").</summary>
    public static int Vector(int a, int b, int frame, int k0, int k1)
        => frame == k0 ? a : a + FxMul(b - a, Param(frame, k0, k1));

    /// <summary>FUN_02018F74 / FUN_021559DC: a 16-bit angle (0x10000 = one turn) as 20.12 radians, in
    /// single precision: trunc(float(2·angle)·π / 65536 · 4096).</summary>
    public static int AngleToRadians(int angle) => (int)((float)(angle << 1) * 3.14159274f / 65536f * 4096f);

    /// <summary>cos of 20.12 radians as 20.12 (FUN_02009838 = fdlibm cos, through float; truncated).</summary>
    public static int CosFx(int radians) => (int)((float)Math.Cos(radians / 4096f) * 4096f);

    /// <summary>sin of 20.12 radians as 20.12 (FUN_02009C54 = fdlibm sin).</summary>
    public static int SinFx(int radians) => (int)((float)Math.Sin(radians / 4096f) * 4096f);

    /// <summary>FUN_02018EFC: cos of a 16-bit angle, 20.12.</summary>
    public static int CosAngle(int angle) => CosFx(AngleToRadians(angle));

    /// <summary>The weight (20.12) each registered curve applies to (b − a), from the linear parameter t:
    /// 'LI' 0x494C: t; 'D2' 0x3244 (0x02019104): t²; 'SI' 0x4953 (0x02018D78): (cos(π + π·t) + 1) / 2, a
    /// smooth ease in and out; 'HS' 0x5348 (0x02018FBC): cos(π + π·t/2) + 1, an ease-in.</summary>
    public static int Weight(int curve, int t) => curve switch
    {
        0x3244 => FxMul(t, t),
        0x4953 => (int)((float)(CosAngle(t * 8 + 0x8000) + 0x1000) / 2f),
        0x5348 => CosAngle(t * 4 + 0x8000) + 0x1000,
        _ => t,
    };

    /// <summary>One component of a vector property under any registered curve: a + FX_Mul(weight, b − a).</summary>
    public static int Vector(int curve, int a, int b, int frame, int k0, int k1)
        => frame == k0 ? a : a + FxMul(Weight(curve, Param(frame, k0, k1)), b - a);

    public const int Linear = 0x494C, Quadratic = 0x3244, Sine = 0x4953, HalfSine = 0x5348;

    /// <summary>A small integer property (1- or 2-byte value): rounds toward zero.</summary>
    public static int Integer(int a, int b, int frame, int k0, int k1)
    {
        if (frame == k0) return a;
        int v = a * 0x1000 + (b - a) * Param(frame, k0, k1);
        return v / 0x1000;   // (v + ((v >> 11) >>> 20)) >> 12 in the original: C# division truncates the same way
    }
}
