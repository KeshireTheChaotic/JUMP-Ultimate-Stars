using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov02;

/// <summary>
/// JGalaxyMap.cpp (ov02): the galaxy map on the sub engine. In the planet modes the screens are swapped
/// (JGalaxyPlanet FUN_02151C64 → FUN_02043264(1)), so it is on the top screen.
///
/// JGalaxyMap_Create 0x02150B4C:
/// - BG3 (8bpp, priority 3) = jgalaxy/map0N.dig/.atm (FUN_02156D08), N = the number of reachable galaxies
///   (<see cref="JGalaxyRules.ReachableGalaxies"/>).
/// - Sprites from bank 0x50000 (jgalaxy/map_obj.aar) on display 0x0203B3F4, children of one node, by
///   motion id and draw priority (higher = further back):
///   title 0x50000 + g (0xE1) slides from (−128, 0) to (0, 0) ("Position" IPMV, 8 frames, flags 3);
///   0x50005 + 2g (0xE5) at (256, 192); 0x5000C + 2g (0xE3), 0x5000B (0xE2) and 0x50016 + 2g (+1 when g is
///   below the reachable count; 0xE4) on the current galaxy; 0x5000A (0xE5) on galaxy 0 and on each reachable
///   galaxy.
/// - Galaxy positions (static initializer 0x0215B498, table 0x0215C11C): (27, 157), (82, 157), (111, 95),
///   (191, 95), (220, 33).
/// Show (0x02151288) and Hide (0x02151474) switch the title and markers when the planet view zooms.
/// </summary>
public sealed class JGalaxyMap
{
    public static readonly (int X, int Y)[] GalaxyPositions = [(27, 157), (82, 157), (111, 95), (191, 95), (220, 33)];
    public const int TitleHiddenX = -128;

    private readonly JGalaxyRules _rules;
    private readonly TileBackground _bg;
    private readonly Stage _stage = new();
    private readonly SpriteWidget _title, _corner, _here, _ring, _mark;
    private bool _shown;                          // +0x21

    public int Reachable { get; }                 // +0x22
    public int MapIndex => Reachable;
    public SpriteWidget Title => _title;
    public IReadOnlyList<SpriteWidget> Dots { get; }

    public JGalaxyMap(ResourceManager res, JGalaxyRules rules)
    {
        _rules = rules;
        Reachable = rules.ReachableGalaxies();
        string map = $"jgalaxy/map0{Math.Min(Reachable, 2)}";
        _bg = new TileBackground(DsigImage.Load(res, map + ".dig"), AltmMap.Load(res, map + ".atm"));
        res.Mount("jgalaxy/map_obj.aar");
        var bank = new DstxBank(res.Read(0x50000, (byte)'@'));
        var motions = new AlmtMotionSet(res.Read(0x50000, (byte)'A'));
        var root = _stage.Add(new Widget());
        SpriteWidget Make(int motion, int prio, (int X, int Y) at)
        {
            var w = root.Add(new SpriteWidget(bank, motions, motion) { DrawPrio = prio << 12 });
            w.SetPixelPosition(at.X, at.Y);
            return w;
        }
        int g = rules.Galaxy;
        _title = Make(0x50000 + g, 0xE1, (TitleHiddenX, 0));
        _title.Attach(Tween.Position(_title, 0, 0, 8, 3, repeat: false));
        _corner = Make(0x50005 + 2 * g, 0xE5, (256, 192));
        _here = Make(0x5000C + 2 * g, 0xE3, GalaxyPositions[g]);
        _ring = Make(0x5000B, 0xE2, GalaxyPositions[g]);
        _mark = Make(0x50016 + 2 * g + (g < Reachable ? 1 : 0), 0xE4, GalaxyPositions[g]);
        var dots = new List<SpriteWidget>();
        for (int i = 0; i <= Reachable; i++) dots.Add(Make(0x5000A, 0xE5, GalaxyPositions[i]));
        Dots = dots;
    }

    /// <summary>0x02151288: bring the title and markers back for the current galaxy (only when hidden).
    /// The original uses 0x50005 + g here (not + 2g as at creation).</summary>
    public void Show()
    {
        if (_shown) return;
        int g = _rules.Galaxy;
        _title.SetMotion(0x50000 + g);
        _title.SetPixelPosition(TitleHiddenX, 0);
        RestartTitle(0, 0);
        _corner.Visible = true;
        _corner.SetMotion(0x50005 + g);
        _ring.Visible = true;
        _ring.SetPixelPosition(GalaxyPositions[g].X, GalaxyPositions[g].Y);
        _mark.Visible = true;
        _mark.SetPixelPosition(GalaxyPositions[g].X, GalaxyPositions[g].Y);
        _mark.SetMotion(0x50016 + 2 * g + (g < Reachable ? 1 : 0));
        _here.SetMotion(0x5000C + 2 * g);
        _here.SetPixelPosition(GalaxyPositions[g].X, GalaxyPositions[g].Y);
        _shown = true;
    }

    /// <summary>0x02151474: slide the title out and hide the markers.</summary>
    public void Hide()
    {
        _title.SetPixelPosition(0, 0);
        RestartTitle(TitleHiddenX, 0);
        _corner.Visible = _ring.Visible = _mark.Visible = false;
        _here.SetMotion(0x5000D + 2 * _rules.Galaxy);
        _shown = false;
    }

    /// <summary>FUN_02013C48: point the title's "Position" controller at a new target from where it is.</summary>
    private void RestartTitle(int x, int y)
    {
        foreach (var c in _title.Controllers.ToArray()) _title.Detach(c);
        _title.Attach(Tween.Position(_title, x << 12, y << 12, 8, 3, repeat: false));
    }

    public void Update() => _stage.Update();

    public void Draw(IScreen screen)
    {
        screen.Clear(0xFF000000);
        _bg.DrawAt(screen, 0, 0);
        _stage.Draw(screen);
    }
}
