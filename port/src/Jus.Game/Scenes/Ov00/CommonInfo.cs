using System.Buffers.Binary;
using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov00;

/// <summary>
/// Native CommonInfo (CommonInfo.cpp, overlay 12): the "helper" information window, created by
/// CommonInfo::CommonInfo_Create 0x021BCF1C(icon, recolour, engine, character). This translation covers
/// the sub-engine variant (engine = 1), which Option uses for the top screen while the screens are
/// swapped; the main-engine variant (engine = 0) differs only in its layers and text placement.
///
/// Work (0xA4 bytes): +0x40 icon, +0x44 icon shown, +0x48 message, +0x4C message shown, +0x50 character
/// (-1 = random, the save's +0x8DE when the argument is -1), +0x54 engine, +0x58 line being printed,
/// +0x60 background counter.
/// - Layers (sub engine): BG2 info/bg (32x32, scrolled (n&gt;&gt;2, −(n&gt;&gt;2)) by FUN_021BDA04 each frame),
///   BG1 info/win (starts at y −120), BG3 the character portrait info/chr/&lt;code&gt;.dig/.atm (FUN_021BDBD8,
///   a child of the window), BG0 three text lines (ALTextDS 0xE0×0x10 at (0x10, 0x80 + 16·i), palette 0).
/// - Sprites: info/icon.aar 0x700000 + icon at (−8, 1.5) sliding right 21 px per frame to x = 10
///   (0x021BDA2C); info/mess.aar 0x701000 at (8, 12).
/// - Slide-in task 0x021BD800: window y += 15, mess y −= 12 per frame until the window is below 0, then
///   window y = 0, mess y = 6 and the message task 0x021BD8B8 starts.
/// - Message task 0x021BD8B8: a new icon is placed and slid in; a new message (FUN_021BD730) first clears
///   the three lines, then prints one line per frame from bin/info/&lt;name&gt;.bin (in bin/InfoDeck.aar;
///   message m = three s32 offsets at m·0xC, each relative to itself).
/// - Character change FUN_021BD590 hides the window, reloads the portrait and the message file and
///   slides the window in again, then shows the current message again.
///
/// Not ported: the series-code table at arm9 0x0209E840 that maps a character index &gt; 0 to its file
/// stem (e.g. "es"); until it is available characters other than 0 ("jump"/"jp", the literal paths in
/// FUN_021BDA94 / FUN_021BDBD8) fall back to character 0 (stand-in, logged). The random pick uses the
/// engine RNG FUN_02031070 in the original; here <see cref="Random"/> (stand-in). The "%" substitution
/// (+0x8E/+0xA0, FUN_02074080) is not ported (Option never uses it).
/// </summary>
public sealed class CommonInfo
{
    private readonly JusGame _game;
    private readonly ResourceManager _res;
    private readonly AlftFont _font;
    private readonly TileBackground _bg, _win;
    private TileBackground? _portrait;
    private readonly DstxBank _iconBank, _messBank;
    private readonly AlmtMotionSet _iconMotions, _messMotions;
    private SpriteActor? _icon;
    private readonly SpriteActor _mess;
    private readonly TextCanvas[] _lines = new TextCanvas[3];
    private readonly bool[] _lineVisible = new bool[3];
    private byte[] _messages = [];
    private readonly byte[] _names;
    private readonly Random _random = new();

    private int _iconId, _iconShown = -1;          // +0x40, +0x44 (piVar1[0x11] = -1)
    private int _message = -1, _messageShown = -1; // +0x48, +0x4C
    private int _line = -1;                        // +0x58
    private int _counter;                          // +0x60
    private int _winY, _messY, _iconX;             // 20.12
    private bool _iconSliding, _sliding;

    /// <summary>+0x50: the character whose portrait and messages are shown.</summary>
    public int Character { get; private set; }

    /// <summary>CommonInfo_Create(icon, -1, 1, character): <paramref name="character"/> = -1 takes the
    /// save's +0x8DE.</summary>
    public CommonInfo(JusGame game, int icon, int character = -1)
    {
        _game = game;
        _iconId = icon;
        Character = character == -1 ? (sbyte)game.Globals.Save.Image.Data[0x8DE] : character;
        _res = new ResourceManager(game.Platform.Assets);
        _names = _res.Read("bin/infoname.bin");                          // FUN_021BD4D4(infoname), vfunc 0x2C(0)
        _res.Mount("info/info.aar");
        _bg = new TileBackground(DsigImage.Load(_res, "info/bg.dig"), AltmMap.Load(_res, "info/bg.atm"));
        _win = new TileBackground(DsigImage.Load(_res, "info/win.dig"), AltmMap.Load(_res, "info/win.atm"));
        _font = new AlftFont(_res.Read("font/jskfont.aft"));
        for (int i = 0; i < 3; i++) _lines[i] = new TextCanvas(_font, 0xE0, 0x10) { PaletteIndex = 0 };  // vfunc 0xA8(0)
        _res.Mount("info/icon.aar");
        _res.Mount("info/mess.aar");
        _iconBank = new DstxBank(_res.Read(0x700000, (byte)'@'));
        _iconMotions = new AlmtMotionSet(_res.Read(0x700000, (byte)'A'));
        _messBank = new DstxBank(_res.Read(0x701000, (byte)'@'));
        _messMotions = new AlmtMotionSet(_res.Read(0x701000, (byte)'A'));
        _mess = new SpriteActor(_messBank, _messMotions, 0x701000);
        Load();                                                            // FUN_021BDBD8 + FUN_021BDA94
        StartSlide();
    }

    /// <summary>The message currently requested (+0x48).</summary>
    public int Message => _message;
    /// <summary>The text of line <paramref name="i"/> as printed so far ("" while hidden).</summary>
    public string LineText(int i) => _lineVisible[i] ? _lineTexts[i] : "";
    private readonly string[] _lineTexts = ["", "", ""];
    public bool SlidingIn => _sliding;

    /// <summary>FUN_021BD730(info, message, 0).</summary>
    public void Show(int message)
    {
        if (_message == message) return;
        _message = message;
        _line = -1;
        _messageShown = -1;
    }

    /// <summary>FUN_021BD72C: the icon id.</summary>
    public void SetIcon(int icon) => _iconId = icon;

    /// <summary>FUN_021BD710(info, character): the character's name from bin/infoname.bin (entry
    /// i·4, relative to itself). -1 returns the string at ov12 0x021D4084, which is not in the data
    /// files (stand-in: empty).</summary>
    public byte[] Name(int character)
    {
        if (character < 0) return ShiftJis.Encode(RandomName);       // ov12 0x021D4084 (exported JUS tables)
        int o = character * 4;
        if (o + 4 > _names.Length) return [];
        o += BinaryPrimitives.ReadInt32LittleEndian(_names.AsSpan(o));
        int end = Array.IndexOf(_names, (byte)0, o);
        return _names.AsSpan(o, (end < 0 ? _names.Length : end) - o).ToArray();
    }

    /// <summary>FUN_021BD590(info, character): switch characters (hide, reload, slide in again, show the
    /// message again).</summary>
    public void SetCharacter(int character)
    {
        if (Character == character) return;
        Character = character;
        int message = _message;
        for (int i = 0; i < 3; i++) ClearLine(i);                          // FUN_021BD764
        Load();
        _message = -1;
        Show(message);
        _iconShown = -1;                                                   // piVar1[0x11] = -1
        _icon = null;
        StartSlide();
    }

    private void StartSlide()
    {
        _winY = -0x78000;                                                  // (0, 0xFFF88000)
        _messY = 0xC000;                                                   // mess at (8, 12)
        _sliding = true;
    }

    /// <summary>FUN_021BDBD8 (portrait; character -1 = random among the owned helpers, save +0x8EC
    /// bits 0..0x29) and FUN_021BDA94 (message file).</summary>
    private void Load()
    {
        if (Character == -1)
        {
            var owned = new List<int>();
            for (int i = 0; i < 0x2A; i++)
                if ((BinaryPrimitives.ReadUInt32LittleEndian(_game.Globals.Save.Image.Data.AsSpan(0x8EC + (i >> 5) * 4)) & (1u << (i & 31))) != 0)
                    owned.Add(i);
            Character = owned.Count == 0 ? 0 : owned[_random.Next(owned.Count)];
        }
        string? code = SeriesCode(Character);
        if (code is null)
        {
            _game.Platform.Log($"CommonInfo: series code of character {Character} not ported (arm9 0x0209E840); showing character 0");
            code = "";
        }
        string chr = code.Length == 0 ? "jp" : code, bin = code.Length == 0 ? "jump" : code;
        var chrArchive = _res.Mount("info/chr/chr.aar");
        try
        {
            _portrait = new TileBackground(DsigImage.Load(_res, $"info/chr/{chr}.dig"), AltmMap.Load(_res, $"info/chr/{chr}.atm"));
        }
        finally { _res.Unmount(chrArchive); }
        var deck = _res.Mount("bin/InfoDeck.aar");
        try { _messages = _res.Read($"bin/info/{bin}.bin"); }
        finally { _res.Unmount(deck); }
    }

    /// <summary>The file stem of a character's portrait/messages: arm9 table 0x0209E840 (index 0 is
    /// special-cased by the callers). Not in the data files; only character 0 resolves.</summary>
    public static Func<int, string?> SeriesCode { get; set; } = c => c == 0 ? "" : null;

    /// <summary>The "random" entry's name (ov12 0x021D4084) and Option's "close" entry (ov00 0x02161674), from the
    /// exported JUS tables; empty when the data predates them.</summary>
    public static string RandomName { get; set; } = "";
    public static string CloseName { get; set; } = "";

    private void ClearLine(int i)
    {
        _lines[i].Clear();
        _lineTexts[i] = "";
        _lineVisible[i] = false;
    }

    private string MessageLine(int message, int line)
    {
        int o = message * 0xC + line * 4;
        if (o + 4 > _messages.Length) return "";
        o += BinaryPrimitives.ReadInt32LittleEndian(_messages.AsSpan(o));
        if (o < 0 || o >= _messages.Length) return "";
        int end = Array.IndexOf(_messages, (byte)0, o);
        return ShiftJis.Decode(_messages.AsSpan(o, (end < 0 ? _messages.Length : end) - o));
    }

    /// <summary>One frame of the window's task (slide-in 0x021BD800 or messages 0x021BD8B8), then the
    /// background step FUN_021BDA04.</summary>
    public void Update()
    {
        if (_sliding)
        {
            _winY += 0xF000;
            _messY -= 0xC000;
            if (_winY > 0)
            {
                _winY = 0;
                _messY = 0x6000;
                _sliding = false;
            }
        }
        else
        {
            if (_iconShown != _iconId)
            {
                _iconShown = _iconId;
                _icon = new SpriteActor(_iconBank, _iconMotions, 0x700000 + _iconId);
                _iconX = -0x80000;
                _iconSliding = true;
            }
            if (_messageShown != _message)
            {
                if (_line == -1)
                {
                    _line = 0;
                    for (int i = 0; i < 3; i++) ClearLine(i);
                }
                else
                {
                    var t = MessageLine(_message, _line);
                    _lines[_line].Print(t);
                    _lineTexts[_line] = t;
                    _lineVisible[_line] = true;
                    if (++_line > 2) _messageShown = _message;
                }
            }
        }
        if (_iconSliding)                                                  // 0x021BDA2C
        {
            _iconX += 0x15000;
            if (_iconX > 0xA000) { _iconX = 0xA000; _iconSliding = false; }
        }
        _icon?.Update();
        _mess.Update();
        _counter++;
    }

    /// <summary>Draw the window on <paramref name="screen"/>: BG2, BG1 (+ the portrait as its child),
    /// the sprites, then the text lines (layer order from the BG priorities 3/2/1/0 set in
    /// CommonInfo_Create; the sprites' place between them is inferred).</summary>
    public void Draw(IScreen screen)
    {
        _bg.ScrollX = -(_counter >> 2);                                    // position (n>>2, −(n>>2))
        _bg.ScrollY = _counter >> 2;
        _bg.Draw(screen);
        int wy = _winY >> 12;
        _win.DrawAt(screen, 0, wy);
        if (_icon is not null)
        {
            _icon.X = _iconX >> 12;
            _icon.Y = 0x18000 >> 12;
            _icon.Draw(screen);
        }
        _mess.X = 8;
        _mess.Y = _messY >> 12;
        _mess.Draw(screen);
        _portrait?.DrawAt(screen, 0, wy);
        for (int i = 0; i < 3; i++)
            if (_lineVisible[i]) _lines[i].Draw(screen, 0x10, 0x80 + i * 16);
    }
}
