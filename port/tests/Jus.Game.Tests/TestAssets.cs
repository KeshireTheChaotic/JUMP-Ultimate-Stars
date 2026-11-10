using Jus.Game;
using Jus.Nds;

namespace Jus.Game.Tests;

/// <summary>Assets from the local JUS.nds (found above the test directory, or JUS_ROOT).</summary>
internal sealed class RomAssetsForTests : IAssetSource
{
    public static RomAssetsForTests Instance { get; } = new();
    private readonly Lazy<NdsRom> _rom = new(() => NdsRom.Load(Path.Combine(FindRoot(), "JUS.nds")));

    public byte[] Read(string path) => _rom.Value.ReadFile(path);

    public static string FindRoot()
    {
        var env = Environment.GetEnvironmentVariable("JUS_ROOT");
        if (env is not null) return env;
        for (var d = new DirectoryInfo(AppContext.BaseDirectory); d is not null; d = d.Parent)
            if (File.Exists(Path.Combine(d.FullName, "JUS.nds"))) return d.FullName;
        throw new FileNotFoundException("JUS.nds not found above the test directory; set JUS_ROOT");
    }
}

internal sealed class RecordingSound : ISound
{
    public List<(int Id, int Arg)> Effects { get; } = [];
    public int StopAlls;
    public void PlayEffect(int id, int arg) => Effects.Add((id, arg));
    public void StopAll() => StopAlls++;
    public long StreamSamples;
    public void QueueStream(short[] samples, int rate) => StreamSamples += samples.Length;
}
