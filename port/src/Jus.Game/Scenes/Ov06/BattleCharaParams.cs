using Jus.Game.Assets;

namespace Jus.Game.Scenes.Ov06;

/// <summary>
/// <c>bin/chr_b.bin</c>: one 0x3C-byte record per battle character id (74 records; ComicDeckCreate main
/// 0x02075FBC loads it to ComicDeck +0x40). Read by the battle-koma deck-entry init FUN_02077C0C (deck entry
/// table 0x0209F528[kind 0]) and the ability collection FUN_02077768. Record layout:
/// +0 u8 → entry +0x13; +1 u8 jump rank → entry +0x11; +2 u8 walk rank → entry +0x10; +3..+7 five ability
/// ids (indices into <c>bin/ability.bin</c>, 0 = none); per CharaData type t (3..7, i = t − 3):
/// +0x10 + 4i u8 HP / 0x40 → entry +0x16/+0x18 (HP << 6), +0x11 + 4i u8 → entry +0x49 (0 → 4),
/// +0x12 + 4i → entry +0x14, +0x13 + 4i → entry +0x15; +0x30 u16 → entry +0x2E; +0x32 + 2i u16 → entry +0x30.
/// </summary>
public sealed class BattleChrBTable
{
    public const int RecordSize = 0x3C;
    private readonly byte[] _data;

    public BattleChrBTable(byte[] data) => _data = data;

    public int Count => _data.Length / RecordSize;

    public static BattleChrBTable Load(IAssetSource assets) => new(assets.Read("bin/chr_b.bin"));

    public ReadOnlySpan<byte> Record(int character) => _data.AsSpan(character * RecordSize, RecordSize);
}

/// <summary><c>bin/ability.bin</c>: 4-byte entries {u8 type, u8 sub, s8 param, u8}. Type 0 sets bit
/// <c>sub</c> of the character's ability bits (chara +0x128/+0x12C, FUN_0215FB3C); type 1 goes to the
/// ability object at chara +0x120 (FUN_0215FB64 → FUN_0215FC20, not translated); type 2 changes the deck
/// entry when the deck is built (handlers 0x0209F544: sub 3 HP += param·0x40 (max 0x4000), sub 4 deck
/// +0x5CC + 1 (max 0x10), sub 5/6/7 entry +0x4A/+0x4B/+0x4C = param).</summary>
public sealed class BattleAbilityTable(byte[] data)
{
    public static BattleAbilityTable Load(IAssetSource assets) => new(assets.Read("bin/ability.bin"));
    public int Count => data.Length / 4;
    public (byte Type, byte Sub, sbyte Param) this[int id] => (data[id * 4], data[id * 4 + 1], (sbyte)data[id * 4 + 2]);
}

/// <summary>
/// The movement parameters of a battle character, as the battle reads them from the current deck entry
/// (deck object +0x56C) and the ability list.
/// <list type="bullet">
/// <item>FUN_02158A10 (from FUN_02157114, the character setup): chara +0xB8 walk speed =
/// s16 table ov06 0x02171108[entry +0x10]; +0xBA jump speed = s16 table ov06 0x02171118[(s8)entry +0x11 % 8]
/// (signed remainder); +0xD8 max air actions = 1.</item>
/// <item>FUN_02157114: +0xD8 = 2 when ability bit 1 is set.</item>
/// <item>FUN_0215FAC4 (chara +0x120): clears +0x128/+0x12C, then runs each listed ability's type handler
/// (table 0x02172210); type 0 = set bit.</item>
/// <item>The ability list (entry +0x1A count, +0x1B ids) is built by FUN_02077768 from chr_b +3..+7: ids
/// whose ability type is 0 or 1 are appended (FUN_02077A74, at most 15), type 2 runs its handler.
/// Help koma (deck kind 2) can add more (the character id of the help koma as the ability id, via
/// FUN_020779CC); that is <b>not</b> translated here.</item>
/// </list>
/// The two speed tables are JUS data in overlay 6; they are passed in (JusTables export, see the report).
/// Units: speeds are s16 in 1/256 px per frame (the move object's input velocity).
/// </summary>
public sealed class BattleCharaParams
{
    /// <summary>Deck entry +0x10 / +0x11 / +0x13 (chr_b +2, +1, +0).</summary>
    public int WalkRank { get; }
    public int JumpRank { get; }
    public int Entry13 { get; }
    /// <summary>Deck entry +0x16 (= +0x18 at start): HP, chr_b HP byte &lt;&lt; 6 plus ability type 2 sub 3.</summary>
    public int Hp { get; }
    /// <summary>Deck entry +0x49 / +0x14 / +0x15 / +0x2E / +0x30.</summary>
    public int Entry49 { get; }
    public int Entry14 { get; }
    public int Entry15 { get; }
    public int Entry2E { get; }
    public int Entry30 { get; }
    /// <summary>Deck entry +0x4A / +0x4B / +0x4C (ability type 2 sub 5/6/7).</summary>
    public int Entry4A { get; }
    public int Entry4B { get; }
    public int Entry4C { get; }
    /// <summary>The ability list (entry +0x1B…, ids into ability.bin).</summary>
    public IReadOnlyList<int> Abilities { get; }
    /// <summary>chara +0x128 / +0x12C.</summary>
    public uint AbilityBits0 { get; }
    public uint AbilityBits1 { get; }
    /// <summary>chara +0xB8 / +0xBA / +0xD8.</summary>
    public short WalkSpeed { get; }
    public short JumpSpeed { get; }
    public byte MaxAirActions { get; }

    /// <param name="chrB">bin/chr_b.bin.</param>
    /// <param name="abilities">bin/ability.bin.</param>
    /// <param name="character">Deck entry +0x41 (koma +7).</param>
    /// <param name="type">CharaData type (koma +8; 3..7 for battle koma).</param>
    /// <param name="walkSpeeds">ov06 0x02171108, 8 × s16.</param>
    /// <param name="jumpSpeeds">ov06 0x02171118, 8 × s16.</param>
    public BattleCharaParams(BattleChrBTable chrB, BattleAbilityTable abilities, int character, int type,
        IReadOnlyList<short> walkSpeeds, IReadOnlyList<short> jumpSpeeds)
    {
        var r = chrB.Record(character);
        int i = type - 3;                                                    // FUN_02077C0C: koma +8 − 3
        Entry49 = r[0x11 + i * 4] == 0 ? 4 : r[0x11 + i * 4];
        int hp = r[0x10 + i * 4] << 6;
        WalkRank = r[2];
        JumpRank = r[1];
        Entry13 = r[0];
        Entry14 = r[0x12 + i * 4];
        Entry15 = r[0x13 + i * 4];
        Entry2E = BitConverter.ToUInt16(r[0x30..]);
        Entry30 = BitConverter.ToUInt16(r[(0x32 + i * 2)..]);

        // FUN_02077768 (battle koma part): five ids from chr_b +3
        var list = new List<int>();
        int e4a = 0, e4b = 0, e4c = 0;
        for (int k = 0; k < 5; k++)
        {
            int id = r[3 + k];
            var (t, sub, param) = abilities[id];
            if (t < 2)
            {
                if (id != 0 && list.Count < 0xF) list.Add(id);                // FUN_02077A74
            }
            else if (t == 2)
            {
                switch (sub)                                                 // 0x0209F544[sub]
                {
                    case 3: hp = Math.Min((int)(short)(hp + param * 0x40), 0x4000); break;   // FUN_02077974
                    case 5: e4a = (byte)param; break;                         // FUN_02077944
                    case 6: e4b = (byte)param; break;                         // FUN_02077954
                    case 7: e4c = (byte)param; break;                         // FUN_02077964
                    // 0..2: FUN_0207793C (nothing); 4: FUN_020779A4 (deck +0x5CC, not a character value)
                }
            }
        }
        Hp = hp;
        Entry4A = e4a; Entry4B = e4b; Entry4C = e4c;
        Abilities = list;

        // FUN_0215FAC4: type 0 → bit (FUN_0215FB3C); type 1 (FUN_0215FB64) and 2 (FUN_0215FB78) set none
        uint b0 = 0, b1 = 0;
        foreach (int id in list)
        {
            var (t, sub, _) = abilities[id];
            if (t != 0) continue;
            if ((sub >> 5) == 0) b0 |= 1u << (sub & 0x1F);
            else if ((sub >> 5) == 1) b1 |= 1u << (sub & 0x1F);
        }
        AbilityBits0 = b0;
        AbilityBits1 = b1;

        // FUN_02158A10
        WalkSpeed = walkSpeeds[(sbyte)WalkRank];
        int j = (sbyte)JumpRank;
        JumpSpeed = jumpSpeeds[j % 8];                                       // C remainder; ranks in the data are 1..3
        MaxAirActions = 1;
        if ((b0 & 2) != 0) MaxAirActions = 2;                                // FUN_02157114
    }

    /// <summary>Has ability bit <paramref name="bit"/> (chara +0x128 + (bit &gt;&gt; 5)·4).</summary>
    public bool HasAbility(int bit) => ((bit >> 5 == 0 ? AbilityBits0 : AbilityBits1) & (1u << (bit & 0x1F))) != 0;
}
