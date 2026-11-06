# JUS: static-only effect lifetime and render-path trace — 2026-11-05

> **Superseded in part (2026-11-06):** step 7 and "do not treat actions 4/5 as effect-kill
> commands" are wrong. Both walks call the *wrapper* `+0x08` (`FUN_02049460` →
> `FUN_02027560` teardown). At `db_b_01` move 41 tick 55 one aura is live, not four. See
> `EFFECT_TEARDOWN_TRACE_20261106.md`. Loop wrapping, spawn-per-key and the
> render-path notes below still hold.

## Scope and source evidence

No melonDS debugger or runtime trace was used. All addresses below are from the supplied `reverse_engineering(1).zip` ARM9 image, loaded at `0x02000000`, and its Ghidra decompilation corpus. The ALMT and DSIG values were read directly from the supplied `data(1).zip` extracted data. ARM9 SHA-256: `6464c6e726cd536756476392bf21996ae7289d16e269863cd0b88c1703d09287` (692,568 bytes).

**Conclusion:** An authored looping ALMT does **not** expire on reaching its `duration`. It repeats until the owning object is independently deactivated. Repeated `GenerateID` keys create independent children, even if they use the same move ID. `chara_action(4)`/`(5)` are reference-retain operations, not an implicit stop or replacement. Thus disabling the loop flag, culling effects after 16 ticks, or merging duplicate IDs would be incompatible with the verified code. The remaining screenshot difference cannot be assigned to effect death from these two frames alone; the editor's CPU RGBA compositing is *not* the original GX render path and it cannot model combat-hit-generated effects.

## Game executable: full lifecycle

1. `0x02016220` checks a `GenerateID` key at equality of the parent's 20.12 fixed-point clock and authored key timestamp; it does not suppress duplicate effect IDs. Its virtual `+0x124` slot resolves to `FUN_0206CA8C` (`CommonEffect_0209E114`).
2. `0x0206CA8C` creates a new effect object through the resource manager, attaches/registers it using virtual `+0xB4` (`0x020161D8`), optionally sets its transform parent, and sets its lifetime-control field to `-1` with virtual `+0xDC` (`0x02025278`, writes object `+0x58`). This is **one new object per fired key**.
3. `0x020161D8` registers `FUN_020160F0` as an **event-1** child-removal callback. This removes the child from its owning `CommonEffect` container when the child deactivates. The callback does not fire on each animation loop.
4. `0x0201BDEC` advances the animation clock. On a loop boundary it invokes the object's virtual `+0x78`, resolving to `0x02027B14`, the **event-6** dispatcher. It wraps the clock and continues. It neither reaches the nonloop completion path nor invokes the registered event-1 callback by default.
5. For **nonlooping** animations, the completion path invokes `FUN_0201BF90` to read object `+0x58`; for `-1`, `0x02028868` initiates cleanup, reaching `0x02027560`. That is an *end-of-nonloop* rule, not a maximum lifespan for looping animations.
6. `0x02022380` deactivates an object, invokes `0x020279D0` (event 1), and dispatches additional child lifecycle events through its transform descendants. `0x02015F0C` is the `CommonEffect` owner's cleanup handler. `0x02024958`, the inherited hierarchy cleanup, visits retained children and uses their reference count to select deactivation versus release.
7. In overlay 6, `0x02157A44` dispatches `chara_action(4)` to `0x0206C650` and `(5)` to `0x0206C760`. They enumerate `GN01..GN09` child reference handles and call virtual `+0x08` on eligible handles (`0x020102D0`, a reference-count increment). They do **not** issue a destroy or replacement-by-ID operation.

**Verification:** The provided test utility `tools/verify_lifetime_dispatch.py` checks eight exact vtable entries and two independent direct ARM branch edges against the supplied machine code. 8/8 and 2/2 passed. The more complex ownership and event-dispatch semantics were also checked against Ghidra decompilation but are *not* proven solely by those ten machine-code checks.

## Test case: db_b_01 move 41 (0x05C12C) at authored tick 55

| Effect move | Key tick | Age | Current animation tick | Sprite source / frame | Authored loop |
|---|---:|---:|---:|---|---|
| `0x05C189` | 0 | 55 | 7 | `0x05C180`, frame **2** | Yes, 16-tick cycle |
| `0x05C18A` | 9 | 46 | 14 | `0x05C180`, frame **7** | Yes, 16-tick cycle |
| `0x05C18A` | 45 | 10 | 10 | `0x05C180`, frame **5** | Yes, 16-tick cycle |
| `0x05C18A` | 49 | 6 | 6 | `0x05C180`, frame **3** | Yes, 16-tick cycle |

`0x05C18A` also appears as independent GenerateID keys at ticks 59, 67, 84. The `0x230000` common effect launched at tick 9 is a 24-tick nonlooping effect and is **not** nominally active by tick 55. Across the straight-through authored scenario there are four active *potential* looping aura children at tick 55. This is a computed projection, not an observed in-game live-object count.

### Rendering is a separately verified discrepancy

The shared aura texture `0x05C180` lives in `db_b_01_e50_.dtx` with a DSIG **mode `0x50`** image (GX atlas), not an OBJ/1D stream. The Editor's `sprite.IndexedImage.to_rgba()` treats every nonzero indexed pixel as `alpha=255`; `Viewport.add_image()` presents each result as a Tk image. In contrast, the original GX renderer (e.g. `0x0203ABF4` -> `0x0202534C` -> `0x0203AE18`) submits geometry with a 5-bit polygon alpha field, together with GX texture/depth state. The editor's manual front/behind toggle cannot reproduce full hardware blending. This is a **definite renderer-path mismatch**, but the *size* of its contribution to the specific screenshots is not established without matching the precise frame, parent transforms, material alpha and combat branch.

The game capture also shows impact graphics and a victim collision response, whereas the editor projects the attacker's authored ALMT without the opponent's hit-confirm state. One cannot infer whether additional hit effects were created, previous objects deactivated, or only the GPU composite changed from the screenshots alone.

## What the Editor must and must not change

**Do not** clear a loop flag, expire a looping effect at duration, collapse repeated IDs, or treat actions 4/5 as effect-kill commands. They contradict the static code.

**Do** distinguish three states in playback and inspection: (a) authored `GenerateID` event fired or skipped by actual clock/branch, (b) child animator running or wrapped (event 6), (c) child owning widget active/deactivated (event 1). Separately, reproduce parent transform and GX alpha/material/depth composition before comparing effect pixels. For combat-accurate comparison, an offline branch and contact-event scenario is needed; this does not require a debugger, but the branch/contact inputs must be specified or inferred independently.

## Unresolved boundaries despite static tracing

The complete battle state is not encoded in an individual ALMT move. Without knowing chosen branch/input, hitstop, opponent collision response, and the scene's active owner registry at that frame, no static calculation can assert that the game actually draws exactly four active auras in the supplied screenshot. A true-fidelity replay would need to instantiate those systems, not invent a timeout.

Artifacts: `JUS_Lifetime_ARM9_Dispatch_Verified_2026-11-05.json`, `JUS_Move41_Static_Lifetime_Tick55.json`. No ROM files or original extracted assets were edited.
