using System.Buffers.Binary;
using System.Text;
using System.Text.Json;

namespace Jus.Nds;

/// <summary>
/// Exports the JUS game's own data tables from the ARM9 image and overlays into a JSON data file
/// (<c>jus/arm9tables.json</c>), so the port reads them as data: no table is written into the source and
/// no ARM binary ships with the game. Only JUS-specific game tables are exported (authorised by the
/// owner 2026-11-10); nothing from the Nintendo SDK.
///
/// Tables (addresses in the AJUJ image):
/// - seriesCodes  0x0209E840: 43 × char* (FUN_0214E008 indexes it below 0x2B), the per-series file stem
///   (koma art koma/xx_NN.dtx, CommonInfo bin/info/xx.bin, jgalaxy/xx_planet.aar); entry 0 is "".
/// - seriesSort   0x02092470: 43 bytes, the per-series rank in the koma list sort (DeckMake).
/// - stages       0x02092D08: 36 × {char* name, s16 music (FUN_020734E0), s16 music (FUN_0207361C)}.
/// - deckFolders  0x0209E590: 9 × char*, deck type → deck/&lt;folder&gt; (FUN_02070A28).
/// - jarenaJobs   0x02092424 / 0x02092428 / 0x0209242C: 3 × 4 bytes, scene 23/24/27 Arg → J Arena job.
/// - defaultDeckName 0x02092454 (FUN_02078B08).
/// - strings: ov12 0x021D4084 (the CommonInfo "random" entry), ov00 0x02161674 (the Option "close" entry).
/// </summary>
public static class JusTablesExport
{
    public const string FileName = "jus/arm9tables.json";

    public static byte[] Build(NdsRom rom)
    {
        byte[] a9 = rom.Arm9Binary;
        uint load = rom.Arm9.RamAddress;
        uint U32(uint a) => BinaryPrimitives.ReadUInt32LittleEndian(a9.AsSpan((int)(a - load)));
        short S16(uint a) => BinaryPrimitives.ReadInt16LittleEndian(a9.AsSpan((int)(a - load)));
        string Str(byte[] img, uint baseAddr, uint a)
        {
            int o = (int)(a - baseAddr);
            int e = Array.IndexOf(img, (byte)0, o);
            return ShiftJis.GetString(img, o, e - o);
        }
        string A9Str(uint a) => Str(a9, load, a);
        int[] OvBytes(int ov, uint a, int n)
        {
            var info = rom.Arm9Overlays[ov];
            return rom.ReadOverlay(info).AsSpan((int)(a - info.RamAddress), n).ToArray().Select(x => (int)x).ToArray();
        }
        int[] OvS16(int ov, uint a, int n)
        {
            var info = rom.Arm9Overlays[ov];
            var img = rom.ReadOverlay(info);
            return Enumerable.Range(0, n).Select(i => (int)BinaryPrimitives.ReadInt16LittleEndian(img.AsSpan((int)(a - info.RamAddress) + 2 * i))).ToArray();
        }
        string OvStr(int ov, uint a)
        {
            var info = rom.Arm9Overlays[ov];
            return Str(rom.ReadOverlay(info), info.RamAddress, a);
        }

        var doc = new Dictionary<string, object>
        {
            ["source"] = "JUS (AJUJ) ARM9 image and overlays; JUS game tables only",
            ["seriesCodes"] = Enumerable.Range(0, 43).Select(i => A9Str(U32(0x0209E840u + (uint)i * 4))).ToArray(),
            ["seriesSort"] = a9.AsSpan((int)(0x02092470u - load), 43).ToArray().Select(b => (int)b).ToArray(),
            ["stages"] = Enumerable.Range(0, 36).Select(i =>
            {
                uint e = 0x02092D08u + (uint)i * 8;
                return new Dictionary<string, object> { ["name"] = A9Str(U32(e)), ["music"] = S16(e + 4), ["seq"] = S16(e + 6) };
            }).ToArray(),
            ["deckFolders"] = Enumerable.Range(0, 9).Select(i => A9Str(U32(0x0209E590u + (uint)i * 4))).ToArray(),
            ["jarenaJobs"] = new[] { 0x02092424u, 0x02092428u, 0x0209242Cu }
                .Select(t => a9.AsSpan((int)(t - load), 4).ToArray().Select(b => (int)b).ToArray()).ToArray(),
            ["defaultDeckName"] = A9Str(0x02092454u),
            // battle stage collision (BattleCol / FUN_0216220C, FUN_0207E864): 16-entry kind tables and the
            // corner order/masks in overlay 6, and the default body box {x, y, half-w, half-h} at 0x02092E50
            ["battleCollision"] = new Dictionary<string, object>
            {
                ["blockFromBelow"] = OvBytes(6, 0x02171528u, 16),
                ["floorContact"] = OvBytes(6, 0x02171548u, 16),
                ["passThrough"] = OvBytes(6, 0x02171558u, 16),
                ["soloFloor"] = OvBytes(6, 0x02171568u, 16),
                ["wallFlag"] = OvBytes(6, 0x02171578u, 16),
                ["cornerMask"] = OvBytes(6, 0x02171524u, 4),
                ["cornerOrder"] = OvBytes(6, 0x021714E8u, 12),
                ["defaultBox"] = Enumerable.Range(0, 4).Select(i => (int)S16(0x02092E50u + (uint)i * 2)).ToArray(),
            },
            // battle walk/jump speed tables by rank (FUN_02158A10 → chara +0xB8 / +0xBA), overlay 6
            ["battleChara"] = new Dictionary<string, object>
            {
                ["walkSpeed"] = OvS16(6, 0x02171108u, 8),
                ["jumpSpeed"] = OvS16(6, 0x02171118u, 8),
            },
            ["strings"] = new Dictionary<string, string>
            {
                ["commonInfoRandom"] = OvStr(12, 0x021D4084u),
                ["optionClose"] = OvStr(0, 0x02161674u),
            },
        };
        return JsonSerializer.SerializeToUtf8Bytes(doc, new JsonSerializerOptions { WriteIndented = true, Encoder = System.Text.Encodings.Web.JavaScriptEncoder.UnsafeRelaxedJsonEscaping });
    }

    private static readonly Encoding ShiftJis = CreateShiftJis();

    private static Encoding CreateShiftJis()
    {
        Encoding.RegisterProvider(CodePagesEncodingProvider.Instance);
        return Encoding.GetEncoding(932);
    }
}
