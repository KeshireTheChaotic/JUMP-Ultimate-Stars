using Jus.Game.Assets;

namespace Jus.Game.Scenes.Ov05;

/// <summary>A koma placed on the deck page: one of the 16 deck nodes (0x50 bytes each at deck +0x58, free list
/// +0x560, placed list +0x558 in placement order, FUN_02037b98 appends at the tail).</summary>
public sealed class DeckNode
{
    /// <summary>+0x34: the koma record (+0xC u16 = its id).</summary>
    public required KomaRecord Koma { get; init; }
    /// <summary>+0x38: its shape.</summary>
    public required KomaShape Shape { get; init; }
    /// <summary>+0xE low/high nibble: page cell of the shape's origin (column 0–4, row 0–3).</summary>
    public int X { get; init; }
    public int Y { get; init; }
    /// <summary>+0xF: the deck record's flag byte: 0x10 leader seal, 0x20 / 0x40 the two other seals
    /// (table 0x02092E28 = {0x10, 0x20, 0x40}); help koma keep a value in the low nibble (FUN_02077508).</summary>
    public int Flags { get; internal set; }
    /// <summary>+0x40 / +0x41: koma kind and character id.</summary>
    public int Kind => Koma.Kind;
    /// <summary>+0x43/+0x44: shape cell holding part 1; +0x45/+0x46: right-most occupied cell (the last one
    /// in row-major order with x ≥ the best so far); +0x47/+0x48: the cell equal to koma +0xA.</summary>
    public (int X, int Y) FirstPart { get; init; }
    public (int X, int Y) RightMost { get; init; }
    public (int X, int Y) Anchor { get; init; }
    /// <summary>+0x3C bit 0x100|1 set by FUN_02077e70 on the deck's active (first) battle koma.</summary>
    public bool Active { get; internal set; }

    /// <summary>Deck record form: x | y &lt;&lt; 4.</summary>
    public int Position => X & 0xF | (Y & 0xF) << 4;
}

/// <summary>
/// The deck being built: translation of the ComicDeck page model in the main module (deck object from
/// FUN_02076908; 5×4 page grid at +8, occupancy mask +0x568, 16 nodes).
/// Translated: reset FUN_02076c18, load from a 0x5C-byte deck record FUN_020769cc, place FUN_02076e38 (shape
/// check FUN_02076d30), remove FUN_020770a8, seals FUN_020773ac / FUN_020774c4, kind counts FUN_02077610,
/// seal cells FUN_02077aa8, validity FUN_0207879c, record check FUN_02078814, store FUN_02076bbc.
/// Not translated: the battle-power/ability passes FUN_020772e4 / FUN_02077768 (chr_b/chr_s/ability tables,
/// neighbour bonuses) — they only feed the deck's power display and battle, not editing or validity.
/// </summary>
public sealed class ComicDeck
{
    public const int Columns = 5, Rows = 4, MaxNodes = 16, NameSize = 0x1A, RecordSize = 0x5C;

    private readonly KomaTable _komas;
    private readonly KomaShapes _shapes;
    private readonly DeckNode?[] _grid = new DeckNode?[Columns * Rows];
    private readonly List<DeckNode> _placed = [];
    private uint _occupied;                                       // +0x568

    public ComicDeck(KomaTable komas, KomaShapes shapes)
    {
        _komas = komas;
        _shapes = shapes;
        Reset();
    }

    public KomaTable Komas => _komas;
    public KomaShapes Shapes => _shapes;
    /// <summary>+0x558 in order.</summary>
    public IReadOnlyList<DeckNode> Placed => _placed;
    public uint Occupied => _occupied;
    /// <summary>+0x5FE: the deck name (0x1A bytes, Shift-JIS).</summary>
    public byte[] Name { get; private set; } = new byte[NameSize];
    /// <summary>+0x5CC / +0x5CD (min(16, +0x5CC) after a load).</summary>
    public int Weight { get; private set; }
    public int WeightClamped { get; private set; }
    /// <summary>+0x5DD total placed, +0x5DE nodes with koma +0xB low nibble 1, +0x5DF nodes whose low nibble
    /// is not 2 or 3, +0x5E0..+0x5E2 battle/support/help counts.</summary>
    public int Count { get; private set; }
    public int Unk5DE { get; private set; }
    public int Unk5DF { get; private set; }
    public int BattleCount { get; private set; }
    public int SupportCount { get; private set; }
    public int HelpCount { get; private set; }
    /// <summary>+0x5D7..+0x5DC: page cells of the leader seal (from the node's right-most cell) and of seals
    /// 0x20 / 0x40 (from its first part); 0xFF = none.</summary>
    public (int X, int Y) LeaderCell { get; private set; } = (0xFF, 0xFF);
    public (int X, int Y) Seal20Cell { get; private set; } = (0xFF, 0xFF);
    public (int X, int Y) Seal40Cell { get; private set; } = (0xFF, 0xFF);

    public DeckNode? At(int x, int y) => x is >= 0 and < Columns && y is >= 0 and < Rows ? _grid[y * Columns + x] : null;

    /// <summary>FUN_02076c18.</summary>
    public void Reset()
    {
        Array.Clear(_grid);
        _placed.Clear();
        _occupied = 0;
        Name = new byte[NameSize];
        Weight = WeightClamped = Count = Unk5DE = Unk5DF = BattleCount = SupportCount = HelpCount = 0;
        LeaderCell = Seal20Cell = Seal40Cell = (0xFF, 0xFF);
    }

    /// <summary>FUN_020769cc: build the page from a deck record. First the battle koma with the leader seal
    /// (slot order), then for each kind 0..2, row 0..3, column 4..0 the slots placed there. Every slot that
    /// is tried counts as used, whether or not it fits.</summary>
    public void Load(ReadOnlySpan<byte> record)
    {
        Reset();
        int used = 0;
        for (int i = 0; i < MaxNodes; i++)
        {
            var k = _komas.Get(Slot(record, i));
            if (k is { Kind: 0 } && (record[i * 4 + 3] & 0x10) != 0)
            {
                byte pos = record[i * 4 + 2];
                Place(k.Value.Index, pos & 0xF, pos >> 4, record[i * 4 + 3]);
                used |= 1 << i;
            }
        }
        for (int kind = 0; kind < 3; kind++)
            for (int y = 0; y < 4; y++)
                for (int x = 4; x >= 0; x--)
                    for (int i = 0; i < MaxNodes; i++)
                    {
                        if ((used & 1 << i) != 0) continue;
                        var k = _komas.Get(Slot(record, i));
                        if (k is null || k.Value.Kind != kind || record[i * 4 + 2] != (x | y << 4)) continue;
                        Place(k.Value.Index, x, y, record[i * 4 + 3]);
                        used |= 1 << i;
                    }
        // FUN_02077e70 on the first battle node; with DeckMake's callback FUN_02076984 (returns 0) it only
        // makes that node the active one (+0x56C, +0x3C |= 0x101).
        var first = _placed.FirstOrDefault(n => n.Kind == 0);
        if (first is not null) first.Active = true;
        Recompute();
        record.Slice(0x40, NameSize).CopyTo(Name);
        WeightClamped = Math.Min(0x10, Weight);
    }

    private static int Slot(ReadOnlySpan<byte> record, int i) => (short)(record[i * 4] | record[i * 4 + 1] << 8);

    /// <summary>FUN_02076d30: the occupancy bits of koma <paramref name="id"/> at (x, y), or 0 when it does
    /// not fit (outside the page, past the right or bottom edge, or overlapping).</summary>
    public uint FitMask(int id, int x, int y)
    {
        if (x > 4 || y > 3 || x < 0 || y < 0) return 0;
        if (_komas.Get(id) is not { } k) return 0;
        uint m = _shapes.For(k).Mask;
        if ((((m & 0x1F) | (m >> 5 & 0x1F) | (m >> 10 & 0x1F) | (m >> 15 & 0x1F)) << x & 0xFFFFFFE0) != 0) return 0;
        m <<= x + y * 5;
        if ((m & 0xFFF00000) != 0) return 0;
        return (_occupied & m) != 0 ? 0 : m;
    }

    /// <summary>FUN_02076e38 result codes.</summary>
    public const uint PlaceOk = 0, PlaceNoFit = 0x10000000, PlaceNoNode = 0x20000000, PlaceDuplicate = 0x40000000;

    /// <summary>FUN_02076e38(deck, id, x, y, flags): put a koma on the page.</summary>
    public uint Place(int id, int x, int y, int flags)
    {
        if (_placed.Count >= MaxNodes) return PlaceNoNode;
        foreach (var n in _placed)
            if (n.Koma.Id == id) return PlaceDuplicate;
        uint mask = FitMask(id, x, y);
        if (mask == 0) return PlaceNoFit;
        if (_komas.Get(id) is not { } k) return PlaceNoFit;
        var shape = _shapes.For(k);
        (int, int) first = (0, 0), right = (0, 0), anchor = (0, 0);
        int rx = 0;
        for (int row = 0; row < 4; row++)
            for (int col = 0; col < 5; col++)
            {
                byte c = shape.Cell(col, row);
                if (c == 1) first = (col, row);
                if (c != 0 && rx <= col) { rx = col; right = (col, row); }
                if (c == k.AnchorValue) anchor = (col, row);
            }
        var node = new DeckNode { Koma = k, Shape = shape, X = x, Y = y, Flags = flags & 0xFF, FirstPart = first, RightMost = right, Anchor = anchor };
        _placed.Add(node);
        _occupied |= mask;
        // the shape's cell bytes are laid over the page from the linear index x + 5y on
        for (int p = x + y * 5, j = 0; p < 20; p++, j++)
            if (shape.Cells[j] != 0) _grid[p] = node;
        return PlaceOk;
    }

    /// <summary>FUN_02076dd8: place while editing, then recompute (+0x10 / +0x100 from the power passes are
    /// not produced: FUN_020772e4 / FUN_02077768 are not translated).</summary>
    public uint PlaceAndUpdate(int id, int x, int y, int flags)
    {
        uint r = Place(id, x, y, flags);
        if ((r & 0xF0000000) == 0) Recompute();
        return r;
    }

    /// <summary>FUN_020770a8(deck, x, y): take the koma covering a cell off the page; returns its record.</summary>
    public KomaRecord? Remove(int x, int y)
    {
        var node = At(x, y);
        if (node is null) return null;
        _placed.Remove(node);
        _occupied &= ~(node.Shape.Mask << (node.X + node.Y * 5));
        for (int i = 0; i < _grid.Length; i++)
            if (_grid[i] == node) _grid[i] = null;
        Recompute();
        return node.Koma;
    }

    private static readonly int[] SealBits = [0x10, 0x20, 0x40];   // 0x02092E28

    /// <summary>FUN_020773ac(deck, seal, x, y): put seal 0 (leader, battle koma only), 1 (0x20) or 2 (0x40) on
    /// the koma at a cell. Help koma take no seal. Seals 1 and 2 exclude each other on one koma; each seal is
    /// unique in the deck (FUN_020774c4 clears it everywhere first).</summary>
    public bool Seal(int seal, int x, int y)
    {
        var node = At(x, y);
        if (node is null || node.Kind == 2) return false;
        if (seal == 0 && node.Kind != 0) return false;
        if (seal == 1 && (node.Flags & 0x40) != 0) ClearSeal(2);
        else if (seal == 2 && (node.Flags & 0x20) != 0) ClearSeal(1);
        ClearSeal(seal);
        node.Flags |= SealBits[seal];
        Recompute();
        return true;
    }

    /// <summary>FUN_020774c4.</summary>
    private void ClearSeal(int seal)
    {
        foreach (var n in _placed)
            if (n.Kind != 2) n.Flags &= ~SealBits[seal];
    }

    /// <summary>The passes run after every change (FUN_02077aa8, FUN_02077610; the power passes are not
    /// translated).</summary>
    private void Recompute()
    {
        UpdateSealCells();
        UpdateCounts();
    }

    /// <summary>FUN_02077aa8.</summary>
    private void UpdateSealCells()
    {
        LeaderCell = Seal20Cell = Seal40Cell = (0xFF, 0xFF);
        foreach (var n in _placed)
        {
            if (n.Kind == 2) continue;
            if ((n.Flags & 0x10) != 0 && n.Kind == 0) LeaderCell = (n.X + n.RightMost.X, n.Y + n.RightMost.Y);
            if ((n.Flags & 0x20) != 0) Seal20Cell = (n.X + n.FirstPart.X, n.Y + n.FirstPart.Y);
            else if ((n.Flags & 0x40) != 0) Seal40Cell = (n.X + n.FirstPart.X, n.Y + n.FirstPart.Y);
        }
    }

    /// <summary>FUN_02077610.</summary>
    private void UpdateCounts()
    {
        Weight = Count = Unk5DE = Unk5DF = BattleCount = SupportCount = HelpCount = 0;
        foreach (var n in _placed)
        {
            Count++;
            int low = n.Koma.LowNibble;
            if (low != 3 && n.Kind != 2)
            {
                Weight = Math.Min(0x10, Weight + 1);
                if (n.Kind == 0) Weight = Math.Min(0x10, Weight + 1);
            }
            if (low != 2 && low != 3) Unk5DF++;
            if (n.Kind == 0) BattleCount++;
            else if (n.Kind == 1) SupportCount++;
            else if (n.Kind == 2) HelpCount++;
            if (low == 1) Unk5DE++;
        }
    }

    /// <summary>FUN_0207879c: 0 = usable. Bit 0 no battle koma, 1 no support koma, 2 no help koma, 0x10 no
    /// battle koma with the leader seal.</summary>
    public int Validity()
    {
        int v = 0;
        if (BattleCount == 0) v |= 1;
        if (SupportCount == 0) v |= 2;
        if (HelpCount == 0) v |= 4;
        if (!_placed.Any(n => n.Kind == 0 && (n.Flags & 0x10) != 0)) v |= 0x10;
        return v;
    }

    /// <summary>FUN_02076bbc: write the page into a deck record (FUN_02078aa0 clears it first: 16 slots of
    /// id 0xFFFF, the rest 0). Slots follow the placement order.</summary>
    public void Store(Span<byte> record)
    {
        ClearRecord(record);
        for (int i = 0; i < _placed.Count; i++)
        {
            var n = _placed[i];
            record[i * 4] = (byte)n.Koma.Id;
            record[i * 4 + 1] = (byte)(n.Koma.Id >> 8);
            record[i * 4 + 2] = (byte)n.Position;
            record[i * 4 + 3] = (byte)n.Flags;
        }
        Name.AsSpan().CopyTo(record.Slice(0x40, NameSize));
    }

    /// <summary>FUN_02078aa0.</summary>
    public static void ClearRecord(Span<byte> record)
    {
        record[..RecordSize].Clear();
        for (int i = 0; i < MaxNodes; i++) { record[i * 4] = 0xFF; record[i * 4 + 1] = 0xFF; }
    }

    /// <summary>FUN_02078814: whether a stored record is acceptable: ids ≤ 0x365, kinds ≤ 2, at most one of each
    /// seal (leader on a battle koma, 0x20/0x40 not on a help koma), low flag nibble only on help koma, no id
    /// twice in the record, and on this page no id or person (+2) twice.</summary>
    public bool CheckRecord(ReadOnlySpan<byte> record)
    {
        int s10 = 0, s20 = 0, s40 = 0;
        for (int i = 0; i < MaxNodes; i++)
        {
            int id = Slot(record, i);
            if (id > 0x365) return false;
            if (id < 0 || _komas.Get(id) is not { } k) continue;
            if (k.Kind > 2) return false;
            int f = record[i * 4 + 3];
            if ((f & 0x10) != 0 && (++s10 > 1 || k.Kind != 0)) return false;
            if ((f & 0x20) != 0 && (++s20 > 1 || k.Kind == 2)) return false;
            if ((f & 0x40) != 0 && (++s40 > 1 || k.Kind == 2)) return false;
            if (k.Kind != 2 && (f & 0xF) != 0) return false;
            for (int j = 0; j < MaxNodes; j++)
                if (j != i && Slot(record, j) == id) return false;
        }
        foreach (var a in _placed)
        {
            if (a.Koma.Id > 0x365) return false;
            foreach (var b in _placed)
                if (a != b && (a.Koma.Id == b.Koma.Id || a.Koma.Person == b.Koma.Person)) return false;
        }
        return true;
    }
}
