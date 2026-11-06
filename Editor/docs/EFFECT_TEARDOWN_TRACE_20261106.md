# Effect teardown by NoteTrack `chara_action(4/5)` — 2026-11-06

**Evidence:** `reverse_engineering/functions_layout/arm9_main` (Ghidra C) and the
verified `arm9.bin` (`verified_binaries/52e262163e0d304c`), vtable words read
directly from the image; ALMT/NoteTrack data from `D:\Library\Development\JUS\data`.
Static evidence only; no emulator capture.

## Result

Looping effects **are** ended in-game, by the owner's NoteTrack:

* `chara_action(4)` → `FUN_0206C650` tears down **every live effect** spawned by the
  owner's generator nodes GN01, GN02, … (newest first per generator).
* `chara_action(5)` → `FUN_0206C760` tears down the **oldest live effect** of the first
  generator that has one.

This **corrects** `EFFECT_LOOP_REFCOUNT_TRACE_20261105.md` and
`STATIC_EFFECT_LIFETIME_RENDER_TRACE_20261105.md`. Both read the `+0x08` call as a
reference increment (`0x020102D0`). That is the `+0x08` of the node
*implementation* vtable (`0x0209C0B4`), but the walk calls `+0x08` on the node's
*wrapper* object. Their conclusion "a looping effect lives until the owner is
deactivated" holds only when no `chara_action(4/5)` follows. In 232 of 612 looping
generator spawns, one does follow in the same move.

## Code path

| Step | Address | Evidence |
|---|---|---|
| dispatch | ov06 `FUN_02157A44` | `chara_action` 4 → `FUN_0206C650`, 5 → `FUN_0206C760` |
| generator lookup | `FUN_0206C6F0` | finds `'GN0n'` (`(n+0x31)<<24 \| 0x304E47`), n = 0..8; the walk **stops at the first missing generator** |
| child count | vtable `+0xAC` = `FUN_0201542C` | `*(u16*)(node+0x74) + 1` |
| child get | vtable `+0xC0` = `FUN_02015410` | index 0 = the generator itself; index *i* = `node+0x6C` list entry *i−1* — the children added by `+0xB4` (`FUN_020161D8` → `FUN_020246C8`) at each spawn, in spawn order |
| wrapper | `FUN_0206C718` → `FUN_02011B38(child)` | returns `child[6]` (`node+0x18`), creating it through vtable slot 5 if absent |
| wrapper class | slot 5: `0x0209C0B4+0x14` = `FUN_02023CA8` (effect nodes), `0x0209C30C+0x14` = `FUN_020160C8` (GN nodes) | 8-byte objects, vtables `0x020955C0` / `0x02095878`, `[1]` = the node |
| eligibility | `*(s8*)(wrapper[1]+0x29) >= 0` | bit 7 of node `+0x29` clear |
| call | wrapper `+0x08` = `FUN_02049460` (both wrapper vtables) | `FUN_02027560(wrapper[1])` unless the scene is ending (`+0x224`) |
| teardown | `FUN_02027560` | sets `+0x29 \| 0x40`, deactivates through vtable `+0x64` (`FUN_02024958` kills the node's own children), queues removal |
| bookkeeping | event-1 callback `FUN_020160F0` (registered by `FUN_020161D8`) | removes a dead child from its generator's list — so ended one-shots are never picked by action 5 |

Loop handling itself is unchanged and re-verified. `FUN_0201BDEC` wraps a looping
controller. The only lifecycle listener on effects is event 1: no event-6
registration exists (`FUN_0202788C` callers: events 1 and 0xC only). `LifeType` is
never authored (0 tracks in all `chr/` and `efc/` ALMT files), so `+0x58` stays at
the `-1` set by `FUN_0206CA8C`.

## Same-tick order (Inferred)

When an action and a spawn share a tick, the editor applies the action first. In
97 places `chara_action(5)` coincides with the move's first generator spawn, and
no older effect is alive. Spawn-then-kill would destroy each of those effects on
its first frame. Corpus counts: action 4 shares a tick with a GN spawn 13/203
times, action 5 608/929 times.

## Example: `db_b_01` move 41 (`0x05C12C`)

Actions 4 at 9, 45, 49, 59, 126, 150 and 5 at 67, 84; aura spawns (`0x05C189` at 0,
`0x05C18A` at 9, 45, 49, 59, 67, 84). Each new aura replaces the previous one: at
tick 55 **one** aura is alive (spawned at 49), not four.

## Editor

* `spawns.teardowns()` simulates the walk; `project()` skips torn-down effects (and their
  nested spawns); `effect_span()` ends the clip bar the tick before the teardown.
* Timeline row **GN effect teardown (4/5)** (✕ all / ✕ oldest); clip labels show
  `✕<tick>`; the Inspector shows *Torn down*. Show ▾ → *Effect teardown by
  chara_action 4/5* turns the model off for comparison.
* A looping effect with no later teardown stays open-ended: in-game it outlives the
  move until a later move's action or the owner's teardown.
* `tools/verify_effect_reference_path.py` now also byte-checks the slot-5 factories and
  both wrapper `+0x08` entries.

## Still open

* What sets node `+0x29` bit 7 (such children are skipped).
* Effects carried over from the previous move (the editor starts each move empty).
* Branches and combat hits, as before.
