# Character Forge prompt

Copy everything below the line into a new Claude Code session opened in the
Editor folder, and fill in the four fields marked ⟨…⟩. The prompt drives the
`jus-character-forge` skill and the `tools/charforge` harness from concept to
a validated editor package.

---

Build a replacement battle character for Jump Ultimate Stars as an editor
package, using the `jus-character-forge` skill and `tools/charforge`.

**Character concept:** ⟨for example: Denji / Chainsaw Man. A scrappy teenage
devil hunter who pulls a cord in his chest to become a chainsaw-headed devil
with chainsaw blades bursting from his forearms. Moves: rough brawling
punches and kicks in human form, revving chainsaw slashes, a lunging
grinder dash, a spinning blade whirl as the finisher, blood sprays and
sparks as effects. Palette: dark red, rust orange, steel grey, black, pale
skin, white blade highlights.⟩

**Display name (CP932, as shown in game):** ⟨チェンソーマン⟩

**Slot to replace:** ⟨a battle id such as `db_b_01`, or "suggest one"⟩

**Template moveset:** ⟨a battle id, "same as slot", or "suggest one"⟩

Requirements:

1. Run `py -3 -m tools.charforge info <slot>` and summarise the replacement
   contract: files, id block, forms, windows, tables. The roster is
   hard-coded in ARM9, so the character keeps the slot's file names. Edit
   only the extracted data, never the ROM.
2. If I asked for suggestions, choose a template whose moves match the
   concept's fighting style and whose forms, windows and tables match the
   slot (the harness refuses mismatches). Explain the choice in two lines.
3. `scaffold` the work folder with the concept and display name. Read
   `BRIEF.md` and fill `concept.json` → `moves` with one line per move:
   what the new character does in that move, matched to the template
   move's timing and the cells it shows.
4. Write an **art plan** (`art_plan.md` in the work folder) before making
   any art. It has the palette (≤15 colours per sheet), the silhouette and
   proportions against the reference frames, and per sprite key the pose of
   every frame. Effects are listed separately, with which effect move uses
   which cells.
5. Make the art: every required `art/<key>/NNN.png` / `atlas.png` at the
   reference size, with the anchor where the reference has it, a transparent
   background, hard pixel edges and ≤15 colours. Run `draft` first so every
   file exists and the build is testable. Then replace the drafts with final
   frames. Use an image tool if one is connected, otherwise produce pixel
   art programmatically, and say which. Never edit shared `efc_*` keys.
6. `build`, then `validate`. Fix every error and rebuild until validate
   reports no errors. Explain every warning.
7. Make a review sheet: for each sprite key, a contact sheet of the new
   frames next to the reference frames, rendered from the built package.
   Show it to me.
8. Tell me how to import: File → Import package → the package folder →
   Save. Give the display-name command (`names <slot> "<name>"`), but don't
   run it until I confirm. Remind me to test in melonDS with a fresh save.

Don't commit anything. Report what was verified and what was not.
