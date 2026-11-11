using Jus.Game.Assets;
using Jus.Game.Scenes.Ov05;

namespace Jus.Game.Scenes.Ov06;

/// <summary>The battle fields of one deck node (ComicDeck.cpp, 0x50 bytes; the page layout comes from
/// <see cref="DeckNode"/>). HP, rank and regeneration come from the battle data tables (FUN_02077C0C battle /
/// FUN_02077CB8 support, from the chr_b/chr_s data at 0x0214BD80 +0x40/+0x48), which are not ported, so
/// the battle sets them.</summary>
public sealed class BattleDeckKoma(DeckNode node, int index)
{
    /// <summary>+0x3C bits: 1 in play (set with 0x100 by FUN_02077E70/FUN_02078110), 2 switch locked,
    /// 0x10 / 0x20 the pending-switch handshake (FUN_02076510), 0x100 current, 0x1000 knocked out
    /// (recovering), 0x2000 no recovery, 0x4000 no update (names inferred from their use).</summary>
    public const int FlagInPlay = 0x1, FlagLocked = 0x2, FlagPendingReady = 0x10, FlagPendingGo = 0x20,
        FlagCurrent = 0x100, FlagDown = 0x1000, FlagNoRecover = 0x2000, FlagFrozen = 0x4000;

    public DeckNode Node => node;
    /// <summary>+0x40: 0 battle, 1 support, 2 help.</summary>
    public int Kind => node.Kind;
    /// <summary>+0x41.</summary>
    public int Character => node.Koma.Character;
    /// <summary>+0x42: the per-kind index (FUN_02076E38 → 0x0209F528[kind]: battle counter +0x5E3, support
    /// counter +0x5E4, help 0).</summary>
    public int Index => index;
    /// <summary>The page cell of the koma's first part (+0xE nibbles + +0x43/+0x44).</summary>
    public int FirstColumn => node.X + node.FirstPart.X;
    public int FirstRow => node.Y + node.FirstPart.Y;
    /// <summary>FUN_02078CB8: koma +0xB high nibble ≠ 3 (picks the "_b" window icon, 0x5F2000).</summary>
    public bool AltIcon => node.Koma.HighNibble != 3;

    /// <summary>+0x16 / +0x18 (s16).</summary>
    public int MaxHp { get; set; }
    public int Hp { get; set; }
    /// <summary>+0x13: the koma rank (the window's 0x5F001A + rank sprite).</summary>
    public int Rank { get; set; }
    public int Flags { get; set; }
    /// <summary>+0x49: HP regained per frame while benched (FUN_02077D40); +0x4A per frame while in play
    /// after request 0xC; +0x4B/+0x4C (s8) gauge added then.</summary>
    public int Regen { get; set; }
    public int RegenInPlay { get; set; }
    public int GaugeInPlayA { get; set; }
    public int GaugeInPlayB { get; set; }
    /// <summary>Support koma: bytes +2/+3 of its support-data entry (0x0214BD80 +0x48, char·0x14 + (type−1)·8),
    /// passed with request 7 (FUN_02078110).</summary>
    public int SupportArg0 { get; set; }
    public int SupportArg1 { get; set; }
}

/// <summary>The deck's callback (deck +0x5E8 with +0x5EC; in battle FUN_021574CC). Codes seen in the deck
/// code: 1 switched to koma (index, 1 when its HP is higher than the old one's), 2 may switch to koma
/// (non-zero = refused), 4 re-selected / queued koma (index), 7 call support (index, arg0, arg1), 8 may call
/// support (non-zero = refused), 0xB not enough gauge, 0xC in-play update allowed. Code names are ours.</summary>
public interface IBattleDeckHook
{
    int Request(BattleDeck deck, int code, BattleDeckKoma? koma, int a, int b);
}

/// <summary>
/// One player's deck in battle: the touch → koma switch logic of the main-module deck object
/// (ComicDeck.cpp). Translated:
/// <list type="bullet">
/// <item>FUN_02076510 (the comic deck manager's per-frame pass, one deck, the normal branch):
/// pending-switch handshake, queued touch retry (+0x578), touch-down edge on the 5×4 page (cells of 48 px from
/// x = 8; koma = page grid +8), cooldown +0x5FA, hand cursor +0x5F7..+0x5F9, then the per-node update.</item>
/// <item>Handlers 0x0209F510[kind]: battle FUN_02077E70, support FUN_02078110 (check FUN_02078038, cost
/// FUN_0207834C), help 0x020781BC (always refused).</item>
/// <item>FUN_02078A70 (cancel pending), FUN_02077BB4 (seal shortcut → virtual touch), the chara task's input
/// copy (FUN_02156DDC: chara +0x74/+0x75/+0x76 → deck +0x5F5/+0x5F6/+0x5F3; input bit 0x4000 → shortcut 1,
/// else 0x8000 → shortcut 2).</item>
/// <item>Per-node update 0x0209F51C[kind]: battle FUN_02077D40 (regeneration, KO recovery); the others are
/// empty (0x02077E6C). Gauge: FUN_020781E4 (add), FUN_0207830C / FUN_02078328 (level −/+).</item>
/// </list>
/// Not translated: the "choice" branch of FUN_02076510 (deck +0x5FB ≠ 0: a random/touch pick through table
/// 0x0209F534 and the MT19937 generator), which the battle uses for its CPU selection screen.
/// </summary>
public sealed class BattleDeck
{
    private readonly BattleDeckKoma?[] _grid = new BattleDeckKoma?[ComicDeck.Columns * ComicDeck.Rows];
    private readonly List<BattleDeckKoma> _nodes = [];
    private readonly (int X, int Y)[] _shortcut = new (int, int)[3];

    public IBattleDeckHook? Hook { get; set; }
    /// <summary>The deck's koma in list order (+0x558).</summary>
    public IReadOnlyList<BattleDeckKoma> Nodes => _nodes;
    public IEnumerable<BattleDeckKoma> BattleKoma => _nodes.Where(n => n.Kind == 0);

    /// <summary>+0x56C current battle koma, +0x570 active support, +0x574 pending switch, +0x578 queued touch.</summary>
    public BattleDeckKoma? Current { get; set; }
    public BattleDeckKoma? Support { get; set; }
    public BattleDeckKoma? Pending { get; set; }
    public BattleDeckKoma? Queued { get; set; }

    /// <summary>+0x5C8 gauge (0..0x63FF), +0x5CC level limit, +0x5CD level, +0x5CE infinite, +0x5CF free.</summary>
    public int Gauge { get; set; }
    public int GaugeLevelMax { get; set; }
    public int GaugeLevel { get; set; }
    public bool GaugeInfinite { get; set; }
    public bool GaugeFree { get; set; }
    /// <summary>+0x5D0: one bit per battle-koma index already switched through the handshake.</summary>
    public int Mask { get; set; }

    /// <summary>+0x5F3 touch down, +0x5F4 previous, +0x5F5 x, +0x5F6 y (bytes).</summary>
    public bool TouchDown { get; set; }
    public bool TouchPrevious { get; set; }
    public int TouchX { get; set; }
    public int TouchY { get; set; }
    /// <summary>+0x5F7 hand cursor (0 hidden, 1 shown), +0x5F8 / +0x5F9 its cell centre.</summary>
    public int Hand { get; set; }
    public int HandX { get; set; }
    public int HandY { get; set; }
    /// <summary>+0x5FA frames before touches count again.</summary>
    public int Cooldown { get; set; }
    /// <summary>+0x5FB: the choice mode (not translated; while set, the normal pass is skipped).</summary>
    public bool ChoiceMode { get; set; }
    /// <summary>Comic deck manager +0x1912 (set by FUN_0214DA44 when the HUD comes on): node updates run and
    /// support koma may be called.</summary>
    public bool BattleRunning { get; set; }

    /// <summary>Builds the deck object as FUN_020769CC does (through <see cref="ComicDeck.Load"/>), assigns the
    /// per-kind indices and makes the first battle koma current (FUN_02077E70 with the load-time callback
    /// FUN_02076984, which accepts everything: +0x56C = node, +0x3C |= 0x101).</summary>
    public BattleDeck(ComicDeck page)
    {
        int battle = 0, support = 0;
        foreach (var n in page.Placed)
        {
            int index = n.Kind switch { 0 => battle++, 1 => support++, _ => 0 };
            _nodes.Add(new BattleDeckKoma(n, index));
        }
        for (int y = 0; y < ComicDeck.Rows; y++)
            for (int x = 0; x < ComicDeck.Columns; x++)
                if (page.At(x, y) is { } dn) _grid[y * ComicDeck.Columns + x] = _nodes.First(k => k.Node == dn);
        _shortcut[0] = page.LeaderCell;
        _shortcut[1] = page.Seal20Cell;
        _shortcut[2] = page.Seal40Cell;
        if (_nodes.FirstOrDefault(k => k.Kind == 0) is { } first)
        {
            first.Flags |= BattleDeckKoma.FlagInPlay | BattleDeckKoma.FlagCurrent;
            Current = first;
        }
    }

    public static BattleDeck Load(IAssetSource assets, byte[] deckRecord)
    {
        var page = new ComicDeck(KomaTable.Load(assets), KomaShapes.Load(assets));
        page.Load(deckRecord);
        return new BattleDeck(page);
    }

    /// <summary>The koma covering page cell (column, row) (deck +8 + (row·5 + column)·4).</summary>
    public BattleDeckKoma? At(int column, int row) =>
        column is >= 0 and < ComicDeck.Columns && row is >= 0 and < ComicDeck.Rows ? _grid[row * ComicDeck.Columns + column] : null;

    private int Request(int code, BattleDeckKoma? koma = null, int a = 0, int b = 0) => Hook?.Request(this, code, koma, a, b) ?? 0;

    /// <summary>The input part of the chara task FUN_02156DDC (unless the chara is in state 0x1B): touch
    /// state from the controller (chara +0x76 down, +0x74 x, +0x75 y), then the seal shortcuts by input bits
    /// 0x4000 (shortcut 1) / 0x8000 (shortcut 2).</summary>
    public void ApplyInput(bool down, int x, int y, int inputBits = 0)
    {
        TouchDown = down;
        TouchX = x & 0xFF;
        TouchY = y & 0xFF;
        if ((inputBits & 0x4000) != 0) Shortcut(1);
        else if ((inputBits & 0x8000) != 0) Shortcut(2);
    }

    /// <summary>FUN_02077BB4: a virtual touch on seal cell <paramref name="i"/> (x = column·48 + 8, y =
    /// row·48); false when that seal is not on the page (0xFF).</summary>
    public bool Shortcut(int i)
    {
        var (x, y) = _shortcut[i];
        if ((sbyte)x == -1) return false;
        TouchDown = true;
        TouchX = (x * 0x30 + 8) & 0xFF;
        TouchY = (y * 0x30) & 0xFF;
        return true;
    }

    /// <summary>FUN_02076510 for this deck: one frame.</summary>
    public void Step()
    {
        if (ChoiceMode) return;                                   // the choice branch is not translated
        bool handled = false;
        if (Pending is not null && Current is { } cur && (cur.Flags & BattleDeckKoma.FlagPendingGo) != 0)
        {
            cur.Flags &= ~BattleDeckKoma.FlagPendingReady;
            cur.Flags &= ~BattleDeckKoma.FlagLocked;
            var pending = Pending;
            if (SwitchBattle(pending) == 0)
            {
                Mask |= 1 << pending.Index;
                Current!.Flags |= BattleDeckKoma.FlagPendingReady;   // +0x56C is re-read: the new current koma
                Current.Flags &= ~BattleDeckKoma.FlagPendingGo;
                Pending = null;
            }
            else CancelPending();
            handled = true;
            Current!.Flags |= BattleDeckKoma.FlagLocked;
        }
        if (!handled && !RetryQueued())
        {
            BattleDeckKoma? target = null;
            if (Cooldown == 0)
            {
                if (TouchDown && !TouchPrevious)
                {
                    int x = TouchX - 8;
                    if (x >= 0 && x < 0xF0) target = At(x / 0x30, TouchY / 0x30);
                }
                TouchPrevious = TouchDown;
            }
            else Cooldown--;
            if (target is not null && Touch(target) != 0)
            {
                // refused: show the hand on the koma's first cell; a living battle koma that is not current
                // is queued and retried every frame
                Hand = 1;
                HandX = target.FirstColumn * 0x30 + 0x18;
                HandY = target.FirstRow * 0x30 + 0x18;
                if (target.Kind == 0 && (target.Flags & BattleDeckKoma.FlagDown) == 0 && Current != target) Queued = target;
            }
            if (!TouchDown) Hand = 0;
        }
        if (BattleRunning)
            foreach (var n in _nodes)
                if (n.Kind == 0) UpdateBattleKoma(n);              // 0x0209F51C: kinds 1/2 are empty
    }

    /// <summary>The queued-touch part of FUN_02076510; true when it consumed the frame.</summary>
    private bool RetryQueued()
    {
        if (Queued is not { } q) return false;
        if ((q.Flags & BattleDeckKoma.FlagDown) != 0) { Queued = null; return false; }
        if (SwitchBattle(q) != 0) return false;
        Queued = null;
        return true;
    }

    /// <summary>0x0209F510[kind]: 0 = accepted, non-zero = refused.</summary>
    public int Touch(BattleDeckKoma koma) => koma.Kind switch
    {
        0 => SwitchBattle(koma),
        1 => CallSupport(koma),
        _ => 1,                                                    // 0x020781BC
    };

    /// <summary>FUN_02077E70: make a battle koma current.</summary>
    public int SwitchBattle(BattleDeckKoma koma)
    {
        if ((koma.Flags & BattleDeckKoma.FlagDown) != 0) return 1;
        var cur = Current;
        if (cur is not null)
        {
            bool pending = false;
            if ((cur.Flags & BattleDeckKoma.FlagPendingReady) != 0 && Pending is null && Request(2, koma) == 0)
            {
                if (cur == koma || (Mask & 1 << koma.Index) != 0) CancelPending();
                else
                {
                    Pending = koma;
                    Request(4, koma, koma.Index);
                    pending = true;
                }
            }
            if (pending) return 0;
            if ((Current!.Flags & BattleDeckKoma.FlagLocked) != 0) return 1;
            cur = Current;
        }
        if (cur == koma) Request(4, koma, koma.Index);
        else
        {
            if (Request(2, koma) != 0) return 1;
            int higher = 0;
            if (Current is { } old)
            {
                old.Flags &= ~(BattleDeckKoma.FlagInPlay | BattleDeckKoma.FlagPendingReady | BattleDeckKoma.FlagPendingGo | BattleDeckKoma.FlagCurrent);
                if (old.Hp < koma.Hp) higher = 1;
            }
            koma.Flags |= BattleDeckKoma.FlagInPlay | BattleDeckKoma.FlagCurrent;
            Current = koma;
            Request(1, koma, koma.Index, higher);
        }
        return 0;
    }

    /// <summary>FUN_02078110: call a support koma.</summary>
    public int CallSupport(BattleDeckKoma koma)
    {
        if (SupportRefused(koma)) return 1;
        if (!PaySupport()) return 1;
        Request(7, koma, koma.SupportArg0, koma.SupportArg1);
        koma.Flags |= BattleDeckKoma.FlagInPlay | BattleDeckKoma.FlagCurrent;
        Support = koma;
        return 0;
    }

    /// <summary>FUN_02078038: true when the support koma may not be called now.</summary>
    public bool SupportRefused(BattleDeckKoma koma)
    {
        if (!BattleRunning) return true;
        if ((koma.Flags & BattleDeckKoma.FlagDown) != 0) return true;
        if (Support == koma) return true;
        if (Request(8, koma) != 0) return true;
        if (Support is not null) return true;
        return !(GaugeInfinite || GaugeFree || GaugeLevel - 1 >= 0);   // FUN_020782F4(deck, 1)
    }

    /// <summary>FUN_0207834C(deck, 1): pay one gauge level (free with +0x5CE/+0x5CF); request 0xB when short.</summary>
    private bool PaySupport()
    {
        if (GaugeInfinite || GaugeFree) return true;
        if (TakeLevels(1)) return true;
        Request(0xB);
        return false;
    }

    /// <summary>FUN_02078A70.</summary>
    public void CancelPending()
    {
        Mask = 0;
        if (Current is { } c) c.Flags &= ~(BattleDeckKoma.FlagPendingReady | BattleDeckKoma.FlagPendingGo);
        Pending = null;
    }

    /// <summary>FUN_0207830C.</summary>
    public bool TakeLevels(int n)
    {
        int v = (sbyte)GaugeLevel - n;
        if (v >= 0) GaugeLevel = v;
        return v >= 0;
    }

    /// <summary>FUN_02078328.</summary>
    public bool AddLevels(int n)
    {
        int v = (sbyte)GaugeLevel + n;
        bool ok = v <= (sbyte)GaugeLevelMax;
        if (ok) GaugeLevel = v;
        return ok;
    }

    /// <summary>FUN_020781E4: add to the gauge (0x6400 per level).</summary>
    public void AddGauge(int n)
    {
        if (n >= 0)
        {
            Gauge += n;
            while (Gauge > 0x63FF) Gauge = AddLevels(1) ? Gauge - 0x6400 : 0;
            if ((sbyte)GaugeLevelMax <= (sbyte)GaugeLevel) Gauge = 0;
            return;
        }
        if (GaugeFree) return;
        Gauge += n;
        while (Gauge < 0) Gauge = TakeLevels(1) ? Gauge + 0x6400 : 0;
    }

    /// <summary>FUN_02077D40: a battle koma's frame (benched regeneration, KO recovery at twice the rate).</summary>
    private void UpdateBattleKoma(BattleDeckKoma n)
    {
        int f = n.Flags;
        if ((f & BattleDeckKoma.FlagFrozen) != 0) return;
        if ((f & BattleDeckKoma.FlagDown) == 0)
        {
            if ((f & BattleDeckKoma.FlagInPlay) == 0)
            {
                n.Hp = Math.Min((short)(n.Hp + n.Regen), n.MaxHp);
            }
            else if (Request(0xC) != 0)
            {
                if (n.RegenInPlay != 0) n.Hp = Math.Min((short)(n.Hp + n.RegenInPlay), n.MaxHp);
                if (n.GaugeInPlayA != 0 || n.GaugeInPlayB != 0) AddGauge(n.GaugeInPlayA + n.GaugeInPlayB);
            }
        }
        else if ((f & BattleDeckKoma.FlagNoRecover) == 0 && ((f & BattleDeckKoma.FlagInPlay) == 0 || Request(0xC) != 0))
        {
            n.Hp = (short)(n.Hp + n.Regen * 2);
            if (n.Hp > n.MaxHp)
            {
                n.Hp = n.MaxHp;
                n.Flags &= ~BattleDeckKoma.FlagDown;
            }
        }
    }
}
