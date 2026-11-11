using System.Text.Json;

namespace Jus.Game.Assets;

/// <summary>
/// The JUS game tables exported from the player's ROM by <c>jus extract</c> (Jus.Nds.JusTablesExport) into
/// <c>Data/jus/arm9tables.json</c>; see that class for the addresses. JUS-specific game data only.
/// </summary>
public sealed class JusTables
{
    public const string FileName = "jus/arm9tables.json";

    public required string[] SeriesCodes { get; init; }
    public required int[] SeriesSort { get; init; }
    public required (string Name, int Music, int Seq)[] Stages { get; init; }
    public required string[] DeckFolders { get; init; }
    public required int[][] JArenaJobs { get; init; }
    public required string DefaultDeckName { get; init; }
    public required string CommonInfoRandom { get; init; }
    public required string OptionClose { get; init; }
    /// <summary>Battle stage collision tables (ov06 0x02171528…, corner order 0x021714E8, masks 0x02171524,
    /// default body box 0x02092E50); null in data extracted before they were added.</summary>
    public BattleCollisionTables? BattleCollision { get; init; }
    /// <summary>Battle walk / jump speeds by rank (ov06 0x02171108 / 0x02171118, FUN_02158A10); null in older data.</summary>
    public short[]? BattleWalkSpeeds { get; init; }
    public short[]? BattleJumpSpeeds { get; init; }

    public sealed record BattleCollisionTables(int[] BlockFromBelow, int[] FloorContact, int[] PassThrough,
        int[] SoloFloor, int[] WallFlag, int[] CornerMask, int[] CornerOrder, int[] DefaultBox);

    private static int[] Ints(JsonElement e, string name) => [.. e.GetProperty(name).EnumerateArray().Select(x => x.GetInt32())];

    public static JusTables Parse(byte[] json)
    {
        using var doc = JsonDocument.Parse(json);
        var r = doc.RootElement;
        string[] Strings(string n) => [.. r.GetProperty(n).EnumerateArray().Select(e => e.GetString() ?? "")];
        return new JusTables
        {
            SeriesCodes = Strings("seriesCodes"),
            SeriesSort = [.. r.GetProperty("seriesSort").EnumerateArray().Select(e => e.GetInt32())],
            Stages = [.. r.GetProperty("stages").EnumerateArray().Select(e =>
                (e.GetProperty("name").GetString() ?? "", e.GetProperty("music").GetInt32(), e.GetProperty("seq").GetInt32()))],
            DeckFolders = Strings("deckFolders"),
            JArenaJobs = [.. r.GetProperty("jarenaJobs").EnumerateArray().Select(a => a.EnumerateArray().Select(e => e.GetInt32()).ToArray())],
            DefaultDeckName = r.GetProperty("defaultDeckName").GetString() ?? "",
            CommonInfoRandom = r.GetProperty("strings").GetProperty("commonInfoRandom").GetString() ?? "",
            OptionClose = r.GetProperty("strings").GetProperty("optionClose").GetString() ?? "",
            BattleWalkSpeeds = r.TryGetProperty("battleChara", out var bch) ? [.. bch.GetProperty("walkSpeed").EnumerateArray().Select(e => (short)e.GetInt32())] : null,
            BattleJumpSpeeds = r.TryGetProperty("battleChara", out var bch2) ? [.. bch2.GetProperty("jumpSpeed").EnumerateArray().Select(e => (short)e.GetInt32())] : null,
            BattleCollision = r.TryGetProperty("battleCollision", out var bc) ? new BattleCollisionTables(
                Ints(bc, "blockFromBelow"), Ints(bc, "floorContact"), Ints(bc, "passThrough"), Ints(bc, "soloFloor"),
                Ints(bc, "wallFlag"), Ints(bc, "cornerMask"), Ints(bc, "cornerOrder"), Ints(bc, "defaultBox")) : null,
        };
    }

    /// <summary>The tables from the asset source, or null when the data was extracted before they existed
    /// (scenes then fall back to their logged stand-ins).</summary>
    public static JusTables? TryLoad(IAssetSource assets)
    {
        try { return Parse(assets.Read(FileName)); }
        catch (Exception)
        {
            return null;
        }
    }

    /// <summary>J Arena scenes 23/24/27: the job for a scene Arg (tables 0x02092424/28/2C).</summary>
    public int JArenaJob(int table, int arg) => JArenaJobs[table][arg];
}
