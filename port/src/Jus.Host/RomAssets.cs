using System.Security.Cryptography;
using Jus.Game;
using Jus.Nds;

namespace Jus.Host;

/// <summary>Game data read from the player's own copy of the ROM (nothing is shipped with the port).</summary>
internal sealed class RomAssets : IAssetSource
{
    public const string SupportedSha256 = "52e262163e0d304c96f3cd05b2be0e948c16725bda58a8a8635cf4a0afa111bd";
    private readonly NdsRom _rom;

    public RomAssets(string path, Action<string> log)
    {
        byte[] bytes = File.ReadAllBytes(path);
        string sha = Convert.ToHexStringLower(SHA256.HashData(bytes));
        if (sha != SupportedSha256) log($"warning: {path} is not the supported JUS image (sha256 {sha})");
        _rom = new NdsRom(bytes);
    }

    public byte[] Read(string path) => path == Jus.Nds.JusTablesExport.FileName ? Jus.Nds.JusTablesExport.Build(_rom) : _rom.ReadFile(path);

}

/// <summary>Sound requests are only logged (no sound archive available, scripted runs, or --mute).</summary>
internal sealed class LoggingSound(Action<string> log) : ISound
{
    public void PlayEffect(int id, int arg) => log($"sound: effect 0x{id:X} ({arg})");
    public void PlayMusic(int id, int arg) => log($"sound: music {id} ({arg})");
}
