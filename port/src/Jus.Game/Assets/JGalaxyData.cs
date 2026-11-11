using System.Buffers.Binary;

namespace Jus.Game.Assets;

/// <summary>
/// jgalaxy/jgalaxy.bin (inside jgalaxy/jgalaxy.aar), loaded by JGalaxy_Add (ov02 0x0214CD20) as one block:
/// header +0 u16 counts {galaxies, planets, stages, missions}, +8/+0xC/+0x10/+0x14 u32 offsets of the four
/// tables (work +0x30/+0x34/+0x38/+0x3C). Names are 0x2C-byte Shift-JIS strings.
///
/// Galaxy (0x3C): +0x2C planet count, +0x2D planet indices.
/// Planet (0x48): +0x2C/+0x2E u16 (map position, unread), +0x30 s16[4] unlock arguments, +0x38 stage
///   indices (count +0x44), +0x42 galaxy, +0x43 unlock kind (FUN_0214DE0C).
/// Stage (0x40): +0x2C planet, +0x2F warp target planet (−1 = none), +0x30 mission count, +0x31 missions.
/// Mission (0x88): +0xA stage. The other fields are not read yet.
/// </summary>
public sealed class JGalaxyData
{
    public sealed record Galaxy(string Name, byte[] Planets);
    public sealed record Planet(string Name, int MapX, int MapY, short[] UnlockArgs, byte[] Stages, int Galaxy, int UnlockKind, byte[] Raw);
    public sealed record Stage(string Name, int Planet, int WarpPlanet, byte[] Missions, byte[] Raw);
    public sealed record Mission(int Stage, byte[] Raw);

    public IReadOnlyList<Galaxy> Galaxies { get; }
    public IReadOnlyList<Planet> Planets { get; }
    public IReadOnlyList<Stage> Stages { get; }
    public IReadOnlyList<Mission> Missions { get; }

    public JGalaxyData(byte[] d)
    {
        int U16(int o) => BinaryPrimitives.ReadUInt16LittleEndian(d.AsSpan(o));
        int U32(int o) => BinaryPrimitives.ReadInt32LittleEndian(d.AsSpan(o));
        int nG = U16(0), nP = U16(2), nS = U16(4), nM = U16(6);
        int oG = U32(8), oP = U32(0xC), oS = U32(0x10), oM = U32(0x14);
        Galaxies = [.. Enumerable.Range(0, nG).Select(i =>
        {
            int o = oG + i * 0x3C;
            return new Galaxy(Name(d, o), d[(o + 0x2D)..(o + 0x2D + d[o + 0x2C])]);
        })];
        Planets = [.. Enumerable.Range(0, nP).Select(i =>
        {
            int o = oP + i * 0x48;
            var args = new short[4];
            for (int k = 0; k < 4; k++) args[k] = (short)U16(o + 0x30 + 2 * k);
            return new Planet(Name(d, o), U16(o + 0x2C), U16(o + 0x2E), args, d[(o + 0x38)..(o + 0x38 + d[o + 0x44])],
                d[o + 0x42], d[o + 0x43], d[o..(o + 0x48)]);
        })];
        Stages = [.. Enumerable.Range(0, nS).Select(i =>
        {
            int o = oS + i * 0x40;
            return new Stage(Name(d, o), d[o + 0x2C], (sbyte)d[o + 0x2F], d[(o + 0x31)..(o + 0x31 + d[o + 0x30])], d[o..(o + 0x40)]);
        })];
        Missions = [.. Enumerable.Range(0, nM).Select(i =>
        {
            int o = oM + i * 0x88;
            return new Mission(d[o + 0xA], d[o..(o + 0x88)]);
        })];
    }

    private static string Name(byte[] d, int o) => ShiftJis.Decode(d.AsSpan(o, 0x2C));

    public static JGalaxyData Load(ResourceManager res) => new(res.Read("jgalaxy/jgalaxy.bin"));
}
