namespace Jus.Nds.Verification;

/// <summary>Reproduces the original ARM9 boot (cartridge copy + NitroSDK crt0 autoload/bss) and
/// FS_LoadOverlay into an <see cref="Arm9Image"/>, so tests can check the ROM parsing against the
/// Ghidra layout. Verification only: in the native port, overlays are C# code and there is no
/// boot or overlay loading at run time.</summary>
public sealed class Arm9Loader(NdsRom rom, Arm9Image image)
{
    public AutoloadInfo Autoload { get; private set; } = null!;

    /// <summary>Returns the original entry point (0x02000800 for JUS).</summary>
    public uint Boot()
    {
        var bin = rom.Arm9Binary;
        uint ram = rom.Arm9.RamAddress;
        image.WriteBlock(ram, bin);
        Autoload = AutoloadInfo.Find(bin, ram);
        foreach (var b in Autoload.Blocks)
        {
            image.WriteBlock(b.Destination, bin.AsSpan((int)(b.Source - ram), (int)b.Size));
            if (b.BssSize != 0) image.Clear(b.Destination + b.Size, b.BssSize);
        }
        // crt0 clears static .bss, which also wipes the autoload source and list
        if (Autoload.StaticBssEnd > Autoload.StaticBssStart)
            image.Clear(Autoload.StaticBssStart, Autoload.StaticBssEnd - Autoload.StaticBssStart);
        return rom.Arm9.EntryPoint;
    }

    public OverlayInfo LoadOverlay(uint id)
    {
        var ov = rom.Arm9Overlays.Single(o => o.Id == id);
        var data = rom.ReadOverlay(ov);
        if (data.Length != ov.RamSize) throw new InvalidDataException($"overlay {id}: file {data.Length} != ram_size {ov.RamSize}");
        image.WriteBlock(ov.RamAddress, data);
        if (ov.BssSize != 0) image.Clear(ov.RamAddress + ov.RamSize, ov.BssSize);
        return ov;
    }

    /// <summary>Static-initializer function pointers (Thumb bit kept) the original runs after a load.</summary>
    public IEnumerable<uint> StaticInitializers(OverlayInfo ov)
    {
        for (uint p = ov.StaticInitStart; p < ov.StaticInitEnd; p += 4)
        {
            uint f = image.Read32(p);
            if (f != 0) yield return f;
        }
    }
}
