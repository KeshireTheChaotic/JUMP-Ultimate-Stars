namespace Jus.Game.Scenes.Ov07;

/// <summary>Result of a Nintendo Wi-Fi Connection attempt as CommuMenuTop's WFC handler (0x0214FFE8)
/// reads it: 0x021A3280 ≠ 0 → <see cref="Error"/>; else 0x021A32FC = 0 → <see cref="Cancelled"/>
/// (it then waits for 0x021A315C to clear); else <see cref="Connected"/>.</summary>
public enum WfcConnectResult { Error, Cancelled, Connected }

/// <summary>
/// Everything overlay 7's communication menus call in the communication libraries (WiFiGame ov10 =
/// WiFi.cpp + DWC; the DS wireless MP layer; CommLib). The native port has neither DS wireless nor
/// Nintendo WFC, so these calls stop here; <see cref="NoCommLink"/> answers "nothing found / error" so
/// the menus and their error paths can be walked.
/// </summary>
public interface ICommLink
{
    /// <summary>0x02199EE8 WiFi::WiFi_Init_MemoryManager (CommuMenu_Add_Core, first thing).</summary>
    void InitMemoryManager();

    /// <summary>0x02199FD8: release it (CommuMenu end, unless the exit code is 9, 14 or 15).</summary>
    void ReleaseMemoryManager();

    /// <summary>0x021A3264: a WFC error is pending (ov10 state +0xD); CommuMenu's page switch then
    /// opens page 0x18 (CommuMenuWiFiError_Add 0x02164EE8).</summary>
    bool WiFiErrorPending { get; }

    /// <summary>0x02199E58 = WiFi_Init_MemoryManager + 0x02199E68 (DWC init, FUN_0206950C); false when the
    /// DWC init result is 3 (the stored WFC settings were erased). CommuMenuTop then shows
    /// CommonWindow message 0x25.</summary>
    bool InitWiFi();

    /// <summary>0x0219BA50: if the WFC user data at save +0x40 (0x020B02F8, CRC32 over 0x3C bytes,
    /// FUN_02069880) is invalid, create it (game code 'JUAJ') and return true; CommuMenuTop then saves
    /// with CommonWindow message 0x44 (FUN_021516F0).</summary>
    bool EnsureUserData(byte[] saveImage);

    /// <summary>0x0219BACC(save, 0x020B0D70 + 0x40): copy the friend key / user data out of the WFC
    /// user data (cleared when it is invalid).</summary>
    void ExportUserData(byte[] saveImage);

    /// <summary>The WFC connection of item 13: 0x02166190 (connection screen, ov07) + 0x021A3228(win, 1, 1)
    /// + polling 0x021A32A8, then 0x021A3280 / 0x021A32FC / 0x021A315C / 0x021A3248.</summary>
    WfcConnectResult ConnectWfc();

    /// <summary>CommuMenuWiFiError's retry (0x021650BC: 0x021A3228(win, 0xFF, 0), then 0x02165100 polls
    /// 0x021A315C / 0x021A32FC / 0x021A3248): true = connected (page 0xE), false = page 1.</summary>
    bool RetryAfterError();

    /// <summary>What a DS-wireless / download / Wi-Fi page finds (leader selection, member entry, watch,
    /// passing, friend match …): the real pages scan with WM/MP or DWC. Null = nobody.</summary>
    string? FindPartner(int page);
}

/// <summary>The native port's link: no wireless hardware, no WFC service. Nothing is ever found, the WFC
/// connection fails (and leaves the WFC error pending, as ov10 does after a failed connection), and the
/// save's user data is left alone (DWC_CreateUserData is not available).</summary>
public sealed class NoCommLink : ICommLink
{
    public int MemoryManagerUsers { get; private set; }
    public bool WiFiErrorPending { get; set; }
    /// <summary>Set to make <see cref="InitWiFi"/> report erased WFC settings (message 0x25 path).</summary>
    public bool SettingsErased { get; set; }

    public void InitMemoryManager() => MemoryManagerUsers = 1;
    public void ReleaseMemoryManager() => MemoryManagerUsers = 0;
    public bool InitWiFi() => !SettingsErased;
    public bool EnsureUserData(byte[] saveImage) => false;
    public void ExportUserData(byte[] saveImage) { }

    public WfcConnectResult ConnectWfc()
    {
        WiFiErrorPending = true;
        return WfcConnectResult.Error;
    }

    /// <summary>The error has been shown; nothing to retry with (clearing the pending flag is inferred).</summary>
    public bool RetryAfterError()
    {
        WiFiErrorPending = false;
        return false;
    }

    public string? FindPartner(int page) => null;
}
