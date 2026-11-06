using System.Buffers.Binary;

namespace Jus.Game;

/// <summary>Result codes of RecordLoad (0x020728D8).</summary>
public enum SaveLoadResult
{
    /// <summary>Both copies valid (copy 0 used).</summary>
    Ok = 0,
    /// <summary>One copy invalid, the other used.</summary>
    OneCopyBad = 1,
    /// <summary>No copy has the "JSSG" header (e.g. a new, erased backup).</summary>
    NoData = 2,
    /// <summary>Header present but the CRC does not match.</summary>
    BadChecksum = 3,
    /// <summary>The backup could not be read.</summary>
    ReadError = 4,
}

/// <summary>The game's save image (0x7558 bytes at 0x020B02B8) and its backup layout, translated from
/// Record.cpp RecordLoad 0x020728D8 and FUN_02072a60.
///
/// Backup (64 KB EEPROM): two copies at 0x0000 and 0x8000, each "JSSG", u32 0x7558, image.
/// The image ends with 8 rotating 0x28-byte records at +0x7408 ({u16 counter, …, u32 play frames
/// at +0x24}); the current one has the highest counter (with wrap: if a counter is 0xFFFF the
/// highest one below 0x8000 wins). Its CRC-16 (BIOS GetCRC16, initial 0, over +0..+0x7548) is at
/// +0x7548 + index*2.</summary>
public sealed class SaveImage
{
    public const int Size = 0x7558;
    public const int CopySize = 0x7560;
    public const int RecordsOffset = 0x7408, RecordSize = 0x28, CrcOffset = 0x7548;
    /// <summary>Save +0x8D8 (0x020B0B90): progress/event flags.</summary>
    public const int ProgressFlagsOffset = 0x8D8;

    public byte[] Data { get; } = new byte[Size];

    /// <summary>FUN_02072a60: index of the current record.</summary>
    public static int CurrentRecord(ReadOnlySpan<byte> image)
    {
        int best = -1, bestIndex = 0, below = -1, belowIndex = 0;
        for (int i = 0; i < 8; i++)
        {
            int v = BinaryPrimitives.ReadUInt16LittleEndian(image[(RecordsOffset + i * RecordSize)..]);
            if (best < v) { best = v; bestIndex = i; }
            if (v < 0x8000 && below < v) { below = v; belowIndex = i; }
        }
        return best == 0xFFFF && below != -1 ? belowIndex : bestIndex;
    }

    /// <summary>NDS BIOS GetCRC16 (SWI 0x0E): byte-wise, reflected polynomial 0xA001.</summary>
    public static ushort Crc16(ReadOnlySpan<byte> data, ushort crc = 0)
    {
        foreach (byte b in data)
        {
            crc ^= b;
            for (int k = 0; k < 8; k++) crc = (ushort)((crc & 1) != 0 ? (crc >> 1) ^ 0xA001 : crc >> 1);
        }
        return crc;
    }

    /// <summary>RecordLoad: read both copies, validate, copy the first good one into <see cref="Data"/>.</summary>
    public SaveLoadResult Load(ISaveStorage storage)
    {
        if (storage.Size < 0x8000 + CopySize) return SaveLoadResult.ReadError;
        var status = new SaveLoadResult[2];
        var copies = new byte[2][];
        for (int c = 0; c < 2; c++)
        {
            var buf = new byte[CopySize];
            storage.Read(c << 15, buf);
            copies[c] = buf;
            if (BinaryPrimitives.ReadUInt32LittleEndian(buf) != 0x4753534A || BinaryPrimitives.ReadInt32LittleEndian(buf.AsSpan(4)) != Size)
            {
                status[c] = SaveLoadResult.NoData;
                continue;
            }
            var image = buf.AsSpan(8, Size);
            int idx = CurrentRecord(image);
            if (Crc16(image[..CrcOffset]) != BinaryPrimitives.ReadUInt16LittleEndian(image[(CrcOffset + idx * 2)..]))
                status[c] = SaveLoadResult.BadChecksum;
        }
        if (status[0] == SaveLoadResult.Ok) copies[0].AsSpan(8, Size).CopyTo(Data);
        else if (status[1] == SaveLoadResult.Ok) copies[1].AsSpan(8, Size).CopyTo(Data);
        if (status[0] == SaveLoadResult.Ok && status[1] == SaveLoadResult.Ok) return SaveLoadResult.Ok;
        if (status[0] == SaveLoadResult.Ok || status[1] == SaveLoadResult.Ok) return SaveLoadResult.OneCopyBad;
        if (status[0] == SaveLoadResult.ReadError || status[1] == SaveLoadResult.ReadError) return SaveLoadResult.ReadError;
        if (status[0] == SaveLoadResult.NoData || status[1] == SaveLoadResult.NoData) return SaveLoadResult.NoData;
        return SaveLoadResult.BadChecksum;
    }

    public uint ProgressFlags => BinaryPrimitives.ReadUInt32LittleEndian(Data.AsSpan(ProgressFlagsOffset));
    public int Record => CurrentRecord(Data);
    public uint PlayFrames => BinaryPrimitives.ReadUInt32LittleEndian(Data.AsSpan(RecordsOffset + Record * RecordSize + 0x24));
}
