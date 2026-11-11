using System.Buffers.Binary;
using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov01;

/// <summary>
/// Scene 4 (DeckSelect.cpp), overlay 1. Entry: 0x021572B8; wrapper: main 0x0206E884.
/// The three tabs and their counts are from 0x021591C8 and 0x0215716C:
/// 0 = user decks at save +0xB04 (count byte +0xAB4, 0x5C per entry, 0x02071F10/54);
/// 1 = unlocked builtin decks, bit arrays at save +0x9EC/+0xA04/+0xA14 for types 1/7/8;
/// 2 = stored decks at save +0x2BD4 (count byte +0xAB5, 0x02072070/D8).
/// Deck names live at record +0x40 (0x1A bytes), via 0x02076BBC and 0x02078B08.
/// 0x0215728C and 0x02157268 map the chosen tab/list index into battle setup
/// bytes DAT_020AFEB0 (+0x20) and DAT_020AFEB4 (+0x24).
///
/// 0x0215C7F4/0x0215CF70 confirm a selected deck and call 0x02159EF4
/// (fade out); back at 0x0215A274 returns 1. Cleanup 0x02159FD0 writes exit
/// from work +0x311. Music is 0x02158A00.
///
/// STAND-IN: sprite/background widgets from 0x0215754C, their original pads/touch
/// hit boxes, deck thumbnail from ComicDeckDisp and confirmation dialogs are not
/// reconstructed. Input bindings for tab/cursor navigation are inferred. Native
/// validation 0x0207879C/0x02078814 requires the unported ComicDeck object graph;
/// the interim guard rejects completely empty (all 0xFFFF) slots, but cannot
/// certify a legal competitive deck. X requests existing edit flow (exit 3);
/// no save is modified. Names and deck records are read from save/archives at runtime.
/// </summary>
public sealed class DeckSelectScene : ISceneTask
{
    public sealed record DeckEntry(int Kind, int Index, string Name, byte[] Record);

    private enum Phase { FadeIn, Browse, FadeOut }
    private readonly JusGame _game;
    private readonly AlftFont _font;
    private readonly List<DeckEntry>[] _pages = [[], [], []];
    private readonly int _mode;
    private int _tab, _cursor, _exitCode = -1;
    private Phase _phase = Phase.FadeIn;
    private string? _warning;

    public DeckSelectScene(JusGame game, int mode)
    {
        _game = game;
        _mode = game.Globals.Director.Unk14 != 0 ? 6 : mode & 0xFF; // jus_Scene04_Create 0x0206E884
        _font = AlftFont.Load(game.Platform.Assets, "font/jskfont.aft");
        var data = game.Globals.Save.Image.Data;
        int nUser = Math.Min((int)data[0xAB4], 50);
        for (int i = 0; i < nUser; i++)
            AddDeck(0, i, data.AsSpan(0xB04 + i * 0x5C, 0x5C).ToArray(), _pages[0]);

        // 0x021591C8: for each unlocked builtin, load deck/<group>/NNN.bin
        // through deck/Deck.aar. The names of each group are determined by
        // inventorying its numbered entries, not by a pasted ROM string table.
        var res = new ResourceManager(game.Platform.Assets);
        var archive = res.Mount("deck/Deck.aar");
        foreach (var (kind, count, offset) in new[] { (1, 4, 0x9EC), (7, 50, 0xA04), (8, 20, 0xA14) })
        {
            var groups = archive.Entries.Where(e => e.Name.StartsWith("deck/", StringComparison.Ordinal)
                && e.Name.EndsWith("/000.bin", StringComparison.Ordinal))
                .Select(e => e.Name[..e.Name.LastIndexOf('/')]).ToArray();
            // FUN_02070A28 dispatches through main ARM9's pointer table 0x0209E590.
            // Verified: type 1 has one more archive deck than its four visible
            // unlock slots. Require preview files (FUN_02070B5C) as well as
            // numbered deck records, then choose the smallest eligible group.
            // FUN_02070A28: deck type → folder from table 0x0209E590 (exported as data); the inventory below is
            // only the fallback for data extracted before the tables existed
            string? group = game.Tables is { } tables ? "deck/" + tables.DeckFolders[kind] : groups
                .Select(g => new
                {
                    Name = g,
                    Capacity = archive.Entries.Count(e =>
                        e.Name.StartsWith(g + "/", StringComparison.Ordinal) &&
                        e.Name.Length == g.Length + "/000.bin".Length &&
                        e.Name.EndsWith(".bin", StringComparison.Ordinal) &&
                        int.TryParse(e.Name.AsSpan(g.Length + 1, 3), out _))
                })
                .Where(g => g.Capacity >= count &&
                    Enumerable.Range(0, count).All(i =>
                        archive.Find($"{g.Name}/{i:D3}.bin") is not null &&
                        archive.Find($"{g.Name}/p{i:D3}.bin") is not null))
                .OrderBy(g => g.Capacity)
                .Select(g => g.Name)
                .FirstOrDefault();
            for (int i = 0; i < count; i++)
                if ((data[offset + (i >> 3)] & (1 << (i & 7))) != 0)
                {
                    if (group is null) throw new InvalidDataException($"unresolved builtin deck archive for type {kind}");
                    AddDeck(kind, i, res.Read($"{group}/{i:D3}.bin"), _pages[1]);
                }
        }

        int nOther = Math.Min((int)data[0xAB5], (SaveImage.Size - 0x2BD4) / 0x5C);
        for (int i = 0; i < nOther; i++)
            AddDeck(2, i, data.AsSpan(0x2BD4 + i * 0x5C, 0x5C).ToArray(), _pages[2]);

        // 0x02158A00: Story/menu modes and their BGM ids.
        // Modes ≥ 0xD start no music (the switch is guarded by mode < 0xD).
        if (_mode < 0xD) game.PlayMusic(_mode switch { 7 => 4, 8 => 5, _ => 0x2F }, 0);
        game.Fade.Start(FadeKind.FromBlack, 1);
        game.Platform.Log("DeckSelect: save and built-in records decoded; native ComicDeck display/validation and overlay widget data are stand-ins");
    }

    private static void AddDeck(int kind, int index, byte[] record, List<DeckEntry> dest)
    {
        if (record.Length < 0x5C) throw new InvalidDataException($"deck {kind}/{index} truncated");
        string title = ShiftJis.Decode(record.AsSpan(0x40, 0x1A));
        dest.Add(new DeckEntry(kind, index, title, record));
    }

    public bool Finished { get; private set; }
    public int Mode => _mode;
    public int Tab => _tab;
    public int Cursor => _cursor;
    public int UserDeckCount => _pages[0].Count;
    public IReadOnlyList<DeckEntry> CurrentEntries => _pages[_tab];
    public IReadOnlyList<DeckEntry> BuiltinEntries => _pages[1];
    public int OtherDeckCount => _pages[2].Count;

    public void Update()
    {
        if (Finished) return;
        switch (_phase)
        {
            case Phase.FadeIn:
                if (_game.Fade.Step()) _phase = Phase.Browse;
                break;
            case Phase.Browse:
                HandleInput();
                break;
            case Phase.FadeOut:
                if (_game.Fade.Step())
                {
                    _game.Platform.Sound.FadeOutMusic(0);                 // 0x02159FD0
                    _game.Globals.Director.ExitCode = _exitCode;
                    Finished = true;
                }
                break;
        }
        Draw();
    }

    private void HandleInput()
    {
        var t = _game.Platform.Input.Trigger;
        if (t.HasFlag(PadButtons.B))
        {
            _game.Platform.Sound.PlayEffect(0x78, 1);                 // 0x0215A274 (r1 = 1, asm)
            Leave(1);
            return;
        }
        if (t.HasFlag(PadButtons.L)) ChangeTab(-1);
        else if (t.HasFlag(PadButtons.R)) ChangeTab(1);
        else if (t.HasFlag(PadButtons.Left)) ChangeTab(-1);
        else if (t.HasFlag(PadButtons.Right)) ChangeTab(1);
        else if (t.HasFlag(PadButtons.Up) && _pages[_tab].Count > 0)
            _cursor = (_cursor + _pages[_tab].Count - 1) % _pages[_tab].Count;
        else if (t.HasFlag(PadButtons.Down) && _pages[_tab].Count > 0)
            _cursor = (_cursor + 1) % _pages[_tab].Count;

        if (t.HasFlag(PadButtons.A)) Select(0);                       // 0x0215C7F4
        else if (t.HasFlag(PadButtons.X) && _mode != 6) Select(3);     // 0x0215BD4C; inferred pad X
    }

    private void ChangeTab(int delta)
    {
        _tab = (_tab + delta + _pages.Length) % _pages.Length;
        _cursor = 0;
        _warning = null;
        _game.Platform.Sound.PlayEffect(0x78, 3);                   // 0x0215A3B4/418/47C
    }

    private void Select(int exit)
    {
        if (_pages[_tab].Count == 0)
        {
            _warning = "No decks in this category.";
            _game.Platform.Sound.PlayEffect(0x78, 2);
            return;
        }
        var deck = _pages[_tab][_cursor];
        // In the native flow 0x0215A664 checks ComicDeck::Validate via 0x0207879C
        // and 0x02078814. This weaker guard is intentionally labelled a stand-in.
        bool hasPiece = Enumerable.Range(0, 16).Any(i =>
            BinaryPrimitives.ReadUInt16LittleEndian(deck.Record.AsSpan(i * 4)) != 0xFFFF);
        if (!hasPiece)
        {
            _warning = "Deck is empty (full validity check not ported).";
            _game.Platform.Sound.PlayEffect(0x78, 2);
            return;
        }

        _game.Globals.Battle.Raw[0x20] = (byte)deck.Kind;             // DAT_020AFEB0
        _game.Globals.Battle.Raw[0x24] = (byte)deck.Index;            // DAT_020AFEB4
        _game.Platform.Sound.PlayEffect(0x78, 0);
        Leave(exit);
    }

    private void Leave(int exit)
    {
        _exitCode = exit;
        _game.Fade.Start(FadeKind.ToBlack, 1);                       // 0x02159EF4
        _phase = Phase.FadeOut;
    }

    private void Draw()
    {
        var top = _game.Platform.TopScreen;
        var bottom = _game.Platform.BottomScreen;
        top.Clear(0xFF000000);
        bottom.Clear(0xFF000000);

        var labels = new[] { "Your Decks", "Unlocked Decks", "Other Decks" };
        var head = new TextCanvas(_font, 248, 72);
        head.Print("Deck Select");
        head.NewLine();
        head.Print($"{labels[_tab]}  {_pages[_tab].Count}");
        if (_pages[_tab].Count > 0)
        {
            head.NewLine();
            head.Print(_pages[_tab][_cursor].Name);
        }
        head.Draw(top, 8, 8);

        var list = new TextCanvas(_font, 248, 144);
        if (_pages[_tab].Count == 0) list.Print("No decks available");
        else
        {
            int start = Math.Clamp(_cursor - 4, 0, Math.Max(0, _pages[_tab].Count - 9));
            for (int i = start; i < _pages[_tab].Count && i < start + 9; i++)
            {
                list.Print($"{(i == _cursor ? ">" : " ")} {i + 1}. {_pages[_tab][i].Name}");
                if (i < _pages[_tab].Count - 1) list.NewLine();
            }
        }
        list.Draw(bottom, 8, 4);
        var controls = new TextCanvas(_font, 248, 24);
        controls.Print(_warning ?? "A: Select  B: Back  L/R: Tab");
        controls.Draw(bottom, 8, 164);
    }
}
