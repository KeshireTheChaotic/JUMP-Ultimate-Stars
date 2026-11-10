using System.Buffers.Binary;
using System.Text;

namespace Jus.Game.Assets;

/// <summary>One file inside an "ALAR" archive.</summary>
public sealed record AlarEntry(int Id, byte Kind, string Name, int Offset, int Size);

/// <summary>"ALAR" resource archive (.aar). Two layouts occur:
/// version 3 (top-level, e.g. title/title.aar): +6 count, +0x10 u16 data start, +0x12 u16 entry
/// offsets; entry = {u16 id, u8 0, u8 kind ('B' image, 'F' map, 'G' archive, 0 binary), u32 offset,
/// u32 size, u32, u16 name hash, name}.
/// version 2 (nested, e.g. title/logo_copy.aar): +6 count, +8/+0xC first/last resource id, then
/// 16-byte entries at +0x10 = {u16 index, u8 group, u8 kind ('@' DSTX texture, 'A' animation set),
/// u32 offset, u32 size, u32 flags}; resource id = group &lt;&lt; 16 | index (e.g. 0x710000).
/// Entry data is raw or DSCP-compressed.</summary>
public sealed class AlarArchive
{
    private readonly byte[] _data;
    public int Version { get; }
    public IReadOnlyList<AlarEntry> Entries { get; }

    public AlarArchive(byte[] data)
    {
        _data = data;
        if (BinaryPrimitives.ReadUInt32LittleEndian(data) != 0x52414C41) throw new InvalidDataException("not ALAR");
        Version = data[4];
        int count = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(6));
        var list = new List<AlarEntry>(count);
        if (Version == 3)
        {
            for (int i = 0; i < count; i++)
            {
                int o = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(0x12 + 2 * i));
                list.Add(new AlarEntry(BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o)), data[o + 3], CString(o + 0x12),
                    BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(o + 4)), BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(o + 8))));
            }
        }
        else if (Version == 2)
        {
            // +8: first and last resource id of the group (e.g. 0x710000..0x710002)
            for (int i = 0; i < count; i++)
            {
                int o = 0x10 + i * 0x10;
                int id = data[o + 2] << 16 | BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o));
                list.Add(new AlarEntry(id, data[o + 3], "",
                    BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(o + 4)), BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(o + 8))));
            }
        }
        else throw new NotSupportedException($"ALAR version {Version}");
        Entries = list;
    }

    private string CString(int o) => Encoding.ASCII.GetString(_data, o, Array.IndexOf(_data, (byte)0, o) - o);

    /// <summary>The entry's bytes, decompressed if stored as DSCP.</summary>
    public byte[] Read(AlarEntry e) => Dscp.Unpack(_data.AsSpan(e.Offset, e.Size).ToArray());

    public AlarEntry? Find(string name) => Entries.FirstOrDefault(e => e.Name == name);
    public AlarEntry? Find(int id, byte kind) => Entries.FirstOrDefault(e => e.Id == id && e.Kind == kind);
}

/// <summary>Name/id lookup over mounted archives, falling back to the asset source — the native stand-in
/// for the engine's resource registry (archives are mounted by FUN_020101f4, files found by
/// FUN_02035c90(name)).</summary>
public sealed class ResourceManager(IAssetSource files)
{
    private readonly List<AlarArchive> _mounted = [];

    /// <summary>Mount an archive from the asset source or an already mounted archive (nested .aar).</summary>
    public AlarArchive Mount(string path)
    {
        var a = new AlarArchive(Dscp.Unpack(ReadRaw(path)));
        _mounted.Add(a);
        return a;
    }

    public void Unmount(AlarArchive a) => _mounted.Remove(a);

    private byte[] ReadRaw(string path)
    {
        foreach (var a in _mounted)
            if (a.Find(path) is { } e) return a.Read(e);
        return files.Read(path);
    }

    public byte[] Read(string path) => Dscp.Unpack(ReadRaw(path));

    public byte[] Read(int id, byte kind)
    {
        foreach (var a in _mounted)
            if (a.Find(id, kind) is { } e) return a.Read(e);
        throw new FileNotFoundException($"resource 0x{id:X6} kind '{(char)kind}' is not in any mounted archive");
    }
}
