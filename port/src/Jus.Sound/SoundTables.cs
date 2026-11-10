namespace Jus.Sound;

/// <summary>
/// The sound driver's lookup tables, computed (no game binaries needed). Each one equals the table in
/// the game's own driver entry for entry; <c>SoundTests</c> checks that against the ROM:
/// <list type="bullet">
/// <item>DecibelSquare[128] = max(round(400·log10(i/127)), −722), [0] = −32768 (ARM7 0x03807CD4).
/// Volume, expression, velocity and sustain go through it.</item>
/// <item>Decibel[128] = the same with 200 (ARM9 0x02091DB0).</item>
/// <item>Volume[724]: dB (−723 … 0) → channel volume register = min(127, round(128·m·10^(dB/200))) with
/// m = 16 / 4 / 2 / 1 for the four data-shift ranges (dB &lt; −240 / −120 / −60 / above), except
/// dB −121, −61 and −1, which are 126 in the driver (ARM9 0x02091EB0).</item>
/// <item>Sine[33] = round(127·sin(i·π/64)), a quarter wave for the LFO (ARM7 0x03807CB0).</item>
/// <item>Attack[19]: no formula found; the driver's 19 values are listed here (ARM7 0x03807DE8).</item>
/// <item>Pitch[768] = round((2^(i/768) − 1)·65536) (not stored in the driver; computed there too).</item>
/// </list>
/// Rounding is half away from zero.
/// </summary>
public sealed class SoundTables
{
    public short[] DecibelSquare { get; } = new short[128];
    public short[] Decibel { get; } = new short[128];
    public byte[] Volume { get; } = new byte[724];
    public byte[] Sine { get; } = new byte[33];
    public byte[] Attack { get; } = [0, 1, 5, 14, 26, 38, 51, 63, 73, 84, 92, 100, 109, 116, 123, 127, 132, 137, 143];
    public static ushort[] Pitch { get; } = Enumerable.Range(0, 768)
        .Select(i => (ushort)Round((Math.Pow(2, i / 768.0) - 1) * 65536)).ToArray();

    private static int Round(double x) => (int)Math.Round(x, MidpointRounding.AwayFromZero);

    public SoundTables()
    {
        DecibelSquare[0] = Decibel[0] = -32768;
        for (int i = 1; i < 128; i++)
        {
            DecibelSquare[i] = (short)Math.Max(Round(400 * Math.Log10(i / 127.0)), -722);
            Decibel[i] = (short)Math.Max(Round(200 * Math.Log10(i / 127.0)), -722);
        }
        for (int i = 0; i < 724; i++)
        {
            int dB = i - 723;
            int m = dB < -240 ? 16 : dB < -120 ? 4 : dB < -60 ? 2 : 1;
            Volume[i] = (byte)Math.Min(127, Round(128.0 * m * Math.Pow(10, dB / 200.0)));
        }
        Volume[602] = Volume[662] = Volume[722] = 126;      // dB −121, −61, −1 (driver values)
        for (int i = 0; i < 33; i++) Sine[i] = (byte)Round(127 * Math.Sin(i * Math.PI / 64));
    }

    /// <summary>SND_CalcTimer: the channel timer for <paramref name="timer"/> raised by
    /// <paramref name="pitch"/> (1/64 semitone units; higher pitch = smaller timer).</summary>
    public static int CalcTimer(int timer, int pitch)
    {
        int octave = 0, p = -pitch;
        while (p < 0) { octave--; p += 768; }
        while (p >= 768) { octave++; p -= 768; }
        long r = (long)timer * (Pitch[p] + 0x10000);
        int shift = octave - 16;
        if (shift <= 0) r >>= -shift;
        else if (shift < 32) r <<= shift; else r = 0xFFFF;
        return (int)Math.Clamp(r, 0x10, 0xFFFF);
    }

    /// <summary>SND_CalcChannelVolume: channel volume (0–127) and data shift (0–3: ÷1, ÷2, ÷4, ÷16) for a
    /// level in 0.1 dB (clamped to −72.3 … 0).</summary>
    public (int Volume, int Shift) ChannelVolume(int dB)
    {
        dB = Math.Clamp(dB, -723, 0);
        int shift = dB < -240 ? 3 : dB < -120 ? 2 : dB < -60 ? 1 : 0;
        return (Volume[dB + 723], shift);
    }

    /// <summary>SND attack rate: 255 − a below 109, else the attack table.</summary>
    public int AttackRate(int a) => a < 109 ? 255 - a : Attack[127 - a];

    /// <summary>SND decay/release rate.</summary>
    public static int DecayRate(int d) => d == 127 ? 0xFFFF : d == 126 ? 0x3C00 : d < 50 ? d * 2 + 1 : 0x1E00 / (126 - d);

    /// <summary>Sustain level in envelope units (dB·128).</summary>
    public int SustainLevel(int s) => DecibelSquare[Math.Clamp(s, 0, 127)] << 7;

    /// <summary>LFO sine, index 0–127 over one period, −127 … 127.</summary>
    public int SinIndex(int i)
    {
        i &= 127;
        return i < 32 ? Sine[i] : i < 64 ? Sine[64 - i] : i < 96 ? -Sine[i - 64] : -Sine[128 - i];
    }
}
