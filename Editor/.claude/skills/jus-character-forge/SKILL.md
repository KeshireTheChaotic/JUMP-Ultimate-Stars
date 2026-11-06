---
name: jus-character-forge
description: Create a replacement Jump Ultimate Stars battle character — all sprite animation frames, character-owned special effects, palettes and link metadata — from a character concept, as an editor package that imports cleanly. Use when the user wants a new/custom/fan battle character (e.g. "make Chainsaw Man as a battle character"), wants to replace a roster character's art, or asks what a character replacement needs.
---

# JUS Character Forge

Turns a character concept into a validated editor package that **replaces one
battle roster slot**. The harness is `tools/charforge` (read its README.md).
Run commands from the Editor folder with `py -3 -m tools.charforge …`. The
default data root is `D:\Library\Development\JUS\data`; `--data` overrides it.

## Facts you must respect

- The roster is **hard-coded in ARM9** (table `0x020924B0`, 74 battle slots).
  A new file name can't load without a ROM patch, so **never patch the ROM**
  and don't offer to. The character takes over a slot's file names, resource-id
  block (`res_base & 0xFFFF00`, 256 ids) and window ids (`0x5F1000/0x5F2000 + record`).
  If the user asks for a new name, explain this and run `info <slot>`.
- Edit only the extracted data. Packages go through File → Import package.
  The one direct data write is `names` (`bin/chr_b_t.bin`, with a `.orig`
  backup), and only after the user confirms.
- Game logic stays the template's: move timing, hit boxes, spawn links, AI,
  col and shot tables. A package can't add moves. Choose a template whose
  moveset fits the concept; the harness refuses one whose forms, windows or
  tables differ from the slot's.
- Shared effects (`efc/comm_*.aar`, keys prefixed `efc_`) serve many
  characters. Never give them art.

## Workflow

1. `info <slot>`: state the contract (files, block, forms, windows, tables, current name).
2. Pick the template. With `template == slot` nothing is remapped. Otherwise
   the build moves every id and name into the slot.
3. `scaffold <template> <slot> <work> --name "<CP932 name>" --concept "<text>"`.
   Read `BRIEF.md`. Every non-shared sprite key lists its frames, size, anchor
   (`origin`), palette mode and the moves/ticks showing each cell.
4. Fill `concept.json` → `moves` (what each move shows) and write
   `art_plan.md`: the palette (≤15 colours per DSIG), proportions against the
   reference frames, the pose of each frame, and the effects with their cells.
5. Art:
   - Run `draft <work> --colours …` so every required file exists.
   - Replace the drafts with real frames in `art/<key>/NNN.png`, or
     `atlas.png` for atlas textures.
   - Each frame is exactly the reference size, with the anchor kept where the
     reference has it, a transparent background, hard edges and ≤15 colours.
   - Use a connected image tool if there is one, otherwise draw
     programmatically with PIL, and say which.
   - A draft is not final art. Say clearly which keys are still drafts.
6. `build <work> <pkg>`, then `validate <pkg> <slot>`. Iterate until there are
   0 errors, and explain every warning. Typical warnings: ids the old character
   had that the template lacks (the loader stops at the first missing motion),
   or the old character's tables staying behind.
7. Render a review sheet (new frames next to `reference/<key>/sheet.png`),
   from the built package, so the user sees the result.
8. Hand-off: import steps, the `names` command (don't run it unasked), and
   a melonDS test with a fresh save. Commit nothing unless asked.

## Checks the harness does (don't re-implement)

`build` checks art sizes, missing frames, shared-key art, the palette
quantisation to DS 15-bit, and writes the DSIG palette JSON. `validate` does a
dry-run import, then checks loader file names, the id block, window ids, name
hashes, loader ids `B`/`B+0x38`, GenerateID/TextureID/BoundsIndex resolution,
rendering of every frame, and foreign ids in the `shot` table.

## Prompt template

`tools/charforge/PROMPT.md` is the fill-in prompt. `concept.example.json`
shows a filled concept.
