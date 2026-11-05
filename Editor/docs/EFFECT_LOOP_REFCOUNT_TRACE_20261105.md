# Jump Ultimate Stars — looped effect lifetime and reference-count trace

**Date:** 2026-11-05
**Inputs:** `reverse_engineering(1).zip` (ARM9/overlay 6 binaries and Ghidra function corpus), `data(1).zip` / extracted `chr/ChrArc.aar`, Editor Spawn Lifecycle build, user-provided screenshots of `db_b_01` move 41.
**Confidence:** direct code/data evidence for loop flags, retain/release methods, and NoteTrack action dispatch; **no live emulator object lifetime samples**.

## Primary correction: ALMT loop flags are real

`db_b_01` move 41 (`0x05C12C`, 150 ticks), at editor tick 55, shows overlapping animation rings. The Editor did **not** simply misread `0x05C18A` as looping: the source move has `flags & 0x01`, and `FUN_0201F11C` copies bit 0 of the move header flags at runtime record `+0x27` into animator state bit 1 (`controller +0x32`, mask `0x02`). `FUN_0201BDEC` selects the loop/wrap path based on that state bit.

| Spawn | Effect ID | 16-tick child ALMT | Age at tick 55 | Frame tick | BoundsIndex | Decoded status |
|---:|---|---|---:|---:|---:|---|
| 0 | `0x05C189` | Loop | 55 | 7 | 2 | Nominally looping |
| 9 | `0x05C18A` | Loop | 46 | 14 | 7 | Nominally looping |
| 45 | `0x05C18A` | Loop | 10 | 10 | 5 | Nominally looping |
| 49 | `0x05C18A` | Loop | 6 | 6 | 3 | Nominally looping |

The remaining generated IDs at this tick are past their authored one-shot spans or not yet spawned. Therefore the Editor displays **four nominal effect objects**, including three distinct repeated `0x05C18A` instances. This is a count produced by the static authored timeline, **not a debugger-verified live-object count**.

## Actual reference and end paths

| Executable function | Evidence / conclusion |
|---|---|
| ARM9 `0x0201F11C` | Read `move_flags & 1`; set animation controller loop bit `0x02` |
| ARM9 `0x0201BDEC` | Looping controller wraps; nonlooping controller enters end path beyond duration |
| ARM9 `0x0206CA8C` | `GenerateID` constructs the effect; calls child vtable `+0xDC` with `-1` |
| ARM9 `0x02025278` | vtable `+0xDC` writes value to object field `+0x58` (lifetime/end control) |
| ARM9 `0x0201BF90` | Reads field `+0x58`, returning `1` for positive and the raw value otherwise |
| ARM9 `0x02028868` and `0x02027560` | Can initiate teardown when a nonlooping controller finishes and end-control state requests it |
| ARM9 Thumb `0x020102D0` | **Increments** 16-bit object reference count at `+0x04` |
| ARM9 `0x0201C8A0` | **Decrements** reference count and calls destructor when zero |
| ARM9 `0x0202771C` | Object-specific reference release/finalization path |

The `LifeType` property is registered with getter/setter wrappers `0x02025244` and `0x0202525C`, which read and write the same `+0x58` control through the object's virtual interface. This shows that `LifeType` is relevant to termination, though its complete positive/zero/negative policy is not yet established.

## Newly traced `chara_action` lifetime-adjacent operations

Overlay 6 `FUN_02157A44` dispatches:

- `chara_action(4)` to main ARM9 `FUN_0206C650`. It visits `GN01` through `GN09`, enumerates eligible child widget references, and invokes child virtual `+0x08`.
- `chara_action(5)` to main ARM9 `FUN_0206C760`. It searches the same set of named nodes and invokes virtual `+0x08` on the **first eligible child found**.

**Crucial correction:** On the effect widget vtable, `+0x08` points to Thumb `FUN_020102D0`, which **increments** the reference count. It is *not* destruction or cleanup. A preceding interpretation that these two actions delete GN effects was incorrect; no culling based on these actions is permitted.

Move 41 NoteTrack records:

| Tick | Action | Known operation |
|---:|---|---|
| 9 | 4 | Adds references to eligible GN children |
| 45 | 4 | Same |
| 49 | 4 | Same |
| 59 | 4 | Same |
| 67 | 5 | Adds a reference to the first eligible GN child |
| 84 | 5 | Same |
| 126 | 4 | Adds references to eligible GN children |
| 150 | 4 | Same |

These events establish that the **reference ownership model matters**. It does not yet establish when previously retained children are released, whether their rendering is suppressed, or whether the fight takes every branch of this authored move.

## Another source of visual discrepancy: authored branches

Move 41 has `branch_on_input2` NoteTrack commands at ticks 24 and 40, and the Editor projects a straight-through timeline. In-game input/response can branch or interrupt the move, so visually matching the character's body pose does not prove the active effect objects correspond to the Editor's tick 55 timeline. Additionally, the game has a live opponent and hit-response effects that the Editor's single-character preview cannot model.

## Diagnostic Editor change (not a rendering change)

The Screen/Animation archive formats are untouched. The patch adds a `GN child ref+ (actions 4/5)` timeline row, displays relevant reference actions in the spawned-effect Inspector, and extends `tools/audit_spawn_lifecycle.py` to output reference events and counts of nominal looping instances. **No effects are removed, loop flags rewritten, or animation durations modified.** The 4-looped-object prediction at tick 55 is retained as a hypothesis until a live-object capture proves otherwise.

## Decisive live check to complete termination semantics

With `db_b_01` move 41 running in melonDS's ARM9 debugger, break on:

```gdb
break *0x0206CA8C if $r1 == 0x0005C18A
break *0x0206C650
break *0x0206C760
break *0x02027560
```

Record the effect object's returned widget pointer from each spawn (and its child-list placement), then inspect its `+0x04` reference count and `+0x58` lifetime-control field through ticks 9, 45, 49, and 55. Follow releases through `0x0202771C`/`0x0201C8A0` and note any explicit visibility/deletion callback. The breakpoints on object cleanup should be filtered by the recorded pointers to avoid unrelated effects; debugger support for conditional breakpoints may vary. Also record branch decisions at ticks 24/40 and the effective move ID at capture time.

That establishes whether the older `0x05C18A` instances are actually destroyed, hidden, retained but not drawn, or belong to a timeline branch not followed in combat. **Do not convert the genuine ALMT loop bit to a one-shot as a visual workaround.**
