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

    public byte[] Read(string path) => _rom.ReadFile(path);

    public static string? Find()
    {
        var env = Environment.GetEnvironmentVariable("JUS_ROM");
        if (env is not null && File.Exists(env)) return env;
        for (var d = new DirectoryInfo(AppContext.BaseDirectory); d is not null; d = d.Parent)
        {
            var p = Path.Combine(d.FullName, "JUS.nds");
            if (File.Exists(p)) return p;
        }
        return null;
    }
}

/// <summary>Sound requests are logged until the sound archive (SDAT) is ported.</summary>
internal sealed class LoggingSound(Action<string> log) : ISound
{
    public void PlayEffect(int id, int arg) => log($"sound: effect 0x{id:X} ({arg}) [not ported yet]");
}
