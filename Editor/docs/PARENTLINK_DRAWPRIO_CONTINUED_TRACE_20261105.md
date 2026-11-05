# JUS ARM9 — ParentLink translation and DrawPrio traversal continuation

Date: 2026-11-05. Evidence: `reverse_engineering(1).zip`, verified main ARM9 binary (load base `0x02000000`), `reverse_engineering/functions_layout/arm9_main/*.c`, and `data(1).zip`. **Static decompilation and editor regression only; not frame-verified in melonDS.**

## ParentLink — property type and copy path (direct)

| Address | Observed behavior |
|---|---|
| `0x02015BE8` | Registers named ALMT property `ParentLink` with vtable `0x02099DA4`. |
| `0x0201633C` | Property getter copies the byte at owner `+0x78`. |
| `0x02016348` | Property setter writes `*(bool *)(owner+0x78) = (value != 0)`. The property is Boolean, **not a parent index**. |
| `0x02015DD4` / `0x02015E14` | Effect-object constructors copy the bit from source `+0x78` to a byte at effect object `+0x1E`. These are copies, not final transform consumers. |
| `0x0206CA8C` | Common-effect creation reads `param_1[0x1E]` (decompiler's int indexing = byte address `param_1+0x78`, queried as a char) and splits into linked/unlinked branches. |
| `0x02024D44` / `0x02024D54` | Fetch x/y values from transform owner `+0x50`, offsets `+0x0C/+0x10`. |
| `0x0206CA28` | Writes x/y into the spawned object's transform `+0x50` at `+0x0C/+0x10`, updating dirty-state flags. |

`0x0206CA8C` reads the animation node's position, converts to pixel offsets, and obtains its owner at node `+0x44`.

* **ParentLink=0, EffectFlags bit 0x0008 clear:** takes the owner's current x/y and adds the spawn offsets before calling `0x0206CA28`. This is an absolute spawn-position snapshot in this branch.
* **ParentLink=0, EffectFlags bit 0x0008 set:** instead writes offsets based on screen reference `(128,96)`; the editor does not have the full runtime camera/DS plane context.
* **ParentLink!=0:** passes the owner to an indirect method at `+0xD4`, then writes the spawn offsets *without* adding the owner's position. It also sets a special depth/priority value and may register a facing reconciliation callback for `EffectFlags 0x0010`. This is evidence for a local-parent transform path.

The `+0xD4` attachment method and the owner's complete transform evaluation have **not** been traced to final world matrix composition. Treat translation-follow as a **partial preview**, not a byte-perfect reimplementation. Nothing here proves whether rotation, scale, flip, parent bone selection, or some kinds of parent animation-node motion propagate to the child.

### Preview implemented

`jus_package.spawns.project(..., follow_parent=True, origin_at=...)`:

1. Captures the spawning node's `2DPos` at the `GenerateID` key.
2. For unlinked effects, captures the owner's translation at the original *global* birth tick and keeps it constant thereafter. In the viewer, subtracts the character's current global origin to counter the viewport's own root-motion translation.
3. For linked effects, adds the saved spawn offset to the owner's translation on each preview tick.
4. For nested effects, constructs an ancestor position function and evaluates it either at child birth (unlinked) or now (linked). This prevents unlinked grandchildren from accidentally following a linked ancestor indefinitely.
5. Can be disabled to display the prior stationary-anchor approximation. Root motion and preceding combat state remain selectable preview assumptions.

The code does **not** rewrite ALMT or AAR bytes. `EffectFlags 0x0008` remains camera-incomplete, and authored branches/Marker replay are not yet simulated.

### Real-data check

`chr/ChrArc.aar|chr/dg_b_02.aar|dg_b_02.amt`: 33 Boolean-on and 24 Boolean-off `ParentLink` track values in nodes with GenerateID tracks. Move index 25 (`0x0004C219`), `GN01`, spawns a linked effect at tick 0. The GUI smoke `tests/gui_parentlink_smoke.py` loads it, switches projection modes, and redraws under controlled owner motion. Synthetic `tests/test_parentlink_translation.py` verifies linked/unlinked and nested chains.

## DrawPrio — priority binding and list traversal

| Address | Verified observation |
|---|---|
| `0x02020F7C` | Registers `DrawPrio` with property vtable `0x020989A8`. |
| `0x020252A8` | Setter forwards converted priority value through vtable offset `+0x10` on child drawable at owner `+0x64`. |
| `0x02014DC4` | One such drawable setter writes a quantized 16-bit priority and, when active, removes/reinserts the link in its parent-local list at `owner+0x34+0x8C`. |
| `0x0201CCA0` | Generic sorted-list insertion, reused by the global scheduler and other parent-local lists. Its presence alone does not mean a DS rasterization pass. |
| `0x0201582C` | `jus_Class_0209BE5C` vtable slot 56 (`0x0209BF3C`) compares the stored priority of two child objects at offset `+0x64`. It exchanges them if the earlier entry has a lower value: **descending comparison**. |
| `0x020155C0` | Separately orders child items using the same `FUN_02011990` getter and a descending comparison, while checking active child flags. |
| `0x02011B60` | Registers generic scheduler properties `Frame`, `Length`, `Loop`, **`Prio`**, `Sleep`, `TypeID` and creates a global scheduler list (`DAT_020A1094`). This is not by itself the final drawable render list. |
| `0x02012A14` | Walks that global list via next pointers and invokes a virtual `+0x58` on each node. A scheduler walk is not sufficient to infer GPU front/back order. |

**Confidence:** high that `DrawPrio` is consumed and that the relevant child comparison orders larger values before smaller values; unresolved as to the final rendering walk, the relative ordering of characters vs effects, the DS BG/OBJ priority mapping, and ties across different parent subtrees. The editor must therefore retain its **Front/Behind preview override**. A descending *sort* does not imply either descending or ascending *visible z order* until the draw submission and DS layer mapping are followed.

### Remaining exact trace targets

1. From the child-ordering routines `0x0201582C` and `0x020155C0`, follow the subsequent child traversal into concrete graphic/pixel or OAM submission routines (rather than the scheduler's virtual `+0x58`). Compare the order of submission against `DrawPrio` and DS BG/OBJ attributes.
2. From the CommonEffect spawner `0x0206CA8C`, resolve the indirect `+0xD4` owner-attachment method and the transform owner's matrix update, then test facing/rotation/scale against snapshots.
3. Test parent transform behavior with an instrumented emulator capture that moves an actor after its effect spawns, including a nested linked/unlinked pair, before promoting translation preview to verified pixel-accurate rendering.
4. Resolve the `EffectFlags 0x0008` camera branch before interpreting those sprites as character-relative in the viewport.

### Verification commands

```powershell
py -3 -m unittest discover -s tests -p "test_*.py"
py -3 tests\gui_parentlink_smoke.py D:\Library\Development\JUS\data
py -3 tests\gui_smoke.py D:\Library\Development\JUS\data
```
