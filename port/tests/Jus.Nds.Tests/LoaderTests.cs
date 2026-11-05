using Jus.Nds;

namespace Jus.Nds.Tests;

/// <summary>Cross-checks the C# loader against the Ghidra layout specs: every expected block's
/// bytes, read back from the emulated ARM9 address space, must have the spec's SHA256.</summary>
[Collection("rom")]
public sealed class LoaderTests(RomFixture f)
{
    private static void AssertBlocks(System.Text.Json.JsonElement spec, Arm9Memory mem)
    {
        int n = 0;
        foreach (var b in spec.GetProperty("expected_blocks").EnumerateArray())
        {
            uint start = b.GetProperty("start").GetUInt32(), size = b.GetProperty("size").GetUInt32();
            Assert.True(RomFixture.Sha(mem.ReadBlock(start, size)) == b.GetProperty("sha256").GetString(),
                $"{b.GetProperty("name").GetString()} at 0x{start:X8} differs from the layout spec");
            n++;
        }
        Assert.True(n >= 3);
    }

    [Fact]
    public void BootReproducesArm9MainLayout()
    {
        var mem = new Arm9Memory();
        Assert.Equal(0x02000800u, new Arm9Loader(f.Rom, mem).Boot());
        AssertBlocks(f.Spec("arm9_main"), mem);
        Assert.Equal(0u, mem.Read32(0x020A05C0));           // static .bss cleared
    }

    [Theory]
    [InlineData(0)] [InlineData(1)] [InlineData(2)] [InlineData(3)] [InlineData(4)] [InlineData(5)]
    [InlineData(6)] [InlineData(7)] [InlineData(8)] [InlineData(10)] [InlineData(11)] [InlineData(12)]
    public void OverlayLoadReproducesLayout(int id)
    {
        var mem = new Arm9Memory();
        var loader = new Arm9Loader(f.Rom, mem);
        loader.Boot();
        var ov = loader.LoadOverlay((uint)id);
        AssertBlocks(f.Spec($"arm9_ov{id:D2}"), mem);
        // static initializers are the same Thumb-tagged pointers the Ghidra spec seeded
        var seeded = f.Spec($"arm9_ov{id:D2}").GetProperty("entries").EnumerateArray()
            .Select(e => e.GetProperty("addr").GetUInt32() | (e.GetProperty("thumb").GetBoolean() ? 1u : 0u)).ToHashSet();
        foreach (var p in loader.StaticInitializers(ov))
            Assert.Contains(p, seeded);
    }

    [Fact]
    public void MemoryMapMirrorsAndTcm()
    {
        var mem = new Arm9Memory();
        mem.Write32(0x02000010, 0xDEADBEEF);
        Assert.Equal(0xDEADBEEFu, mem.Read32(0x02400010));   // 4 MB main-RAM mirror
        mem.Write32(0x01FF8000, 0x12345678);
        Assert.Equal(0x12345678u, mem.Read32(0x00000000));   // ITCM mirror
        mem.Write16(0x027C0002, 0xBEEF);
        Assert.Equal(0xBEEFu, mem.Read16(0x027C0002));
        Assert.Equal(0u, mem.Read32(0x023C0000));             // DTCM shadows only its 16 KB
        Assert.Throws<MemoryAccessException>(() => mem.Read32(0x08000000));
    }
}
