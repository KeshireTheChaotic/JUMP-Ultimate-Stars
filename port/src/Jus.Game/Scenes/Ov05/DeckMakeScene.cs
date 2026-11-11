using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov05;

/// <summary>
/// Scene 9, DeckMake.cpp (overlay 5): DeckMake_Add 0x0214E6DC, reached through jus_Scene09_Create 0x0206EC18
/// (which first runs FUN_0207062c = <c>Session.ResetSlots()</c> unless director +0x17 is set) with
/// scene 9's Arg.
///
/// Translated (work 0x44 bytes):
/// - Arg: +0x20 = low byte (0 = new deck, else edit the save deck chosen in DeckSelect, battle block +0x24),
///   +0x24 = byte 1 (1 = coming back from / going to the test battle).
/// - Deck source: the temporary deck 0x020AFF4C when +0x24 = 1 or +0x20 = 0, else save deck
///   [0x020AFEB4] (FUN_02070d14 / FUN_02071f10); loaded with FUN_020769cc (<see cref="ComicDeck.Load"/>).
/// - Music 4 (FUN_020734e0(4), FUN_0207361c(4, 0)), SE archive 0x79 (FUN_02073744; the native player loads
///   on demand), fade from black, speed 1 (FUN_02073ebc(2, 1)); the task FUN_0214eb04 waits for the fade.
/// - KomaList callback FUN_0214e8e0 (event, arg): event 0 = a list button: arg 0 finish (FUN_0214ed2c),
///   1 edit (FUN_0214eff0 → KomaEdit, SE 0x78/6 in FUN_0214f020), 2 state page (FUN_02154efc), 3 state view
///   (FUN_0214f24c), 4 test battle (FUN_0214eee4); event 1 = cursor moved (KomaState shows the koma);
///   event 2 = koma chosen (+0xC entry, +0x34 id) → edit.
/// - Finish FUN_0214ed2c: a usable deck (FUN_0207879c &amp; 0x1F = 0) asks message 99 ("leave Deck Making
///   mode — save?"); otherwise message 0xD (a kind missing), 0xE (no leader seal) or 0xF (both) first
///   (FUN_0214ede0), then 99. Answer (FUN_0214ee40): 0 = save and leave, 1 = leave, 2 = back to the list.
/// - Test battle FUN_0214eee4: usable → remember the list state (FUN_021539e8) and leave with +0x24 = 1;
///   otherwise the same message, then back to the list (FUN_0214ef88).
/// - Leave FUN_0214eb4c / FUN_0214eb78: +0x24 = arg, fade to black, speed 1; cleanup FUN_0214eba0: store
///   the page (FUN_02076bbc) into the temporary deck (+0x24 = 1), or, when saving, into a new save deck
///   (FUN_02071f20 append, nothing when 0x32 exist) or the edited one, and set the save-changed flag
///   (FUN_02070f38); stop the music (FUN_020735e4); exit code = +0x20 | +0x24 &lt;&lt; 8.
///
/// Stand-ins (clearly not the original UI): KomaList (KomaList_Create 0x0214F598, deckmake list00/01/02
/// art, text list FUN_02151888), KomaState (KomaState_Create 0x021546C8, top screen) and KomaEdit
/// (KomaEdit_Create 0x02157C04) are large ov12-widget UIs that are not translated. In their place:
/// bottom screen = the list00 background with a plain list of the owned koma (save +0x8F4, the mode-1 filter
/// 0x0214D5C0; sorted by id — the original's key adds a per-series rank from arm9 table 0x02092470) and a
/// cursor; top screen = the deck page (5×4 cells of 48 px as in ComicDeck_DispKomaCreate's 0x30 step) as
/// coloured cells with names. Keys: list — Up/Down move, A edit with that koma, B finish, Select test battle;
/// edit — d-pad moves the cell cursor, A places, X removes, L puts the leader seal, B back to the list.
/// The koma art (koma/xx_NN.dtx) needs the series-prefix table 0x0209E840 (arm9.bin), not available as data.
/// </summary>
public sealed class DeckMakeScene : ISceneTask
{
    private enum Phase { FadeIn, List, Edit, Message, FadeOut }
    private enum Pending { None, FinishQuestion, ToList }

    private readonly JusGame _game;
    private readonly int _mode;           // +0x20
    private int _test;                    // +0x24
    private bool _save;                   // +0x42
    private readonly ComicDeck _deck;     // +8
    private readonly KomaText _names;
    private readonly AlftFont _font;
    private readonly Ov05MessageWindow _window;
    private readonly TileBackground? _listBg;
    private readonly List<KomaRecord> _owned;
    private Phase _phase = Phase.FadeIn;
    private Pending _afterMessage;
    private int _listCursor, _cellX, _cellY;
    private KomaRecord? _chosen;          // +0xC / +0x34

    public DeckMakeScene(JusGame game, int arg)
    {
        _game = game;
        _mode = arg & 0xFF;
        _test = (arg >> 8) & 0xFF;
        var assets = game.Platform.Assets;
        _deck = new ComicDeck(KomaTable.Load(assets), KomaShapes.Load(assets));
        _names = KomaText.Load(assets);
        _font = AlftFont.Load(assets, "font/jskfont.aft");
        _window = new Ov05MessageWindow(game, CommWinMessages.Load(assets), _font);
        _deck.Load(SourceRecord());
        // mode-1 list filter 0x0214D5C0: koma owned in the save (bit array +0x8F4)
        _owned = [.. _deck.Komas.Records.Where(k => game.Globals.Save.KomaOwned(k.Index))];
        try
        {
            var res = new ResourceManager(assets);
            res.Mount("deckmake/deckmake.aar");
            _listBg = new TileBackground(DsigImage.Load(res, "deckmake/list00.dig"), AltmMap.Load(res, "deckmake/list00.atm"));
        }
        catch (Exception e) when (e is FileNotFoundException or InvalidDataException)
        {
            game.Platform.Log($"DeckMake: list background unavailable ({e.Message})");
        }
        game.Platform.Log("DeckMake: KomaList/KomaState/KomaEdit are stand-ins; deck model, messages and save flow are translated");
        game.PlayMusic(4, 0);                                  // FUN_020734e0(4), FUN_0207361c(4, 0)
        game.Fade.Start(FadeKind.FromBlack, 1);                // FUN_02073ebc(2, 1)
    }

    public bool Finished { get; private set; }
    public ComicDeck Deck => _deck;
    public int ListCursor => _listCursor;
    public IReadOnlyList<KomaRecord> OwnedKoma => _owned;
    public Ov05MessageWindow Window => _window;
    public (int X, int Y) EditCell => (_cellX, _cellY);
    public bool Editing => _phase == Phase.Edit;

    /// <summary>The record DeckMake_Add loads.</summary>
    private byte[] SourceRecord()
    {
        var g = _game.Globals;
        if (_test == 1 || _mode == 0) return DeckSaveData.TempDeck(g);
        return DeckSaveData.Deck(g.Save.Image.Data, g.Battle.I32(0x24)).ToArray();
    }

    public void Update()
    {
        if (Finished) return;
        switch (_phase)
        {
            case Phase.FadeIn:
                if (_game.Fade.Step()) _phase = Phase.List;      // FUN_0214eb04
                break;
            case Phase.List:
                ListInput();
                break;
            case Phase.Edit:
                EditInput();
                break;
            case Phase.Message:
                _window.Update();
                if (_window.Closed) AfterMessage();
                break;
            case Phase.FadeOut:
                if (_game.Fade.Step()) Cleanup();
                break;
        }
        Draw();
    }

    // ---- KomaList stand-in, feeding the translated callback FUN_0214e8e0 ----

    private void ListInput()
    {
        uint trg = (uint)_game.Platform.Input.Trigger;
        if (_owned.Count > 0)
        {
            if ((trg & 0x1) != 0 && _listCursor > 0) _listCursor--;
            else if ((trg & 0x2) != 0 && _listCursor < _owned.Count - 1) _listCursor++;
        }
        if ((trg & 0x10) != 0 && _owned.Count > 0) ListEvent(2, 0, _owned[_listCursor]);
        else if ((trg & 0x20) != 0) ListEvent(0, 0, null);
        else if ((trg & 0x4000) != 0) ListEvent(0, 4, null);
    }

    /// <summary>FUN_0214e8e0 (the parts that do not need KomaState/KomaEdit).</summary>
    public void ListEvent(int ev, int arg, KomaRecord? entry)
    {
        if (ev == 0)
        {
            if (arg == 0) Finish();
            else if (arg == 4) TestBattle();
            else if (arg == 1) EnterEdit();
        }
        else if (ev == 2)
        {
            _chosen = entry;
            EnterEdit();
        }
    }

    /// <summary>FUN_0214eff0 → FUN_0214f020: KomaEdit opens with the chosen koma (SE 0x78/6).</summary>
    private void EnterEdit()
    {
        _game.Platform.Sound.PlayEffect(0x78, 6);
        _phase = Phase.Edit;
    }

    // ---- KomaEdit stand-in over the translated deck model ----

    private void EditInput()
    {
        uint trg = (uint)_game.Platform.Input.Trigger;
        if ((trg & 0x1) != 0 && _cellY > 0) _cellY--;
        else if ((trg & 0x2) != 0 && _cellY < 3) _cellY++;
        else if ((trg & 0x8) != 0 && _cellX > 0) _cellX--;
        else if ((trg & 0x4) != 0 && _cellX < 4) _cellX++;
        if ((trg & 0x10) != 0 && _chosen is { } k)
        {
            uint r = _deck.PlaceAndUpdate(k.Index, _cellX, _cellY, 0);
            _game.Platform.Sound.PlayEffect(0x78, r == ComicDeck.PlaceOk ? 0 : 2);   // stand-in feedback (inferred)
        }
        else if ((trg & 0x40) != 0) _deck.Remove(_cellX, _cellY);
        else if ((trg & 0x100) != 0) _deck.Seal(0, _cellX, _cellY);
        else if ((trg & 0x20) != 0) _phase = Phase.List;                              // FUN_0214f130: back to KomaList
    }

    // ---- translated flow ----

    private static int ValidityMessage(int v) => (v & 0x10) == 0 ? 0xD : (v & 0xF) == 0 ? 0xE : 0xF;

    /// <summary>FUN_0214ed2c.</summary>
    private void Finish()
    {
        int v = _deck.Validity();
        if ((v & 0x1F) == 0) ShowMessage(99, Pending.FinishQuestion);
        else ShowMessage(ValidityMessage(v), Pending.FinishQuestion);             // FUN_0214ede0 then shows 99
    }

    /// <summary>FUN_0214eee4.</summary>
    private void TestBattle()
    {
        int v = _deck.Validity();
        if ((v & 0x1F) == 0) Leave(1);                                            // FUN_021539e8 keeps the list state (stand-in: none)
        else ShowMessage(ValidityMessage(v), Pending.ToList);                     // FUN_0214ef88 → back to the list
    }

    private void ShowMessage(int id, Pending then)
    {
        _window.Show(id);
        _afterMessage = then;
        _phase = Phase.Message;
    }

    private void AfterMessage()
    {
        if (_afterMessage == Pending.ToList) { _phase = Phase.List; return; }
        if (_window.MessageId != 99) { ShowMessage(99, Pending.FinishQuestion); return; }   // FUN_0214ede0
        switch (_window.Answer)                                                   // FUN_0214ee40
        {
            case 0: _save = true; Leave(0); break;
            case 1: Leave(0); break;
            default: _phase = Phase.List; break;                                  // FUN_0214fe9c / FUN_0214eeb8
        }
    }

    /// <summary>FUN_0214eb4c + FUN_0214eb78.</summary>
    private void Leave(int test)
    {
        _test = test;
        _game.Fade.Start(FadeKind.ToBlack, 1);
        _phase = Phase.FadeOut;
    }

    /// <summary>FUN_0214eba0.</summary>
    private void Cleanup()
    {
        var g = _game.Globals;
        byte[]? image = g.Save.Image.Data;
        if (_test == 1) _deck.Store(DeckSaveData.TempDeck(g));
        else if (_save)
        {
            int index = _mode == 0 ? DeckSaveData.AppendDeck(image, _deck.Name, g.Save.Dirty) : g.Battle.I32(0x24);
            if (index != -1) DeckSaveData.StoreDeck(image, index, _deck);
            g.Save.AutoSaveRequested = true;                                       // FUN_02070f38
        }
        _game.Platform.Sound.FadeOutMusic(0);                                      // FUN_020735e4
        g.Director.ExitCode = (_mode & 0xFF) | (_test & 0xFF) << 8;                // DAT_020afcb8
        Finished = true;
    }

    // ---- drawing (stand-in) ----

    private static readonly uint[] KindColour = [0xFFC04040, 0xFF4060C0, 0xFF40A040];

    private void Draw()
    {
        var p = _game.Platform;
        var top = p.TopScreen;
        top.Clear(0xFF202020);
        DrawPage(top);
        var bottom = p.BottomScreen;
        bottom.Clear(0xFF000000);
        _listBg?.DrawAt(bottom, 0, 0);
        DrawList(bottom);
        _window.Draw(bottom);
    }

    private void DrawPage(IScreen s)
    {
        const int ox = 8, cell = 48;
        var px = s.Pixels;
        for (int y = 0; y < 4; y++)
            for (int x = 0; x < 5; x++)
            {
                var n = _deck.At(x, y);
                uint c = n is null ? 0xFF404040 : KindColour[Math.Min(2, n.Kind)];
                bool cursor = _phase == Phase.Edit && x == _cellX && y == _cellY;
                for (int yy = 1; yy < cell - 1; yy++)
                    for (int xx = 1; xx < cell - 1; xx++)
                    {
                        bool edge = xx < 3 || yy < 3 || xx >= cell - 3 || yy >= cell - 3;
                        px[(y * cell + yy) * 256 + ox + x * cell + xx] = cursor && edge ? 0xFFFFFF00 : c;
                    }
            }
        foreach (var n in _deck.Placed)
        {
            var canvas = new TextCanvas(_font, 48, 16);
            canvas.Print(_names.NameBytes(n.Koma.Index).AsSpan(0, Math.Min(8, _names.NameBytes(n.Koma.Index).Length)));
            canvas.Draw(s, ox + n.X * cell + 2, n.Y * cell + 2);
            if ((n.Flags & 0x10) != 0) s.DrawText(ox + n.X * cell + 2, n.Y * cell + 30, "L");
        }
    }

    private void DrawList(IScreen s)
    {
        int first = Math.Max(0, _listCursor - 4);
        for (int i = first; i < Math.Min(_owned.Count, first + 10); i++)
        {
            var canvas = new TextCanvas(_font, 200, 16);
            canvas.Print(_names.NameBytes(_owned[i].Index));
            int y = 8 + (i - first) * 17;
            canvas.Draw(s, 32, y);
            if (i == _listCursor) s.DrawText(16, y, ">");
        }
        if (_chosen is { } k && _phase == Phase.Edit) s.DrawText(16, 176, $"#{k.Id}");
    }
}
