using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov02;

/// <summary>
/// JGalaxyPlanet.cpp (ov02): the planet view on the bottom screen in modes 0/1 (the main engine is on the
/// bottom while the planet modes run, FUN_02151C64 → FUN_02043264(1)).
///
/// Built by JGalaxyPlanet_Create 0x02151544 / FUN_0215202C:
/// - one focusable widget per planet of the galaxy at its map position (planet +0x2C/+0x2E), with one
///   child per stage at the offsets of table 0x0215C228 (by stage count; filled by the static initializer
///   0x0215B688): 1 → (0,0); 2 → (−40,16),(40,16); 3 → (0,32),(−40,0),(40,0); 4 → the same plus (0,−32);
/// - each stage shows its world icon from bank 0x30000 + 0x10·i, i = stage +0x2D − 1 (codes 0x30–0x34 use
///   0x2F), found in the `*_planet.aar` archive whose ALAR group is that bank; motion +2 when the stage is
///   not cleared (FUN_0214DF2C), +1 in the zoomed planet view (FUN_02153B54) and +0 in the overview
///   (FUN_02154680);
/// - locked planets (FUN_0214DE0C) are disabled and their stage icons hidden;
/// - draw priority by map y: lower on the map is in front (0x84 + rank, FUN_0215202C);
/// - focus links: planet +0x3D up, +0x3F down, +0x3C left, +0x3E right (galaxy-local planet indices);
///   stages use the link table 0x0215B024 (by stage count: {left, up, right, down}).
///
/// Layout per frame, FUN_021548F0: with the effective camera C = focus − node/zoom (the "Position" node
/// tweens to 0 over 8 frames after each focus move, FUN_021543AC / FUN_021539D4), each planet p gets
/// dy = trunc(C.y − p.y) and, when |dy| ≤ 0x100: in the zoomed view the focused planet (|dy| ≤ 0x20) is
/// drawn at (p − focus)·zoom with scale 1; any other planet uses t = 0x1C0 − dy, scale = t / 448, position
/// C + (p − C)·t / 448 − focus, times zoom, and for planets below (dy &lt; 0) its stage icons fade to
/// (0x1C0 + dy) / 448. Zoom = 0.6 in the overview, 1.0 in the planet view (+0x344).
///
/// Input: d-pad moves the focus along the links (SE 0x7B/4 from the key bindings 0x4007B, inferred as the
/// move sound); A on a planet (0x02153E8C: SE 0x7B/0) zooms into it (0x021535B0); A on a stage
/// (0x02153EB0: SE 0x7B/2) selects it; B in the planet view (0x02153DE0: SE 0x7B/1) zooms out
/// (0x0215327C); B in the overview (0x02153DA0: SE 0x78/1) asks to leave (dialog 0x7D, not translated:
/// it leaves directly).
///
/// Background (JGalaxyBack_Create 0x021566E0, table 0x0215C570 by galaxy): BG2 (4bpp, priority 3) the
/// star field, scrolling by a "Position" controller from (0, 0) to (256, −256) over 0x400 frames (flags
/// 2, repeat inferred), with the palette animation &lt;name&gt;.bin; BG3 (8bpp 512×512, priority 2) the
/// galaxy picture. The per-galaxy function 0x0215B074[g] is not translated.
/// Not translated: the header/frame sprites (ga_sel_obj 0x11000…, ba_m_obj00 0x12001 digits,
/// FUN_0215384C), the name text widget (+0x20), the Y button, the zoom transition's scale tween.
/// </summary>
public sealed class JGalaxyPlanetView
{
    private static readonly (int X, int Y)[][] StageOffsets =
    [
        [(0, 0)],
        [(-40, 16), (40, 16)],
        [(0, 32), (-40, 0), (40, 0)],
        [(0, 32), (-40, 0), (40, 0), (0, -32)],
    ];

    /// <summary>0x0215B024: stage focus links per stage count, {left, up, right, down} (−1 = none).</summary>
    private static readonly sbyte[][][] StageLinks =
    [
        [[-1, -1, -1, -1]],
        [[-1, -1, 1, -1], [0, -1, -1, -1]],
        [[1, -1, 2, -1], [-1, -1, 2, 0], [1, -1, -1, 0]],
        [[1, 3, 2, -1], [-1, 3, 2, 0], [1, 3, -1, 0], [1, -1, 2, 0]],
    ];

    private static readonly string?[][] Backgrounds =
    [
        ["jgalaxy/j_space00", "jgalaxy/earth01"], ["jgalaxy/j_space00", "jgalaxy/j_space01"],
        ["jgalaxy/j_galaxy00", "jgalaxy/j_galaxy01"], ["jgalaxy/j_black00", "jgalaxy/j_black01"],
        ["jgalaxy/j_planet00", null],
    ];

    private sealed class PlanetEntry
    {
        public int Planet;                       // planet index
        public int MapX, MapY;
        public bool Unlocked;
        public readonly List<(int Stage, SpriteWidget Icon, bool Cleared)> Stages = [];
        public int Scale = 0x1000, Alpha = 0x1000;
        public int X, Y;                         // layout position, 20.12, relative to the centre node
        public int Prio;
    }

    private readonly JGalaxyRules _rules;
    private readonly JusGame _game;
    private readonly List<PlanetEntry> _planets = [];
    private readonly TileBackground _bg2;
    private readonly TileBackground? _bg3;
    private readonly List<PaletteAnimation> _bgAnims;
    private int _scrollFrame;

    public bool Zoomed { get; private set; }     // work +0x330 → +0x56 = 1
    public int Focus { get; private set; }       // galaxy-local planet index (+0x35C via FUN_02153808)
    public int StageFocus { get; private set; }  // stage slot on the focused planet (+0x35E)
    public int Zoom => Zoomed ? 0x1000 : 0x999;
    private int _nodeX, _nodeY, _nodeFromX, _nodeFromY, _nodeFrame = 8;

    public JGalaxyPlanetView(JusGame game, ResourceManager res, AlarArchive main, JGalaxyRules rules)
    {
        _game = game;
        _rules = rules;
        var d = rules.Data;
        int galaxy = rules.Galaxy;
        // archives by ALAR group (stage icon banks 0x30000 + 0x10·i)
        var byGroup = new Dictionary<int, string>();
        foreach (var e in main.Entries)
            if (e.Name.EndsWith("_planet.aar"))
            {
                var nested = new AlarArchive(main.Read(e));
                if (nested.Entries.Count > 0) byGroup[nested.Entries[0].Id] = e.Name;
            }
        var mounted = new HashSet<string>();
        var g = d.Galaxies[galaxy];
        for (int i = 0; i < g.Planets.Length; i++)
        {
            int p = g.Planets[i];
            var pl = d.Planets[p];
            var entry = new PlanetEntry { Planet = p, MapX = (short)pl.MapX, MapY = (short)pl.MapY, Unlocked = rules.PlanetUnlocked(p) };
            foreach (var s in pl.Stages)
            {
                int code = d.Stages[s].Raw[0x2D];
                int idx = code is > 0x2F and < 0x35 ? 0x2F : code - 1;
                int bank = 0x30000 + idx * 0x10;
                if (byGroup.TryGetValue(bank, out var name) && mounted.Add(name)) res.Mount(name);
                bool cleared = rules.StageCleared(s);
                var icon = new SpriteWidget(new DstxBank(res.Read(bank, (byte)'@')), new AlmtMotionSet(res.Read(bank, (byte)'A')),
                    bank + (cleared ? 0 : 2)) { Visible = entry.Unlocked };
                entry.Stages.Add((s, icon, cleared));
            }
            _planets.Add(entry);
        }
        // draw order: sorted by map y, lowest (largest y) in front
        int rank = 0;
        foreach (var e in _planets.OrderByDescending(e => e.MapY)) e.Prio = 0x84 + rank++;
        // background
        var names = Backgrounds[Math.Min(galaxy, Backgrounds.Length - 1)];
        var dig2 = DsigImage.Load(res, names[0] + ".dig");
        _bg2 = new TileBackground(dig2, AltmMap.Load(res, names[0] + ".atm"));
        _bgAnims = PaletteAnimation.Load(dig2, res.Read(names[0] + ".bin"));
        if (names[1] is { } n1) _bg3 = new TileBackground(DsigImage.Load(res, n1 + ".dig"), AltmMap.Load(res, n1 + ".atm"));
        // initial focus: the cursor planet (FUN_02153808 on +0xD7)
        Focus = Math.Max(0, _planets.FindIndex(e => e.Planet == rules.Planet));
        StageFocus = 0;
        Layout();
    }

    public int FocusPlanet => _planets[Focus].Planet;
    public int FocusStage => _planets[Focus].Stages[StageFocus].Stage;

    /// <summary>Planet layout state, for tests: (scale, x, y) of a planet (20.12, relative to the centre).</summary>
    public (int Scale, int X, int Y) PlanetLayout(int planet)
    {
        var e = _planets.First(p => p.Planet == planet);
        return (e.Scale, e.X, e.Y);
    }

    /// <summary>One frame of input; returns the selected stage (A on a stage) or null.</summary>
    public int? HandleInput(out bool leave)
    {
        leave = false;
        var t = _game.Platform.Input.Trigger;
        var sound = _game.Platform.Sound;
        if (!Zoomed)
        {
            var pl = _rules.Data.Planets[FocusPlanet].Raw;
            int link = t.HasFlag(PadButtons.Up) ? (sbyte)pl[0x3D] : t.HasFlag(PadButtons.Down) ? (sbyte)pl[0x3F]
                : t.HasFlag(PadButtons.Left) ? (sbyte)pl[0x3C] : t.HasFlag(PadButtons.Right) ? (sbyte)pl[0x3E] : -1;
            if (link >= 0 && link < _planets.Count && link != Focus)
            {
                sound.PlayEffect(0x7B, 4);
                MoveFocus(link);
            }
            else if (t.HasFlag(PadButtons.A) && _planets[Focus].Unlocked)
            {
                sound.PlayEffect(0x7B, 0);                         // 0x02153E8C
                Zoomed = true;                                    // 0x021535B0
                StageFocus = 0;
                foreach (var s in _planets[Focus].Stages) s.Icon.SetMotion(IconMotion(s, zoomed: true));
            }
            else if (t.HasFlag(PadButtons.B))
            {
                sound.PlayEffect(0x78, 1);                         // 0x02153DA0 (then the dialog 0x7D)
                leave = true;
            }
        }
        else
        {
            var stages = _planets[Focus].Stages;
            var links = StageLinks[stages.Count - 1][StageFocus];
            int next = t.HasFlag(PadButtons.Left) ? links[0] : t.HasFlag(PadButtons.Up) ? links[1]
                : t.HasFlag(PadButtons.Right) ? links[2] : t.HasFlag(PadButtons.Down) ? links[3] : -1;
            if (next >= 0)
            {
                sound.PlayEffect(0x7B, 4);
                StageFocus = next;                                // 0x02154098
            }
            else if (t.HasFlag(PadButtons.A))
            {
                sound.PlayEffect(0x7B, 2);                         // 0x02153EB0
                return stages[StageFocus].Stage;
            }
            else if (t.HasFlag(PadButtons.B))
            {
                sound.PlayEffect(0x7B, 1);                         // 0x02153DE0
                Zoomed = false;                                   // 0x0215327C
                foreach (var s in stages) s.Icon.SetMotion(IconMotion(s, zoomed: false));
            }
        }
        return null;
    }

    private static int IconMotion((int Stage, SpriteWidget Icon, bool Cleared) s, bool zoomed)
        => (s.Icon.MotionId & ~0xF) + (zoomed ? 1 : 0) + (s.Cleared ? 0 : 2);

    /// <summary>FUN_021543AC / FUN_021539D4: the camera moves to the new planet; the centre node starts at
    /// the old offset and tweens back to 0 over 8 frames ('LI').</summary>
    private void MoveFocus(int index)
    {
        var a = _planets[Focus];
        var b = _planets[index];
        _nodeFromX = _nodeX + LinearInterpolator.FxMul((b.MapX - a.MapX) << 12, Zoom);
        _nodeFromY = _nodeY + LinearInterpolator.FxMul((b.MapY - a.MapY) << 12, Zoom);
        _nodeX = _nodeFromX;
        _nodeY = _nodeFromY;
        _nodeFrame = 0;
        Focus = index;
        StageFocus = 0;
        _rules.Planet = b.Planet;
    }

    public void Update()
    {
        if (_nodeFrame < 8)
        {
            _nodeFrame++;
            _nodeX = LinearInterpolator.Vector(_nodeFromX, 0, _nodeFrame, 0, 8);
            _nodeY = LinearInterpolator.Vector(_nodeFromY, 0, _nodeFrame, 0, 8);
        }
        foreach (var e in _planets)
            foreach (var s in e.Stages) s.Icon.Actor.Update();
        foreach (var a in _bgAnims) a.Update();
        _scrollFrame = (_scrollFrame + 1) % 0x400;
        Layout();
    }

    /// <summary>FUN_021548F0.</summary>
    private void Layout()
    {
        int zoom = Zoom;
        var f = _planets[Focus];
        // effective camera (20.12 map units): focus − node / zoom (FUN_02154E54: (−n << 6) / (zoom >> 6))
        int cx = ((-_nodeX) << 6) / (zoom >> 6) + (f.MapX << 12);
        int cy = ((-_nodeY) << 6) / (zoom >> 6) + (f.MapY << 12);
        foreach (var e in _planets)
        {
            int v = cy - (e.MapY << 12);
            int dy = v / 4096;                                   // (v + bias) >> 12: rounds toward zero
            if (dy > 0x100 || dy < -0x100) continue;
            bool near = Zoomed && e == f && dy >= -0x20 && dy <= 0x20;
            if (near || dy == 0)
            {
                e.Scale = 0x1000;
                e.Alpha = 0x1000;
                e.X = LinearInterpolator.FxMul((e.MapX - f.MapX) << 12, zoom);
                e.Y = LinearInterpolator.FxMul((e.MapY - f.MapY) << 12, zoom);
                continue;
            }
            int t = 0x1C0 - dy;
            e.Scale = (int)((float)t / 448f * 4096f);
            if (dy < 0) e.Alpha = (int)((float)(dy + 0x1C0) / 448f * 4096f);
            int px = (int)((float)((e.MapX << 12) - cx) * t) / 0x1C0;
            int py = (int)((float)((e.MapY << 12) - cy) * t) / 0x1C0;
            e.X = LinearInterpolator.FxMul(cx + px - (f.MapX << 12), zoom);
            e.Y = LinearInterpolator.FxMul(cy + py - (f.MapY << 12), zoom);
        }
    }

    public void Draw(IScreen screen)
    {
        screen.Clear(0xFF000000);
        // BG2 scrolls by (256, −256)·frame / 0x400 (the "Position" controller), BG3 in front of it
        int sx = LinearInterpolator.Integer(0, 256, _scrollFrame, 0, 0x400);
        int sy = LinearInterpolator.Integer(0, -256, _scrollFrame, 0, 0x400);
        for (int oy = -256; oy <= 256; oy += 256)
            for (int ox = -256; ox <= 256; ox += 256)
                _bg2.DrawAt(screen, ox + (sx & 255), oy + (sy & 255));
        _bg3?.DrawAt(screen, 0, 0);
        double zoom = Zoom / 4096.0;
        foreach (var e in _planets.OrderByDescending(p => p.Prio))
        {
            if (!e.Unlocked) continue;
            int n = e.Stages.Count;
            double sc = e.Scale / 4096.0;
            for (int k = 0; k < n; k++)
            {
                var (ox, oy) = StageOffsets[n - 1][k];
                var a = e.Stages[k].Icon.Actor;
                a.X = 128 + ((e.X + _nodeX) >> 12) + (int)(ox * (Zoomed ? 1.0 : zoom) * sc);
                a.Y = 96 + ((e.Y + _nodeY) >> 12) + (int)(oy * (Zoomed ? 1.0 : zoom) * sc);
                a.Scale = sc;
                a.Alpha = e.Alpha / 4096.0;
                a.Draw(screen);
            }
        }
    }
}
