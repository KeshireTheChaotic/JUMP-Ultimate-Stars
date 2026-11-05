using System.Buffers.Binary;
using System.Text;

namespace Jus.Nds;

/// <summary>NitroFS name table: maps paths to FAT file ids. Ids below the first named
/// file (overlays) have no path.</summary>
public sealed class NitroFileSystem
{
    private readonly Dictionary<string, int> _files = new(StringComparer.Ordinal);
    private readonly List<string> _dirs = [];

    public IReadOnlyDictionary<string, int> Files => _files;
    public IReadOnlyList<string> Directories => _dirs;

    public int? Lookup(string path) => _files.TryGetValue(path.TrimStart('/'), out var id) ? id : null;

    public static NitroFileSystem Parse(ReadOnlySpan<byte> fnt, int fileCount)
    {
        var fs = new NitroFileSystem();
        if (fnt.Length < 8) return fs;
        int dirCount = BinaryPrimitives.ReadUInt16LittleEndian(fnt[6..]);
        var names = new string[dirCount];
        names[0] = "";
        // Directories are discovered from their parents; walk breadth-first from the root.
        var queue = new Queue<int>([0]);
        var seen = new HashSet<int>();
        while (queue.Count > 0)
        {
            int d = queue.Dequeue();
            if (!seen.Add(d) || d >= dirCount) throw new InvalidDataException($"FNT: bad directory {d}");
            fs._dirs.Add(names[d]);
            int o = (int)BinaryPrimitives.ReadUInt32LittleEndian(fnt[(d * 8)..]);
            int fileId = BinaryPrimitives.ReadUInt16LittleEndian(fnt[(d * 8 + 4)..]);
            while (true)
            {
                int len = fnt[o++];
                if (len == 0) break;
                bool isDir = (len & 0x80) != 0;
                len &= 0x7F;
                string name = Encoding.ASCII.GetString(fnt.Slice(o, len));
                o += len;
                string path = names[d].Length == 0 ? name : names[d] + "/" + name;
                if (isDir)
                {
                    int sub = BinaryPrimitives.ReadUInt16LittleEndian(fnt[o..]) & 0x0FFF;
                    o += 2;
                    names[sub] = path;
                    queue.Enqueue(sub);
                }
                else
                {
                    if (fileId >= fileCount) throw new InvalidDataException($"FNT: file id {fileId} beyond FAT");
                    fs._files[path] = fileId++;
                }
            }
        }
        return fs;
    }
}
