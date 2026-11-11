using Jus.Game.Assets;
using Jus.Game.Engine;

namespace Jus.Game.Scenes.Ov03;

/// <summary>
/// The information panel of <c>CommonInfo::CommonInfo_Create</c> (ov12 0x021BCF1C), as the J Arena menu
/// creates it: <c>CommonInfo_Create(1, 1, 1, -1)</c> = (icon 1, title strip 1, sub engine, character from
/// the save). A partial, scene-local translation (the component is shared by many scenes; a common
/// version belongs in the engine).
///
/// Translated:
/// - Character (+0x50): param 4, or the signed save byte 0x020B0B96 (save +0x8DE) when it is −1.
/// - Layers on the sub engine (the menu swapped the screens, so the top LCD): BG2 = info/bg (priority 3,
///   scrolled by 0x021BDA04: position (n/4, −n/4), n +1 per frame), BG1 = info/win (priority 2, from y −120),
///   BG3 = the character portrait info/chr/&lt;name&gt;.dig/.atm from info/chr/chr.aar (8bpp, 64×64, priority 1,
///   FUN_021BDBD8), BG0 = three text lines (ALTextDS 0xE0×0x10, jskfont, at (16, 0x80 + 16·i), priority 0).
/// - OBJ: info/mess.aar 0x701000 at (8, 12) (visible), info/icon.aar 0x700000 + icon (hidden until shown).
/// - Update 0x021BD800: window y += 15, mess y −= 12 per frame; once the window is below 0: window y = 0,
///   mess y = 6, then 0x021BD8B8.
/// - Update 0x021BD8B8: a new icon (+0x40 ≠ +0x44) starts at (−128, 24) and slides right 21 px per frame
///   until x &gt; 10 (0x021BDA2C, then x = 10); a new message (+0x48 ≠ +0x4C): first frame clears the three
///   lines, then one line per frame (+0x58 = 0..2).
/// - Messages, FUN_021BDA94: bin/info/&lt;name&gt;.bin (in bin/InfoDeck.aar). Message m = three u32 at m·0xC;
///   line k is at m·0xC + 4k + that u32 (self-relative), a C string.
/// - SetMessage = FUN_021BD730(panel, id, 0).
///
/// Stand-ins / not translated:
/// - Character names: index 0 is "jump" (messages) / "jp" (portrait) — literals in ov12 (0x021D40A0 /
///   0x021D40D0). Other indices go through the name table 0x0209E840 (42 series abbreviations in arm9.bin),
///   which is not available as a data file; they and −1 (random owned character, FUN_02031070 RNG over the
///   0x020B0BA4 bits) fall back to index 0 and are logged.
/// - The title strip FUN_02029C68(map, 0x021D019A/0x021D0140 + 0x1E·title, 0xD1/0xE1, 0xF): a tile row copied
///   into the bg/win maps from an ov12 table — not ported.
/// - info/icon 0x700000 (+0xE, hidden), the '％' substitution (FUN_02074080), the text palette (vfunc 0xA4 = 1
///   is not decoded; palette 0 is used).
/// </summary>
public sealed class JArenaInfoPanel
{
    private readonly IPlatform _p;
    private readonly TileBackground _bg, _win;
    private readonly AltmMap _winMap;
    private readonly TileBackground? _chr;
    private readonly byte[] _messages;
    private readonly TextCanvas[] _lines = new TextCanvas[3];
    private readonly bool[] _lineVisible = new bool[3];
    private readonly SpriteActor _mess, _icon;
    private readonly DstxBank _iconBank;
    private readonly AlmtMotionSet _iconMotions;
    private bool _settled;          // update 0x021BD8B8 reached
    private int _scroll;            // +0x60
    private int _winY = -120 << 12, _messY = 12 << 12;
    private int _iconX = -128 << 12;
    private bool _iconVisible;
    private bool _iconSliding;

    public int Character { get; }
    /// <summary>+0x40 requested icon, +0x44 shown icon.</summary>
    public int Icon { get; set; }
    private int _shownIcon = -1;
    /// <summary>+0x48 requested message, +0x4C shown message, +0x58 line counter.</summary>
    public int Message { get; private set; } = -1;
    private int _shownMessage = -1, _line = -1;

    public JArenaInfoPanel(JusGame game, int icon, int title, int character)
    {
        _p = game.Platform;
        Icon = icon;                                                   // +0x40 = param_1
        Character = character == -1 ? (sbyte)game.Globals.Save.Image.Data[0x8DE] : character;   // +0x50
        // series code (table 0x0209E840, exported JUS tables via CommonInfo.SeriesCode); 0 = "jump"/"jp"
        string? code = Scenes.Ov00.CommonInfo.SeriesCode(Character);
        if (code is null)
        {
            _p.Log($"CommonInfo: no series code for character {Character} (JUS tables missing); using \"jump\"");
            code = "";
        }
        string chrStem = code.Length == 0 ? "jp" : code, binStem = code.Length == 0 ? "jump" : code;
        _ = title;                                                     // +0x5C: title strip, not ported
        var res = new ResourceManager(_p.Assets);
        res.Mount("info/info.aar");                                    // FUN_020101f4("info/info.aar")
        var bgImage = DsigImage.Load(res, "info/bg.dig");
        _bg = new TileBackground(bgImage, AltmMap.Load(res, "info/bg.atm")) { Backdrop = bgImage.Palette[0] };
        _winMap = AltmMap.Load(res, "info/win.atm");
        _win = new TileBackground(DsigImage.Load(res, "info/win.dig"), _winMap);
        var font = AlftFont.Load(_p.Assets, "font/jskfont.aft");
        for (int i = 0; i < 3; i++) _lines[i] = new TextCanvas(font, 0xE0, 0x10);
        res.Mount("info/icon.aar");                                    // FUN_020101f4("info/icon.aar") → +0x30
        res.Mount("info/mess.aar");                                    // FUN_020101f4("info/mess.aar") → +0x34
        _iconBank = new DstxBank(res.Read(0x700000, (byte)'@'));
        _iconMotions = new AlmtMotionSet(res.Read(0x700000, (byte)'A'));
        _icon = new SpriteActor(_iconBank, _iconMotions, 0x700000);
        _mess = new SpriteActor(new DstxBank(res.Read(0x701000, (byte)'@')), new AlmtMotionSet(res.Read(0x701000, (byte)'A')), 0x701000);
        // FUN_021BDBD8: the portrait (info/chr/chr.aar)
        try
        {
            res.Mount("info/chr/chr.aar");
            _chr = new TileBackground(DsigImage.Load(res, $"info/chr/{chrStem}.dig"), AltmMap.Load(res, $"info/chr/{chrStem}.atm"));
        }
        catch (Exception e) when (e is IOException or InvalidDataException or NotSupportedException) { _chr = null; }
        // FUN_021BDA94: the message file
        res.Mount("bin/InfoDeck.aar");
        _messages = res.Read($"bin/info/{binStem}.bin");
    }

    /// <summary>The three lines of message <paramref name="id"/> (Shift-JIS bytes, without the terminator).</summary>
    public byte[][] MessageLines(int id)
    {
        var lines = new byte[3][];
        for (int k = 0; k < 3; k++)
        {
            int e = id * 0xC + k * 4;
            int o = e + BitConverter.ToInt32(_messages, e);
            int end = Array.IndexOf(_messages, (byte)0, o);
            lines[k] = _messages[o..end];
        }
        return lines;
    }

    public string LineText(int k) => _lineVisible[k] ? ShiftJis.Decode(_lineBytes[k]) : "";
    private readonly byte[][] _lineBytes = [[], [], []];

    /// <summary>FUN_021BD730(panel, id, 0).</summary>
    public void SetMessage(int id)
    {
        if (Message == id) return;
        Message = id;
        _line = -1;
        _shownMessage = -1;
    }

    public void Update()
    {
        if (!_settled)
        {
            // 0x021BD800
            _winY += 0xF000;
            _messY -= 0xC000;
            if (_winY > 0)
            {
                _winY = 0;
                _messY = 0x6000;
                _settled = true;
            }
        }
        else
        {
            // 0x021BD8B8
            if (_shownIcon != Icon)
            {
                _shownIcon = Icon;
                _iconX = -0x80000;                                    // (−128, 24)
                _icon.SetMotion(0x700000 + Icon);
                _iconVisible = true;
                _iconSliding = true;
            }
            else if (_iconSliding)
            {
                // the icon node's own update 0x021BDA2C, from the frame after it was shown (inferred order)
                _iconX += 0x15000;
                if (_iconX > 0xA000)
                {
                    _iconX = 0xA000;
                    _iconSliding = false;
                }
            }
            if (_shownMessage != Message)
            {
                if (_line == -1)
                {
                    _line = 0;
                    for (int i = 0; i < 3; i++) { _lines[i].Clear(); _lineVisible[i] = false; _lineBytes[i] = []; }
                }
                else
                {
                    var text = MessageLines(Message)[_line];
                    _lines[_line].Clear();
                    _lines[_line].Print(text);
                    _lineBytes[_line] = text;
                    _lineVisible[_line] = true;
                    if (++_line > 2) _shownMessage = Message;
                }
            }
        }
        _scroll++;                                                     // 0x021BDA04
        _mess.Update();
        if (_iconVisible) _icon.Update();
    }

    public void Draw(IScreen screen)
    {
        int n = _scroll >> 2;
        // position (n, −n) moves the layer right and up: BG offset = −position (inferred)
        _bg.ScrollX = -n;
        _bg.ScrollY = n;
        _bg.Draw(screen);
        _win.DrawAt(screen, 0, _winY >> 12);
        _chr?.DrawAt(screen, 0, 0);
        for (int i = 0; i < 3; i++)
            if (_lineVisible[i]) _lines[i].Draw(screen, 16, 0x80 + 16 * i);
        _mess.X = 8; _mess.Y = _messY >> 12;
        _mess.Draw(screen);
        if (_iconVisible)
        {
            _icon.X = _iconX >> 12; _icon.Y = 24;
            _icon.Draw(screen);
        }
    }
}
