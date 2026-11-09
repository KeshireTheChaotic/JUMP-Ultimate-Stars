# JUMP Ultimate Stars character art bible

Use this with a CharForge scaffold. The scaffold's `brief.json` defines the exact deliverables for the chosen slot, including canvas dimensions, origins, animation usage, and atlas depth.

## From concept to sprite

1. Define the character in one sentence. Pick a silhouette hook, a primary costume mass, one accent, and an attack motif. Design an idle silhouette, a clearly readable anticipation pose, and an impact pose before filling the move list.
2. Draw at native resolution. Match the template's facing, ground contact, and origin. Keep head, hands, weapon tips, and feet distinct where they communicate intent. Preserve spacing around extended limbs and props. A frame may be blank by design.
3. Build clusters of flat pixels. Use a dark contour or shadow where forms overlap, a clear midtone, and small highlights on important edges. The inspected battle samples use crisp diagonals, selective bright accents, and exaggeration in hair, hands, and attack poses. Avoid smoothing filters, gradients, partial alpha, and resizing after the pixel pass. Review at 1× and integer zoom.
4. Keep a stable colour ramp across the entire DSIG. A starting 15-slot budget is two inks, three skin tones, four primary costume tones, three secondary tones, two accent tones, and one bright highlight. Reallocate for the design. Check that the silhouette and action read against both light and dark stages.
5. Give attacks distinct timing and shapes. Use a compact anticipation, a sharp contact silhouette, and a clear recovery. Read `used_by_moves` in the brief for reuse and tick timing. Align trails, flashes, and projectiles to the original effect anchors.
6. Draw Koma as manga panels. Use bold linework, deliberate crops, readable expressions, and restrained speed lines or halftone. The inspected panels include close-ups, action crops, lettering, and high-contrast flat colour. Compose the full card on its actual shape grid before slicing numbered panels. Check important detail across panel boundaries.

## Raster contracts

| Deliverable | Dimensions and placement | Native palette |
| --- | --- | --- |
| Battle body `NNN.png` | Exact template canvas and origin. Observed 248 character-stream canvases with widths 31–254 and heights 42–209 px. Common examples include 57×71, 83×79, 134×94, and 80×64. | 4bpp, index 0 transparent and up to 15 opaque colours per bank. |
| Window or frame-based effect `NNN.png` | Use the scaffold dimensions and origin for each frame. OBJ parts use 8 px tiles. The whole frame can exceed one part. | Use the brief. The normal CharForge indexed frame path authors up to 15 opaque colours. |
| 4bpp-only effect `atlas.png` | Match the scaffold's native atlas dimensions. Preserve UV placement and unused areas. | 4bpp, up to 15 opaque colours plus transparent. |
| 2bpp-only effect `atlas.png` | Twice the DSIG storage width, same height. A 64×384 storage image becomes 128×384 art. Match the scaffold. | 2bpp, three opaque colours plus transparent. Try a dark edge, saturated body, and bright core. |
| Mixed 2bpp/4bpp or shared effect | Use the references for pose and timing. CharForge preserves the original atlas. | Mixed views share the same bytes. |
| Koma `koma/<key>/NNN.png` | Exactly 48×48 per panel, arranged according to the target card's numbered shape. | 4bpp, one RGB555 bank per Koma member. All its panels share up to 15 opaque colours. |

Author PNGs with binary alpha. CharForge treats alpha below 128 as transparent. Native palettes store five bits per RGB channel. PNG container depth can differ from native depth. Index 0 is reserved for transparency in the character pipeline. For alternate palette banks, review all template states when keeping original banks since the same index can refer to a different colour.

Use the reference frame's feet and anchor as alignment guides. Use the correct atlas reference for the texture view. A 2bpp texel pair occupies one 4-bit nibble in the editor package. CharForge packs those pairs during build.

## Concept prompt template

> Create native-resolution JUMP Ultimate Stars-style character pixel art for **[concept]**, based on **[slot / form]**. Use **[silhouette hook]**, **[costume materials]**, and **[attack motif]**. Match each reference canvas, origin, facing, pose intent, and foot contact. Use crisp clustered pixels, selective dark contours, flat shade ramps, and transparent backgrounds. Reuse one coherent RGB555-compatible palette across each sheet. Follow the brief's palette budget and deliverable paths. Keep each 2bpp effect within three opaque colours. Render each Koma as a 48×48 slice of the provided card grid. Deliver the exact numbered PNGs and atlas sizes specified in the brief.

Before packaging, inspect adjacent frames in sequence and compare action silhouettes at 1×. After import, inspect decoded frames and Koma panels in the editor. Pay particular attention to effect transparency, alignment, alternate banks, and card seams.

## Artwork census

The scan visited 391 physical files under the extracted `data` tree. It excluded 12 inactive `.orig` backups from the counts below, traversed 1,547 active ALAR containers recursively, and unwrapped member payloads. Counts include repeated source instances. The scan found no traversal or supported sprite parse failures.

| DSIG storage | Count | Observed geometry and interpretation |
| --- | ---: | --- |
| v1 0x10 tiled 4bpp | 2,259 | Common headers include 256×40, 256×128, and 256×192. Koma storage is an 8-pixel-wide tile column, while the logical panels are 48×48. |
| v1 0x11 tiled 8bpp | 491 | Common headers include 256×64 and 256×192. Background paths can use extended palettes with 256 entries per selected palette. |
| v1 0x20 linear 4bpp storage | 386 | Examples include 64×32, 64×384, and 256×32. DSTX attribute bit 6 can select the 2bpp view. |
| v1 0x50 compressed linear 4bpp storage | 1,669 | Common sizes include 64×128, 64×32, and 64×64. The same DSTX view rule applies after decompression. |
| v2 0x40 character frame stream | 248 | LZ10-compressed per-frame 4bpp OBJ pieces. Canvas dimensions come from DSTX geometry. Four palette banks were most common (144 streams). |

The 5,053 DSIG count covers standalone images and DSIG embedded in recognized DSTX. The sprite scan parsed 3,112 DSTX 0x03/0x83 layouts with 219,565 parts. Part sizes ranged from 8×8 to 64×64, including rectangular OBJ shapes. It also parsed 898 DSTX 0x04 Koma members with 2,367 panels, all 48×48.

The inventory also found 1,564 ALTM tilemaps, 27 NCCL palettes, four ALFT fonts, one VXDS movie, and 50 DSTX 0x05/0x06 layouts. These are outside character sprite authoring. Counts inventory recognized assets by header. Font-internal bitmaps, movie frames, child-ROM contents and DWC's embedded NitroFS are outside the DSIG table. Visual style guidance comes from sampled native renders rather than individual inspection of every asset.

The four font containers hold one 256×512 1bpp BMP and three 4bpp DSIG atlases at 512×48, 512×448, and 512×924. The separate DWC filesystem scan decompressed and classified 342 members, including 230 screen maps, 54 character graphics files, 33 palettes, 12 cell files, and two fonts. The standalone child ROM has no FAT entries and has a DS banner. Its separate icon assets contain 512 tile bytes and a 32-byte palette, consistent with a 32×32 4bpp icon.
