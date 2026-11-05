using Jus.Nds;

namespace Jus.Nds.Tests;

[Collection("rom")]
public sealed class RomTests(RomFixture f)
{
    [Fact]
    public void HeaderMatchesKnownImage()
    {
        Assert.Equal("52e262163e0d304c96f3cd05b2be0e948c16725bda58a8a8635cf4a0afa111bd", RomFixture.Sha(f.Rom.Bytes));
        Assert.Equal("AJUJ", f.Rom.GameCode);
        Assert.Equal(393, f.Rom.Fat.Count);
        Assert.Equal(0x02000800u, f.Rom.Arm9.EntryPoint);
        Assert.Equal(0x02380000u, f.Rom.Arm7.EntryPoint);
    }

    [Fact]
    public void OverlaysMatchLayoutSlotsAndAreUncompressed()
    {
        Assert.Equal(14, f.Rom.Arm9Overlays.Count);
        Assert.Empty(f.Rom.Arm7Overlays);
        foreach (var ov in f.Rom.Arm9Overlays)
        {
            Assert.False(ov.Compressed);
            uint slot = ov.Id switch { <= 9 => 0x0214CD20u, <= 11 => 0x02172A60u, _ => 0x021AC1C0u };
            Assert.Equal(slot, ov.RamAddress);
            Assert.Equal((int)ov.RamSize, f.Rom.ReadOverlay(ov).Length);
        }
    }

    [Fact]
    public void FileSystemNamesEveryNonOverlayFile()
    {
        var ids = f.Rom.FileSystem.Files.Values.ToHashSet();
        var overlayIds = f.Rom.Arm9Overlays.Select(o => (int)o.FileId).ToHashSet();
        Assert.Equal(f.Rom.Fat.Count, ids.Count + overlayIds.Count);
        Assert.Empty(ids.Intersect(overlayIds));
    }

    [Fact]
    public void Arm9AutoloadMatchesNitroSdkLayout()
    {
        var al = AutoloadInfo.Find(f.Rom.Arm9Binary, f.Rom.Arm9.RamAddress);
        Assert.Equal([0x01FF8000u, 0x027C0000u], al.Blocks.Select(b => b.Destination));
        Assert.Equal(0x7B40u, al.Blocks[0].Size);
        Assert.Equal(0x1040u, al.Blocks[1].Size);
        Assert.Equal(0x020A05C0u, al.StaticBssStart);
        Assert.Equal(0x0214CD20u, al.StaticBssEnd);
    }

    [Fact]
    public void Arm7AutoloadMatchesNitroSdkLayout()
    {
        var al = AutoloadInfo.Find(f.Rom.Arm7Binary, f.Rom.Arm7.RamAddress);
        Assert.Equal([0x037F8000u, 0x027E0000u], al.Blocks.Select(b => b.Destination));
        Assert.Equal(0x023801B0u, al.AutoloadStart);
    }
}
