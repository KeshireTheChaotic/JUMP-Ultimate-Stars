using System.Buffers.Binary;

namespace Jus.Game.Scenes.Ov06;

/// <summary>The engine RNG FUN_02031070 (MT19937 object at *(0x020A0DA8)+4). The battle draws from it for the
/// critical-hit roll (FUN_020823E4), the hit point (FUN_02080D28) and the guard-box choice (FUN_02080F14).</summary>
public interface IBattleRandom
{
    uint Next();
}

/// <summary>The engine generator itself: the shared <see cref="Mt19937"/> (FUN_02031070 on *(0x020A0DA8) + 4).</summary>
public sealed class BattleMtRandom(Mt19937 mt) : IBattleRandom
{
    public uint Next() => mt.Next();
}

/// <summary>
/// An attack/hit record: the data a hit box points at (collision-parameter +0x10). Offsets from its readers
/// FUN_02080F14 / FUN_020823E4 / FUN_0207FBD0 / FUN_020809C8. Where the record comes from (the motion's note
/// data) is the note track's side (lead); this is the interface.
/// </summary>
public readonly record struct BattleAttackData(
    byte Category,     // +0: compared between the two boxes of a pair (==, &lt;) and tested for 3/4/5 (meaning inferred)
    byte Reaction,     // +1: reaction kind; the victim's +0x16C keeps the maximum (→ chara +0x100); 6 scales by HP; 8 turns by the victim's facing
    byte Effect,       // +2: hit-effect index into 0x0209FEE4 (lowest non-zero of the frame wins)
    sbyte Down,        // +3: &gt; 0 → victim +0x172, &lt; 0 → +0x173 (smallest wins); |−0x17| collects +0x182
    sbyte Damage,      // +4: base damage (FUN_020823E4)
    sbyte Gauge,       // +5: ·0x100 into the victim's second sum (+0xEC slots → +0x138)
    sbyte Stun,        // +7: added to the victim's +0x171
    uint Flags,        // +8: 0x8000 takes +0x17C, 0x10000 takes +0x176
    sbyte KnockX,      // +0xC: ·0x80
    sbyte KnockY,      // +0xD: ·−0x9E
    sbyte Element,     // +0xE: element (0x02092E68 kind), also the first effect argument
    sbyte EffectArg,   // +0xF: the second effect argument
    byte Extra10,      // +0x10: passed to 0x02153CE8
    byte Extra11)      // +0x11: passed to 0x02153CE8
{
    public const int Size = 0x12;

    public static BattleAttackData Parse(ReadOnlySpan<byte> b) => new(
        b[0], b[1], b[2], (sbyte)b[3], (sbyte)b[4], (sbyte)b[5], (sbyte)b[7],
        BinaryPrimitives.ReadUInt32LittleEndian(b[8..]), (sbyte)b[0xC], (sbyte)b[0xD], (sbyte)b[0xE], (sbyte)b[0xF],
        b[0x10], b[0x11]);
}

/// <summary>The arm9 tables the hit code reads (JUS data; loaded from the JUS tables export, never literals).</summary>
/// <param name="CritMask">0x02092E58, 4 × u32, by (attacker +0x16E &gt;&gt; 6): a critical needs (mask &amp; rnd &gt;&gt; 3) == 0.</param>
/// <param name="ElementKind">0x02092E68, 16 × u8: 1/2 per element (+0xE).</param>
/// <param name="Affinity">0x0209FEF4 (normal) then 0x0209FF14 (manager +0x14D bit 0): 2 × 16 s16, [victim class·4 + attacker class].</param>
/// <param name="ReactionScale">0x0209FB64, 5 × s32: knockback scale for reaction 6 by (victim +0x16E &gt;&gt; 6).</param>
/// <param name="HitEffects">0x0209FEE4: effect resource ids by data +2 (index 0 unused).</param>
public sealed record BattleHitTables(uint[] CritMask, byte[] ElementKind, short[] Affinity, int[] ReactionScale, uint[] HitEffects)
{
    /// <summary>Build from a reader of arm9 memory (address, length).</summary>
    public static BattleHitTables FromArm9(Func<uint, int, byte[]> read)
    {
        uint[] U32s(uint a, int n) { var b = read(a, n * 4); return [.. Enumerable.Range(0, n).Select(i => BinaryPrimitives.ReadUInt32LittleEndian(b.AsSpan(i * 4)))]; }
        var aff = read(0x0209FEF4, 0x40);
        return new BattleHitTables(U32s(0x02092E58, 4), read(0x02092E68, 16),
            [.. Enumerable.Range(0, 32).Select(i => BinaryPrimitives.ReadInt16LittleEndian(aff.AsSpan(i * 2)))],
            [.. U32s(0x0209FB64, 5).Select(v => (int)v)], U32s(0x0209FEE4, 4));
    }
}

/// <summary>
/// The fields of a battle collision object (BattleCol, Battle_ColObjCreate main 0x0207AEDC) that the hit code
/// uses. Offsets are the original ones. One per character / shot / gimmick.
/// </summary>
public sealed class BattleHitObject
{
    public BattleMoveObject Move = new();       // +0x5C
    public BattleHitObject? Parent;             // +0x68: the owner (a shot's character); the damage root is the first without +0x40 bit 0x200
    public int PixelX, PixelY;                  // the display node position the boxes are relative to (+0x20 → +0x34/+0x36)
    public bool FacingLeft;                     // FUN_0206CF28(+0x30) != 0 (the node's flip; inferred meaning)
    public uint Flags34;                        // +0x34
    public uint Flags40, Flags44;               // +0x40, +0x44
    public uint Flags78;                        // +0x78 (stage contact bits, see BattleStageCollision)
    public byte Byte9E;                         // +0x9E
    public readonly int[] DamageSlots = new int[0x11];   // +0xA4: damage by slot (FUN_02081A58)
    public readonly int[] GaugeSlots = new int[0x11];    // +0xEC
    public int Damage;                          // +0x134: Σ +0xA4 (FUN_020821C4)
    public int Gauge;                           // +0x138: Σ +0xEC
    public int Gained140, Gained144;            // +0x140 / +0x144: taken from victims (data flags 0x8000 / 0x10000)
    public short KnockX, KnockY;                // +0x148 / +0x14A
    public short EffectX, EffectY;              // +0x14C / +0x14E
    public uint Received150, Received154;       // +0x150 / +0x154: attack-box flags that hit this object
    public uint Dealt158, Dealt15C;             // +0x158 / +0x15C: hurt-box flags this object hit
    public uint OwnerDealt160, OwnerDealt164;   // +0x160 / +0x164 (on the parent, for shots)
    public ushort DownSlot168, DownSlot16A;     // +0x168 / +0x16A
    public ushort Reaction;                     // +0x16C: max data +1
    public short HpRatio = 0x100;               // +0x16E: (+0x17C &lt;&lt; 8) / +0x178 (8.8), else 0x100
    public byte Stun;                           // +0x171
    public sbyte DownPositive, DownNegative;    // +0x172 / +0x173
    public byte Effect;                         // +0x174
    public byte Class175;                       // +0x175: affinity classes (bits 0–1 own; 2–3, 4–5 by box kind)
    public short Value176;                      // +0x176 (taken by data flag 0x10000)
    public int Max178, Value17C;                // +0x178 / +0x17C
    public short DamageShown;                   // +0x180
    public byte Bits182;                        // +0x182
    public ushort Rate184 = 0x100, Rate186 = 0x100;  // +0x184 / +0x186: damage multipliers (8.8)

    /// <summary>The damage root (FUN_020823E4): follow +0x68 while the parent lacks +0x40 bit 0x200.</summary>
    public BattleHitObject Root
    {
        get
        {
            var o = this;
            while (o.Parent is { } p && (p.Flags40 & 0x200) == 0) o = p;
            return o;
        }
    }

    /// <summary>The per-frame reset of the hit fields in FUN_0207F480: +0xA4…+0x173 cleared, +0x174/+0x182 = 0,
    /// +0x40 &amp;= 0x7E00C38E, +0x44 &amp;= 0xFFCFFFF7, +0x16E = the HP ratio, +0x78 bit 0x80000 expires after 4 frames.</summary>
    public void BeginFrame()
    {
        Flags40 &= 0x7E00C38E;
        Flags44 &= 0xFFCFFFF7;
        Array.Clear(DamageSlots);
        Array.Clear(GaugeSlots);
        Damage = Gauge = Gained140 = Gained144 = 0;
        KnockX = KnockY = EffectX = EffectY = 0;
        Received150 = Received154 = Dealt158 = Dealt15C = OwnerDealt160 = OwnerDealt164 = 0;
        DownSlot168 = DownSlot16A = Reaction = 0;
        Stun = 0; DownPositive = DownNegative = 0;
        Effect = 0; Bits182 = 0;
        HpRatio = 0x100;
        if ((Flags34 & 0xFF) != 0 && Max178 != 0) HpRatio = (short)((Value17C << 8) / Max178);     // FUN_0200D12C (signed)
        if ((Flags78 & 0x80000) != 0 && Byte9E++ > 3)
        {
            Flags78 &= 0xFFF7FFFF;
            Byte9E = 0;
        }
    }
}

/// <summary>A collision parameter (BattleColPrm, Battle_ColPrmManCreate main 0x0207C4C0): one box of an object
/// with its kind flags. Hurt boxes have +0x14 bit 0x20000000; attack boxes point at a <see cref="BattleAttackData"/>.</summary>
public sealed class BattleHitBox
{
    public required BattleHitObject Owner;      // +0xC
    public BattleAttackData Data;               // *(+0x10)
    public BattleBox Box;                       // the box record (+8 → +0x3C + index·8): {x, y, half-w, half-h} px
    public uint Flags14, Flags18, Flags1C;      // +0x14 / +0x18 / +0x1C
    public ushort Mask20, Mask22, Mask24;       // +0x20 / +0x22 / +0x24: per-frame hit masks (already hit by …)
    public byte Flags2A;                        // +0x2A

    public const uint HurtBox = 0x20000000;
}

/// <summary>A contact pair (the collision node's contact list, object +0x60 → +0x10): +8 box A, +0xC box B,
/// +0x10 flags, +0x11/+0x12 box indices.</summary>
public sealed record BattleHitPair(BattleHitBox A, BattleHitBox B, byte Flags = 0);

/// <summary>Hooks for what the hit code triggers outside its own data.</summary>
public interface IBattleHitEvents
{
    /// <summary>FUN_0207342C(arc, n): an SE (0x7A/0x28 critical, 0x7A/0x2A clash).</summary>
    void PlaySe(int arc, int n);
    /// <summary>FUN_0206C7FC(id, x, y, 0): a battle effect at a world pixel position.</summary>
    void SpawnEffect(uint id, int x, int y);
    /// <summary>func_0x02153CE8: the hit report to the attacker's display (+0x6C) — damage numbers/markers (not read).</summary>
    void HitReport(BattleHitObject attacker, int arg0, int arg1, int x, int y, bool facingLeft, byte e10, byte e11, int kind);
}

/// <summary>
/// The damage computation and hit resolution of the battle collision-parameter update (main FUN_0207F480's
/// passes). Translated: FUN_020823E4 (damage), FUN_02081A58 (slot), FUN_02080D28 (hit point), FUN_020809C8
/// (body-vs-attack classification into the damage list +0x30 / clash list +0x68 / guard list +0x48), FUN_02080F14
/// (the damage list: filters, guard-box choice, application), FUN_020821C4 (sums).
///
/// STAND-IN: the broad phase. The contact pairs come from the engine's collision nodes (object +0x60 → +0x10),
/// which are not translated; <see cref="FindPairs"/> builds them with a plain box-overlap test (inferred).
/// Not translated: the manager's per-team statistics matrix (+0x154, 0x30 per pair of teams), FUN_02081AB0
/// (grab, attack flags 0x3000000), the joint lists (FUN_02082984), the other passes of FUN_02080C28.
/// </summary>
public sealed class BattleHitResolver(BattleHitTables tables, IBattleRandom random, IBattleHitEvents? events = null)
{
    /// <summary>Manager +0x14D bit 0: use the second affinity table (0x0209FF14).</summary>
    public bool AltAffinity { get; set; }

    /// <summary>FUN_02081A58: the damage slot of a box's flags (0x10 guard kinds 0x2600, 0x11 none, else 0/4/8/12 +
    /// the bit's index).</summary>
    public static int HitSlot(uint flags, uint flags18)
    {
        if ((flags & 0x2600) != 0) return 0x10;
        if ((flags & 0xFF) == 0) return 0x11;
        int shift = (flags & 0xF0) != 0 ? 4 : 0;
        int baseSlot = shift;
        if ((flags18 & 0x100) != 0) baseSlot = 0xC;
        if ((flags18 & 0xC0) != 0) baseSlot = 8;
        return baseSlot + BitIndex((flags >> shift) & 0xF);
    }

    /// <summary>The table 0x0209FF34 (9 × s32, then unrelated data that a multi-bit index would read): the index of a
    /// single bit, −1 otherwise (derived; 9–15 give −1 here).</summary>
    public static int BitIndex(uint v) => v switch { 1 => 0, 2 => 1, 4 => 2, 8 => 3, _ => -1 };

    /// <summary>
    /// FUN_020823E4(hurt, attack, alt, &amp;out): the damage (·0x100 / 4) of an attack box on a hurt box. Returns the
    /// flags 1 critical, 2 effective (affinity &gt; 0x100), 4 resisted.
    /// </summary>
    public int ComputeDamage(BattleHitBox hurt, BattleHitBox attack, out int damage)
    {
        var att = attack.Owner;
        var vic = hurt.Owner;
        var root = att.Root;
        int baseDmg = attack.Data.Damage;
        int flags = 0;
        if ((root.Flags40 & 0x2000000) != 0 && (tables.CritMask[att.HpRatio >> 6] & (random.Next() >> 3)) == 0)
        {
            baseDmg <<= 1;
            flags = 1;
            events?.PlaySe(0x7A, 0x28);
        }
        int v = baseDmg * 0x100 + ((baseDmg * 0x100 * (root.Rate184 - 0x100)) >> 8);
        v += (v * (root.Rate186 - 0x100)) >> 8;
        int cls;
        if ((attack.Flags18 & 0xC0) == 0) cls = att.Class175 & 3;
        else if ((attack.Flags18 & 0x40) == 0) cls = (att.Class175 & 0x3F) >> 4;
        else cls = (att.Class175 & 0xF) >> 2;
        int aff = (vic.Flags40 & 0x40000000) == 0 && (root.Flags40 & 0x40000000) == 0
            ? tables.Affinity[(AltAffinity ? 16 : 0) + (vic.Class175 & 3) * 4 + cls]
            : 0x100;
        if (aff > 0x100)
        {
            flags |= 2;
            vic.Flags40 |= 0x400000;
            root.Flags40 |= 0x200000;
        }
        int bonus = (v * (aff - 0x100)) >> 8;
        int elem = attack.Data.Element;
        byte cat = attack.Data.Category;
        uint f44 = vic.Flags44;
        bool physical = cat == 4 || cat == 5 || (attack.Flags14 & 0xF0) != 0;    // (meaning inferred)
        if ((f44 & 0x4000) != 0 && physical) bonus += (v * 0x40) >> 8;
        if ((f44 & 0x40) != 0 && physical) { flags |= 4; bonus -= (v * 0x40) >> 8; }
        if (elem >= 0 && elem < 0x10)
        {
            int k = tables.ElementKind[elem];
            if ((f44 & 0x1000) != 0 && k == 1) bonus += (v * 0x40) >> 8;
            if ((f44 & 0x2000) != 0 && k == 2) bonus += (v * 0x40) >> 8;
            if ((f44 & 0x10) != 0 && k == 1) { flags |= 4; bonus -= (v * 0x40) >> 8; }
            if ((f44 & 0x20) != 0 && k == 2) { flags |= 4; bonus -= (v * 0x40) >> 8; }
        }
        damage = (v + bonus) >> 2;
        return flags;
    }

    /// <summary>FUN_02080D28: a random point of the overlap of two boxes (FUN_0200D338 = unsigned remainder).</summary>
    public (int X, int Y) HitPoint(BattleBox a, int ax, int ay, BattleBox b, int bx, int by)
    {
        static int S(int v) => (short)v;
        int l = Math.Max(S(ax + a.X - a.HalfWidth), S(bx + b.X - b.HalfWidth));
        int r = Math.Min(S(ax + a.X + a.HalfWidth), S(bx + b.X + b.HalfWidth));
        int t = Math.Max(S(ay + a.Y - a.HalfHeight), S(by + b.Y - b.HalfHeight));
        int bt = Math.Min(S(ay + a.Y + a.HalfHeight), S(by + b.Y + b.HalfHeight));
        int x = l == r ? l : l + (int)(random.Next() % (uint)(r - l));
        int y = t == bt ? t : t + (int)(random.Next() % (uint)(bt - t));
        return (x, y);
    }

    /// <summary>STAND-IN broad phase (the engine's collision nodes are not translated): every hurt box against every
    /// attack box of another object whose boxes overlap (edges touching do not count; inferred).</summary>
    public static List<BattleHitPair> FindPairs(IEnumerable<BattleHitBox> boxes)
    {
        var all = boxes.ToList();
        var pairs = new List<BattleHitPair>();
        foreach (var h in all)
        {
            if ((h.Flags14 & BattleHitBox.HurtBox) == 0) continue;
            foreach (var a in all)
            {
                if (ReferenceEquals(a.Owner, h.Owner) || (a.Flags14 & BattleHitBox.HurtBox) != 0) continue;
                if (Overlap(h, a)) pairs.Add(new BattleHitPair(h, a));
            }
        }
        return pairs;
    }

    private static bool Overlap(BattleHitBox p, BattleHitBox q)
    {
        int px = p.Owner.PixelX + p.Box.X, py = p.Owner.PixelY + p.Box.Y;
        int qx = q.Owner.PixelX + q.Box.X, qy = q.Owner.PixelY + q.Box.Y;
        return Math.Abs(px - qx) < p.Box.HalfWidth + q.Box.HalfWidth && Math.Abs(py - qy) < p.Box.HalfHeight + q.Box.HalfHeight;
    }

    /// <summary>The lists FUN_020809C8 fills (manager +0x30 damage, +0x68 clash, +0x48 guard).</summary>
    public sealed class Lists
    {
        public List<BattleHitPair> Damage { get; } = [];   // +0x30
        public List<BattleHitPair> Clash { get; } = [];    // +0x68 (pass FUN_02080E5C: effect 0x21000D + SE 0x7A/0x2A)
        public List<BattleHitPair> Guard { get; } = [];    // +0x48
    }

    /// <summary>FUN_020809C8(manager, obj, pair): A = pair +8, B = pair +0xC. Called by FUN_0207FBD0 for pairs of
    /// different categories (A's data +0 &lt; B's). Returns 1 when the pair went to the damage list.</summary>
    public static bool Classify(BattleHitPair pair, Lists lists)
    {
        var a = pair.A; var b = pair.B;
        uint fa = a.Flags14;
        if ((b.Mask20 & fa & 0xFF) != 0 || (b.Mask24 & fa & 0xFF) != 0) return false;
        uint ownerA40 = a.Owner.Flags40;
        if ((ownerA40 & 0x10000000) != 0 && (b.Flags14 & 0x100) != 0 && (b.Flags18 & 0x800) != 0 && b.Data.Reaction != 0)
            return false;
        if ((fa & BattleHitBox.HurtBox) == 0)
        {
            if ((fa & 0x10000000) != 0 && (b.Flags1C & 0x10000000) != 0) return false;
            a.Mask20 |= (ushort)b.Flags14;
            if ((a.Flags14 & 0xB0000) != 0 || (b.Flags14 & 0xB0000) != 0) return false;
            lists.Clash.Add(pair);
            // +0x18 bit 2 of the pair's box records: not modelled
            return false;
        }
        if ((fa & 0xF & b.Flags1C) != 0) return false;
        if ((b.Flags14 & 0x100) == 0)
        {
            if ((ownerA40 & 0x10000080) != 0) return false;
            if ((b.Flags18 & 0x20000) != 0 && (fa & 0x700) != 0) return false;
            lists.Damage.Add(pair);
            return true;
        }
        if ((fa & 0x7F0) == 0) lists.Guard.Add(pair);
        return false;
    }

    /// <summary>
    /// FUN_02080F14 on the damage list (pair A = the hurt box, B = the attack box):
    /// 1. drop pairs already hit this frame (B's +0x20/+0x24 masks vs A's flags), those needing an airborne
    ///    attacker (B +0x18 bit 0x200 and attacker +0x78 bit 0x20 clear), and attacks of a grabbed attacker
    ///    (B +0x14 bit 0x1000000 and +0x64);
    /// 2. a hurt box hit through several guard bits (A +0x20) by a guard-breaking attack (B +0x14 bit 0x4000000,
    ///    A +0x14 &amp; 0x700) keeps one of them at random;
    /// 3. applies each remaining pair (<see cref="Apply"/>).
    /// The "already joined" check (B +0x14 &amp; 0x3000000 with a joint to the attacker) is not modelled: such pairs
    /// are applied.
    /// </summary>
    public void Resolve(List<BattleHitPair> damage)
    {
        damage.RemoveAll(p =>
        {
            uint fa = p.A.Flags14 & 0xFFFFFF;
            return (p.B.Mask20 & fa) != 0 || (p.B.Mask24 & fa) != 0
                || ((p.B.Flags18 & 0x200) != 0 && (p.A.Owner.Flags78 & 0x20) == 0);
            // (B +0x14 bit 0x1000000 with the hurt object's +0x64 grab link set) is not modelled
        });
        for (int i = 0; i < damage.Count; i++)
        {
            var hurt = damage[i].A;
            if ((damage[i].B.Flags14 & 0x4000000) == 0 || (hurt.Flags14 & 0x1000) != 0 || (hurt.Flags14 & 0x700) == 0 || (hurt.Mask20 & 0xFF) == 0)
                continue;
            var bits = Enumerable.Range(0, 8).Where(b => (hurt.Mask20 & (1 << b)) != 0).ToArray();
            if (bits.Length < 2) continue;
            int keep = bits[random.Next() % (uint)bits.Length];
            damage.RemoveAll(p => ReferenceEquals(p.A, hurt) && (p.B.Flags14 & (1u << keep)) == 0);
            hurt.Mask20 = (ushort)((hurt.Mask20 & 0xFF00) | (1 << keep));
        }
        foreach (var p in damage) Apply(p.A, p.B, p.Flags);
    }

    /// <summary>The application part of FUN_02080F14 (LAB_020811A8) for one pair.</summary>
    public void Apply(BattleHitBox hurt, BattleHitBox attack, byte pairFlags = 0)
    {
        var vic = hurt.Owner;
        var att = attack.Owner;
        uint fa = hurt.Flags14, fb = attack.Flags14;
        var d = attack.Data;
        vic.Flags40 |= 0x10;                                                       // "was hit" (read by FUN_0215A978)
        vic.Flags40 &= 0xFFFDF7FF;
        // +0x40 & 6 → FUN_0207D180, +0x64 → FUN_0207C070, joints (+0x28) released: not modelled
        int arg0 = (fa & 0x1600) != 0 && (fb & 0x100) != 0 ? -1 : d.Element;      // local_58 = data +0xE
        int arg1 = (fa & 0x100) != 0 && (fb & 0x10000000) != 0 ? -1 : d.EffectArg; // local_54 = data +0xF
        int rf = ComputeDamage(hurt, attack, out int dmg);
        int kind = (rf & 1) != 0 ? 2 : (rf & 2) != 0 ? 1 : 0;
        int gauge = d.Gauge * 0x100;
        int slot = HitSlot(fb, attack.Flags18);
        vic.DamageSlots[slot] += dmg;
        vic.GaugeSlots[slot] += gauge;
        vic.Stun = (byte)(vic.Stun + d.Stun);
        // the per-team statistics (manager +0x154) are not modelled
        if ((d.Flags & 0x8000) != 0)
        {
            if (vic.Value17C < dmg) { att.Gained140 += vic.Value17C; vic.Value17C = 0; }
            else { att.Gained140 += dmg; vic.Value17C -= dmg; }
        }
        if ((d.Flags & 0x10000) != 0)
        {
            if (vic.Value176 * 0x100 < gauge) { att.Gained144 += vic.Value176 * 0x100; vic.Value176 = 0; }
            else { att.Gained144 += gauge; vic.Value176 = (short)(vic.Value176 - (gauge >> 8)); }
        }
        var (hx, hy) = HitPoint(hurt.Box, vic.PixelX, vic.PixelY, attack.Box, att.PixelX, att.PixelY);
        vic.Received150 |= fb & 0x3FFFFFF;
        vic.Received154 |= attack.Flags18;
        att.Dealt158 |= fa & 0xFFFFFF;
        att.Dealt15C |= hurt.Flags18;
        if (att.Parent is { } owner)
        {
            owner.OwnerDealt160 |= fa & 0xFFFFFF;
            owner.OwnerDealt164 |= hurt.Flags18;
        }
        if (vic.Reaction < d.Reaction) vic.Reaction = d.Reaction;
        if (d.Effect != 0 && (vic.Effect == 0 || d.Effect < vic.Effect))
        {
            vic.Effect = d.Effect;
            vic.EffectX = (short)hx;
            vic.EffectY = (short)hy;
            events?.SpawnEffect(tables.HitEffects[vic.Effect], vic.EffectX, vic.EffectY);  // node flip from the attacker (vfunc 0x5C) not modelled
        }
        if (d.Down != 0)
        {
            if (d.Down < 0)
            {
                if (vic.DownNegative == 0 || d.Down < vic.DownNegative) { vic.DownNegative = d.Down; vic.DownSlot16A = (ushort)(fb & 0xFF); }
                if (-d.Down == 0x17) vic.Bits182 |= (byte)fb;
            }
            else if (vic.DownPositive == 0 || d.Down < vic.DownPositive) { vic.DownPositive = d.Down; vic.DownSlot168 = (ushort)(fb & 0xFF); }
        }
        if ((vic.Flags40 & 0x4000) != 0)                                           // guarding (inferred): guard hit
        {
            vic.Flags40 |= 0x10000;
            vic.Stun = (byte)(vic.Stun + 0x3C);
        }
        if ((fa & 0x700) != 0)
        {
            if ((fb & 0x4000000) == 0)
            {
                if ((vic.Flags40 & 0x10000) != 0) vic.Received150 &= ~(fb & 0x3FFFFFF);
            }
            else
            {
                vic.Received150 = (vic.Received150 & 0xFC000000) | (fb & 0x3FFFFFF);
                vic.Flags40 |= 0x10000;
                att.Flags44 |= 8;
            }
        }
        if ((attack.Flags18 & 0x400) != 0) vic.Flags40 |= 0x40;
        // knockback
        int scale = d.Reaction == 6 ? tables.ReactionScale[vic.HpRatio >> 6] : 0x100;
        int kx = scale * d.KnockX * 0x80 >> 8;
        int ky = scale * d.KnockY * -0x9E >> 8;
        if ((rf & 1) != 0) { kx <<= 1; ky <<= 1; }
        if (d.Reaction == 6)
        {
            if ((vic.Flags44 & 0x80) != 0) { kx -= kx >> 1; ky -= ky >> 1; }
            if ((vic.Flags44 & 0x8000) != 0) { kx += kx >> 1; ky += ky >> 1; }
        }
        if ((fb & 0x1000000) != 0) kx = ky = 0;
        short skx = (short)kx;
        if ((fb & 0x4000000) != 0 && (fa & 0x700) != 0) { skx = 0x300; ky = -0x500; }
        bool pushRight = (attack.Flags18 & 4) == 0 ? !att.FacingLeft : att.Move.X < vic.Move.X;
        if (pushRight) { vic.Flags40 |= 0x20; vic.KnockX += skx; }
        else { vic.Flags40 &= 0xFFFFFFDF; vic.KnockX -= skx; }
        if (vic.Reaction == 8)
        {
            if (vic.FacingLeft) vic.Flags40 |= 0x20; else vic.Flags40 &= 0xFFFFFFDF;
        }
        vic.KnockY += (short)((ky * 0xDF) >> 8);
        if (vic.KnockY > 0)
        {
            vic.Flags78 |= 0x80000;
            vic.Byte9E = 0;
        }
        // FUN_02081AB0 (fb & 0x3000000: grab/join) not translated
        events?.HitReport(att, arg0, arg1, hx, hy, att.FacingLeft, d.Extra10, d.Extra11, kind);
        _ = pairFlags;
    }

    /// <summary>FUN_020821C4 (per object of list +0x88): +0x134/+0x138 = the slot sums, +0x180 = +0x134 &gt;&gt; 8 when
    /// non-zero, +0x182 = one random collected down bit for down −0x17 / +0x17.</summary>
    public void Sum(BattleHitObject o)
    {
        for (int i = 0; i < 0x11; i++)
        {
            o.Damage += o.DamageSlots[i];
            o.Gauge += o.GaugeSlots[i];
        }
        if (o.Damage != 0) o.DamageShown = (short)((uint)o.Damage >> 8);
        if (Math.Abs((int)o.DownNegative) == 0x17)
        {
            int bits = o.Bits182 | (o.Bits182 >> 4);
            o.Bits182 = (byte)bits;
            var set = Enumerable.Range(0, 4).Where(i => (bits & (1 << i)) != 0).ToArray();
            if (set.Length < 2) o.Bits182 = (byte)(set.Length == 1 ? set[0] : 0);  // local_18's first byte (0 when none: inferred)
            else o.Bits182 = (byte)set[random.Next() % (uint)set.Length];
        }
        else o.Bits182 = 0;
    }
}
