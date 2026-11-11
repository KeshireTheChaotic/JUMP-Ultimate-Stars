using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov05;

/// <summary>
/// Stand-in for the ov12 CommonWindow (CommonWindow_Create 0x021BA49C) as DeckMake uses it:
/// FUN_021bac28(window, id) shows message <c>id</c> of bin/commwin.bin, FUN_021bad2c is "closed",
/// FUN_021bad10 the answer (+0xA0).
/// Translated: the text comes from commwin.bin; answers: a chosen button gives its index with SE 0x78/0
/// (FUN_021bbc5c event 4); B gives 1 on a two-button window and 2 otherwise (FUN_021bbc20, then SE 0x78 —
/// the decompiler dropped the SE argument; 1 is inferred).
/// Stand-in (labelled): the window art (common/win_c00.dig), its open/close animation and the button
/// widgets are not ported; the box is a plain panel, the buttons are drawn as numbered markers, Left/Right
/// move between them, an info window (kind 3) closes on A/B/touch (inferred).
/// </summary>
public sealed class Ov05MessageWindow
{
    private readonly JusGame _game;
    private readonly CommWinMessages _messages;
    private readonly AlftFont _font;
    private int _id = -1, _cursor;

    public Ov05MessageWindow(JusGame game, CommWinMessages messages, AlftFont font)
    {
        _game = game;
        _messages = messages;
        _font = font;
    }

    /// <summary>+0xA3: a message is up.</summary>
    public bool Open { get; private set; }
    /// <summary>+0xA0.</summary>
    public int Answer { get; private set; }
    public int MessageId => _id;
    /// <summary>Buttons: kind 1 → 2, kind 2 → 3, others none (FUN_021bb6dc).</summary>
    public int Buttons => _id < 0 ? 0 : _messages.Kind(_id) switch { 1 => 2, 2 => 3, _ => 0 };

    /// <summary>FUN_021bac28.</summary>
    public void Show(int id)
    {
        _id = id;
        _cursor = 0;
        Answer = 0;
        Open = true;
    }

    /// <summary>FUN_021bad2c: true once the window has closed.</summary>
    public bool Closed => !Open;

    public void Update()
    {
        if (!Open) return;
        var input = _game.Platform.Input;
        uint trg = (uint)input.Trigger;
        int n = Buttons;
        if (n == 0)
        {
            if ((trg & 0x30) != 0 || input.TouchTrigger) Open = false;
            return;
        }
        if ((trg & 0x8) != 0 && _cursor > 0) _cursor--;
        else if ((trg & 0x4) != 0 && _cursor < n - 1) _cursor++;
        if ((trg & 0x10) != 0)
        {
            Answer = _cursor;
            _game.Platform.Sound.PlayEffect(0x78, 0);
            Open = false;
        }
        else if ((trg & 0x20) != 0)
        {
            Answer = n == 2 ? 1 : 2;
            _game.Platform.Sound.PlayEffect(0x78, 1);
            Open = false;
        }
    }

    public void Draw(IScreen screen)
    {
        if (!Open) return;
        const int x0 = 16, y0 = 56, w = 224, h = 80;
        for (int y = y0; y < y0 + h; y++)
            for (int x = x0; x < x0 + w; x++)
                screen.Pixels[y * 256 + x] = 0xFF101830;
        int lines = _messages.LineCount(_id);
        var canvas = new TextCanvas(_font, w - 16, 16 * Math.Max(1, lines)) { Alignment = 2 };
        for (int i = 0; i < lines; i++)
        {
            canvas.CursorX = 0;
            canvas.CursorY = i * 16;
            canvas.Print(_messages.Line(_id, i));
        }
        canvas.Draw(screen, x0 + 8, y0 + 6);
        int n = Buttons;
        for (int i = 0; i < n; i++)
            screen.DrawText(x0 + 40 + i * 64, y0 + h - 18, (i == _cursor ? ">" : " ") + (i + 1), 0xFFFFFFFF);
    }
}
