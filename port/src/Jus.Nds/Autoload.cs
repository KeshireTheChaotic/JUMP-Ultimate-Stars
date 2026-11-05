using System.Buffers.Binary;

namespace Jus.Nds;

public sealed record AutoloadBlock(uint Destination, uint Size, uint BssSize, uint Source);

/// <summary>The NitroSDK crt0 autoload descriptor (part of the module params on ARM9).
/// Port of <c>find_autoload</c> in harness/python/nds_layout.py.</summary>
public sealed record AutoloadInfo(
    uint DescriptorAddress, uint ListStart, uint ListEnd, uint AutoloadStart,
    uint StaticBssStart, uint StaticBssEnd, IReadOnlyList<AutoloadBlock> Blocks)
{
    /// <summary>Searches every aligned word triple (list_start, list_end, autoload_start) for one
    /// whose list sits at the end of the binary and whose entry sizes exactly fill the bytes
    /// between autoload_start and list_start. Exactly one descriptor must match.</summary>
    public static AutoloadInfo Find(ReadOnlySpan<byte> binary, uint ram)
    {
        uint end = ram + (uint)binary.Length;
        AutoloadInfo? hit = null;
        for (int off = 0; off <= binary.Length - 16; off += 4)
        {
            uint ls = U32(binary, off), le = U32(binary, off + 4), src = U32(binary, off + 8);
            if (le != end || !(ram <= src && src <= ls && ls < le) || (le - ls) % 12 != 0) continue;
            uint n = (le - ls) / 12;
            if (n is < 1 or > 8) continue;
            var raw = new (uint Dst, uint Size, uint Bss)[n];
            ulong total = 0;
            for (int i = 0; i < n; i++)
            {
                int p = (int)(ls - ram) + i * 12;
                raw[i] = (U32(binary, p), U32(binary, p + 4), U32(binary, p + 8));
                total += raw[i].Size;
            }
            if (total != ls - src) continue;
            uint bss0 = U32(binary, off + 12), bss1 = U32(binary, off + 16);
            if (!(src <= bss0 && bss0 <= bss1)) bss0 = bss1 = src;
            var blocks = new List<AutoloadBlock>();
            uint cursor = src;
            foreach (var r in raw) { blocks.Add(new AutoloadBlock(r.Dst, r.Size, r.Bss, cursor)); cursor += r.Size; }
            var info = new AutoloadInfo(ram + (uint)off, ls, le, src, bss0, bss1, blocks);
            if (hit is not null && (hit.ListStart, hit.ListEnd, hit.AutoloadStart) != (ls, le, src))
                throw new InvalidDataException("more than one autoload descriptor");
            hit ??= info;
        }
        return hit ?? throw new InvalidDataException("no autoload descriptor");
    }

    private static uint U32(ReadOnlySpan<byte> b, int o) => BinaryPrimitives.ReadUInt32LittleEndian(b[o..]);
}
