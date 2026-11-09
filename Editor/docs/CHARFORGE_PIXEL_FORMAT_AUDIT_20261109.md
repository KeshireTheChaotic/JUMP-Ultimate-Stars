# CharForge pixel-format audit — 2026-11-09

Scope: current `tools/charforge` compared with the current editor's `jus_package/images.py`, `package.py`, and `jus_formats/{dsig,dstx,sprite,koma}.py`. Audit only; existing source changes were preserved. Checks use extracted `D:/Library/Development/JUS/data` and Python/Pillow.

## P1: Atlas art is requantized without respecting 2bpp consumers

Locations: `forge.py:314`, `forge.py:561-579`; `generator.py:170`.

The editor explicitly exports an editable native 4bpp storage atlas and a separate `texture_2bpp.png` diagnostic view (`package.py:251-261`). DSTX attribute bit 6 makes the renderer reinterpret those same bytes as four 2-bit texels per byte, with twice the nominal atlas width (`sprite.py:142-198`). Native nibble values therefore encode pairs of texels; they are not interchangeable colour labels for these consumers.

CharForge converts the storage atlas into RGBA, exposes it as ordinary artwork, and rebuilds it with an arbitrary 15-colour palette/index assignment. It does not retain the 2bpp preview/consumer requirements in the brief. Even copying an unchanged atlas through `_palette_from` / `_index` changes its packed texels. The generator also stylizes this storage view as if it were a displayed image.

Reproduction: `db_b_01_e00.dtx` in `chr/ChrArc.aar|chr/db_b_01.aar`, using its matching DSIG (mode 0x20, 64x384, seven banks). Decode bank-zero atlas to RGBA, apply the same palette/index functions as build, repack with `sprite.atlas_from_colours`, and compose frame zero through the editor. **128 of its 1,024 pixels change opaque/transparent status**, with no authored edits. This is a geometry/transparency failure, not merely intended recolouring.

Recommendation: record actual DSTX texture views in the brief, author 2bpp views with three opaque colours plus transparent, and explicitly pack their indices. Handle shared/mixed 2bpp and 4bpp views as constraints on the same byte buffer. Until supported, reject or preserve affected atlases instead of silently requantizing them. Review the decoded built frames, not just input atlases.

## P2: Koma palette conversion darkens colours twice

Locations: `forge.py:451`, `komas.py:114-115`; compare `dsig.py:51` and `forge.py:566`.

`_palette_from` first masks channels with `0xF8`. Sprite build treats the result as shifted five-bit channels (`>>3`), while Koma build passes it to the editor's full-range 0..255 RGB555 conversion. These are different encodings and cannot share that intermediate representation unchanged.

Reproduction: a single opaque white pixel produces palette RGB `(248,248,248)`. Koma encoding maps each channel to 30, which decodes as `(246,246,246)`. Sprite encoding maps each to 31, decoding as `(255,255,255)`. White therefore cannot survive even a one-colour Koma build.

Recommendation: quantize colours into canonical RGB555 words once, derive PNG palette RGB using `rgb555_to_rgb`, and use those same words for both sprite and Koma serialization. Test endpoint colours and all 32 channel levels.

## Confirmed handling and limits

- Reference PNGs are intentionally RGBA; this is a suitable viewing/authoring format, but it does not preserve native palette indices.
- Ordinary generated package PNGs are indexed P images with index zero transparent. PNG's 8-bit index storage is valid for native 4bpp assets: the editor performs the nibble packing on import.
- The editor handles charstream compression, tiled packing, linear packing, and mode-0x50 LZ10 serialization. Koma uses its dedicated 48x48 tiled-panel codec.
- Read-only scanning of each battle slot's animation/image/window archives encountered DSIG mode 0x20, mode 0x50, and v2 mode 0x40. It encountered no 8bpp DSIG in that scope. This is not a guarantee for arbitrary future templates.
- Current CharForge validation checks links, parseability, and renderability; it does not compare authored pixels with decoded built output. Its gallery displays input artwork, so neither establishes pixel-format fidelity.
- Existing CharForge suites: `python -m unittest discover -s tests -p 'test_charforge*.py'` — **13 passed** in 51.971 seconds. TEMP/TMP were redirected to the writable workspace after the first attempt hit sandbox temporary-directory permissions. The two focused pixel probes above reproduce defects despite the passing suites.
- No ROM, extracted asset, or implementation source was modified by this audit.
