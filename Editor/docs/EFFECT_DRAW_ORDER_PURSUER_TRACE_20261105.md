# JUS — DrawPrio, CommonEffect flags and pursuer follow continuation

**Static trace date:** 2026-11-05. Source: user's `reverse_engineering(1).zip`,
`reverse_engineering/functions_layout/arm9_main` and `arm9_ov06`, and the
extracted `data(1).zip`. The decompiled C is corroborating evidence, not a
hardware frame capture. No emulator render comparison has been performed.

## DrawPrio: authoring property → drawable priority verified

| Address | Direct observed behavior |
|---|---|
| `0x02020F7C` | Registers `DrawPrio` with property-binding vtable `0x020989A8`. |
| `0x02025280` | DrawPrio getter follows object pointer at `object + 0x64` and retrieves priority through `FUN_02011990`. |
| `0x020252A8` | DrawPrio setter converts the authored numeric value and invokes virtual offset `+0x10` on the child drawable at `object + 0x64`. |
| `0x02011990` | Getter returns the drawable's stored `u16` at `+6` shifted left four bits (20.12). |
| `0x02011934` | One priority setter removes active links, writes the new quantized `u16`, and reinserts them. |
| `0x0201CCA0` | Global drawable-list insertion divides priorities into 256 high-byte buckets, maintaining links by their 16-bit stored priority within a bucket. |
| `0x0201CDB4` | Unlinks the item from the list and updates the relevant bucket head. |
| `0x02012A14` | Iterates global draw links, invoking vtable method `+0x58`. Whether this invocation is a rendering walk or an update pass is not established. |
| `0x0201582C` | Another object sorts child drawable priorities in descending order, using a comparison followed by a swap. |

**Result:** `DrawPrio` is a live priority property, not an unused label. The
engine exposes multiple ordering mechanisms: global link insertion and a child
sort. Their relative traversal direction and the GPU draw command ordering
remain unproven. The editor must keep its explicit Front/Behind *preview*
override and must not derive a definitive front/back semantic from the child
sort alone.

## CommonEffect flags: direct consumer and surviving unknown bit

- `0x0206C244` (`CommonEffect_Init`) binds the `EffectFlags` property at object
  offset `+0x80`.
- `0x0206CFC0` (`CommonEffect::CloneMain`) copies the 16-bit flag field at
  `+0x80` when cloning.
- `0x0206CA8C` tests the flags at `+0x80` for `0x0001`, `0x0002`, `0x0008`,
  and `0x0010` when creating/displaying a common effect. In that path,
  `0x0008` changes the position reference and `0x0010` registers a later
  facing-reconciliation callback; `0x0001`/`0x0002` gate mirroring and inherited
  facing. **No direct bit-`0x0004` test appears in this routine.**
- This does **not** establish that bit `0x0004` has no meaning globally. The
  shipped data contain it at `dg_b_02` move 39 / `GN02` / tick 36, and
  `gt_b_02` move 40 / `GN01` / ticks 47, 64. The final example also has
  `ParentLink=0` while the others have `ParentLink=1`, so it cannot simply be
  equated with the linked-attachment flag.

Keep `0x0004` raw and labelled **unclassified**. The final identifying trace
must inspect effect-specific consumers, including indirect virtual calls and
other spawning paths, or compare instrumented game frames for the three keys.

## Overlay 6: pursuer movement now replicated in the viewer

`0x02157A44` NoteTrack `chara_action(13)` selects two animation-table slots via
`0x021617A0`, and `chara_action(14)` passes target offsets and a snap flag to
`0x0216186C`. A nonzero snap flag invokes `0x02161888`, which requests an
immediate snap during the per-frame pursuer callback.

`0x02161608` installs `0x021618E4` as that per-frame callback.

The controller in `0x021618E4` stores x/y as **signed 24.8 fixed-point** values
at `controller +0x0C/+0x10`. It reads the actor's world position, adds the
signed target offsets (`+0x24/+0x26`), and negates horizontal offset when
facing dictates. Every update with no snap:

1. Compute both differences from controller position to target and divide each
   by four, with truncation toward zero (including negative values).
2. If **both** step magnitudes are smaller than `0x100` (1 pixel), snap both
   axes to the target.
3. Otherwise clamp each step to `[-0x400,+0x400]` (±4 pixels), advance, and
   prevent passing the target.
4. When a nonzero `chara_action(14)` snap request is pending, set both
   coordinates to the target instead of smoothing.
5. Convert the updated 24.8 position to renderer 20.12 (`(value >> 8) << 12`)
   and call `0x021519D0`.

**Editor implementation:** `jus_package.effectlinks.pursuer_step_raw` and
`pursuer_position_at`; Animation > Show > Pursuer position preview. Target-only
mode remains as a reference, alongside the new traced follow mode. Because the
pursuer controller persists across moves, the user must choose an **assumed
initial position** (`First target` or world `Origin (0,0)`). The active A/B
animation state, other combat-driven facing changes, and previous moves are
still unknown; the viewport labels this as a seeded preview, not a complete
run-time simulation.

Coordinate caveat: the preview uses the Animation workspace's Root Motion and
Facing Left scenario settings to obtain the actor's world position. When Root
Motion is disabled, actor motion is intentionally omitted. This scenario
switch should not be interpreted as a replay of actual combat movement.

## Reproduce

```powershell
py -3 -m unittest discover -s tests -p "test_*.py"
py -3 tests\gui_pursuer_follow_smoke.py D:\Library\Development\JUS\data
py -3 tests\gui_smoke.py D:\Library\Development\JUS\data
```

No ROM or archive content is changed by this preview. The next critical draw
trace remains the `+0x58` drawable callback and its final submission to DS OBJ
or 3D rendering; the next effects trace remains the unconsumed `0x0004` bit.
