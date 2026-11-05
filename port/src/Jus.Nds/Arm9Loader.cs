namespace Jus.Nds;

/// <summary>Puts the ARM9 program into memory the way the cartridge boot + NitroSDK crt0 do,
/// and loads overlays the way FS_LoadOverlay does (copy, clear bss; static initializers are
/// the caller's job because they are game code).</summary>
public sealed class Arm9Loader(NdsRom rom, Arm9Memory memory)
{
    /// <summary>Overlay ids currently resident, by slot base address.</summary>
    private readonly Dictionary<uint, uint> _resident = [];

    public AutoloadInfo Autoload { get; private set; } = null!;
    public IReadOnlyDictionary<uint, uint> ResidentOverlays => _resident;

    /// <summary>Returns the entry point (0x02000800 for JUS).</summary>
    public uint Boot()
    {
        var bin = rom.Arm9Binary;
        uint ram = rom.Arm9.RamAddress;
        memory.WriteBlock(ram, bin);
        Autoload = AutoloadInfo.Find(bin, ram);
        // crt0: copy each autoload block to its destination and clear its bss
        foreach (var b in Autoload.Blocks)
        {
            memory.WriteBlock(b.Destination, bin.AsSpan((int)(b.Source - ram), (int)b.Size));
            if (b.BssSize != 0) memory.Clear(b.Destination + b.Size, b.BssSize);
        }
        // crt0: clear static .bss (this also wipes the autoload source and list)
        if (Autoload.StaticBssEnd > Autoload.StaticBssStart)
            memory.Clear(Autoload.StaticBssStart, Autoload.StaticBssEnd - Autoload.StaticBssStart);
        return rom.Arm9.EntryPoint;
    }

    public OverlayInfo LoadOverlay(uint id)
    {
        var ov = rom.Arm9Overlays.Single(o => o.Id == id);
        var data = rom.ReadOverlay(ov);
        if (data.Length != ov.RamSize) throw new InvalidDataException($"overlay {id}: file {data.Length} != ram_size {ov.RamSize}");
        memory.WriteBlock(ov.RamAddress, data);
        if (ov.BssSize != 0) memory.Clear(ov.RamAddress + ov.RamSize, ov.BssSize);
        _resident[ov.RamAddress] = id;
        return ov;
    }

    /// <summary>Static-initializer function pointers (Thumb bit kept) run after an overlay loads.</summary>
    public IEnumerable<uint> StaticInitializers(OverlayInfo ov)
    {
        for (uint p = ov.StaticInitStart; p < ov.StaticInitEnd; p += 4)
        {
            uint f = memory.Read32(p);
            if (f != 0) yield return f;
        }
    }
}
