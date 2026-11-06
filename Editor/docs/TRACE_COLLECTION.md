# JUS progression and stage research: evidence capture

The objective is **Koma acquisition**, not player-authored deck saves. In JUS,
mission clear requirements make starting/help Komas available; the Koma evolution
chart exposes support/battle variants and costs gems. A new Koma needs links from
both the game-data side and the character acquisition graph.

**Updated 2026-11-05:** The user supplied raw executable traces and the extracted game assets. **Mission reward Koma IDs and six-resource grants are now verified and editable** in the Level workspace (Mission tab). See `docs/MISSION_REWARD_TRACE.md` for proof and offsets. Evolution links and costs, mission condition codes, and expanded runtime capacity remain unverified. This document retains the collection steps for those remaining areas.

## 1. Locate executable references and candidate game tables

From your local `D:\Library\Development\JUS` environment, run:

```powershell
py -3 tools\trace_progression.py `
  --data "D:\Library\Development\JUS\data" `
  --rom "D:\Library\Development\JUS\JUS.nds" `
  --out progression_evidence.json
```

Or use `--arm9 path\to\arm9.bin` if the executable is already extracted.
The output inventories the `bin` files and stage names, plus ASCII filename
references and *candidate* ARM9 pointer literals. Candidate record strides
are divisibility checks, **not** confirmed layouts. A Ghidra xref and decompile
of the actual consumers is still necessary before recording field meanings.

Trace in this order:

1. `bin/koma.bin` load and typed card-lookup consumers. Confirm record count
   is data-derived, and find all bounds checks when a new card is appended.
2. Stage/mission completion event and reward list read, then conversion from
   a reward entry to a Koma ID and the persistent acquired flag.
3. Character evolution graph display, dependencies, cost checks, and gem purchase
   commit path. Confirm which entries refer to `koma.bin` record IDs.
4. Cross-reference save writes for mission-clear and purchase flags. Verify a
   controlled, isolated mission/reward save diff.

For candidate consumers, run `tools/ghidra/TraceJUSProgression.java` on the
ARM9 project in Ghidra 12.x. It exports string references, candidate pointer
words, and bounded decompilation of functions owning references. This is a
first-pass queue: a candidate pointer is not proof that a function reads the
corresponding table. Treat emitted pseudocode as evidence to be checked against
assembly and data.

Mission reward fields are now traced and writable. Evolution records are still blocked pending traces. There may be separate, fixed-size runtime arrays even if an archive
header holds a dynamic record count.

## 2. Controlled reward evidence (not deck edits)

Make one game save immediately before a mission clear, one after clearing the
mission/reward, and optionally a control save with no new reward. Export raw
SRAM `.sav` files (not compressed save states):

```powershell
py -3 tools\trace_unknowns.py save-diff before.sav after_reward.sav `
  --out mission_reward_diff.json
```

A changed byte does not prove it represents a Koma flag. Follow the relevant
ARM9 writes from the mission-clear routine to the save structure, and check a
second independent reward. Keep separate traces for the evolution purchase
path so acquisition and purchase flags are not conflated.

## 3. Stage `.mob` / `.bin` / `.cam`

```powershell
py -3 tools\trace_unknowns.py stage --data "D:\Library\Development\JUS\data" `
  --out stage_evidence.json
```

The output contains lengths, SHA-256, header bytes, aligned u32s, plausible
in-file pointers, and unverified factors. Correlate these with
`BattleMapMoveFloorInit`, callers, and update routines. This is separate from
mission-clear reward logic unless a code trace proves a shared table.

## 4. Work that can be saved now

The Koma 5×4 polyomino dictionary can be edited, extended with new variants,
or pruned with reference migration. `bin/kshape.bin` holds the variant groups;
`bin/koma.bin` holds existing cards' `(size, variant)` selectors. This patch
preserves unmodified bytes and the shipped shape-59 anomaly. Changes to file
length and variant count are **format-valid**, not yet proven compatible with
all game-runtime arrays. Validate a patched ROM in melonDS before live play.

The final mission editor should provide a mission list, requirements, rewards,
prerequisites, clear flags, and links to a Koma evolution graph, with unknown
fields preserved and explicit safety validation before Save.
