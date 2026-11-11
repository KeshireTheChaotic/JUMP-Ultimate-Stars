namespace Jus.Game.Scenes.Ov07;

/// <summary>
/// Scenes 35, 38 and 39, CommuMenu.cpp (overlay 7): CommuMenu::CommuMenu_Add_Core 0x0214DA98 and its
/// task 0x0214DEAC. CommuMenu is a page switcher: work +0x10 is the page, an index into the create table
/// at 0x021689B4 (page 1 = CommuMenuTop_Add 0x0214E150, the rest are the wireless / download / Wi-Fi
/// pages). The running page sets the next page (FUN_0214DD60) or ends the menu with an exit code
/// (FUN_0214DD6C: page 0x19, an empty slot, and +0xC = code); a page index whose slot is empty ends
/// CommuMenu with exit code +0xC, which the scene exit (0x0206FE50 for 35, 0x0206E5E4 for 38/39) reads.
///
/// Work (0x2C bytes): +0x0C exit code, +0x10 page, +0x14/+0x18/+0x1C/+0x20 page arguments (setters
/// FUN_0214DD80/8C/98/A4), +0x24 set by jus_Scene35_CreateImpl 0x0214DB7C.
///
/// Every page is a task; when it has ended, the switch waits 4 frames, resets both displays (blend off,
/// brightness −16, backdrop black, FUN_02043264(0), the BG layers' +0x958 flags), waits 2 more frames,
/// opens page 0x18 instead if a WFC error is pending (0x021A3264), and creates the next page. Pages
/// that are not translated (all of them except CommuMenuTop) are <see cref="CommuStubPage"/>s.
/// </summary>
public sealed class CommuMenuScene : ISceneTask
{
    /// <summary>Page indices with a create function in the table at 0x021689B4 (0, 21, 23, 25 are empty).</summary>
    public const int PageTop = 1, PageWiFiError = 0x18, PageEnd = 0x19;

    private readonly JusGame _game;
    private ISceneTask? _page;
    private int _wait = -1;              // frames left in the page switch (4 + 2 vblank waits)

    public ICommLink Comm { get; }
    /// <summary>+0x0C.</summary>
    public int ExitCode { get; set; }
    /// <summary>+0x10.</summary>
    public int Page { get; set; }
    /// <summary>+0x14, +0x18, +0x1C, +0x20, +0x24.</summary>
    public int Arg14 { get; set; }
    public int Arg18 { get; set; }
    public int Arg1C { get; set; }
    public int Arg20 { get; set; }
    public int Arg24 { get; set; }

    public ISceneTask? CurrentPage => _page;
    public bool Finished { get; private set; }

    /// <summary>CommuMenu_Add_Core(page, arg14, arg18, arg1C): WiFi_Init_MemoryManager first.</summary>
    public CommuMenuScene(JusGame game, ICommLink comm, int page, int arg14, int arg18, int arg1C)
    {
        _game = game;
        Comm = comm;
        comm.InitMemoryManager();                                   // func_0x02199ee8
        Page = page;
        Arg14 = arg14;
        Arg18 = arg18;
        Arg1C = arg1C;
        _wait = 0;                                                  // the first page is created on the first update
    }

    /// <summary>jus_Scene35_Create 0x0206FD54 (after its FUN_0206E5F4 reseed/battle-setup reset, which the
    /// registration does): the communication code director +0x138 (0x020AFDE8) picks the entry wrapper
    /// 0x0214DB7C…0x0214DD34.</summary>
    public static CommuMenuScene Create35(JusGame game, ICommLink comm)
    {
        var (page, a14, a18, a1C) = Scene35Entry(game.Globals.Director.CommuCode);
        return new CommuMenuScene(game, comm, page, a14, a18, a1C);    // 0x0214DB7C(0) also sets +0x24 = 0
    }

    /// <summary>The CommuMenu_Add_Core arguments per communication code (jus_Scene35_Create's switch);
    /// codes 0, 4, 9 and unknown ones take 0x0214DB7C(0) = (1, 0, 0, 0).</summary>
    public static (int Page, int A14, int A18, int A1C) Scene35Entry(int code) => code switch
    {
        1 => (1, 9, 0, 0),           // 0x0214DBAC
        2 => (1, 1, 0, 0),           // 0x0214DBC8
        3 => (2, 1, 0, 0),           // 0x0214DC8C
        5 => (1, 3, 0, 0),           // 0x0214DBE4
        6 => (1, 2, 0, 0),           // 0x0214DC00
        7 => (1, 4, 0, 0),           // 0x0214DC1C
        8 => (1, 5, 0, 0),           // 0x0214DC38
        10 => (0x13, 7, 2, 0),       // 0x0214DD18
        11 => (0x13, 7, 4, 0),       // 0x0214DD34
        12 => (1, 6, 0, 0),          // 0x0214DC54
        13 => (1, 8, 0, 0),          // 0x0214DC70
        14 => (0xE, 6, 0, 1),        // 0x0214DCE0
        15 => (0xE, 6, 0, 2),        // 0x0214DCFC
        _ => (1, 0, 0, 0),           // 0x0214DB7C(0)
    };

    /// <summary>jus_Scene38_Create 0x0214DCA8: CommuMenu_Add_Core(10, 2, 0, 0) (CommuMenuSuretigai).</summary>
    public static CommuMenuScene Create38(JusGame game, ICommLink comm) => new(game, comm, 10, 2, 0, 0);

    /// <summary>jus_Scene39_Create 0x0214DCC4: CommuMenu_Add_Core(7, 4, 0, 0) (CommuMenuDataLeaderSel).</summary>
    public static CommuMenuScene Create39(JusGame game, ICommLink comm) => new(game, comm, 7, 4, 0, 0);

    /// <summary>FUN_0214DD6C: end the menu with <paramref name="code"/>.</summary>
    public void EndWith(int code)
    {
        Page = PageEnd;
        ExitCode = code;
    }

    public void Update()
    {
        if (Finished) return;
        if (_page is { Finished: false })
        {
            _page.Update();
            if (!_page.Finished) return;
            _wait = 6;                                              // FUN_0214DDC0(4) … FUN_0214DDC0(2)
        }
        if (_wait > 0)
        {
            // the display reset between pages (blend 0x3F off, brightness −16 on both displays)
            foreach (var s in new[] { _game.Platform.TopScreen, _game.Platform.BottomScreen })
            {
                s.Brightness = -16;
                s.Clear(0xFF000000);
            }
            _wait--;
            if (_wait > 0) return;
        }
        if (Comm.WiFiErrorPending) Page = PageWiFiError;           // func_0x021a3264
        _page = CreatePage(Page);
        if (_page is null)
        {
            // no page: end (FUN_0201B244); DAT_020afcb8 = +0xC
            _game.Globals.Director.ExitCode = ExitCode;
            if (ExitCode is not (9 or 0xE or 0xF)) Comm.ReleaseMemoryManager();   // func_0x02199fd8
            Finished = true;
            return;
        }
        Page = 0;
    }

    /// <summary>The create table at 0x021689B4. Page 1 gets +0x14 (veneer 0x0214DA44), page 14 +0x1C
    /// (0x0214DA60), page 19 +0x18 (0x0214DA7C).</summary>
    private ISceneTask? CreatePage(int page) => page switch
    {
        PageTop => new CommuMenuTopPage(_game, this, Arg14),
        2 => Stub(page, "CommuMenuWrlsLeaderSel_Add", 0x0215A2BC),
        3 or 4 => Stub(page, "CommuMenuWLCmnMemEnt (wireless member entry)", page == 3 ? 0x0215C1A4 : 0x0215C1F8),
        5 => Stub(page, "CommuMenuWrlsWatchWait_Add", 0x02164344),
        6 => Stub(page, "CommuMenuDwldMemberEnt_Add", 0x02161EEC),
        7 => Stub(page, "CommuMenuDataLeaderSel_Add", 0x021624E8),
        8 or 9 => Stub(page, "CommuMenuDataMemberEnt", page == 8 ? 0x021629BC : 0x021629CC),
        10 => Stub(page, "CommuMenuSuretigai_Add", 0x0215D1C0),
        11 => Stub(page, "CommuMenuQuizLeaderSel_Add", 0x0216321C),
        12 or 13 => Stub(page, "CommuMenuWLCmnMemEnt (quiz member entry)", page == 12 ? 0x02163514 : 0x02163568),
        14 => Stub(page, "Wi-Fi menu (arg +0x1C)", 0x0215C274),
        15 => Stub(page, "Wi-Fi page", 0x02154644),
        16 => Stub(page, "CommuMenuWiFiFrMatch_Add", 0x0215579C),
        17 or 18 => Stub(page, "Wi-Fi page", page == 17 ? 0x02155EFC : 0x02155F08),
        19 => Stub(page, "Wi-Fi page (arg +0x18)", 0x02153644),
        20 => Stub(page, "Wi-Fi page", 0x0215197C),
        22 => Stub(page, "CommuMenuFrndCode_Add", 0x02152F5C),
        PageWiFiError => Stub(page, "CommuMenuWiFiError_Add", 0x02164EE8),
        _ => null,
    };

    private CommuStubPage Stub(int page, string name, int address) => new(_game, this, page, name, address);
}
