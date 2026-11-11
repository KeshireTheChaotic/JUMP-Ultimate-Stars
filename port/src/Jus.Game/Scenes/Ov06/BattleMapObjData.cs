using System.Buffers.Binary;

namespace Jus.Game.Scenes.Ov06;

/// <summary>
/// <c>stage/&lt;name&gt;.mob</c> (stage/stage.aar), read by BattleMapInit (ov06 0x02161CB4): four u32 offsets
/// from the file start, to the moving floors (+0, BattleMapMoveFloorCreate main 0x02085704), items (+4,
/// BattleMapLoadItem ov06 0x021644C4), grips (+8, BattleMapGripLoad 0x02166B48) and gimmicks (+0xC,
/// BattleMapGimmick_Create 0x02163188). Every block starts with {u8 block id (0 floors, 1 items, 2 grips
/// and gimmicks; not read by the code), u8 count (+1, read by all four loaders), u16 block size (not read;
/// it always equals the distance to the next block)}.
/// </summary>
public sealed class BattleMobFile
{
    public byte[] Data { get; }
    public int MoveFloorOffset { get; }
    public int ItemOffset { get; }
    public int GripOffset { get; }
    public int GimmickOffset { get; }

    public IReadOnlyList<BattleMoveFloorRecord> MoveFloors { get; }
    public BattleItemBlock Items { get; }
    public IReadOnlyList<BattleGripRecord> Grips { get; }
    public IReadOnlyList<BattleGimmickRecord> Gimmicks { get; }

    public BattleMobFile(byte[] data)
    {
        Data = data;
        MoveFloorOffset = BinaryPrimitives.ReadInt32LittleEndian(data);
        ItemOffset = BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(4));
        GripOffset = BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(8));
        GimmickOffset = BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(0xC));

        // BattleMapMoveFloorCreate: records from +4, each starting with its u16 size (puVar6 += *puVar6)
        var floors = new List<BattleMoveFloorRecord>();
        for (int i = 0, o = MoveFloorOffset + 4; i < data[MoveFloorOffset + 1]; i++)
        {
            floors.Add(new BattleMoveFloorRecord(data, o));
            o += BinaryPrimitives.ReadUInt16LittleEndian(data.AsSpan(o));
        }
        MoveFloors = floors;

        Items = new BattleItemBlock(data, ItemOffset);

        // BattleMapGripLoad: count × 12 bytes from +4
        var grips = new List<BattleGripRecord>();
        for (int i = 0; i < data[GripOffset + 1]; i++) grips.Add(new BattleGripRecord(data.AsSpan(GripOffset + 4 + i * 12, 12)));
        Grips = grips;

        // BattleMapGimmick_Create: records from +4, each starting with its u32 size
        var gimmicks = new List<BattleGimmickRecord>();
        for (int i = 0, o = GimmickOffset + 4; i < data[GimmickOffset + 1]; i++)
        {
            int size = BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(o));
            gimmicks.Add(new BattleGimmickRecord(data, o, size));
            o += size;
        }
        Gimmicks = gimmicks;
    }
}

/// <summary>A moving-floor record of the .mob (read by BattleMapMoveFloorInit 0x02085D74 and
/// BattleMapMoveFloorCreate): +0 u16 record size, +2 s8 / +3 s8 offset (px) from the object to its floor
/// record, +4 / +6 s16 home position (px), +8..+0x1B the collision-object parameters (passed to the object
/// creator FUN_020834D4, not read here), +0x1C speed index (0x02092EA8), +0x1D path point count, +0x1E
/// neighbour count, +0x1F image (motion 0x401100 + n, from stage/&lt;name&gt;_floor.aar), +0x20 mode
/// (0x020A00A8 / 0x020A00C0), +0x23 stage id (written at run time), +0x24 path points (8 bytes each), then
/// the neighbour floor-record indices (s16 each).</summary>
public sealed class BattleMoveFloorRecord
{
    /// <summary>A path point: +0 type (0 move to (X, Y), 1 wait <see cref="Value"/> frames), +4 s16 x /
    /// s32 wait, +6 s16 y.</summary>
    public readonly record struct PathPoint(int Type, short X, short Y, int Value);

    public int Offset { get; }
    public int Size { get; }
    public sbyte RecordOffsetX { get; }
    public sbyte RecordOffsetY { get; }
    public short HomeX { get; }
    public short HomeY { get; }
    public byte SpeedIndex { get; }
    public byte Image { get; }
    public byte Mode { get; }
    public IReadOnlyList<PathPoint> Path { get; }
    public IReadOnlyList<short> Neighbours { get; }

    public BattleMoveFloorRecord(byte[] d, int o)
    {
        Offset = o;
        Size = BinaryPrimitives.ReadUInt16LittleEndian(d.AsSpan(o));
        RecordOffsetX = (sbyte)d[o + 2];
        RecordOffsetY = (sbyte)d[o + 3];
        HomeX = BinaryPrimitives.ReadInt16LittleEndian(d.AsSpan(o + 4));
        HomeY = BinaryPrimitives.ReadInt16LittleEndian(d.AsSpan(o + 6));
        SpeedIndex = d[o + 0x1C];
        Image = d[o + 0x1F];
        Mode = d[o + 0x20];
        var path = new PathPoint[d[o + 0x1D]];
        for (int i = 0; i < path.Length; i++)
        {
            int p = o + 0x24 + i * 8;
            path[i] = new PathPoint(d[p], BinaryPrimitives.ReadInt16LittleEndian(d.AsSpan(p + 4)),
                BinaryPrimitives.ReadInt16LittleEndian(d.AsSpan(p + 6)), BinaryPrimitives.ReadInt32LittleEndian(d.AsSpan(p + 4)));
        }
        Path = path;
        // +8 of the work: the neighbour list follows the path (param_2 + 0x24 + count * 8)
        var nb = new short[d[o + 0x1E]];
        for (int i = 0; i < nb.Length; i++) nb[i] = BinaryPrimitives.ReadInt16LittleEndian(d.AsSpan(o + 0x24 + path.Length * 8 + i * 2));
        Neighbours = nb;
    }
}

/// <summary>The item block (BattleMapLoadItem 0x021644C4; item work 0x11E4 bytes, global 0x02172988).
/// Block +1 = number of spawn points (item work +0x14C, 0 when 0x020AFEBB, the items setting, is 0); the
/// rest is read through the work's +0x24 = block + 4 ("data"):
/// data +0 archive index (0x02172568: item archive name), +1 s8 rate (percent), +2 u16 (work +0x14E),
/// +4..+9 six s8 weights (× rate), +0xA..+0xF six s8 (× data +0x11 × 100, the J Power items), +0x11 s8,
/// +0x14 a 12-byte table (work +0x28; rule 0xC replaces it with 0x02172570), +0x20 the spawn points,
/// 12 bytes each (work +0x2C; work +0x80 = their end). The item spawning itself (0x60 item objects,
/// item/itemprob.ipf, FUN_021662C4 / FUN_021657D4) is not translated.</summary>
public sealed class BattleItemBlock
{
    /// <summary>A spawn point: s32 x, s32 y (24.8 px), u32 (not read here).</summary>
    public readonly record struct SpawnPoint(int X, int Y, uint Param);

    public int Archive { get; }
    public sbyte Rate { get; }
    public ushort Param14E { get; }
    public sbyte[] Weights { get; } = new sbyte[6];
    public sbyte[] PowerWeights { get; } = new sbyte[6];
    public sbyte PowerRate { get; }
    public IReadOnlyList<SpawnPoint> Spawns { get; }

    public BattleItemBlock(byte[] d, int block)
    {
        int data = block + 4;
        Archive = d[data];
        Rate = (sbyte)d[data + 1];
        Param14E = BinaryPrimitives.ReadUInt16LittleEndian(d.AsSpan(data + 2));
        for (int i = 0; i < 6; i++)
        {
            Weights[i] = (sbyte)d[data + 4 + i];
            PowerWeights[i] = (sbyte)d[data + 0xA + i];
        }
        PowerRate = (sbyte)d[data + 0x11];
        var spawns = new SpawnPoint[d[block + 1]];
        for (int i = 0; i < spawns.Length; i++)
        {
            int p = data + 0x20 + i * 12;
            spawns[i] = new SpawnPoint(BinaryPrimitives.ReadInt32LittleEndian(d.AsSpan(p)), BinaryPrimitives.ReadInt32LittleEndian(d.AsSpan(p + 4)),
                BinaryPrimitives.ReadUInt32LittleEndian(d.AsSpan(p + 8)));
        }
        Spawns = spawns;
    }
}

/// <summary>A grip (BattleMapGripLoad 0x02166B48; init BattleMapGripInit): 12 bytes, s32 x, s32 y
/// (24.8 px, inferred from the values), +8 image (motion 0x300042 + n, item/item.aar), +9..+0xB not read by
/// the loader. Each grip object gets collision +0x78 |= 0x30000 and friction 0; FUN_021650B4(obj, 1),
/// FUN_02165D10(obj, 1). BattleMapInitWall disables the grips a wall covers (FUN_02166D04(grips, i, 0)).</summary>
public readonly record struct BattleGripRecord(int X, int Y, byte Image, byte P9, byte PA, byte PB)
{
    public BattleGripRecord(ReadOnlySpan<byte> r)
        : this(BinaryPrimitives.ReadInt32LittleEndian(r), BinaryPrimitives.ReadInt32LittleEndian(r[4..]), r[8], r[9], r[10], r[11]) { }
}

/// <summary>A gimmick record (BattleMapGimmick_Create 0x02163188, only when the gimmick setting
/// 0x020AFEBC is on): +0 u32 size, +4 / +8 s32 x / y (24.8 px, inferred), +0xC type (handler table
/// 0x021715C0: eight init functions 0x021638A4…0x02163A1C), +0x10 type data (the gimmick work +0xC).
/// The gimmick behaviour (task FUN_021634FC, stage/&lt;name&gt;_gimmick.aar, image 0x401200) is not
/// translated.</summary>
public sealed class BattleGimmickRecord(byte[] d, int o, int size)
{
    public int Offset => o;
    public int Size => size;
    public int X => BinaryPrimitives.ReadInt32LittleEndian(d.AsSpan(o + 4));
    public int Y => BinaryPrimitives.ReadInt32LittleEndian(d.AsSpan(o + 8));
    public byte Type => d[o + 0xC];
    public ReadOnlySpan<byte> TypeData => d.AsSpan(o + 0x10, size - 0x10);
}

/// <summary>
/// The object data of <c>stage/&lt;name&gt;.bin</c> beyond the layers and the collision grid. Header u32
/// offsets: +0 layer records, +4 map info, +8 floor records (0x18 bytes, count map info +0x2E), +0xC walls
/// (0x14 bytes, count map info +0x2C), +0x10 conveyors (8 bytes, count map info +0x2D), +0x14 the
/// sudden-death data (BattleMapInit's kind-7 path: FUN_02084D60 places stage/SuddenDeath.bin there; not
/// translated). Map info: +0x2C wall count, +0x2D conveyor count, +0x2E floor-record count, +0x30 the first
/// floor record used by the moving floors (record of floor i = +0x30 + i).
/// </summary>
public sealed class BattleStageObjects
{
    public const int RecordSize = 0x18;

    /// <summary>The .bin (the floor records are changed in place, as in the original).</summary>
    public byte[] Bin { get; }
    public int Info { get; }
    public int RecordBase { get; }
    public int RecordCount { get; }
    public int FirstMoveFloorRecord { get; }
    public IReadOnlyList<BattleWallRecord> Walls { get; }
    public BattleConveyor[] Conveyors { get; }

    /// <param name="gimmicksOn">0x020AFEBC (battle setup +0x2C). When off, BattleMapInit clears bit 3 of
    /// every floor record's +0x15 and starts every conveyor stopped.</param>
    public BattleStageObjects(byte[] bin, bool gimmicksOn)
    {
        Bin = bin;
        Info = BinaryPrimitives.ReadInt32LittleEndian(bin.AsSpan(4));
        RecordCount = BinaryPrimitives.ReadUInt16LittleEndian(bin.AsSpan(Info + 0x2E));
        FirstMoveFloorRecord = BinaryPrimitives.ReadInt16LittleEndian(bin.AsSpan(Info + 0x30));
        RecordBase = BinaryPrimitives.ReadInt32LittleEndian(bin.AsSpan(8));
        if (RecordCount != 0 && !gimmicksOn)
            for (int i = 0; i < RecordCount; i++) bin[RecordBase + i * RecordSize + 0x15] &= 0xF7;

        int walls = BinaryPrimitives.ReadInt32LittleEndian(bin.AsSpan(0xC));
        var w = new List<BattleWallRecord>();
        for (int i = 0; i < bin[Info + 0x2C]; i++) w.Add(new BattleWallRecord(bin.AsSpan(walls + i * 0x14, 0x14)));
        Walls = w;

        // BattleMapInitConveyor (inlined in BattleMapInit): {u16, u8, u8, u8 anim a, u8 anim b}, +6 active
        int conv = BinaryPrimitives.ReadInt32LittleEndian(bin.AsSpan(0x10));
        Conveyors = new BattleConveyor[bin[Info + 0x2D]];
        for (int i = 0; i < Conveyors.Length; i++)
        {
            int p = conv + i * 8;
            Conveyors[i] = new BattleConveyor(BinaryPrimitives.ReadUInt16LittleEndian(bin.AsSpan(p)), bin[p + 2], bin[p + 3], bin[p + 4], bin[p + 5])
            { Active = gimmicksOn };
        }
    }

    private int Rec(int i) => RecordBase + i * RecordSize;
    /// <summary>Floor record +0 x, +4 y (24.8 px).</summary>
    public int RecordX(int i) => BinaryPrimitives.ReadInt32LittleEndian(Bin.AsSpan(Rec(i)));
    public int RecordY(int i) => BinaryPrimitives.ReadInt32LittleEndian(Bin.AsSpan(Rec(i) + 4));
    public void SetRecordPos(int i, int x, int y)
    {
        BinaryPrimitives.WriteInt32LittleEndian(Bin.AsSpan(Rec(i)), x);
        BinaryPrimitives.WriteInt32LittleEndian(Bin.AsSpan(Rec(i) + 4), y);
    }
    /// <summary>Floor record +8: width (24.8 px; the neighbour test of FUN_020865FC).</summary>
    public int RecordWidth(int i) => BinaryPrimitives.ReadInt32LittleEndian(Bin.AsSpan(Rec(i) + 8));
    /// <summary>Floor record +0x10 / +0x12: the linked neighbour record on the left / right (−1 = none).</summary>
    public short RecordLinkLeft(int i) => BinaryPrimitives.ReadInt16LittleEndian(Bin.AsSpan(Rec(i) + 0x10));
    public short RecordLinkRight(int i) => BinaryPrimitives.ReadInt16LittleEndian(Bin.AsSpan(Rec(i) + 0x12));
    public void SetRecordLinkLeft(int i, short v) => BinaryPrimitives.WriteInt16LittleEndian(Bin.AsSpan(Rec(i) + 0x10), v);
    public void SetRecordLinkRight(int i, short v) => BinaryPrimitives.WriteInt16LittleEndian(Bin.AsSpan(Rec(i) + 0x12), v);
    /// <summary>Floor record +0x15: bit 0 linked on the left, bit 1 linked on the right, bit 2 solid (a
    /// moving floor that is present), bit 3 cleared when the gimmicks are off.</summary>
    public byte RecordFlags(int i) => Bin[Rec(i) + 0x15];
    public void SetRecordFlags(int i, byte v) => Bin[Rec(i) + 0x15] = v;
    /// <summary>Floor record +0x16: conveyor index (FUN_02162A1C).</summary>
    public short RecordConveyor(int i) => BinaryPrimitives.ReadInt16LittleEndian(Bin.AsSpan(Rec(i) + 0x16));

    /// <summary>FUN_02162A1C(map, cell, &amp;a, &amp;b): for a cell of kind 6 and an object without collision
    /// +0x3C bit 3, the conveyor of the cell's record: a = conveyor +3, b = conveyor +2, true when it runs.
    /// Returns null for other cells.</summary>
    public (byte A, byte B, bool Active)? ConveyorAt(int cellRecord, int cellKind, uint objectFlags3C)
    {
        if (cellKind != 6 || (objectFlags3C & 8) != 0) return null;
        var c = Conveyors[RecordConveyor(cellRecord)];
        return (c.P3, c.P2, c.Active);
    }
}

/// <summary>A conveyor (map work +0x20, 8 bytes each): +0 u16, +2, +3 (handed to the contact code by
/// FUN_02162A1C), +4 / +5 the layer-1 animations it drives, +6 running. FUN_02162CC0(map, i, on) sets +6
/// and pauses (FUN_02084CB8) or resumes (FUN_02084D0C) layer 1's animations +4 and +5.</summary>
public sealed class BattleConveyor(ushort p0, byte p2, byte p3, byte animA, byte animB)
{
    public ushort P0 => p0;
    public byte P2 => p2;
    public byte P3 => p3;
    public byte AnimA => animA;
    public byte AnimB => animB;
    public bool Active { get; set; }
}

/// <summary>A breakable wall (BattleMapInitWall ov06 0x021671E8; runtime 0x34 bytes at map work +0x1C):
/// +0 s16 floor record (the wall's position: record x/y), +2 s16 strength (work +0x1A and +0x22; +0x1C =
/// strength / 2, +0x1E = strength / 5 with FUN_0200D12C, +0x20 = 0), +4..+0xB four s16 (work +0x24..+0x2A),
/// +0xC / +0xD (work +0x2F / +0x30), +0xE..+0x11 the four extra pieces' types (−1 = none; placed at
/// (0, −16), (0, +56), (−16, 0), (+64, 0) px from the record by FUN_02167E10 with depth 0x2D, the main piece
/// with type 0 and depth 0x32), +0x12 / +0x13 the grips it covers (−1 = none; disabled at creation).
/// The damage/break logic (BattleMapWall.cpp, reset FUN_0216769C) is not translated.</summary>
public readonly record struct BattleWallRecord(short Record, short Strength, short A, short B, short C, short D,
    byte PC, byte PD, sbyte PieceUp, sbyte PieceDown, sbyte PieceLeft, sbyte PieceRight, sbyte GripA, sbyte GripB)
{
    public BattleWallRecord(ReadOnlySpan<byte> r) : this(
        BinaryPrimitives.ReadInt16LittleEndian(r), BinaryPrimitives.ReadInt16LittleEndian(r[2..]),
        BinaryPrimitives.ReadInt16LittleEndian(r[4..]), BinaryPrimitives.ReadInt16LittleEndian(r[6..]),
        BinaryPrimitives.ReadInt16LittleEndian(r[8..]), BinaryPrimitives.ReadInt16LittleEndian(r[10..]),
        r[0xC], r[0xD], (sbyte)r[0xE], (sbyte)r[0xF], (sbyte)r[0x10], (sbyte)r[0x11], (sbyte)r[0x12], (sbyte)r[0x13]) { }

    /// <summary>Work +0x1C.</summary>
    public short Half => (short)(Strength / 2);
    /// <summary>Work +0x1E.</summary>
    public short Fifth => (short)BattleDiv.Div(Strength, 5);
}
