using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov07;

/// <summary>
/// STAND-IN for a CommuMenu page that needs DS wireless or Nintendo WFC (every page of the table at
/// 0x021689B4 except CommuMenuTop). It is not a translation of the page's screen: it names the page,
/// asks <see cref="ICommLink"/> for a partner (the native link finds none) and, on A, B or a touch,
/// leaves the way those pages leave when the player cancels or nobody is found:
/// - wireless / download / quiz pages: next page 1, CommuMenuTop (cancel paths 0x0215B060
///   WrlsLeaderSel, 0x02162174 DwldMemberEnt, 0x02163464 QuizLeaderSel, 0x0215CAB4 Suretigai), which
///   reopens with the cursor on the item that led here (+0x14);
/// - page 0x18 CommuMenuWiFiError (0x02164EE8): its retry 0x02165100 → page 0xE when connected, else
///   page 1.
/// Fades are inferred (from black on entry, to black on leaving, as CommuMenuTop does).
/// </summary>
public sealed class CommuStubPage : ISceneTask
{
    private readonly JusGame _game;
    private readonly CommuMenuScene _menu;
    private readonly string _name;
    private readonly int _address;
    private readonly string? _partner;
    private int _phase;                       // 0 fade in, 1 wait, 2 fade out

    public int PageIndex { get; }
    public bool Finished { get; private set; }

    public CommuStubPage(JusGame game, CommuMenuScene menu, int page, string name, int address)
    {
        _game = game;
        _menu = menu;
        PageIndex = page;
        _name = name;
        _address = address;
        _partner = page == CommuMenuScene.PageWiFiError ? null : menu.Comm.FindPartner(page);
        game.Platform.Log($"CommuMenu page 0x{page:X2} {name} (0x{address:X8}): not translated (communication), stand-in");
        game.Fade.Start(FadeKind.FromBlack, 1);
    }

    public void Update()
    {
        if (Finished) return;
        var input = _game.Platform.Input;
        switch (_phase)
        {
            case 0:
                if (_game.Fade.Step()) _phase = 1;
                break;
            case 1:
                if ((input.Trigger & (PadButtons.A | PadButtons.B)) != 0 || input.TouchTrigger)
                {
                    _game.Platform.Sound.PlayEffect(0x78, 1);        // SE_CANCEL (inferred)
                    _menu.Page = PageIndex == CommuMenuScene.PageWiFiError && _menu.Comm.RetryAfterError() ? 0xE : CommuMenuScene.PageTop;
                    _game.Fade.Start(FadeKind.ToBlack, 1);
                    _phase = 2;
                }
                break;
            case 2:
                if (_game.Fade.Step()) Finished = true;
                break;
        }
        Draw();
    }

    private void Draw()
    {
        var p = _game.Platform;
        var top = p.TopScreen;
        top.Clear(0xFF101828);
        top.DrawText(8, 8, $"CommuMenu page 0x{PageIndex:X2}");
        top.DrawText(8, 28, _name);
        top.DrawText(8, 44, $"0x{_address:X8}  (stand-in)", 0xFF9AA4B2);
        var bottom = p.BottomScreen;
        bottom.Clear(0xFF0B1220);
        bottom.DrawText(8, 8, PageIndex == CommuMenuScene.PageWiFiError
            ? "Nintendo Wi-Fi Connection error" : "No DS wireless / Wi-Fi in this port");
        bottom.DrawText(8, 28, _partner is null ? "No partner found." : $"Found: {_partner}", 0xFFFFD166);
        bottom.DrawText(8, 60, "A / B / touch: back", 0xFF9AA4B2);
    }
}
