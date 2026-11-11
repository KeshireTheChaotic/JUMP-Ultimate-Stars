using System.Buffers.Binary;

namespace Jus.Game.Scenes.Ov06;

/// <summary>
/// The overlay-6 data tables the battle HUD reads. They are JUS game data, so they come from the exported
/// tables file (<c>jus/arm9tables.json</c>, key <c>battleHud</c>), never from literals in the source:
/// <list type="bullet">
/// <item><c>windowSprites</c> ov06 0x02171070, 5 × 8 bytes {u32 motion id, s16 x, s16 unused}: the five
/// fixed sprites of Battle_WindowCreate 0x02153F68 (the loop at 0x02154176; y is 0).</item>
/// <item><c>markerEdges</c> ov06 0x0217163C, 11 × 8 bytes {u32 motion base, s16 dx, s16 dy}, indexed by the
/// off-screen flags of the marker update FUN_021686D8 (1 left, 2 right, 4 top, 8 bottom).</item>
/// <item><c>deckPalette</c> ov06 0x02171040, 6 × u16 BGR555: the colours Battle_ComicDeckCreate 0x02152110
/// writes over palette entries 2..7 of each missing player's row (FUN_02029C68(pal, table, i*16+2, 6)).</item>
/// </list>
/// The digit limits of FUN_021551D0 (table 0x02171F04 = 9, 99, 999, 9999) are 10^n − 1 and are computed.
/// </summary>
public sealed class BattleHudTables
{
    public readonly record struct WindowSprite(int Motion, int X);
    public readonly record struct MarkerEdge(int MotionBase, int Dx, int Dy);

    public IReadOnlyList<WindowSprite> WindowSprites { get; }
    public IReadOnlyList<MarkerEdge> MarkerEdges { get; }
    public IReadOnlyList<ushort> DeckPalette { get; }

    /// <summary>From the raw table bytes (as the export writes them: one int per byte).</summary>
    public BattleHudTables(IReadOnlyList<int> windowSprites, IReadOnlyList<int> markerEdges, IReadOnlyList<int> deckPalette)
    {
        byte[] w = [.. windowSprites.Select(b => (byte)b)], m = [.. markerEdges.Select(b => (byte)b)], p = [.. deckPalette.Select(b => (byte)b)];
        WindowSprites = [.. Enumerable.Range(0, w.Length / 8).Select(i =>
            new WindowSprite(BinaryPrimitives.ReadInt32LittleEndian(w.AsSpan(i * 8)), BinaryPrimitives.ReadInt16LittleEndian(w.AsSpan(i * 8 + 4))))];
        MarkerEdges = [.. Enumerable.Range(0, m.Length / 8).Select(i =>
            new MarkerEdge(BinaryPrimitives.ReadInt32LittleEndian(m.AsSpan(i * 8)), BinaryPrimitives.ReadInt16LittleEndian(m.AsSpan(i * 8 + 4)),
                BinaryPrimitives.ReadInt16LittleEndian(m.AsSpan(i * 8 + 6))))];
        DeckPalette = [.. Enumerable.Range(0, p.Length / 2).Select(i => BinaryPrimitives.ReadUInt16LittleEndian(p.AsSpan(i * 2)))];
    }

    /// <summary>The JSON object written under <c>battleHud</c> (see the class summary).</summary>
    public static BattleHudTables Parse(System.Text.Json.JsonElement e)
    {
        int[] Ints(string n) => [.. e.GetProperty(n).EnumerateArray().Select(x => x.GetInt32())];
        return new BattleHudTables(Ints("windowSprites"), Ints("markerEdges"), Ints("deckPalette"));
    }

    /// <summary>The <c>battleHud</c> object of the tables file, or null when the data predates it.</summary>
    public static BattleHudTables? TryLoad(IAssetSource assets)
    {
        try
        {
            using var doc = System.Text.Json.JsonDocument.Parse(assets.Read(Assets.JusTables.FileName));
            return doc.RootElement.TryGetProperty("battleHud", out var e) ? Parse(e) : null;
        }
        catch (Exception) { return null; }
    }

    /// <summary>The digit limit of FUN_021551D0 for <paramref name="digits"/> digits (0x02171F04[digits − 1]).</summary>
    public static int DigitLimit(int digits) => digits switch { <= 1 => 9, 2 => 99, 3 => 999, _ => 9999 };
}
