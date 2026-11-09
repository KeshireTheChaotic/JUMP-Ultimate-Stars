# Character Forge v2 — native battle-character authoring harness
2026-11-08

## Scope and authority

Implementation: `tools/charforge` in the published JUMP-Ultimate-Stars Editor.
Data root: `D:\Library\Development\JUS\data`. All changes are confined to
the harness, its documentation/tests, and isolated generated work/packages.
Original extracted game data, ROM, and Ghidra exports were not edited.

The ARM9 table at `0x020924B0` contains 74 fixed battle-character IDs and
resource bases. `FUN_02074728` loads per-character and per-form archives by
these names and IDs. Consequently this is a **battle-slot replacement** harness,
not a hard-coded roster expansion or support-character creator. New character
identities requiring a genuinely new slot would need runtime/port changes.

Native format sources used:
- `jus_formats/alar.py` — archive membership, IDs, compressed members, hashes
- `jus_formats/almt.py` / `notetrack.py` — original moves, timing, tracks, frames, spawns
- `jus_formats/dstx.py` / `sprite.py` / `dsig.py` — native sprite frames and palettes
- `jus_formats/koma.py` — DSTX v1 flags 0x04 and DSIG v1 mode 0x10, 4bpp 48×48 panels
- `jus_formats/kshape.py` / `jus_package/komacards.py` — card selectors and exact 5×4 panel placement
- `jus_package/package.py` — export/import and full archive rebuild

Related reverse-engineered code:
- ARM9 `FUN_02074728` roster loader and resource base table at `0x020924B0`
- ARM9 `FUN_020790F0` Koma art path formation, series prefix table `0x0209E840`
- ARM9 `FUN_02076E38` Koma card/shape interpretation
- Native effects represented by actual `GenerateID` and `chr/ChrBin.aar` table references;
  no unverified projectile motion or collision-result semantics are synthesized.

## Read-only corpus census

Run: `python -m tools.charforge census --out docs/CHARFORGE_CORPUS_CENSUS_20261108.json`

| Original battle roster scan | Result |
|---|---:|
| Hard-coded battle slots | 74 |
| Slots with scan errors / warnings | 0 / 0 |
| ALMT move records across all battle slots | 6,945 |
| DSTX sprite members | 1,274 |
| DSTX frame records | 25,783 |
| Battle Koma cards | 206 |
| Distinct battle Koma art members | 206 |
| Native 48×48 Koma panels in those members | 1,091 |

Counts reflect original data inspected by the census, not generated new content.
Support-only/other Koma are not included. The `effect_sprite_members_name_hint`
classification in the JSON is filename-derived; it is not a code-proven
semantic category.

## Implemented workflow

1. `info SLOT`: exact roster slot, loaded filenames and resource block.
2. `scaffold TEMPLATE SLOT WORK`: exports original archive package and effect graph;
   produces `BRIEF.md`, `brief.json`, original art references, Koma panel
   references, and editable `concept.json` describing every move and frame.
3. `generate WORK`: deterministic source-guided manga/pixel rendering.
   One new PNG per non-empty original sprite frame or atlas and every Koma
   panel; hard edges and the original pose/anchor/dimensions are preserved.
   Original reference art is not changed. Shared `efc` assets are read-only.
4. Hand-paint or replace PNGs under `art`, optional edits to the ALMT JSON
   in `template_package/units/*`; `review WORK` refreshes a comparison
   gallery of *actual* original/generated raster files at `review/index.html`.
5. `build WORK PACKAGE`: quantises native RGB555 palettes (index 0 transparent,
   at most 15 colors per DSIG), rebuilds sprite PNGs through existing codecs,
   rebuilds only slot-owned Koma DSTX/DSIG entries, and indexes every
   package ALMT move into `ALMT_LINKS.json`.
6. `validate PACKAGE SLOT`: dry-run archive import into an in-memory DataRoot,
   verifies original archive/resource IDs and member-name hashes,
   all GenerateID/TextureID/BoundsIndex links, frame rendering and native
   Koma panel counts vs unmodified card selectors.

The Koma output contains individually importable
`koma/koma.aar|koma/<series>_<NN>.dtx` members; `bin/koma.bin` and
`bin/kshape.bin` remain unchanged. Shared effects are never edited.

The ALMT JSON is copied from the real template archives. New art is mapped
to the **existing** native move and effect timeline. This harness does not
invent new engine-recognized move IDs, input controls, or animation handlers.
The generated art is a functional stylized baseline, not text-to-image AI
and not finished new-character artwork.

## Verification

- Baseline `tests.test_charforge` compatibility, remap, missing shared
  effect rejection, original ARM9 base mapping and editable display-name
  constraints: passed (8 tests).
- `tests.test_charforge_extended`: source-guided generation,
  move-link indexing, silhouette/anchor preservation, unchanged original data,
  native Koma code roundtrip, card links and non-overwrite behaviour: passed (5 tests).
- `tests.test_charforge`, `tests.test_charforge_extended`,
  `tests.test_koma_cards`, `tests.test_formats`: 37 tests, all passed.
- `db_b_01` isolated end-to-end smoke: 10 sprite sheets; 302 frame
  entries (including empties), 227 generated PNGs; 23 effect moves;
  3 Koma members (13 panels), 103 ALMT moves indexed. Dry-run validator:
  37 GenerateID keys, 77 texture references, 300 rendered frames;
  15 members changed, 23 unchanged; **zero errors**.

Smoke work folder:
`D:\Library\Development\JUS\.test_tmp\charforge_v2_work_20261108`

Smoke importable package:
`D:\Library\Development\JUS\.test_tmp\charforge_v2_package_20261108`

Read-only gallery:
`D:\Library\Development\JUS\.test_tmp\charforge_v2_work_20261108\review\index.html`

No original game data was written as part of this smoke. Display names are
not changed by build; `names` explicitly writes `bin/chr_b_t.bin` and was
not run. Final validation inside melonDS using a fresh save has **not** been
performed; the game itself has not been run here.

## Remaining constraints

- Actual character identity / original silhouettes need hand-drawn or external
  image-generation frames; procedural source stylization alone is a baseline.
- The game only loads its hard-coded battle roster and original form archives.
- Character-owned effect art is editable, but shared `efc` is intentionally not.
- Native runtime execution of newly changed ALMT timing, projectile behavior,
  and gameplay edge cases must be tested separately; package import checks
  structure and references, not gameplay correctness.
- Support-only characters and passive Koma are not currently authorable by
  this battle-character replacement harness.
