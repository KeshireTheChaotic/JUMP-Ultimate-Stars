using System.Buffers.Binary;

namespace Jus.Nds.Verification;

/// <summary>Byte image of the ARM9 code/data regions (ITCM, DTCM, main RAM) as the original
/// program sees them after boot. Verification tooling only: it lets tests compare what the
/// port loads against the Ghidra layout and, later, compare translated functions with the
/// original data. The native port never runs on this image and has no emulated hardware.</summary>
public sealed class Arm9Image
{
    public const uint MainBase = 0x0200_0000, MainSize = 0x40_0000;
    public const uint ItcmBase = 0x01FF_8000, ItcmSize = 0x8000;
    public const uint DtcmBase = 0x027C_0000, DtcmSize = 0x4000;

    public byte[] Main { get; } = new byte[MainSize];
    public byte[] Itcm { get; } = new byte[ItcmSize];
    public byte[] Dtcm { get; } = new byte[DtcmSize];

    private Span<byte> Resolve(uint a, int size)
    {
        ulong end = (ulong)a + (ulong)size;
        if (a >= DtcmBase && end <= DtcmBase + DtcmSize) return Dtcm.AsSpan((int)(a - DtcmBase), size);
        if (a >= ItcmBase && end <= ItcmBase + ItcmSize) return Itcm.AsSpan((int)(a - ItcmBase), size);
        if (a >= MainBase && end <= MainBase + MainSize) return Main.AsSpan((int)(a - MainBase), size);
        throw new ImageRangeException(a, size);
    }

    public uint Read32(uint a) => BinaryPrimitives.ReadUInt32LittleEndian(Resolve(a, 4));
    public void Write32(uint a, uint v) => BinaryPrimitives.WriteUInt32LittleEndian(Resolve(a, 4), v);
    public void WriteBlock(uint a, ReadOnlySpan<byte> data) => data.CopyTo(Resolve(a, data.Length));
    public void Clear(uint a, uint size) => Resolve(a, (int)size).Clear();
    public byte[] ReadBlock(uint a, uint size) => Resolve(a, (int)size).ToArray();
}

public sealed class ImageRangeException(uint address, int size)
    : Exception($"0x{address:X8}+0x{size:X} is outside the ARM9 ITCM/DTCM/main-RAM image");
