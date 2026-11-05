using System.Buffers.Binary;

namespace Jus.Nds;

/// <summary>Hardware register access, implemented by the HLE device layer (GX, DMA, timers, IPC...).</summary>
public interface IIoHandler
{
    uint Read32(uint address);
    void Write32(uint address, uint value);
}

/// <summary>Unimplemented I/O: reads 0, logs and drops writes.</summary>
public sealed class NullIo : IIoHandler
{
    public readonly List<(uint Address, uint Value)> Writes = [];
    public uint Read32(uint address) => 0;
    public void Write32(uint address, uint value) => Writes.Add((address, value));
}

/// <summary>ARM9 address space as the game sees it (no MPU faults):
/// ITCM 32 KB (mirrored below 0x02000000), DTCM 16 KB at a movable base, 4 MB main RAM
/// mirrored through 0x02FFFFFF, I/O, palette, VRAM (flat 656 KB LCDC view) and OAM.</summary>
public sealed class Arm9Memory
{
    public const uint MainBase = 0x0200_0000, MainSize = 0x40_0000;
    public const uint ItcmSize = 0x8000, DtcmSize = 0x4000;

    public byte[] Main { get; } = new byte[MainSize];
    public byte[] Itcm { get; } = new byte[ItcmSize];
    public byte[] Dtcm { get; } = new byte[DtcmSize];
    public byte[] Palette { get; } = new byte[0x800];
    public byte[] Vram { get; } = new byte[0xA4000];
    public byte[] Oam { get; } = new byte[0x800];
    public uint DtcmBase { get; set; } = 0x027C_0000;
    public IIoHandler Io { get; set; } = new NullIo();

    private Span<byte> Resolve(uint a, int width)
    {
        if (a >= DtcmBase && a < DtcmBase + DtcmSize) return Dtcm.AsSpan((int)(a - DtcmBase), width);
        switch (a >> 24)
        {
            case 0x00: case 0x01: return Itcm.AsSpan((int)(a & (ItcmSize - 1)), width);
            case 0x02: return Main.AsSpan((int)(a & (MainSize - 1)), width);
            case 0x05: return Palette.AsSpan((int)(a & 0x7FF), width);
            case 0x06: return Vram.AsSpan((int)((a & 0xFFFFF) % (uint)Vram.Length), width);
            case 0x07: return Oam.AsSpan((int)(a & 0x7FF), width);
            default: throw new MemoryAccessException(a);
        }
    }

    public byte Read8(uint a) => IsIo(a) ? (byte)(Io.Read32(a & ~3u) >> (int)(8 * (a & 3))) : Resolve(a, 1)[0];
    public ushort Read16(uint a) => IsIo(a) ? (ushort)(Io.Read32(a & ~3u) >> (int)(8 * (a & 2))) : BinaryPrimitives.ReadUInt16LittleEndian(Resolve(a & ~1u, 2));
    public uint Read32(uint a) => IsIo(a) ? Io.Read32(a & ~3u) : BinaryPrimitives.ReadUInt32LittleEndian(Resolve(a & ~3u, 4));
    public void Write8(uint a, byte v) { if (IsIo(a)) Io.Write32(a, v); else Resolve(a, 1)[0] = v; }
    public void Write16(uint a, ushort v) { if (IsIo(a)) Io.Write32(a, v); else BinaryPrimitives.WriteUInt16LittleEndian(Resolve(a & ~1u, 2), v); }
    public void Write32(uint a, uint v) { if (IsIo(a)) Io.Write32(a & ~3u, v); else BinaryPrimitives.WriteUInt32LittleEndian(Resolve(a & ~3u, 4), v); }

    public void WriteBlock(uint a, ReadOnlySpan<byte> data) => data.CopyTo(Resolve(a, data.Length));
    public void Clear(uint a, uint size) => Resolve(a, (int)size).Clear();
    public byte[] ReadBlock(uint a, uint size) => Resolve(a, (int)size).ToArray();

    private static bool IsIo(uint a) => (a >> 24) == 0x04;
}

public sealed class MemoryAccessException(uint address)
    : Exception($"unmapped ARM9 address 0x{address:X8}")
{
    public uint Address { get; } = address;
}
