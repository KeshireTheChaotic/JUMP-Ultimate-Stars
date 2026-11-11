using Jus.Game.Assets;

namespace Jus.Game.Scenes.Ov02;

/// <summary>
/// The J Galaxy rules that do not depend on the scene's widgets (JGalaxy.cpp / JGalaxyMap.cpp, ov02):
/// unlock checks, the cursor (galaxy / planet / stage / mission), the music per galaxy and the exit code.
/// </summary>
public sealed class JGalaxyRules(JGalaxyData data, SaveWork save)
{
    /// <summary>0x0215AFE0: BGM per galaxy (FUN_0214D394 plays it with FUN_0207361C).</summary>
    public static readonly byte[] GalaxyMusic = [8, 8, 9, 10, 11];

    public JGalaxyData Data => data;

    /// <summary>FUN_0214DF2C: a stage counts as cleared when it is a warp (+0x2F ≠ −1) or every one of its
    /// missions is cleared (save +0x3DCC bit 0).</summary>
    public bool StageCleared(int stage)
    {
        var s = data.Stages[stage];
        if (s.WarpPlanet != -1) return true;
        foreach (var m in s.Missions)
            if (!save.MissionCleared(m)) return false;
        return true;
    }

    /// <summary>FUN_0214DEDC: every stage of the planet is cleared.</summary>
    public bool PlanetCleared(int planet) => data.Planets[planet].Stages.All(s => StageCleared(s));

    /// <summary>FUN_0214DE0C: the planet can be visited. Unlock kind (+0x43): 0 always; 1 when the
    /// planets named in +0x30 (−1 = unused) are all cleared; 2 when save bit +0x30 (+0xA7C array) is set;
    /// 3 when more koma than +0x30 are owned.</summary>
    public bool PlanetUnlocked(int planet)
    {
        var p = data.Planets[planet];
        switch (p.UnlockKind)
        {
            case 0: return true;
            case 1:
                // the original evaluates FUN_0214DEDC with each argument as the planet
                foreach (var a in p.UnlockArgs)
                    if (a != -1 && !PlanetCleared(a)) return false;
                return true;
            case 2: return save.UnlockBit(p.UnlockArgs[0]);
            case 3: return p.UnlockArgs[0] < save.KomaOwnedCount();
            default: return false;
        }
    }

    /// <summary>JGalaxyMap_Create: how many galaxies after the first are reachable — galaxy g counts when
    /// one of its unlocked planets has a stage warping to a planet of a later galaxy; the count stops at the
    /// first galaxy without one (only galaxies 0..count−2 are tested). It picks jgalaxy/map00..02 and the
    /// map markers.</summary>
    public int ReachableGalaxies()
    {
        int count = 0;
        for (int g = 0; g < data.Galaxies.Count - 1; g++)
        {
            bool onward = false;
            foreach (var p in data.Galaxies[g].Planets)
            {
                if (!PlanetUnlocked(p)) continue;
                foreach (var s in data.Planets[p].Stages)
                {
                    int warp = data.Stages[s].WarpPlanet;
                    if (warp != -1 && data.Planets[p].Galaxy < data.Planets[warp].Galaxy) { onward = true; break; }
                }
            }
            if (!onward) break;
            count++;
        }
        return count;
    }

    /// <summary>The cursor (work +0x4C mission, +0x53 stage, +0x52 planet, +0x51 galaxy).</summary>
    public int Mission { get; set; }
    public int Stage { get; set; }
    public int Planet { get; set; }
    public int Galaxy { get; set; }

    /// <summary>JGalaxy_Add: the cursor starts from the saved mission (save +0x3E5C): its stage (+0xA), that
    /// stage's planet (+0x2C) and the planet's galaxy (+0x42).</summary>
    public void StartFromSave()
    {
        Mission = save.CurrentMission;
        Stage = data.Missions[Mission].Stage;
        Planet = data.Stages[Stage].Planet;
        Galaxy = data.Planets[Planet].Galaxy;
    }

    /// <summary>FUN_0214D11C, on leaving: make the cursor consistent from the galaxy down (a planet outside
    /// the galaxy becomes the galaxy's first planet, a stage outside the planet the planet's first stage, a
    /// mission outside the stage the stage's first mission), then store the mission (FUN_02071AFC; with
    /// <paramref name="requestSave"/> = work +0x58 == 0, i.e. going back to the menu).</summary>
    public void Settle(bool requestSave)
    {
        if (Galaxy != data.Planets[Planet].Galaxy) Planet = data.Galaxies[Galaxy].Planets[0];
        if (Planet != data.Stages[Stage].Planet) Stage = data.Planets[Planet].Stages[0];
        if (Stage != data.Missions[Mission].Stage) Mission = data.Stages[Stage].Raw[0x31];   // +0x31 even for a warp stage with no missions
        save.SetCurrentMission(Mission, requestSave);
    }

    /// <summary>FUN_0214D11C: the exit code = action (work +0x58) | mode (+0x56) &lt;&lt; 4 | +0x59 &lt;&lt; 8.
    /// The scene-16 exit (Exit_0206f088) reads action 0 = back to the menu (autosave), 1 = scene 0x1D,
    /// 2 = deck select → battle, 3 = stage info (scene 17).</summary>
    public static int ExitCode(int action, int mode, int extra) => (action & 0xFF) | (mode & 0xFF) << 4 | (extra & 0xFF) << 8;
}
