using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov05;

/// <summary>
/// Scene 33, KomaIBook.cpp (overlay 5): KomaBook_Add 0x0215EFA0, reached through jus_Scene33_Create 0x0206FCA8
/// (which first runs FUN_0207062c = <c>Session.ResetSlots()</c>). The exit (0x0206E5D0) continues to Next and
/// reads no exit code.
///
/// Translated: work 0x1C; ComicDeck in mode 1 (owned-koma filter 0x0214D5C0, save +0x8F4); KomaState and
/// KomaList both in mode 2 (the koma book); music 6 (FUN_020734e0(6), FUN_0207361c(6, 0)); fade from black,
/// speed 1. KomaList callback FUN_0215f0fc: event 0 arg 0 = leave (FUN_0215f20c: fade to black, speed 1 →
/// FUN_0215f234: stop the music, free everything); arg 2 = KomaState page (FUN_02154efc); event 1 = the cursor
/// moved, KomaState shows that koma (FUN_02155064).
///
/// Stand-in: the KomaList / KomaState UIs (see <see cref="DeckMakeScene"/>) are not translated; the bottom
/// screen lists the owned koma names, the top screen shows the selected koma's name. Up/Down move, B leaves
/// (inferred: the list's back button).
/// </summary>
public sealed class KomaBookScene : ISceneTask
{
    private enum Phase { FadeIn, List, FadeOut }

    private readonly JusGame _game;
    private readonly KomaText _names;
    private readonly AlftFont _font;
    private readonly List<KomaRecord> _owned;
    private Phase _phase = Phase.FadeIn;
    private int _cursor;

    public KomaBookScene(JusGame game)
    {
        _game = game;
        var assets = game.Platform.Assets;
        var komas = KomaTable.Load(assets);
        _names = KomaText.Load(assets);
        _font = AlftFont.Load(assets, "font/jskfont.aft");
        _owned = [.. komas.Records.Where(k => game.Globals.Save.KomaOwned(k.Index))];
        game.Platform.Log("KomaBook: KomaList/KomaState are stand-ins");
        game.PlayMusic(6, 0);
        game.Fade.Start(FadeKind.FromBlack, 1);                // FUN_02073ebc(2, 1)
    }

    public bool Finished { get; private set; }
    public int Cursor => _cursor;
    public IReadOnlyList<KomaRecord> OwnedKoma => _owned;

    public void Update()
    {
        if (Finished) return;
        switch (_phase)
        {
            case Phase.FadeIn:
                if (_game.Fade.Step()) _phase = Phase.List;      // FUN_0215f1c4
                break;
            case Phase.List:
                uint trg = (uint)_game.Platform.Input.Trigger;
                if ((trg & 0x1) != 0 && _cursor > 0) _cursor--;
                else if ((trg & 0x2) != 0 && _cursor < _owned.Count - 1) _cursor++;
                if ((trg & 0x20) != 0) ListEvent(0, 0);
                break;
            case Phase.FadeOut:
                if (_game.Fade.Step())
                {
                    _game.Platform.Sound.FadeOutMusic(0);       // FUN_020735e4
                    Finished = true;
                }
                break;
        }
        Draw();
    }

    /// <summary>FUN_0215f0fc (event 0).</summary>
    public void ListEvent(int ev, int arg)
    {
        if (ev == 0 && arg == 0)
        {
            _game.Fade.Start(FadeKind.ToBlack, 1);             // FUN_0215f20c
            _phase = Phase.FadeOut;
        }
    }

    private void Draw()
    {
        var p = _game.Platform;
        p.TopScreen.Clear(0xFF202020);
        if (_owned.Count > 0)
        {
            var c = new TextCanvas(_font, 240, 16);
            c.Print(_names.NameBytes(_owned[_cursor].Index));
            c.Draw(p.TopScreen, 8, 88);
        }
        var s = p.BottomScreen;
        s.Clear(0xFF000000);
        int first = Math.Max(0, _cursor - 4);
        for (int i = first; i < Math.Min(_owned.Count, first + 10); i++)
        {
            var c = new TextCanvas(_font, 200, 16);
            c.Print(_names.NameBytes(_owned[i].Index));
            int y = 8 + (i - first) * 17;
            c.Draw(s, 32, y);
            if (i == _cursor) s.DrawText(16, y, ">");
        }
    }
}
