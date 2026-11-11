using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov01;

/// <summary>
/// Scenes 13 and 45 both call Result::Result_Add 0x02165EA4; scene 13 wrapper
/// is 0x0206EFF0 (parameter byte), while scene 45 wrapper 0x0207037C passes
/// constant mode 4, and its exit 0x02070368 goes to scene 43. Cleanup
/// 0x02166414. Input-mode byte from scene-13 parameter: 0 creates ResultRank(0),
/// nonzero creates ResultRank(1) and SelectStandbyBar (0x02165EA4).
/// Start fade FUN_02073EBC(2,1); cleanup waits for fade completion via
/// FUN_0207382C and writes work +0x95 to DAT_020AFCB8.
/// Result badge tasks at 0x02166250/0x02166284/0x021663B0 hold for 14
/// and 180 ticks respectively. Exit begins 0x021665B4 -> fade to black (3,1).
/// 
/// SelectStandbyBar callbacks 0x02167688 (sets exit 1), 0x021676A0,
/// 0x021676E8 and 0x021676FC all lead to the native exit tasks, sometimes
/// after result bookkeeping 0x02166558. Keyboard A/B controls here are
/// inferred replacements for the native touch widget callbacks.
///
/// STAND-IN: the original ResultRank, ResultMission, background and rank/score
/// artwork require 0x02167724/0x02168548 and unported battle-runtime objects.
/// Unknown match ranks and other per-match numbers are never fabricated.
/// The original BGM chooses 0x30/0x31 from 0x02166058/68/78/88, but because
/// those game-runtime queries are not translated, the scene deliberately does
/// not guess which theme to play. Rank bookkeeping in 0x02166558 is not written
/// into save until its underlying native implementations are ported.
/// </summary>
public sealed class ResultScene : ISceneTask
{
    private enum Phase { FadeIn, Display, FadeOut }
    private readonly JusGame _game;
    private readonly AlftFont _font;
    private readonly int _mode;
    private Phase _phase = Phase.FadeIn;
    private int _frames, _exitCode;

    public ResultScene(JusGame game, int mode)
    {
        _game = game;
        _mode = mode & 0xFF;
        _font = AlftFont.Load(game.Platform.Assets, "font/jskfont.aft");
        _game.Fade.Start(FadeKind.FromBlack, 1);
        _game.Platform.Log("Result: rank graphics, score calculation, victory BGM and battle bookkeeping remain stand-ins");
    }

    public int Mode => _mode;
    public bool Finished { get; private set; }
    public int DisplayFrames => _frames;
    public bool BadgeRevealed => _frames >= 14;            // 0x02166250
    public bool BadgePresentationFinished => _frames >= 194;  // 0x021663B0

    public void Update()
    {
        if (Finished) return;
        switch (_phase)
        {
            case Phase.FadeIn:
                if (_game.Fade.Step()) _phase = Phase.Display;   // 0x02166098
                break;
            case Phase.Display:
                _frames++;
                var trigger = _game.Platform.Input.Trigger;
                if (_frames >= 14)
                {
                    if (trigger.HasFlag(PadButtons.A))
                        Leave(0);                                // 0x021676E8; input inferred
                    else if (trigger.HasFlag(PadButtons.B) && _mode != 0)
                        Leave(1);                                // 0x02167688; input inferred
                }
                break;
            case Phase.FadeOut:
                if (_game.Fade.Step())                     // 0x02166414
                {
                    _game.Platform.Sound.FadeOutMusic(0);
                    _game.Globals.Director.ExitCode = _exitCode;
                    Finished = true;
                }
                break;
        }
        Draw();
    }

    private void Leave(int code)
    {
        _exitCode = code;
        _game.Fade.Start(FadeKind.ToBlack, 1);              // 0x021665B4
        _phase = Phase.FadeOut;
    }

    private void Draw()
    {
        var top = _game.Platform.TopScreen;
        var bottom = _game.Platform.BottomScreen;
        top.Clear(0xFF000000);
        bottom.Clear(0xFF000000);
        var rank = new TextCanvas(_font, 248, 96);
        rank.Print("Battle Result");
        rank.NewLine();
        rank.Print(_mode == 0 ? "Result Rank" : "Result Summary");
        rank.NewLine();
        rank.Print("Rank/score data pending");
        rank.Draw(top, 8, 16);

        var details = new TextCanvas(_font, 248, 128);
        details.Print("Results");
        details.NewLine();
        details.Print(BadgeRevealed ? "Player results" : "Presenting...");
        details.NewLine();
        details.Print(BadgePresentationFinished ? "Presentation complete" : " ");
        details.Draw(bottom, 8, 12);
        var control = new TextCanvas(_font, 248, 24);
        control.Print(_frames >= 14 ? (_mode == 0 ? "A: Continue" : "A: Continue  B: Back") : " ");
        control.Draw(bottom, 8, 162);
    }
}
