using System.Buffers.Binary;
using System.Text;

namespace Jus.Game.Assets;

/// <summary>One node of an ALOD tree: its id (the ALMT target class, e.g. "SP01"), its type ("SP  " sprite,
/// "GN  ", "3DMA") and its parent's id (property "ParentNodeID"), or null for a root.</summary>
public sealed record AlodNode(string Id, string Type, string? Parent);

/// <summary>
/// "ALOD" (kind 'C'): the node tree that goes with a multi-target ALMT motion set, e.g. a battle character's
/// sprite SP01 with nodes GN01–GN03 under it. Layout as read from the data (2026-11-10): +4 version,
/// +6 node count, +0x10 one u16 offset per node record; the property names follow as C strings; a node
/// record = 4-character id, 4-character type, u32 property count, then per property a u32 tag and a
/// 4-byte value. The only property seen is ParentNodeID, whose value is the parent's id.
/// </summary>
public sealed class AlodFile
{
    public IReadOnlyList<AlodNode> Nodes { get; }

    public AlodFile(byte[] d)
    {
        if (BinaryPrimitives.ReadUInt32LittleEndian(d) != 0x444F4C41) throw new InvalidDataException("not ALOD");
        int n = d[6];
        var nodes = new List<AlodNode>(n);
        for (int i = 0; i < n; i++)
        {
            int o = BinaryPrimitives.ReadUInt16LittleEndian(d.AsSpan(0x10 + 2 * i));
            string id = Encoding.ASCII.GetString(d, o, 4), type = Encoding.ASCII.GetString(d, o + 4, 4);
            int props = o + 12 <= d.Length ? BinaryPrimitives.ReadInt32LittleEndian(d.AsSpan(o + 8)) : 0;
            string? parent = null;
            if (props > 0 && o + 20 <= d.Length) parent = Encoding.ASCII.GetString(d, o + 16, 4);
            nodes.Add(new AlodNode(id, type, parent));
        }
        Nodes = nodes;
    }
}
