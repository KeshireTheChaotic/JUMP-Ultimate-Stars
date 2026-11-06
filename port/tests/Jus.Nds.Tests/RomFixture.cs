using System.Security.Cryptography;
using System.Text.Json;
using Jus.Nds;

namespace Jus.Nds.Tests;

/// <summary>Loads JUS.nds and the Ghidra layout specs (reverse_engineering/layout/specs), which
/// were produced independently by harness/python/nds_layout.py and verified in Ghidra.</summary>
public sealed class RomFixture
{
    public string Root { get; }
    public NdsRom Rom { get; }

    public RomFixture()
    {
        Root = FindRoot();
        Rom = NdsRom.Load(Path.Combine(Root, "JUS.nds"));
    }

    public JsonElement Spec(string program) =>
        JsonDocument.Parse(File.ReadAllText(Path.Combine(Root, "reverse_engineering", "layout", "specs", program + ".layout.json"))).RootElement;

    public static string Sha(ReadOnlySpan<byte> b) => Convert.ToHexStringLower(SHA256.HashData(b));

    private static string FindRoot()
    {
        var env = Environment.GetEnvironmentVariable("JUS_ROOT");
        if (env is not null) return env;
        for (var d = new DirectoryInfo(AppContext.BaseDirectory); d is not null; d = d.Parent)
            if (File.Exists(Path.Combine(d.FullName, "JUS.nds"))) return d.FullName;
        throw new FileNotFoundException("JUS.nds not found above the test directory; set JUS_ROOT");
    }
}

[CollectionDefinition("rom")]
public sealed class RomCollection : ICollectionFixture<RomFixture>;
