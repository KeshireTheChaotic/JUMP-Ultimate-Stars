using System.Runtime.CompilerServices;

namespace Jus.Game.Scenes.Ov05;

/// <summary>
/// The player's decks in the save image (base 0x020B02B8), as pure functions over the image bytes.
/// - Deck count: byte at +0xAB4 (0x020B0D6C); at most 0x32 decks (FUN_02071f20 passes 0x32).
/// - Deck i: 0x5C bytes at +0xB04 + i·0x5C (FUN_02071f10 → 0x020B0DBC): 16 × {s16 koma id (−1 = empty),
///   u8 x | y &lt;&lt; 4, u8 flags}, then the 0x1A-byte name at +0x40.
/// The battle setup's deck index (0x020AFEB4 = battle block +0x24) selects the deck DeckMake edits.
/// Writing the image back to backup memory is RecordSave's job (not touched here).
/// </summary>
public static class DeckSaveData
{
    public const int CountOffset = 0xAB4, DecksOffset = 0xB04, MaxDecks = 0x32, DirtySize = 0x11F8;

    public static int DeckCount(ReadOnlySpan<byte> image) => image[CountOffset];

    /// <summary>FUN_02071f10(i).</summary>
    public static int DeckOffset(int index) => DecksOffset + index * ComicDeck.RecordSize;

    public static Span<byte> Deck(Span<byte> image, int index) => image.Slice(DeckOffset(index), ComicDeck.RecordSize);

    /// <summary>FUN_02071f20 → FUN_020723cc(decks, 0x32, &amp;count, 0): append an empty deck. Returns its index,
    /// or −1 when 0x32 decks exist. The new record is cleared (FUN_02078aa0) and named with
    /// <paramref name="defaultName"/> (FUN_02078b08 copies 0x1A bytes from 0x02092454, a default name that lives
    /// in arm9.bin: the caller supplies it). The caller also marks the ranges in <paramref name="dirty"/> and
    /// sets the save-changed flag 0x020B02AC.</summary>
    public static int AppendDeck(Span<byte> image, ReadOnlySpan<byte> defaultName, List<(int Offset, int Size)>? dirty = null)
    {
        dirty?.Add((DecksOffset, DirtySize));                    // FUN_02073114(0xB04, 0x11F8)
        dirty?.Add((CountOffset, 1));                            // FUN_02073114(0xAB4, 1)
        int n = image[CountOffset];
        if (n >= MaxDecks) return -1;
        image[CountOffset] = (byte)(n + 1);
        var rec = Deck(image, n);
        ComicDeck.ClearRecord(rec);
        var name = rec.Slice(0x40, ComicDeck.NameSize);
        name.Clear();
        defaultName[..Math.Min(defaultName.Length, ComicDeck.NameSize)].CopyTo(name);
        return n;
    }

    /// <summary>FUN_02076bbc into deck <paramref name="index"/> of the image.</summary>
    public static void StoreDeck(Span<byte> image, int index, ComicDeck deck) => deck.Store(Deck(image, index));

    /// <summary>The temporary deck at 0x020AFF4C (FUN_02070d14(0)): a .bss record outside the save, used for a
    /// new deck and for the test battle (DeckMake hi byte 1 → battle entry 0xB → back). Kept per game
    /// instance here until GameGlobals has a field for it.</summary>
    public static byte[] TempDeck(GameGlobals globals) => Temp.GetValue(globals, _ => new byte[ComicDeck.RecordSize]);

    private static readonly ConditionalWeakTable<GameGlobals, byte[]> Temp = new();
}
