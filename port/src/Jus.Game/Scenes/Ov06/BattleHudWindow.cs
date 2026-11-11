using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov06;

/// <summary>A sprite widget whose parts are textured quads built at run time (FUN_02155354: a sprite widget
/// with a part list, vfunc 0x50(texture, 0); FUN_0202B9E4 adds one quad per call). Screen rectangles are in
/// pixels relative to the widget; texture coordinates are 20.12 fractions of the texture size (0x1000 = the
/// whole width/height), sampled nearest.</summary>
public sealed class BattleHudQuadWidget(DsigImage texture, int palette = 0) : Widget
{
    public readonly record struct Quad(int X0, int Y0, int X1, int Y1, int U0, int V0, int U1, int V1);

    private readonly List<Quad> _quads = [];
    public IReadOnlyList<Quad> Quads => _quads;

    /// <summary>Part-list vfunc 0x60/0x64 (begin, clear).</summary>
    public void Clear() => _quads.Clear();
    /// <summary>FUN_0215515C + FUN_0202B9E4(parts, 1, rect, colour, uv).</summary>
    public void Add(int x0, int y0, int x1, int y1, int u0, int v0, int u1, int v1) => _quads.Add(new(x0, y0, x1, y1, u0, v0, u1, v1));

    public override void Draw(IScreen screen)
    {
        var (wx, wy) = WorldPosition;
        int ox = wx >> 12, oy = wy >> 12;
        var px = screen.Pixels;
        foreach (var q in _quads)
        {
            int w = q.X1 - q.X0, h = q.Y1 - q.Y0;
            if (w <= 0 || h <= 0) continue;
            for (int y = 0; y < h; y++)
            {
                int sy = oy + q.Y0 + y;
                if ((uint)sy >= IScreen.Height) continue;
                // texel row: v0 + (y + 0.5)/h of the span, in texels
                long vFx = q.V0 * 2L * h + (q.V1 - q.V0) * (2L * y + 1);
                int ty = (int)(vFx * texture.Height / (0x1000L * 2 * h));
                for (int x = 0; x < w; x++)
                {
                    int sx = ox + q.X0 + x;
                    if ((uint)sx >= IScreen.Width) continue;
                    long uFx = q.U0 * 2L * w + (q.U1 - q.U0) * (2L * x + 1);
                    int tx = (int)(uFx * texture.Width / (0x1000L * 2 * w));
                    int c = texture.PixelAt(tx, ty);
                    if (c == 0) continue;
                    int index = palette * 16 + c;
                    if (index < texture.Palette.Length) px[sy * IScreen.Width + sx] = texture.Palette[index];
                }
            }
        }
    }
}

/// <summary>
/// The battle window on the top screen: BattleWindow.cpp, Battle_WindowCreate ov06 0x02153F68 (work 0xD4
/// bytes; +0 the local player's deck, +4 the battle work, +8 the local chara, +0xC task, +0x10 root node).
/// Everything is a 3D sprite on the main display (0x0203B404) from <c>battle/win_bt00.aar</c> (bank and
/// motions 0x5F0000) plus the character face icons from <c>battle/ChrWin.aar</c>.
/// <para>Translated:</para>
/// <list type="bullet">
/// <item>Create: root node at (0, −40); one face icon per battle koma in deck order (at most 4, 0x5F1000 +
/// character, or 0x5F2000 + character when koma +0xB high nibble ≠ 3), DrawPrio 0x49, only the first shown;
/// five fixed sprites from <see cref="BattleHudTables.WindowSprites"/> (DrawPrio 0x48): [0] rank 0x5F001A,
/// [1] gauge level 0x5F0006, [2] 0x5F001D, [3]/[4] timer tens/ones; the HP bars (two quad widgets at
/// (0x13, 1)) and gauge bars (two at (0x1B, 10)); the status sprite 0x5F0036 at (8, 0xB8) (not under the
/// root, hidden); window kind 4 moves the icons, level, rank and bars to y = −8; kinds 1–3 add the bottom
/// counter widget (+0x38) and its digits; kind 3 hides [2]–[4].</item>
/// <item>Show/hide FUN_02154468 → slide FUN_02154500 (+5 px per frame until y &gt; 0, then 0 and the kind's
/// update) / FUN_021545A0 (−5 px until below −40); the bottom widget slides the other way to +0xC8.</item>
/// <item>Per-kind update 0x02171F14: 0 FUN_02154648 (timer + main), 1 FUN_0215465C, 2 FUN_02154788,
/// 3 FUN_021547F0 (m:s:cs, frames), 4 FUN_021548B0 (timer only).</item>
/// <item>Main FUN_021548BC: icon of the current koma (+0x42), gauge level (0..16 or ∞ 0x5F0017 with +0x5CE),
/// HP bar (width = max(0x1000, min(maxHP, 0x4000))·0xC0/0x4000, fill = HP·width/max, caps and quads as
/// read), gauge bar (58 px, fills right to left), rank, status sprite (chara +0x11D bit 1).</item>
/// <item>Timer FUN_021550C8 (battle work +0x10 / 0x90, two digits, −1 hides the tens), digits FUN_021551D0.</item>
/// </list>
/// Not translated: the widgets' motion pause/resume (FUN_020282F4/FUN_02028330; every HUD motion is a held
/// single cell) and the quad colour argument (DAT_02093D5C, assumed white).
/// </summary>
public sealed class BattleHudWindow
{
    public const int Bank = 0x5F0000;

    private readonly Stage _stage = new();
    private readonly Widget _root = new();
    private readonly List<SpriteWidget> _icons = [];
    private readonly SpriteWidget[] _fixed = new SpriteWidget[5];
    private readonly BattleHudQuadWidget[] _bars = new BattleHudQuadWidget[4];
    private readonly SpriteWidget _status;
    private readonly SpriteWidget? _bottom;
    private readonly SpriteWidget[] _digits = new SpriteWidget[14];
    private readonly SpriteWidget?[] _colons = new SpriteWidget?[2];
    private readonly int _bottomY;                                  // +0xC8
    private readonly DstxBank _bank;
    private readonly AlmtMotionSet _motions;
    private enum Task { None, SlideIn, SlideOut, Idle, Kind }
    private Task _task = Task.None;

    // caches (+0x9C..+0xD0)
    private int _maxClamped = 0x1000, _maxPrev = -2, _hpPrev = -2, _gaugePrev = -2, _width;
    private short _levelPrev = -2, _fillPrev = -2, _emptyPrev = -2, _gFillPrev = -2, _gEmptyPrev = -2;
    private readonly short[] _digitPrev = [-2, -2, -2, -2];
    private sbyte _rankPrev = -2, _timerPrev = -2, _iconPrev = -2;
    private bool _statusPrev;
    private int _recentTimer, _recentC, _recentA;                  // +0xCA, +0xCC, +0xCE (kind 1)
    private byte _frame;                                            // +0xC7

    public int Kind { get; }
    public int LocalPlayer { get; }
    public int PlayerCount { get; }
    public BattleDeck? Deck { get; }
    public Stage Stage => _stage;

    /// <summary>Battle work +0x10 (the rule's time; −1 = none). Kinds 0/1/2/4 show it / 0x90, kind 3 as frames.</summary>
    public int Time { get; set; } = -1;
    /// <summary>Battle work +0xB8 / +0xBC (shifted right by 6) and bytes +0xC4 / +0xC5: kind 1's counters.</summary>
    public int Work0B8 { get; set; }
    public int Work0BC { get; set; }
    public int Work0C4 { get; set; }
    public int Work0C5 { get; set; }
    /// <summary>Battle work +0x1C / +0x20: kind 2's counters.</summary>
    public int Work01C { get; set; }
    public int Work020 { get; set; }
    /// <summary>Local chara +0x11D bit 1 (the 0x5F0036 status sprite).</summary>
    public bool StatusFlag { get; set; }

    public int RootY => _root.Y >> 12;
    public int? BottomY => _bottom is null ? null : _bottom.Y >> 12;
    public IReadOnlyList<SpriteWidget> Icons => _icons;
    public IReadOnlyList<SpriteWidget> FixedSprites => _fixed;
    /// <summary>[0] HP fill (+0x78), [1] HP lost (+0x7C), [2] gauge fill (+0x80), [3] gauge empty (+0x84).</summary>
    public IReadOnlyList<BattleHudQuadWidget> Bars => _bars;
    public SpriteWidget StatusSprite => _status;
    public IReadOnlyList<SpriteWidget> Digits => _digits;
    public int HpWidth => _width;
    public (int Fill, int Empty) HpBar => (_fillPrev, _emptyPrev);
    public (int Fill, int Empty) GaugeBar => (_gFillPrev, _gEmptyPrev);

    public BattleHudWindow(IAssetSource assets, BattleHudTables tables, int kind, int localPlayer, int playerCount, BattleDeck? deck)
    {
        Kind = kind;
        LocalPlayer = localPlayer;
        PlayerCount = playerCount;
        Deck = deck;
        var res = new ResourceManager(assets);
        _root.SetPixelPosition(0, -40);                                    // FUN_021519D0(root, 0, −0x28000)
        _stage.Add(_root);

        // face icons: battle/ChrWin.aar, one nested archive per character (found by its resource id)
        var chrWin = res.Mount("battle/ChrWin.aar");
        if (deck is not null)
            foreach (var k in deck.Nodes)
            {
                if (k.Kind != 0) continue;
                int id = (k.AltIcon ? 0x5F2000 : 0x5F1000) + k.Character;
                var icon = IconWidget(res, chrWin, id);
                if (icon is null) continue;
                icon.Visible = false;
                _root.Add(icon);
                _icons.Add(icon);
                if (_icons.Count >= 4) break;
            }
        if (_icons.Count > 0) _icons[0].Visible = true;

        res.Mount("battle/win_bt00.aar");
        _bank = new DstxBank(res.Read(Bank, (byte)'@'), id => res.Read(id, (byte)'B'));
        _motions = new AlmtMotionSet(res.Read(Bank, (byte)'A'));
        var texture = new DsigImage(res.Read(Bank, (byte)'B'));
        for (int i = 0; i < 5; i++)
        {
            var t = tables.WindowSprites[i];
            _fixed[i] = _root.Add(Sprite(t.Motion, t.X, 0, 0x48));
        }
        for (int i = 0; i < 2; i++)
        {
            _bars[i] = _root.Add(Bar(texture, 0x13, 1));                     // FUN_02155354(0x5F0000, 0x5F0001, 0x13, 1, 0x48)
            _bars[2 + i] = _root.Add(Bar(texture, 0x1B, 10));                // FUN_02155354(0x5F0000, 0, 0x1B, 10, 0x48)
        }
        // order matches the original's: +0x78 = bars[0], +0x80 = bars[2], +0x7C = bars[1], +0x84 = bars[3]
        _status = _stage.Add(Sprite(0x5F0036, 8, 0xB8, 0x48));
        _status.Visible = false;
        if (kind == 4)
        {
            foreach (var w in new Widget[] { _fixed[0], _fixed[1], _bars[0], _bars[1], _bars[2], _bars[3] }.Concat(_icons))
                w.Y = -8 << 12;                                              // FUN_02153684(w, −0x80000)
        }
        _bottomY = kind == 3 ? 0xB8 : 0xC0;
        switch (kind)
        {
            case 1:
                _bottom = _stage.Add(Sprite(0x5F002B, 0x80, 0xE8, 0x48));
                for (int i = 0; i < 14; i++) _digits[i] = _bottom.Add(Sprite(0x5F002C, 0, 0, 0x48));
                break;
            case 2:
                _bottom = _stage.Add(Sprite(0x5F002A, 0xC0, 0xE8, 0x48));
                for (int i = 0; i < 6; i++) _digits[i] = _bottom.Add(Sprite(0x5F002C, 0, 0, 0x48));
                break;
            case 3:
                _bottom = _stage.Add(Sprite(0x5F001D, 0x9C, 0xE0, 0x48));
                _fixed[2].Visible = _fixed[3].Visible = _fixed[4].Visible = false;
                for (int i = 0; i < 6; i++) _digits[i] = _bottom.Add(Sprite(0x5F001E, 0, -0x10, 0x48));
                _colons[0] = _bottom.Add(Sprite(0x5F0029, 0x27, -0x10, 0x48));
                _colons[1] = _bottom.Add(Sprite(0x5F0029, 0x4A, -0x10, 0x48));
                break;
        }
    }

    private SpriteWidget Sprite(int motion, int x, int y, int prio)
    {
        // FUN_021552E4: bank, motion (FUN_02023894 + play), position, DrawPrio, vfunc 0x94(0x1000), shown
        var w = new SpriteWidget(_bank, _motions, motion) { DrawPrio = prio << 12 };
        w.SetPixelPosition(x, y);
        return w;
    }

    private static BattleHudQuadWidget Bar(DsigImage texture, int x, int y)
    {
        var w = new BattleHudQuadWidget(texture) { DrawPrio = 0x48 << 12, Visible = false };
        w.SetPixelPosition(x, y);
        return w;
    }

    private static SpriteWidget? IconWidget(ResourceManager res, AlarArchive chrWin, int id)
    {
        foreach (var e in chrWin.Entries)
        {
            if (e.Kind != (byte)'G') continue;
            var nested = new AlarArchive(chrWin.Read(e));
            if (nested.Find(id, (byte)'@') is null) continue;
            res.Mount(e.Name);                                             // FUN_020101F4("battle/chr/…aar")
            var bank = new DstxBank(res.Read(id, (byte)'@'), t => res.Read(t, (byte)'B'));
            return new SpriteWidget(bank, new AlmtMotionSet(res.Read(id, (byte)'A')), id) { DrawPrio = 0x49 << 12 };
        }
        return null;
    }

    /// <summary>FUN_02154468(window, show): the slide in (from FUN_0214DA44, when the battle starts) or out
    /// (FUN_0214DEAC, at the end).</summary>
    public void Show(bool show) => _task = show ? Task.SlideIn : Task.SlideOut;

    /// <summary>One frame: the window task, then the widgets.</summary>
    public void Update()
    {
        switch (_task)
        {
            case Task.SlideIn:                                               // FUN_02154500
                _root.Y += 5 << 12;
                if (_bottom is not null) _bottom.Y -= 5 << 12;
                if (_root.Y > 0)
                {
                    _root.Y = 0;
                    if (_bottom is not null) _bottom.Y = _bottomY << 12;
                    _task = Task.Kind;
                }
                KindUpdate();
                break;
            case Task.SlideOut:                                              // FUN_021545A0
                _root.Y -= 5 << 12;
                if (_bottom is not null) _bottom.Y += 5 << 12;
                if (_root.Y < -0x28000)
                {
                    _root.Y = -0x28000;
                    if (_bottom is not null) _bottom.Y = (_bottomY + 0x28) << 12;
                    _task = Task.Idle;                                       // 0x02154645: empty
                }
                KindUpdate();
                break;
            case Task.Kind:
                KindUpdate();
                break;
        }
        _stage.Update();
    }

    public void Draw(IScreen top) => _stage.Draw(top);

    /// <summary>0x02171F14[kind].</summary>
    private void KindUpdate()
    {
        switch (Kind)
        {
            case 1:                                                          // FUN_0215465C
            {
                int a = (int)((uint)Work0B8 >> 6), b = (int)((uint)Work0BC >> 6), c = Work0C4 & 0xFF, d = Work0C5 & 0xFF;
                if (c != 0 && (ushort)_recentC != c) { _recentC = c; _recentTimer = 0; }
                if (a != 0 && (ushort)_recentA != (ushort)a) { _recentA = (ushort)a; _recentTimer = 0; }
                if (_recentTimer++ > 0x78) { _recentTimer = 0; _recentC = 0; _recentA = 0; }
                Number(0, 0, 0x5F002C, -0x36, -0x11, 3, _recentC);
                Number(3, 1, 0x5F002C, -0x19, -0xD, 3, d);
                Number(6, 2, 0x5F002C, 0xE, -0x11, 4, _recentA);
                Number(10, 3, 0x5F002C, 0x2E, -0xD, 4, b);
                Timer();
                Main();
                break;
            }
            case 2:                                                          // FUN_02154788
                Number(0, 0, 0x5F002C, -0x25, -0xA, 3, Work01C);
                Number(3, 1, 0x5F002C, 0x1B, -0xA, 3, Work020);
                Timer();
                Main();
                break;
            case 3:                                                          // FUN_021547F0
            {
                int t = Math.Max(0, Time), m = 0, s = 0, cs = 0;            // FUN_0214F90C: −1 → 0
                t = Math.Min(t, 0x57030);
                cs = t % 60 * 100 / 60;
                s = t / 60 % 60;
                m = t / 60 / 60 % 100;
                Number(0, 0, 0x5F001E, 0xE, -0x10, 2, m);
                Number(2, 1, 0x5F001E, 0x31, -0x10, 2, s);
                Number(4, 2, 0x5F001E, 0x54, -0x10, 2, cs);
                Main();
                break;
            }
            case 4:                                                          // FUN_021548B0
                Timer();
                break;
            default:                                                         // FUN_02154648
                Timer();
                Main();
                break;
        }
    }

    /// <summary>FUN_021551D0(window, widgets, base, slot, x, y, digits, value): most significant digit
    /// first; small digits (0x5F002C, 6 px apart) hide leading zeros, big ones (14 px) show them.</summary>
    private void Number(int first, int slot, int baseMotion, int x, int y, int digits, int value)
    {
        value = Math.Clamp(value, 0, BattleHudTables.DigitLimit(digits));
        if ((short)value == _digitPrev[slot]) return;
        _digitPrev[slot] = (short)value;
        int[] d = [value % 10, value / 10 % 10, value / 100 % 10, value / 1000 % 10];
        bool shown = baseMotion != 0x5F002C;
        int step = shown ? 0xE : 6;
        for (int p = digits - 1, w = first; p >= 0; p--, w++, x += step)
        {
            var widget = _digits[w];
            if (p == 0 || shown || d[p] != 0)
            {
                shown = true;
                widget.SetMotion(baseMotion + d[p]);
                widget.SetPixelPosition(x, y);
                widget.Visible = true;
            }
            else widget.Visible = false;
        }
    }

    /// <summary>FUN_021550C8.</summary>
    private void Timer()
    {
        int t = Time;
        if (t != -1) t /= 0x90;
        if (_timerPrev == (sbyte)t) return;
        _timerPrev = (sbyte)t;
        if (t == -1) { _fixed[3].Visible = false; return; }
        t = Math.Clamp(t, 0, 99);
        _fixed[4].SetMotion(0x5F001E + t % 10);
        _fixed[3].SetMotion(0x5F001E + t / 10 % 10);
    }

    /// <summary>FUN_021548BC.</summary>
    private void Main()
    {
        int maxRaw = 0x1000, hp = 0, gauge = 0, level = 0, rank = 0, icon = 0;
        bool infinite = false;
        if (Deck is { Current: { } cur } deck)
        {
            maxRaw = (short)cur.MaxHp;
            hp = (short)cur.Hp;
            gauge = deck.Gauge;
            level = (sbyte)deck.GaugeLevel;
            rank = cur.Rank & 0xFF;
            infinite = deck.GaugeInfinite;
            icon = (sbyte)cur.Index;
        }
        int maxCur = maxRaw;                                                 // +0x9C before the clamp
        if (_iconPrev != (sbyte)icon)
        {
            _iconPrev = (sbyte)icon;
            for (int i = 0; i < _icons.Count; i++) _icons[i].Visible = i == icon;
        }
        if (infinite)
        {
            if (_levelPrev != -1) { _levelPrev = -1; _fixed[1].SetMotion(0x5F0017); }
        }
        else if (_levelPrev != (sbyte)level)
        {
            _levelPrev = (sbyte)level;
            _fixed[1].SetMotion(0x5F0006 + Math.Clamp(level, 0, 0x10));
        }
        if (_hpPrev != hp || _maxPrev != maxCur)
        {
            _hpPrev = hp;
            _maxPrev = maxCur;
            _maxClamped = Math.Clamp(maxCur, 0x1000, 0x4000);
            _width = _maxClamped * 0xC0 / 0x4000;
            int v = Math.Clamp(hp, 0, _maxClamped);
            int fill = v * _width / _maxClamped, empty = _width - fill;
            if (_fillPrev != (short)fill || _emptyPrev != (short)empty)
            {
                _fillPrev = (short)fill;
                _emptyPrev = (short)empty;
                HpBars(fill, empty);
            }
        }
        if (_gaugePrev != gauge)
        {
            _gaugePrev = gauge;
            int g = Math.Clamp(gauge, 0, 0x6400);
            int fill = g * 0x3A / 0x6400, empty = 0x3A - fill;
            if (_gFillPrev != (short)fill || _gEmptyPrev != (short)empty)
            {
                _gFillPrev = (short)fill;
                _gEmptyPrev = (short)empty;
                GaugeBars(fill, empty);
            }
        }
        if (_rankPrev != (sbyte)rank)
        {
            _rankPrev = (sbyte)rank;
            _fixed[0].SetMotion(0x5F001A + rank);
        }
        if (_statusPrev != StatusFlag)
        {
            _statusPrev = StatusFlag;
            _status.Visible = StatusFlag;
        }
        _frame++;
    }

    private void HpBars(int fill, int empty)
    {
        var f = _bars[0];
        if (fill == 0) f.Visible = false;
        else
        {
            f.Clear();
            f.Add(-8, 0, 0, 8, 0x80, 0, 0x100, 0x200);                        // left cap
            f.Add(0, 0, fill, 9, 0, 0, 0x80, 0x240);
            if (empty == 0) f.Add(fill, 0, fill + 8, 8, 0x100, 0, 0x180, 0x200);  // right cap
            f.Visible = true;
        }
        var e = _bars[1];
        if (empty == 0) e.Visible = false;
        else
        {
            e.Clear();
            if (fill == 0) e.Add(-8, 0, 0, 8, 0x80, 0, 0x100, 0x200);
            e.Add(0, 0, empty, 9, 0x180, 0, 0x1A0, 0x240);
            e.Add(empty, 0, empty + 8, 8, 0x100, 0, 0x180, 0x200);
            e.X = (fill + 0x13) << 12;                                       // FUN_021536A4
            e.Visible = true;
        }
    }

    private void GaugeBars(int fill, int empty)
    {
        var f = _bars[2];
        if (fill == 0) f.Visible = false;
        else
        {
            f.Clear();
            if (empty == 0) f.Add(-8, 0, 0, 7, 0x80, 0x200, 0x100, 0x400);
            f.Add(0, 0, fill, 7, 0x100, 0x200, 0x180, 0x400);
            f.Add(fill, 0, fill + 8, 7, 0x400, 0x200, 0x480, 0x400);
            f.X = (0x55 - fill) << 12;                                       // fills from the right
            f.Visible = true;
        }
        var e = _bars[3];
        if (empty == 0) e.Visible = false;
        else
        {
            e.Clear();
            e.Add(-8, 0, 0, 7, 0x80, 0x200, 0x100, 0x400);
            e.Add(0, 0, empty, 7, 0x200, 0, 0x280, 0x200);
            if (fill == 0) e.Add(0x3A, 0, 0x42, 7, 0x400, 0x200, 0x480, 0x400);
            e.Visible = true;
        }
    }
}
