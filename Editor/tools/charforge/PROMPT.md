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
   any art. Follow the [character art bible](../../docs/CHARFORGE_ART_BIBLE.md)
   and use each sheet's palette budget from the brief. Record the silhouette and
   proportions against the reference frames, and per sprite key the pose of
   every frame. Effects are listed separately, with which effect move uses
   which cells. Include the target's Koma members and 48×48 panel layouts.
5. Make the art: run `generate` for a pose-complete, **procedural** source-guided
   baseline (or `draft` to use original recoloured art). For the character's
   final identity, replace those files with actual authored PNGs. Produce every
   required `art/<key>/NNN.png` / `atlas.png`, plus each
   `art/koma/<key>/NNN.png` at 48×48. The anchor remains where the source has
   it. Use a transparent background, hard edges, and at most 15 opaque colours
   for 4bpp or three for 2bpp. Use an image
   tool if one is connected, otherwise produce pixel art programmatically, and
   say which. Leave shared `efc_*` keys and mixed 2bpp/4bpp atlases as provided.
6. `build`, then `validate`. Fix every error and rebuild until validate
   reports no errors. Explain every warning.
7. Run `review <work>` to build `review/index.html`, an inspectable
   original-vs-authored gallery for every frame, effect atlas and Koma panel.
   Read the built package's `ALMT_LINKS.json` and verify the exact resource-ID,
   texture, frame and GenerateID links. Show actual images, never fabricated
   application screenshots.
8. Tell me how to import: File → Import package → the package folder →
   Save. Give the display-name command (`names <slot> "<name>"`), but don't
   run it until I confirm. Remind me to test in melonDS with a fresh save.

Don't commit anything. Report what was verified and what was not.
