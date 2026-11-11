using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov02;

/// <summary>
/// Scene 16, JGalaxy.cpp (overlay 2): JGalaxy_Add 0x0214CD20, reached through jus_Scene16_Create with the
/// scene's Arg (low byte = mode, work +0x56; byte 1 = +0x59).
///
/// Translated: the data load (jgalaxy.aar, jgalaxy.bin), the cursor from the save, the music per galaxy
/// (FUN_0214D394), the fade in (FUN_02073EBC(2, 1)), the galaxy map on the top screen
/// (<see cref="JGalaxyMap"/>, created by mode 0's enter function 0x0214E058 and shown by 0x0214E248), and
/// the leave path FUN_0214D11C (cursor fixups, FUN_02071AFC, music fade, exit code).
///
/// The bottom screen of modes 0/1 is <see cref="JGalaxyPlanetView"/>. Not translated: modes 2–6 (battle
/// mission list, warp, demo). Stand-ins: A on a stage leaves with action 3 (stage info: mode 2's own exit;
/// the mission list and the demo check of mode 5 are skipped), a warp stage rebuilds the view for the
/// target galaxy (instead of the warp modes 3/4), B in the overview leaves with action 0 without the
/// confirmation dialog. The fade out on leaving is inferred (to black, speed 1).
/// </summary>
public sealed class JGalaxyScene : ISceneTask
{
    private enum Phase { FadeIn, Run, FadeOut }

    private readonly JusGame _game;
    private readonly JGalaxyRules _rules;
    private JGalaxyMap? _map;
    private JGalaxyPlanetView? _view;
    private readonly ResourceManager _res;
    private readonly AlarArchive _main;
    private readonly int _mode, _extra;
    private Phase _phase = Phase.FadeIn;
    private int _action;

    public JGalaxyScene(JusGame game, int arg)
    {
        _game = game;
        _mode = arg & 0xFF;                                         // +0x56
        _extra = (arg >> 8) & 0xFF;                                 // +0x59
        var p = game.Platform;
        _res = new ResourceManager(p.Assets);
        _main = _res.Mount("jgalaxy/jgalaxy.aar");
        _rules = new JGalaxyRules(JGalaxyData.Load(_res), game.Globals.Save);
        _rules.StartFromSave();
        game.PlayMusic(JGalaxyRules.GalaxyMusic[_rules.Galaxy], 0);  // FUN_0214D394
        if (_mode <= 1) BuildPlanetModes();
        p.Log($"JGalaxy: mode {_mode}; modes 2–6 (mission list, warp, demo) are not translated");
        game.Fade.Start(FadeKind.FromBlack, 1);
    }

    public bool Finished { get; private set; }
    public JGalaxyRules Rules => _rules;
    public JGalaxyMap? Map => _map;
    public JGalaxyPlanetView? View => _view;

    /// <summary>Mode 0's enter (0x0214E058: JGalaxyMap_Create), create (JGalaxyPlanet_Create) and after
    /// (0x0214E248: map Show) functions.</summary>
    private void BuildPlanetModes()
    {
        _map = new JGalaxyMap(_res, _rules);
        _view = new JGalaxyPlanetView(_game, _res, _main, _rules);
        _map.Show();
    }

    public void Update()
    {
        if (Finished) return;
        switch (_phase)
        {
            case Phase.FadeIn:
                if (_game.Fade.Step()) _phase = Phase.Run;
                break;
            case Phase.Run:
                if (_view is null) { Leave(0); break; }              // modes 2–6: not translated
                int? stage = _view.HandleInput(out bool back);
                if (back) Leave(0);
                else if (stage is { } s) SelectStage(s);
                break;
            case Phase.FadeOut:
                if (_game.Fade.Step()) Close();
                break;
        }
        _map?.Update();
        _view?.Update();
        Draw();
    }

    /// <summary>0x02153EB0 (after its SE): a warp stage switches galaxy (modes 3/4, stand-in: rebuild the
    /// views), any other stage becomes the cursor stage and continues to mode 2 (stand-in: leave for
    /// stage info).</summary>
    private void SelectStage(int stage)
    {
        var d = _rules.Data;
        int warp = d.Stages[stage].WarpPlanet;
        if (warp != -1)
        {
            _rules.Galaxy = d.Planets[warp].Galaxy;
            _rules.Planet = warp;
            _rules.Stage = d.Planets[warp].Stages[0];
            _game.PlayMusic(JGalaxyRules.GalaxyMusic[_rules.Galaxy], 0);
            BuildPlanetModes();
            return;
        }
        _rules.Stage = stage;
        _rules.Planet = d.Stages[stage].Planet;
        Leave(3);
    }

    private void Leave(int action)
    {
        _action = action;                                           // work +0x58
        _game.Fade.Start(FadeKind.ToBlack, 1);
        _phase = Phase.FadeOut;
    }

    /// <summary>FUN_0214D11C.</summary>
    private void Close()
    {
        _rules.Settle(requestSave: _action == 0);
        _game.Platform.Sound.FadeOutMusic(0);                       // FUN_020735E4
        _game.Globals.Director.ExitCode = JGalaxyRules.ExitCode(_action, _mode, _extra);
        Finished = true;
    }

    private void Draw()
    {
        var p = _game.Platform;
        if (_map is not null) _map.Draw(p.TopScreen);
        else p.TopScreen.Clear(0xFF000000);
        if (_view is not null) _view.Draw(p.BottomScreen);
        else p.BottomScreen.Clear(0xFF000000);
    }
}
