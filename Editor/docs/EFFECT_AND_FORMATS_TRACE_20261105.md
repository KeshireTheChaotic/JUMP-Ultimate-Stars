# JUS — unresolved effect and image format audit (2026-11-05)

**Evidence:** Direct examination of extracted `data(1).zip`, Ghidra function corpus and the `arm9.bin` bytes from `reverse_engineering(1).zip`. Main ARM9 SHA256 `6464c6e726cd536756476392bf21996ae7289d16e269863cd0b88c1703d09287`. This is a **static** audit; no emulator capture was supplied. The audit script is `tools/audit_open_effects.py` and its output is `JUS_Effect_Field_Archive_Audit_2026-11-05.json`.

## Findings with executable evidence

### 20.12 priority storage and sorting

- `FUN_02011934` updates a linked draw item's priority: reads the current value through `FUN_02011990`; if the incoming value differs, it writes `*(u16 *)(item + 6) = (u16)(new_value >> 4)`. For active items (flag byte at `+0x29`), it removes the item from its draw-link list (`FUN_0201199C`) and reinserts it (`FUN_020119EC`).
- `FUN_02011990` reads priority back as `(u16)*(item + 6) << 4`, matching a quantized 20.12 fixed-point value.
- `FUN_0201582C` compares priority values from two child draw-item pointers located at child `+0x64` and swaps them when the earlier value is smaller. **This sorting operation orders entries in descending priority.** `FUN_020155C0` contains a similar sort during child insertion.
- **Not yet proven:** That this exact class is the one used to render every spawned battle effect, whether the final sprite/OAM draw walk traverses front-to-back or back-to-front, or how OBJ priority and 3D textured draw layers interact. The editor must not silently replace its Front/Behind preview with an allegedly exact rule until those edges are traced.

### EffectFlags bit `0x0004` concrete cases

Observed across parsed animation bodies:

| Animation | Move | Node | Tick | EffectFlags | Linked? |
|---|---|---|---:|---:|---|
| `chr/dg_b_02.aar|dg_b_02.amt` | `0x0004C22A` (index 39) | `GN02` | 36 | `0x0006` | 1 |
| `chr/gt_b_02.aar|gt_b_02.amt` | `0x0001822B` (index 40) | `GN01` | 47 | `0x0004` | 1 |
| same | same | same | 64 | `0x0004` | 0 |

The values are confirmed data, **not** enough to label the bit as a particular positioning, lifetime, or render policy. Inspect the producer and consumer functions handling `CommonEffect +0x80` in overlay 6, and capture the three spawn cases before applying a behavioral model.

## Parsed corpus coverage and limits

The scan traversed 1,547 ALAR resources, including one nested level, and decoded 1,545 ALMT files / 13,230 moves with no ALMT parse failures. Counts below are **authored node tracks**, not unique moves or ALMT field declarations:

| ALMT field | Count |
|---|---:|
| BoundsIndex | 13,231 |
| DrawPrio | 2,284 |
| ParentLink | 2,477 |
| EffectFlags | 1,250 |
| PatternNo / LifeType / BlendMode / ParentCalcType | 0 each |

No node carries **both** `BoundsIndex` and `PatternNo`. The runtime register conflict therefore cannot be resolved by correlating simultaneous shipped tracks. Instrument the runtime dispatcher in `FUN_0201F11C` and `FUN_0201E1E4` or construct a controlled test asset and examine which setter wins when both tracks are active.

### ALAR2 header / attributes

1,515 ALAR2 archives were inspected. Header flags observed: `0x01` (715 archives), `0x03` (800 archives). Across 6,272 ALAR2 directory entries, bit 31 was set on **all** of them; bit 24 on 1,521; bit 25 on **none**; bit 30 on 1,581. This proves distributions only—not meanings or compatibility with newly authored values. In particular, the absence of bit-25 entries and bit-31-clear entries eliminates natural differential test cases in this corpus.

### DSTX 0x05 / 0x06

Among 4,060 valid `DSTX`-signature members in the scanned archives, **50** use low seven flag bits `0x05` or `0x06`: three `0x05` and 47 `0x06`. **43 of those 50 are nested in stage backgrounds**, not menu screens. Others occur in Commu, deckmake, JArena and result archives. These flags therefore deserve a shared format decoder, rather than a screen-only interpretation. Raw 32-byte header snapshots are in the JSON audit. A narrow **read-only descriptor parser** (`jus_formats.dstx.parse_layout`) is now implemented and checked against all 50 examples. It reads `(u16 first_tile, u8 tiles_w, u8 tiles_h)` from each four-byte descriptor at `0x0A + 4*i` (`FUN_02044E78` / `FUN_02043C7C`). `FUN_020433EC` establishes the opaque auxiliary range `[8 + 4*(count+1), data_end)`, with the embedded DSIG starting at `data_end`; all 50 cases have a zero two-byte separator and DSIG marker. Mode 0x06 additionally selects internal mode 2. The auxiliary content, screen placement and rendering semantics remain **unknown**, so the parser preserves those bytes without editing.

### Remaining limitations

- The `hk_b_03.dtx` piece 128 off-texture UV edge case remains clipped in the editor; emulator comparison is still required to determine hardware edge behavior.
- `DSIG` b7 remains raw; no interpretation is justified by this audit.
- `ParentLink` follow transforms, `EffectFlags` lifetime policies, physics, and runtime branch variants have not been simulated. Pursuer **position smoothing** has since been traced and added to the viewer; see `EFFECT_DRAW_ORDER_PURSUER_TRACE_20261105.md` for scope and initial-state limitations.
- Other `chr/shot`, `chr/ai`, collision tails, `chara_action(10)` profiles, and `bin/*.bin` formats are outside this focused audit and remain read-only.

## Next trace targets, in order

1. Verify the **draw-list class** containing `FUN_0201582C`, identify the battle effect draw-link insertion, and follow its final traversal to OBJ/3D display dispatch before changing compositing order.
2. Follow `EffectFlags` **setter / consumer** xrefs at `CommonEffect +0x80`, starting with the three real flagged spawn keys above.
3. Resolve the `BoundsIndex` / `PatternNo` common register setters and dispatcher ordering, using an artificial case only after verifying safe test-asset construction.
4. Trace `ParentLink` parent transform accumulation; pursuer `FUN_021618E4` position smoothing and snap are now statically reconstructed, but need consecutive emulator frames and persistent controller state to validate the rendered result.
5. Trace `FUN_020433EC` `DSTX` cases 5/6 and consumers of their descriptor tables, then extend the verified four-byte descriptor parser to decode the opaque auxiliary data and determine placement before enabling rendering or editing.

## Reproduce

```powershell
py -3 tools\audit_open_effects.py D:\Library\Development\JUS\data --out effects_audit.json
py -3 -m unittest discover -s tests -p "test_*.py"
```

The audit reads resources only; no game data or archive is modified.
