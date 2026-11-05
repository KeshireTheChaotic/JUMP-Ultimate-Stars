using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov00;

/// <summary>Scene 0, Copyright.cpp (overlay 0): Copyright_Add 0x0214CD20 and its tasks
/// 0x0214D174 (wait for fade-in), 0x0214D19C (show, skip, hidden input), 0x0214D34C (wait for
/// fade-out, finish).
///
/// The original builds two AL screens: FUN_0203b424(0) "copyright/ganbari" and FUN_0203b414(1)
/// "copyright/nintendo", each a 32x32 ALTM map over a DSIG image, drawn here as native tile
/// backgrounds. Screen mapping: FUN_0203b414 layers are the top screen and FUN_0203b424 the
/// bottom (evidence: Title puts its "space_top" maps visible on 0203b414 and its logo actor on
/// the top display 0203b3e4), so Nintendo is on top and Ganbarion below.
/// The sub-screen widget tweak in the original (widget+0x50: [3]=[4]=0, flags |= 0x31) has no
/// visible effect here and is not reproduced.</summary>
public sealed class CopyrightScene : ISceneTask
{
    /// <summary>Frames the logos stay up before the scene leaves on its own (0xB4).</summary>
    public const int ShowFrames = 0xB4;

    private enum Phase { WaitFadeIn, Show, WaitFadeOut }

    private readonly JusGame _game;
    private readonly TileBackground _top, _bottom;
    private Phase _phase = Phase.WaitFadeIn;
    private int _frames;        // work +0x10
    private int _secret;        // work +0x14: hidden-input progress

    public CopyrightScene(JusGame game)
    {
        _game = game;
        game.Globals.SoftResetEnabled = false;                              // FUN_0206dcdc(0)
        var a = game.Platform.Assets;
        _bottom = new TileBackground(DsigImage.Load(a, "copyright/ganbari.dig"), AltmMap.Load(a, "copyright/ganbari.atm"));
        _top = new TileBackground(DsigImage.Load(a, "copyright/nintendo.dig"), AltmMap.Load(a, "copyright/nintendo.atm"));
        game.Fade.Start(FadeKind.FromWhite, 1);                             // FUN_02073ebc(0, 1)
    }

    public bool Finished { get; private set; }
    /// <summary>Hidden-input progress (0..7); 7 after the effect fired.</summary>
    public int SecretState => _secret;

    public void Update()
    {
        if (Finished) return;
        switch (_phase)
        {
            case Phase.WaitFadeIn:                                          // 0x0214D174
                if (_game.Fade.Step()) _phase = Phase.Show;
                break;
            case Phase.Show:
                Show();
                break;
            case Phase.WaitFadeOut:                                         // 0x0214D34C
                if (_game.Fade.Step())
                {
                    _game.Globals.SoftResetEnabled = true;                  // FUN_0206dcdc(1)
                    Finished = true;
                }
                break;
        }
        _top.Draw(_game.Platform.TopScreen);
        _bottom.Draw(_game.Platform.BottomScreen);
    }

    /// <summary>0x0214D19C.</summary>
    private void Show()
    {
        var input = _game.Platform.Input;
        uint trg = (uint)input.Trigger;
        bool touched = input.TouchTrigger;                                  // touch object vfunc+0x130, bit 0
        _frames++;
        if (_frames > ShowFrames || touched || (trg & 0x8010) != 0)       // Start | A
        {
            _game.Fade.Start(FadeKind.ToBlack, 1);                          // FUN_02073ebc(3, 1)
            _phase = Phase.WaitFadeOut;
        }
        // Hidden input: Right, Up, Left, Down, Right, Left. Each state advances on its button
        // and resets on any other direction.
        switch (_secret)
        {
            case 0: Advance(trg, 0x4, 0xB); break;
            case 1: Advance(trg, 0x1, 0xE); break;
            case 2: Advance(trg, 0x8, 0x7); break;
            case 3: Advance(trg, 0x2, 0xD); break;
            case 4: Advance(trg, 0x4, 0xB); break;
            case 5: Advance(trg, 0x8, 0x7); break;
            case 6:
                _game.Platform.Sound.PlayEffect(0x78, 0xB);                // FUN_0207342c(0x78, 0xB)
                _game.Globals.Session.Unk00 = 1;                            // FUN_02070d40: *0x020AFE40 = 1
                _secret++;
                break;
        }
    }

    private void Advance(uint trg, uint next, uint reset)
    {
        if ((trg & next) != 0) _secret++;
        else if ((trg & reset) != 0) _secret = 0;
    }
}
