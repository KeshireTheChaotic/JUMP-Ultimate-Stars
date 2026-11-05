using System.Buffers.Binary;
using Jus.Game.Assets;

namespace Jus.Game.Engine;

/// <summary>Translation of CommonPaletteAnime.cpp (CommonPaletteAnime_Create 0x0206AD90, _Load
/// 0x0206AFD0; frame tasks table 0x0209DE74, init table 0x0209DE4C). Animates a range of a palette
/// every frame; the port applies it to a <see cref="DsigImage"/>'s BGR555 palette.
/// Field names keep the original offsets.</summary>
public sealed class PaletteAnimation
{
    private readonly DsigImage _target;
    private readonly ushort[] _saved;        // +0x08: the range's colours when the animation was created

    public int Kind { get; }                 // +0x0C
    public int Start { get; }                // +0x0E
    public int Count { get; }                // +0x10
    public byte Counter;                     // +0x11
    public ushort P16;                       // +0x16 (u8 rotate step for kinds 0-2, colour for 3/5)
    public byte P17;                         // +0x17 (period for kinds 0-2)
    public ushort P18;                       // +0x18 (steps for kind 3, colour for kind 5, phase for kind 2)
    public sbyte Dir19 = 1;                  // +0x19
    public byte P1A;                         // +0x1A (steps for kind 5)
    public sbyte Dir1B = 1;                  // +0x1B
    public byte Flags1C;                     // +0x1C (kind 5: bit0 animate first end, bit1 last end)

    /// <summary>CommonPaletteAnime_Create(palette, start, count, kind, rate).</summary>
    public PaletteAnimation(DsigImage target, int start, int count, int kind)
    {
        if (kind is not (0 or 1 or 2 or 3 or 5)) throw new NotSupportedException($"palette animation kind {kind} is not translated yet");
        _target = target;
        Start = start;
        Count = count;
        Kind = kind;
        _saved = target.Palette555.AsSpan(start, count).ToArray();
        // init table: kinds 0-3 set +0x19 = 1, kind 5 sets +0x1B = 1 (already the defaults)
    }

    /// <summary>CommonPaletteAnime_Load(palette, path, rate): one animation per 8-byte record
    /// {kind, count, u16 start, params...} after a u32 record count.</summary>
    public static List<PaletteAnimation> Load(DsigImage target, byte[] script)
    {
        int n = BinaryPrimitives.ReadInt32LittleEndian(script);
        var list = new List<PaletteAnimation>(n);
        for (int i = 0; i < n; i++)
        {
            var r = script.AsSpan(4 + 8 * i, 8);
            var a = new PaletteAnimation(target, BinaryPrimitives.ReadUInt16LittleEndian(r[2..]), r[1], r[0]);
            if (r[0] == 0) { a.P17 = r[5]; a.P16 = r[4]; a.Dir19 = 1; }
            else if (r[0] == 3) { a.P16 = BinaryPrimitives.ReadUInt16LittleEndian(r[4..]); a.P18 = r[6]; a.Dir19 = 1; }
            list.Add(a);
        }
        return list;
    }

    /// <summary>One frame: the kind's task from the table at 0x0209DE74.</summary>
    public void Update()
    {
        var pal = _target.Palette555.AsSpan(Start, Count);
        switch (Kind)
        {
            case 0: if (Counter++ >= P17) { RotateRight(pal); Counter = 0; } break;           // 0x0206B178
            case 1: if (Counter++ >= P17) { RotateLeft(pal); Counter = 0; } break;            // 0x0206B1B0
            case 2:                                                                          // 0x0206B1E8
                if (Counter++ < P17) break;
                if (Dir19 < 0) RotateRight(pal); else RotateLeft(pal);
                Counter = 0;
                P18 = (byte)(P18 + 1);
                if (P18 == Count - 1) { Dir19 = (sbyte)-Dir19; P18 = 0; }
                break;
            case 3:                                                                          // 0x0206B264
                for (int i = 0; i < Count; i++) pal[i] = Lerp(_saved[i], P16, Counter, (byte)P18);
                if (Counter < (byte)P18) { if (Counter == 0) Dir19 = 1; }
                else Dir19 = -1;
                Counter = (byte)(Counter + Dir19);
                break;
            case 5:                                                                          // 0x0206B500
                Gradient(pal);
                if (Counter < P1A) { if (Counter == 0) Dir1B = 1; }
                else Dir1B = -1;
                Counter = (byte)(Counter + Dir1B);
                break;
        }
        _target.Refresh();
    }

    /// <summary>FUN_0206b304: move the last P16 colours to the front.</summary>
    private void RotateRight(Span<ushort> pal)
    {
        int k = (byte)P16;
        var tmp = pal[^k..].ToArray();
        for (int i = Count - 1; i >= k; i--) pal[i] = pal[i - k];
        tmp.CopyTo(pal);
    }

    /// <summary>FUN_0206b3dc: move the first P16 colours to the back.</summary>
    private void RotateLeft(Span<ushort> pal)
    {
        int k = (byte)P16;
        var tmp = pal[..k].ToArray();
        for (int i = 0; i < Count - k; i++) pal[i] = pal[i + k];
        tmp.CopyTo(pal[(Count - k)..]);
    }

    private void Gradient(Span<ushort> pal)
    {
        int c0 = (Flags1C & 1) != 0 ? Lerp(_saved[0], P16, Counter, P1A) : pal[0];
        int c1 = (Flags1C & 2) != 0 ? Lerp(_saved[Count - 1], P18, Counter, P1A) : pal[Count - 1];
        int r0 = c0 & 0x1F, g0 = (c0 >> 5) & 0x1F, b0 = (c0 >> 10) & 0x1F;
        int last = Count - 1;
        for (int i = 0; i < Count; i++)
        {
            int db = Div(i * (((c1 >> 10) & 0x1F) - b0), last);
            int dr = Div(i * ((c1 & 0x1F) - r0), last);
            int dg = Div(i * (((c1 >> 5) & 0x1F) - g0), last);
            pal[i] = (ushort)(((r0 + dr) & 0xFF) | ((g0 + dg) & 0xFF) << 5 | ((b0 + db) & 0xFF) << 10);
        }
    }

    /// <summary>FUN_0206b8b0(from, to, t, steps): per-channel from + t*(to-from)/steps, with the
    /// original's masks (0xFF, 0xFF, 0x3F) and 16-bit result.</summary>
    public static ushort Lerp(int from, int to, int t, int steps)
    {
        int b0 = (from >> 10) & 0x1F, g0 = (from >> 5) & 0x1F;
        int db = Div(t * (((to >> 10) & 0x1F) - b0), steps);
        int dr = Div(t * ((to & 0x1F) - (from & 0x1F)), steps);
        int dg = Div(t * (((to >> 5) & 0x1F) - g0), steps);
        return (ushort)((((from & 0x1F) + dr) & 0xFF) | ((g0 + dg) & 0xFF) << 5 | ((b0 + db) & 0x3F) << 10);
    }

    /// <summary>FUN_0200d12c: signed division truncating toward zero (division by 0 yields 0 here;
    /// the original's divide routine is not expected to be called with 0).</summary>
    private static int Div(int a, int b) => b == 0 ? 0 : a / b;
}
