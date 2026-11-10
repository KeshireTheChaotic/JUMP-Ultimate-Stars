using Jus.Game;
using Jus.Game.Assets;

namespace Jus.Host;

internal static class AssetSelection
{
    public static IAssetSource Open(string? data, string? rom, string? environmentData,
        string baseDirectory, Action<string> log)
    {
        if (data is not null && rom is not null)
            throw new ArgumentException("Choose --data <directory> or --rom <file>, not both.");
        if (rom is not null)
        {
            log($"Assets: ROM {Path.GetFullPath(rom)}");
            return new RomAssets(rom, log);
        }
        // --data, then Data beside JUS.exe (copied there by the build), then JUS_DATA_ROOT
        string besideExe = Path.Combine(baseDirectory, "Data");
        string root = data ?? (Directory.Exists(besideExe) || string.IsNullOrWhiteSpace(environmentData)
            ? besideExe : environmentData);
        var source = new DirectoryAssets(root);
        log($"Assets: external data {source.Root}");
        return source;
    }
}
