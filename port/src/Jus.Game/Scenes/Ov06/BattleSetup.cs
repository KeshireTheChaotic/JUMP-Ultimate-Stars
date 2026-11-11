using Jus.Game.Assets;

namespace Jus.Game.Scenes.Ov06;

/// <summary>What Battle_Add (0x0214CD20) reads to set up a battle.
/// <list type="bullet">
/// <item><see cref="Kind"/>: Battle_Add's argument (work +0x154). Scene 11 passes 5 (jus_Scene11_Create),
/// scene 44 passes 6 (jus_Scene44_Create, after FUN_02070878), scene 12 passes director +0x80 (or 9/7/8 for a
/// retry, see <see cref="KindForScene12"/>).</item>
/// <item>From the battle setup block 0x020AFE90: +0 player count (work +0x158), +8 local player
/// (+0x15C), +0xC stage id (+0x160; kind 5 uses stage 0xD), +0x10 rule selector (0x020AFEA0).</item>
/// <item><see cref="Decks"/>: per player the 0x5C-byte deck at 0x020B0134 + i*0x5C (FUN_02070CA4; kind 5
/// uses 0x020AFF4C + i*0x5C, FUN_02070D14). Those copies are filled before the battle by FUN_020708E4
/// (source 0: save deck 0x020B0DBC + n*0x5C; 2: 0x020B2E8C + n*0x5C; 1/6/7/8: <c>deck/Deck.aar</c>
/// "deck/&lt;group&gt;/NNN.bin", group from the arm9 string table 0x0209E590) — called from the create
/// wrappers (FUN_02070758 etc.). The port does not mirror 0x020B0134 yet.</item>
/// </list></summary>
public sealed record BattleSetup(int Kind, int PlayerCount, int LocalPlayer, int Stage, int Rule, IReadOnlyList<byte[]?> Decks)
{
    /// <summary>jus_Scene12_Create (0x0206ECE0): a retry (director +0x16 set by exit code 4) clears the flag
    /// and passes 9 (kind 1), 7 (kind 6) or 8 (others); otherwise director +0x80. The deck setup calls of the
    /// wrapper (FUN_0207069C for kinds 0/2/3, FUN_02070714 for 6, FUN_02070758 for 4/5/others) are not
    /// translated: they fill the battle deck copies (see <see cref="Decks"/>).</summary>
    public static int KindForScene12(DirectorWork d)
    {
        int kind = d.BattleKind;
        if (d.Unk16 != 0)
        {
            d.Unk16 = 0;
            return kind == 1 ? 9 : kind == 6 ? 7 : 8;
        }
        return kind;
    }

    /// <summary>The setup from the global blocks. STAND-IN for the decks: 0x020B0134 is not mirrored in
    /// <see cref="GameGlobals"/>, so player i uses save deck i (save +0xB04 + i*0x5C) when it holds a koma,
    /// else save deck 0. A player count of 0 (block never filled) is taken as 2.</summary>
    public static BattleSetup FromGlobals(JusGame game, int kind)
    {
        var b = game.Globals.Battle;
        int count = b.I32(0), local = b.I32(8), stage = b.I32(0xC);
        if (kind == 5) { count = 2; local = 0; stage = 0xD; }       // Battle_Add case 5 (+0x158 = 2, +0x15C = 0, +0x160 = 0xD)
        if (count <= 0 || count > 4) count = 2;
        var save = game.Globals.Save.Image.Data;
        byte[]? SaveDeck(int n)
        {
            int o = 0xB04 + n * Ov06Deck.Size;                       // 0x020B0DBC - 0x020B02B8
            if (o + Ov06Deck.Size > save.Length) return null;
            var d = save.AsSpan(o, Ov06Deck.Size).ToArray();
            return BitConverter.ToInt16(d, 0) is >= 0 ? d : null;
        }
        var decks = new byte[]?[count];
        for (int i = 0; i < count; i++) decks[i] = SaveDeck(i) ?? SaveDeck(0);
        return new BattleSetup(kind, count, Math.Clamp(local, 0, count - 1), stage, b.I32(0x10), decks);
    }
}
