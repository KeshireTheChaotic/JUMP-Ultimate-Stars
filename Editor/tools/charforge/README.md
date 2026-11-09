# Character Forge — replacement battle characters as editor packages

Character Forge turns a **character concept** into an editor package that
replaces one battle character: every sprite frame, effect texture, palette
and the metadata linking them. You import the package with
**File → Import package** and save. It edits only the extracted data root
and never touches the ROM.

## Why a replacement, not a new file name

The battle roster is **hard-coded** in ARM9. `FUN_02074728` takes the
character's file name and resource-id block from the table at `0x020924B0`
(`{char *id, u32 res_base}[74]`). From that record it opens these files:

| What | Name / id (B = res_base & 0xFFFF00) |
|---|---|
| animation archives | `chr/ChrArc.aar` → `chr/<id><sfx>.aar`, `sfx` ∈ `'', _2 … _8` by koma size (0x0209F198) |
| image archives | `chr/<id><sfx>c.aar` (top level) |
| resources | `B+size_char`, `B`, `B+0x40`, `B+0x41…0x50`; motions from `B+0x38`; form f: `B+f*0x20+0…7` |
| battle window | `battle/ChrWin.aar` → `battle/chr/<id>[_b].aar`, ids `0x5F1000` / `0x5F2000` + record |
| gameplay tables | `chr/ChrBin.aar` → `chr/{ai,col,shot,effect}/<id>.bin` (`shot` holds move ids of the block) |
| display name | `bin/chr_b_t.bin`, record string 0 (53 CP932 strings per record) |

A file the table doesn't name is never loaded, so a new file name would need
an ARM9 patch. Character Forge doesn't patch the ROM. Instead the new
character **takes over a slot**: same file names, same id block, same window
ids. `info` prints exactly what the chosen slot needs.

## What carries over and what you make

* **Kept from the template character** (any slot with the same forms, windows
  and tables, often the slot itself): move timing, hit and collision boxes,
  GenerateID spawn links, AI/col/shot tables and effect behaviour. These are
  game logic; a package can't add new moves.
* **You make:** every body frame, every character-owned effect texture, the
  palettes, the window portrait and the display name.
* **Shared effects** (`efc/comm_*.aar`) are used by many characters. They are
  listed but never edited.

## Commands (run from the Editor folder)

```bash
py -3 -m tools.charforge census                                  # all 74 slots → docs JSON
py -3 -m tools.charforge info <slot>                             # replacement contract
py -3 -m tools.charforge scaffold <template> <slot> <work> --name "…" --concept "…"
py -3 -m tools.charforge draft <work> --colours "#…,#…"          # optional placeholder art
py -3 -m tools.charforge generate <work>                         # procedural pose-guided art, effects & Komas
py -3 -m tools.charforge generate <work> --overwrite             # regenerate previously created PNG art
py -3 -m tools.charforge review <work>                            # refresh review/index.html from actual PNGs
py -3 -m tools.charforge build <work> <package-out>
py -3 -m tools.charforge validate <package-out> <slot>          # dry-run import, writes nothing
py -3 -m tools.charforge names <slot> "表示名"                    # writes data/bin/chr_b_t.bin (+.orig)
```

`--data <root>` selects the extracted data root (default `D:\Library\Development\JUS\data`).

### Work folder

| Path | Content |
|---|---|
| `concept.json` | concept text, display name, palette options, a line per move to describe |
| `BRIEF.md`, `brief.json` | every sprite sheet: role, mode, frame sizes, anchor (origin), which moves show which frame at which tick |
| `template_package/` | template exported with all spawned effects (`effects.json` = spawn graph) |
| `reference/<key>/` | template frames as RGBA PNG plus `sheet.png` (pose, size and anchor reference) |
| `art/<key>/NNN.png` | **your frames**: same pixel size as the reference, transparent background |
| `art/<key>/atlas.png` | **your atlas** for atlas-mode effect textures (same size) |
| `reference/koma/<key>/NNN.png` | Original 48×48 Koma panels, extracted from DSTX mode 0x04 |
| `art/koma/<key>/NNN.png` | New 48×48 Koma panels (one PNG per native panel) |
| `GENERATION_REPORT.json` | Source-guided generator provenance and file count |
| `review/index.html` | Local gallery: actual original vs generated/edited body, effects, and Koma PNGs; filter by move or asset |
| `<package-out>/ALMT_LINKS.json` | Every move ID/duration/loop, actual ALMT file and animation/effect tracks, plus native Koma shape/card selections |

### Art rules (checked by `build`)

* Exact reference size. The origin (`brief.json` → `frames[i].origin`) is the
  character's foot/anchor point, so keep it where the template has it.
* At most **15 opaque colours for 4bpp art** and **three for 2bpp atlases**
  across artwork sharing a DSIG (colour 0 is
  transparent). `build` quantises to DS 15-bit colour and writes the palette
  into the package; `palette.alt_banks: "copy"` fills every palette bank.
* Hard pixel edges. Alpha < 128 counts as transparent; there is no
  semi-transparency.
* Every non-empty frame is required (`require_all_frames`). Empty frames stay
  empty.
* No art for shared `efc_*` keys or mixed 2bpp/4bpp atlases. Scaffold again
  for legacy 2bpp work folders. See the [character art bible](../../docs/CHARFORGE_ART_BIBLE.md).
* Koma panels use **48×48 pixels, 4bpp (15 visible colours + index 0 transparent)**, and retain original panel order and the target card's `kshape.bin` shape. No `koma.bin` or `kshape.bin` records are changed.
* `generate` is a **deterministic, source-guided pixel-art baseline**: it keeps the template's actual silhouettes, poses, frame dimensions, and anchors; applies hard ink lines, coloured regions and manga-style effect/Koma rendering. It is not AI image generation and does not infer a new character's anatomy from prose. Edit `concept.json` → `generator` colours and replace any PNG with actual artwork before a final release. Existing PNGs are kept unless `--overwrite` is passed.

### What `validate` checks

Dry-run import into memory (the data root is not changed), then:

* every unit is a file name the loader opens for the slot;
* every member resource id is inside the slot's block, window ids are
  `0x5F1000/0x5F2000 + record`, and stored name hashes match the member names;
* the loader ids `B` and `B+0x38` exist; ids the old character had and the
  new one lacks are listed;
* every GenerateID resolves (own tables, then `efc/*.aar`), every TextureID
  has a DSTX, and every BoundsIndex cell is inside its texture;
* every frame renders through the game's decoder;
* Koma members parse and rebuild as original DSTX/DSIG panels, and each referenced card size matches the art panel count;
* the `shot` table holds no id from another character's block.

The package contains the **actual existing ALMT JSON** exported from the selected template. That is the editable timing, collision, animation and effect link source; `ALMT_LINKS.json` indexes those encoded tracks without adding fictional move names. Edits to native ALMT JSON are rebuilt by the normal Editor package importer and must pass `validate`.

## Limits

* No new moves, hit boxes or AI. Pick a template whose moveset fits the concept.
* Koma art **is generated and packaged**, but existing card records, deck selectors and shared card shapes are deliberately preserved. New Koma counts, new cards or new slot IDs would need separate runtime support.
* Stage and menu portraits outside `battle/ChrWin.aar` are not covered.
* Test the result in melonDS with a fresh save.
