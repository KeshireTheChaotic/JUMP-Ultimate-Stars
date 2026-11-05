# ARM9 verified — effect attachment and DrawPrio render traversal

2026-11-05. Evidence: `reverse_engineering(1).zip`, extracted ARM9 loaded at
`0x02000000` (692,568 bytes), Ghidra C functions and actual binary vtable
pointers. **Static executable evidence. No emulator frame comparison.**

## Findings and evidence boundary

* The spawned `SP01` effect widget uses the `jus_TagNDGR_0209C0B4` vtable.
  Its slot `+0xD4` is **`FUN_02022060`**, not an unknown relative offset.
  Parent and child widget links and *transform controller* links are both
  maintained. The parent pointer is a real hierarchy relation.
* `DrawPrio` reaches a per-renderer ordered draw-link list. Renderer
  `FUN_02031EAC` visits the list in **high-to-low priority order** and
  dispatches virtual `+0x1C` draw callbacks; `ALWidgetImp_020958DC`
  `+0x1C` recursively invokes active child callbacks.
* Identified leaf callbacks ultimately issue **GX3D hardware commands** or
  **tilemap/BG update operations**. Thus the CPU *submission* path has been
  resolved, but visible front/back ordering cannot be derived from CPU
  submission order alone (polygon depth/alpha behavior, 2D layer assignment,
  draw masks, and parent roots remain context-dependent).
* The Editor's optional ParentLink translation-follow is still an approximation:
  rotations, scales, mirror/facing transforms and attachment points are not
  reproduced in the editor. Keep the manual Front/Behind **visual override**.

## Attachment: concrete virtual dispatch

Actual little-endian pointers from ROM ARM9 image:

| Class table | Slot | Resolved function | Role |
|---|---|---|---|
| `jus_TagNDGR_0209C0B4` | `+0xB0` | `0x02024558` | Descendant lookup (`SP01`) |
| `jus_TagNDGR_0209C0B4` | `+0xB4` | `0x020246C8` | Child registration |
| `jus_TagNDGR_0209C0B4` | `+0xD4` | `0x02022060` | Change transform parent |
| `ALWidgetBase_0209C1E0` | `+0xD4` | `0x02022060` | Inherited parent method |
| `CommonEffect_0209C30C` | `+0xD4` | `0x02022060` | Same parent method |

**Caveat:** The `+0xB0`/`+0xB4` method addresses in `ALWidgetBase`
**differ** from the concrete effect widget; do not identify a virtual
function solely by its slot number across different classes.

`FUN_0206CA8C` resolves `SP01` and invokes `(**(code **)(*widget + 0xD4))`
when constructing the effect. `FUN_02022060`:

1. Checks and, if required, wraps child and parent controllers at widget
   `+0x50` into hierarchy-capable `jus_Class_020966D0` controller objects;
2. Detaches the child from the former widget parent;
3. Updates widget `+0x44` (parent), parent `+0x48` (first child), and
   child `+0x4C` (next sibling);
4. Invokes controller virtual `+0x54` on child, where actual method
   `FUN_0202AC90` calls `FUN_0202A490` to relink controller `+0x18`
   (parent), `+0x1C` (first child), `+0x20` (sibling);
5. Marks dependent transform/draw state dirty through `FUN_0202A55C`
   and `FUN_02014CC4` (with controller-state conditions).

Transform controller virtual `+0x50` (slot 20) resolves to `FUN_0202AA28`,
which walks its ancestor chain and calls `FUN_0202A34C` while updating
cached/world transform data. The controller can propagate more than x/y;
the earlier editor preview implements **only the verified spawn offset
and moving-parent translation**, not full matrix evaluation.

## DrawPrio: authored property to renderer

| Link | Address | Verified observation |
|---|---|---|
| Property registration | `0x02020F7C` | Registers `DrawPrio` |
| Property setter | `0x020252A8` | Sends converted value via drawable vtable `+0x10`, widget `+0x64` |
| Draw-link setter | `0x02014DC4` | Stores 16-bit short at drawable `+0x06` as `(value >> 4)` (truncated); on active links calls remove+insert |
| Insert into ordered list | `0x0201CCA0` | Uses priority buckets and link pointers `+0x08`/`+0x0C` |
| Renderer ctor | `0x02031A9C` | Builds priority list at renderer `+0x8C`, sentinel pointers at `+0x90/+0x94` |
| Renderer virtual `+0x18` | `0x02031EAC` | Starts from high sentinel's backward link, visits highest down to lowest, checks visibility mask, calls draw-link virtual `+0x1C` |
| Widget draw-link virtual `+0x1C` | `0x0201593C` | Walks active child objects and invokes each child's draw-link `+0x1C` |

The renderer `jus_Class_02096658` (vtable `0x02096658`) has
`+0x18 = 0x02031EAC`; `ALWidgetImp_020958DC` has `+0x10 = 0x02014DC4`
and `+0x1C = 0x0201593C`. These pointers were checked directly in the
binary. The earlier `Prio` scheduler at `0x02011B60` is *not* the only
ordered list; this is the render-specific list because it directly dispatches
graphics leaf callbacks.

### Leaf graphics endpoints

| Draw link class | Virtual `+0x1C` | Hardware/backend observation |
|---|---|---|
| `jus_Class_02095F80` | `FUN_0203ABF4` | Direct writes to GX `0x04000454` (matrix identity), `0x04000470` (matrix translation), then `FUN_0203AE18` writes GX `0x040004A4` (polygon attributes) and dispatches subdraws. |
| `jus_TagSPDB_02095FF4` | `FUN_02040250` | Updates graphics/tile-map allocation and screen tile writes through render-context callbacks; not equivalent to 3D geometry submission. |
| `jus_Class_02096320` | `FUN_0202C0C8` | Composed sprite-subdraw callback, separate leaf path. |

Draw callbacks are issued **high priority first** in this list. That is a
CPU call sequence, *not* proof that high DrawPrio is visible over low DrawPrio
at all times. 3D polygon depth / alpha sorting and DS BG/OBJ priority are
separate layers of state. Different renderer roots and tied priorities need
runtime comparison; do not sort all spawned effects globally as if they
shared one root.

### Editor behavior

* Inspector shows **stored renderer priority** (16-bit value derived from
  authored DrawPrio) alongside the authored fixed-point value.
* Label clarifies high-priority callback order vs **unverified final occlusion**.
* Front/Behind override stays enabled and is explicitly not called exact.
* Translation-follow retains its existing partial model, annotated with the
  now-verified runtime transform-hierarchy method.
* No ROM/AAR bytes were rewritten; no new editing semantics assigned.

### Verification

```powershell
py -3 tools\verify_draw_traversal.py D:\Library\Development\JUS\arm9.bin
py -3 -m unittest discover -s tests -p "test_*.py"
```

The first command compares 11 concrete ARM9 vtable pointers against their
expected function addresses, failing on a mismatch. It only reads the file.
The second covers fixed-point priority conversion and binary-mismatch
handling in addition to the Editor's prior unit suite.

### Remaining work for pixel-accurate display

1. Trace the render-context's DS BG/OBJ layer and GX depth/polygon state on a
   battle screen at the actual effect render tick.
2. Compare two effects with differing DrawPrio, same render root and crossing
   geometry against a melonDS frame and/or OAM/GX capture. Repeat across
   distinct roots, same-priority ties, opaque and translucent polygons.
3. Reproduce `FUN_0202A34C`'s full matrix composition, source-node transform
   inputs and facing/flip adjustments before enabling full ParentLink matrix
   simulation in the viewer.
4. Resolve camera-related `EffectFlags 0x0008`, which can bypass normal
   character-relative offsets.
