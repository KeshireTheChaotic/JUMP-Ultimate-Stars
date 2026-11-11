using System.Security.Cryptography;
using Jus.Nds;

// jus <command> [rom]   commands: info | files | extract <dir> | verify
// Asset/ROM tooling for the native port; the game itself will be a separate Windows app.
const string ExpectedSha256 = "52e262163e0d304c96f3cd05b2be0e948c16725bda58a8a8635cf4a0afa111bd";

if (args.Length == 0)
{
    Console.WriteLine("usage: jus info|files|verify [rom]  |  jus extract <dir> [rom]");
    return 1;
}
string cmd = args[0];
string? outDir = cmd == "extract" ? args.ElementAtOrDefault(1) : null;
string romPath = args.Skip(cmd == "extract" ? 2 : 1).FirstOrDefault() ?? FindRom();
byte[] bytes = File.ReadAllBytes(romPath);
string sha = Convert.ToHexStringLower(SHA256.HashData(bytes));
if (sha != ExpectedSha256)
    Console.Error.WriteLine($"warning: {romPath} sha256 {sha} is not the supported JUS (AJUJ) image");
var rom = new NdsRom(bytes);

switch (cmd)
{
    case "info":
        Console.WriteLine($"{rom.Title} [{rom.GameCode}]  FAT entries: {rom.Fat.Count}  named files: {rom.FileSystem.Files.Count}");
        Console.WriteLine($"ARM9 0x{rom.Arm9.RamAddress:X8}+0x{rom.Arm9.Size:X} entry 0x{rom.Arm9.EntryPoint:X8}");
        Console.WriteLine($"ARM7 0x{rom.Arm7.RamAddress:X8}+0x{rom.Arm7.Size:X} entry 0x{rom.Arm7.EntryPoint:X8}");
        foreach (var ov in rom.Arm9Overlays)
            Console.WriteLine($"  ov{ov.Id:D2} 0x{ov.RamAddress:X8}+0x{ov.RamSize:X} bss 0x{ov.BssSize:X} file {ov.FileId}{(ov.Compressed ? " compressed" : "")}");
        return 0;
    case "files":
        foreach (var (path, id) in rom.FileSystem.Files.OrderBy(f => f.Value))
            Console.WriteLine($"{id,4} {rom.Fat[id].End - rom.Fat[id].Start,10} {path}");
        return 0;
    case "extract":
        if (outDir is null) { Console.Error.WriteLine("extract needs an output directory"); return 1; }
        foreach (var (path, id) in rom.FileSystem.Files)
        {
            string dst = Path.Combine(outDir, path.Replace('/', Path.DirectorySeparatorChar));
            Directory.CreateDirectory(Path.GetDirectoryName(dst)!);
            File.WriteAllBytes(dst, rom.ReadFile(id));
        }
        // the JUS game tables from the ARM9 image/overlays (not the Nintendo SDK), as data
        string tables = Path.Combine(outDir, Jus.Nds.JusTablesExport.FileName.Replace('/', Path.DirectorySeparatorChar));
        Directory.CreateDirectory(Path.GetDirectoryName(tables)!);
        File.WriteAllBytes(tables, Jus.Nds.JusTablesExport.Build(rom));
        Console.WriteLine($"extracted {rom.FileSystem.Files.Count} files and {Jus.Nds.JusTablesExport.FileName} to {outDir}");
        return 0;
    case "verify":
        var image = new Jus.Nds.Verification.Arm9Image();
        var loader = new Jus.Nds.Verification.Arm9Loader(rom, image);
        uint entry = loader.Boot();
        Console.WriteLine($"original ARM9 image rebuilt for verification; {loader.Autoload.Blocks.Count} autoload blocks; entry 0x{entry:X8}");
        return 0;
    default:
        Console.Error.WriteLine($"unknown command {cmd}");
        return 1;
}

static string FindRom()
{
    for (var d = new DirectoryInfo(AppContext.BaseDirectory); d is not null; d = d.Parent)
    {
        var p = Path.Combine(d.FullName, "JUS.nds");
        if (File.Exists(p)) return p;
    }
    throw new FileNotFoundException("JUS.nds not found; pass its path");
}

