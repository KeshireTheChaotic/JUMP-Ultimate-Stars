using System.Buffers.Binary;
using System.Text;

namespace Jus.Nds;

/// <summary>One CPU's executable as described by the cartridge header.</summary>
public sealed record ExecutableInfo(uint RomOffset, uint EntryPoint, uint RamAddress, uint Size);

/// <summary>32-byte overlay table entry (NitroSDK FSOverlayInfo).</summary>
public sealed record OverlayInfo(
    uint Id, uint RamAddress, uint RamSize, uint BssSize,
    uint StaticInitStart, uint StaticInitEnd, uint FileId, uint Flags)
{
    public bool Compressed => (Flags & 0x0100_0000) != 0;
    public uint CompressedSize => Flags & 0x00FF_FFFF;
}

/// <summary>Read-only view of an NDS cartridge image: header, FAT, FNT and overlay tables.</summary>
public sealed class NdsRom
{
    private readonly byte[] _data;

    public NdsRom(byte[] data)
    {
        if (data.Length < 0x200) throw new InvalidDataException("ROM is smaller than the cartridge header.");
        _data = data;
        Title = Encoding.ASCII.GetString(data, 0, 12).TrimEnd('\0');
        GameCode = Encoding.ASCII.GetString(data, 0x0C, 4);
        Arm9 = ReadExe(0x20);
        Arm7 = ReadExe(0x30);
        Fat = ReadFat(U32(0x48), U32(0x4C));
        Arm9Overlays = ReadOverlays(U32(0x50), U32(0x54));
        Arm7Overlays = ReadOverlays(U32(0x58), U32(0x5C));
        FileSystem = NitroFileSystem.Parse(Slice(U32(0x40), U32(0x44)), Fat.Count);
    }

    public static NdsRom Load(string path) => new(File.ReadAllBytes(path));

    public string Title { get; }
    public string GameCode { get; }
    public ExecutableInfo Arm9 { get; }
    public ExecutableInfo Arm7 { get; }
    /// <summary>File id → (start, end) byte range in the ROM.</summary>
    public IReadOnlyList<(uint Start, uint End)> Fat { get; }
    public IReadOnlyList<OverlayInfo> Arm9Overlays { get; }
    public IReadOnlyList<OverlayInfo> Arm7Overlays { get; }
    public NitroFileSystem FileSystem { get; }

    public ReadOnlySpan<byte> Bytes => _data;
    public byte[] Arm9Binary => Slice(Arm9.RomOffset, Arm9.Size).ToArray();
    public byte[] Arm7Binary => Slice(Arm7.RomOffset, Arm7.Size).ToArray();

    public byte[] ReadFile(int fileId)
    {
        var (s, e) = Fat[fileId];
        return Slice(s, e - s).ToArray();
    }

    public byte[] ReadFile(string path) =>
        ReadFile(FileSystem.Lookup(path) ?? throw new FileNotFoundException($"NitroFS: {path}"));

    public byte[] ReadOverlay(OverlayInfo ov)
    {
        if (ov.Compressed) throw new NotSupportedException($"overlay {ov.Id} is compressed (not used by JUS)");
        return ReadFile((int)ov.FileId);
    }

    private ReadOnlySpan<byte> Slice(uint offset, uint size)
    {
        if ((ulong)offset + size > (ulong)_data.Length) throw new InvalidDataException($"range 0x{offset:X}+0x{size:X} is outside the ROM");
        return _data.AsSpan((int)offset, (int)size);
    }

    private uint U32(int o) => BinaryPrimitives.ReadUInt32LittleEndian(_data.AsSpan(o));
    private ExecutableInfo ReadExe(int o) => new(U32(o), U32(o + 4), U32(o + 8), U32(o + 12));

    private List<(uint, uint)> ReadFat(uint offset, uint size)
    {
        var fat = new List<(uint, uint)>((int)(size / 8));
        var s = Slice(offset, size);
        for (int i = 0; i < s.Length; i += 8)
            fat.Add((BinaryPrimitives.ReadUInt32LittleEndian(s[i..]), BinaryPrimitives.ReadUInt32LittleEndian(s[(i + 4)..])));
        return fat;
    }

    private List<OverlayInfo> ReadOverlays(uint offset, uint size)
    {
        var list = new List<OverlayInfo>();
        if (size == 0) return list;
        var s = Slice(offset, size);
        var w = new uint[8];
        for (int i = 0; i + 32 <= s.Length; i += 32)
        {
            for (int k = 0; k < 8; k++) w[k] = BinaryPrimitives.ReadUInt32LittleEndian(s[(i + 4 * k)..]);
            list.Add(new OverlayInfo(w[0], w[1], w[2], w[3], w[4], w[5], w[6], w[7]));
        }
        return list;
    }
}
