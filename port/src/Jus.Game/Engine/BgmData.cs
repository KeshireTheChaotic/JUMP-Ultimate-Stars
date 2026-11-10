using System.Buffers.Binary;

namespace Jus.Game.Engine;

/// <summary>
/// BgmData.cpp (BgmData_Create 0x020757xx, <c>bin/bgm.bin</c>): u32 entry count, then 0x18-byte entries
/// with the music id as a u16 at +0x10 (FUN_020758cc). The game's music start FUN_020734e0(id) maps ids
/// 0x12–0x2E to id + 0x2A, finds the entry with that id and marks its index as heard in the save
/// (FUN_02071514), then FUN_0207361c starts the sequence.
/// </summary>
public sealed class BgmData
{
    public IReadOnlyList<int> Ids { get; }

    public BgmData(byte[] data)
    {
        int n = BinaryPrimitives.ReadInt32LittleEndian(data);
        var ids = new int[n];
        for (int i = 0; i < n; i++) ids[i] = BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(4 + i * 0x18 + 0x10));
        Ids = ids;
    }

    /// <summary>The table index recorded for music <paramref name="id"/>, or -1 if the table has none.</summary>
    public int IndexOf(int id)
    {
        if (id > 0x11 && id < 0x2F) id += 0x2A;
        for (int i = 0; i < Ids.Count; i++) if (Ids[i] == id) return i;
        return -1;
    }
}
