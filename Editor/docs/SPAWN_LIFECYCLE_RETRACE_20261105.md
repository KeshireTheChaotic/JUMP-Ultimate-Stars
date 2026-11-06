# JUS `db_b_01` special-effect spawning and termination retrace

> **Update (2026-11-06):** the deletion path asked for below is found: NoteTrack
> `chara_action(4)` / `(5)` tear down GN-spawned effects (`FUN_0206C650` / `FUN_0206C760` →
> `FUN_02027560`). See `EFFECT_TEARDOWN_TRACE_20261106.md`.

**Source:** the uploaded editor/game screenshots; supplied extracted game assets; `reverse_engineering(1).zip` original ARM9 executable and Ghidra corpus. **Static binary and asset evidence only; no simultaneous emulator debugger state.**

## Reproduction

The editor screenshot is on `chr/ChrArc.aar|chr/db_b_01.aar|db_b_01.amt`, move index **40**, ID `0x0005C12B`, at **tick 30 / 116**. These are seven authored GenerateID events by tick 30; the editor's "7 effects" is the total **nominally within authored spans**, not a count verified from live game memory.

| Key tick | Node | Effect move | Lifetime | Status at tick 30 | Visible asset/frame at tick 30 |
|---:|---|---|---|---|---|
| 0 | GN01 | `0x05C189` | loop, 16 ticks/iteration | age 30, frame tick 14 | texture `0x05C180`, frame 6 (red aura) |
| 14 | GN01 | `0x05C181` | one-shot, 20 | age 16 | texture `0x05C180`, frame 9 (small white oval) |
| 14 | GN02 | `0x05C180` | one-shot, 20 | age 16 | texture `0x05C180`, frame 8 (vertical lettering) |
| 15 | GN01 | `0x05C184` | one-shot, 16 | age 15 | texture `0x05C181`, frame 3 (small cyan ball) |
| 29 | GN01 | `0x05C185` | one-shot, 4 | age 1 | texture `0x05C181`, frame 5 (**large cyan oval**) |
| 29 | GN02 | `0x05C182` | one-shot, 30 | age 1 | texture `0x05C180`, frame 10 (left impact lettering) |
| 30 | GN02 | `0x05C183` | one-shot, 16 | age 0 | texture `0x05C180`, frame 11 (right impact lettering) |

In particular, the **large white/cyan oval is an authored frame in the ROM** (`0x05C185` → `0x05C181` frame 5). It is **not** a spurious guessed texture or a cached frame from another character. Its nominal span is **ticks 29–33 inclusive**, with the animation controller entering its end/transition path after the terminal duration; actual object deletion also depends on controller and owner state. In the Editor it should disappear by **tick 34**. The red aura (`0x05C189`) loops; its move data alone provides no independent kill tick.

## Original executable control path

| Function / address | Evidence |
|---|---|
| `FUN_02016220` | Keyed GenerateID handler calls its receiver's virtual `+0x124` only when the animated time equals the key tick; null/zero values do not invoke spawning. |
| `CommonEffect` vtable at `0x0209E114`, virtual `+0x124` | Pointer verified in ARM9 bytes: **`FUN_0206CA8C`**. |
| `FUN_0206CA8C` | Resolves the effect move, constructs a distinct child object, applies the effect's flags, position, parent attachment and draw settings. |
| `CommonEffect` virtual `+0xB4` | Pointer verified in ARM9 bytes: **`FUN_020161D8`**. |
| `FUN_020161D8` → `FUN_020246C8` | Adds/registers a new child. A later `GenerateID` on GN01/GN02 does **not** simply overwrite the earlier generated object. |
| `FUN_0201BDEC` | Animation controller advances its fixed-point clock. A nonlooping move reaches the end path when the clock exceeds its duration; a looping move resets/wraps. |
| `FUN_0201BF90`, `FUN_02028868`, `FUN_02027560` | End handling depends on the controller/queue state and can initiate object teardown/deferred cleanup. This is distinct from merely selecting the last ALMT frame. |

The Editor's existing `effect_frame_tick` already models the basic one-shot/loop **nominal** frame age correctly for this case. The screenshot is not evidence to change the asset duration or remove the oval at birth. Nor is it safe to infer that an authored loop necessarily survives owner deletion or a hit.

## Combat-related discrepancy

`SP01.NoteTrack` in this move includes `chara_action(1,...)` at tick **29** and `chara_action(2,...)` at tick **32**, in addition to sound instructions. The real game screenshot includes an opponent and a bright hit/impact burst. The editor's current preview has **no enemy, collision response, hitstop, or dynamic contact effect creation/deletion**, and it does not interpret those actions as an exact combat-state replay. Therefore it cannot be expected to recreate all effects of a connected hit, nor to determine if an active projectile/effect was removed by the game at that instant. The screenshot on its own cannot prove a particular deletion instruction or precise emulator clock alignment.

## Editor changes

- `Spawned effects` HUD now says **nominal** count instead of claiming all are game-live.
- Each effect's Inspector displays **nominal state**, **authored final tick** (where applicable), and current **texture/frame**. This is important for identifying the cyan oval versus lettering independently.
- In Animation → Show, **Isolate selected spawned effect (diagnostic only)** renders just the selected effect. Does not mutate ALMT or AAR bytes; turning it off restores full preview.
- `tools/audit_spawn_lifecycle.py` emits a machine-readable spawn/lifetime + NoteTrack inventory; `tools/verify_spawn_dispatch.py` checks the two decisive ARM9 vtable pointers.
- The existing renderer and ParentLink preview were not changed, because the screenshot does not resolve their remaining runtime assumptions.

## Recommended emulator comparison

Capture the same move at **ticks 29, 30, 32, 33, and 34** with opponent contact/hit state noted. Observe the `0x05C185` oval in isolation and whether it vanishes before or at its nominal tick 34; compare the hit and whiff paths. If it disappears early **only on contact**, the correct implementation belongs in combat-response/lifetime simulation, not in the ALMT GenerateID clock. To recover the actual deletion call site, break on the effect object cleanup path (`FUN_02027560` / caller from `FUN_0201BDEC` and owner teardown) with the spawned object pointer from `FUN_0206CA8C`.

### Validation

- Runtime dispatch: raw ARM9 pointers at vtable `+0xB4`/`+0x124` match the expected methods.
- Actual asset scan: 7 nominally active effects at tick 30, with `0x05C185` frame 5 and end tick 33.
- Synthetic lifecycle and mismatch checks and real-data GUI smoke test.
- No original data archives were modified; no in-game visual parity is claimed.
