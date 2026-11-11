# External JUS research reconciliation — 2026-11-10

## Scope, provenance, and precedence

Compared the attached `jus-research-main.zip` (935 non-directory entries; 453 Markdown notes, 118 JSON tables, 197 Python scripts, plus ancillary source/images) against this Editor's `docs/FORMATS.md`, `MISSION_REWARD_TRACE.md`, `STAGE_COLLIDER_TYPES_TRACE.md`, `BATTLE_INPUT_PHYSICAL_KEYS_TRACE_20261110.md`, and the native `jus_formats` / `jus_package` parsers. The following is a **prioritized semantic comparison**, not a claim that every statement in the 935 files was independently audited.

**Source precedence**: the SHA-verified local original game export at `D:/Library/Development/JUS/reverse_engineering/functions_layout` and actual `D:/Library/Development/JUS/data` bytes take priority over claims in the attached research, regardless of whether that research is labelled STATIC, MEASURED, or CONFIRMED. Retain uncertain bytes and distinguish data layout from gameplay meaning. Do not copy generated combat arrays as literal game data or substitute emulator-only observations for traced code.

| Area / attached source | Result | Reconciliation in Editor / native authority |
|---|---|---|
| **J-Power** — `docs/formats/Combat-Formats.md`, `jpower.bin` as attack definitions with damage1/2/3 | **Contradicted** | The same 94,544 bytes divide into **311 rows × 0x130**; each row contains **15 purchase cells × 0x14** after a 4-byte root Koma index. `ov05 021653AC` calculates the cell address, `021646F4` dispatches awards including kind 1 Koma via main `02075F98`, and `02164458` reads six resource costs. `jus_formats/jpower.py` is retained as correct. No attack-damage fields or per-move hitstun may be inferred from this table. |
| **Battle roster** — `docs/research/chr_b-Complete-Mapping.md` (including E0 corrections) | **Compatible, with provenance caveat** | Editor `jus_formats/roster.py` has all 74 `chr_b` IDs in ROM pointer-table order (main `02074728`, table `020924B0`) and 193 support IDs (main `02074CF4`, table `02092700`). Do not revert to sorted-order/early predicted col-file mapping. External E0 'ambiguous by byte join' denotes capture ambiguity, not uncertainty of the native pointer-table order. |
| **chr_b +0x00** — attached `formType` | **Contradicted as a universal field name** | Main `02077C0C` copies record byte +0 into battle node +0x13, read as **base nature** by ov05 `0214E480` when a battle Koma has nature sentinel 3. A form-type name is unsupported for this field. |
| **chr_b +0x01/+0x02** — tier / movement class | **Code-supported, limited** | Main `02077C0C` copies +1 to node +0x11 and +2 to node +0x10. The attached `physics.md` traces tier/acceleration consumers. Do not relabel +0x02 'Koma size', and do not assert its exact physical units without tracing the movement consumer independently. |
| **chr_b +0x03..+0x07** — five innate ability IDs | **Confirmed** | Main `02077768` reads `index*0x3C + 3 + i` for exactly **five** slots; these dispatch through ability table `DAT_0214BD80+0x50`, with separate kind 0/1 and kind 2 paths. Scan *all* five slots: zero is not proof that subsequent entries are absent. Distinct from helper-Koma's `koma.bin+7` passive ID. The Editor previously lacked a concise reference for these fields. |
| **chr_b +0x30..+0x35** — attached `textIds` | **Unproven / likely mislabeled** | Main `02077C0C` copies +0x30 and size-selected +0x32/+0x34/etc. into the battle node +0x2E/+0x30. Editor sound trace uses them as sound-bank parameters; actual display names are in separate `chr_b_t.bin`. Never treat these as name-text indices without a reader trace. |
| **chr/col +0x00/+0x01** — attached attack/projectile class and move 'subType' enum | **Contradicted** | Main `0207FBD0` uses byte0 for precedence; ov06 `0215AF34` indexes the **16 defender reaction routes** by byte1. `jus_formats/chrbin_semantics.py` and `jus_package/movecombat.py` are authoritative. Avoid inventing button names from those values. |
| **chr/col +0x03/+0x04/+0x05/+0x07** — attached projectileId, frameStart, durationMult, hitModifier | **Contradicted; native meanings verified** | Main `02080F14` reads the signed **status lane** at +3; main `020823E4` reads signed **base HP damage** at +4; main `02080F14` independently reads signed **SP pressure** at +5 and **hit-stun contribution** at +7. The +4 signed byte also overlaps a 32-bit value read by ov11's AI scorer. These are not animation-frame offsets. The Editor exposes the corrected semantics and preserves byte-exact round-tripping. |
| **chr/col +0x0C/+0x0D** — knockback X/Y | **Agrees** | Signed components are read in main `02080F14`; they are not graphical collider width/height. Editor's `ColRecord` fields already reflect this. Final knockback scaling depends on other work/state and is not implied by raw values. |
| **CollisionType in ALMT** — research collision-file join | **Agrees** | Main `0207D440` resolves 1..255 via built-in ROM work records, and `0x100 + row` via the character's `chr/col` file. This input ID is NOT `chr/col` byte0 and NOT `chr/shot` handler ID. Editor's `movecombat.py` already keeps these separate. |
| **Koma shape, layout, sizes** — `docs/confirmed-facts/koma.md` | **Agrees** | `kshape.bin`: 66 shapes, 5 columns × 4 rows, 20-byte map + 4-byte occupancy mask. `koma.bin`: 890 × 12 bytes. Original shape #59 duplicates an art label. Existing Editor codec/tests remain authoritative; no shape renumbering. |
| **Koma nature** — attached `koma.md` §2, including retracted older interpretations | **Confirmed; integrated read-only** | Native ov05 `0214E480`: battle panels use the **high nibble of koma +0x0B**, unless it equals **3** (fallback to `chr_b[character-record index].byte0`); supports use `chr_s[abilityId*20 + (size-2)*8]`; helpers return neutral 3. Main `02078CB8` independently checks `(flags >> 4) != 3`. Added `kshape.Card.nature_override` and `native_card_nature`; no serialization or UI mutation. |
| **Koma +0x0B low nibble / +0x0A** — claimed female flag / geometry anchor | **Not locally verified** | The attached reference cites owner observations for female flag and leaves +0x0A open. They remain raw in the Editor; a decompiled consumer trace is needed before declaring canonical flags or edit controls. |
| **Support data** — `koma.md` §2a | **Static agreement** | Main `02077CB8` uses **193 × 20-byte** `chr_s` records with 8-byte size-2/size-3 variants and u16 sound offsets +0x10/+0x12. Editor's `roster.py` and Sound notes align. Do not confuse the variant's +0 nature with the helper's passive ability record. |
| **Ability catalog** — `helpers.md` | **Compatible; narrower Editor UI** | The Editor already resolves helper-Koma +7 through 57 entries in `ability.bin`/`ability_t.bin` using `passivekoma.py`. External research adds innate battle-character ability slots and kind-specific runtime handlers. Those are new documentation, **not** proof that the helper's raw parameter byte is universally HP, SP, or damage. |
| **Battle physics / guard / damage / cancel / UA reconstructed tables** — `docs/confirmed-facts/`, `docs/rebuild/` | **Not automatically adopted** | The archive contains meaningful static/measured hypotheses, but its scalar names and formulae require individual local-code rechecks (main `020823E4`, `02080F14`, ov06 selectors and live struct offsets). Current Editor intentionally displays raw contact/status/knockback sources, **not final HP loss**. Do not import baked move tables as editor-authoritative constants. |
| **Engine sprite, NoteTrack, stage formats** — archive general research | **Editor has stronger direct format coverage** | Keep Editor byte-exact ALMT/ALAR/DSTX/ALTM, stage grid and NoteTrack codecs and their file-specific tests; older narrative descriptions or screenshot interpretations are not replacements. Stage collider type names are justified by ov06 `0216220C` / tables and shipped corpus, not the combat `chr/col` type namespace. |

## Changes made

- `jus_formats/kshape.py`: added read-only `Card.panel_type`, `Card.nature_override`, and `native_card_nature(Card, chr_b, chr_s)`. Preserve original 12-byte records including the low-nibble flags. No guessed female-flag or physics editing.
- `tests/test_research_nature_reconciliation.py`: tests native battle fallback and override, support size-dependent variants, neutral helper, bounds checks and unknown kinds. Run with `py -3 -m unittest tests.test_research_nature_reconciliation tests.test_koma_cards tests.test_progression`.
- `docs/FORMATS.md`: link to this reconciliation and corrected authority notice. Existing codecs retained.

## Validation

- The shipped corpus test reads all **890** `koma.bin` rows, **74** `chr_b.bin` rows, and **193** `chr_s.bin` rows. It confirms the native nature result stays in 0..3, the type counts are **206 battle / 372 support / 312 helper**, and exactly **32** battle panels override their base nature.
- `py -3 -m unittest tests.test_research_nature_reconciliation tests.test_chrbin_native_semantics tests.test_research_enums tests.test_koma_cards tests.test_progression -q` run from `Editor/`: **35 tests passed**.
- Earlier invocation from the repository root without `Editor/` on `PYTHONPATH` produced import errors for existing tests; rerunning from the documented Editor directory passed. This was an invocation-path problem, not a data or parser failure.
- Changes are restricted to the Editor's documentation, read-only Koma parser, and tests; working GUI files were untouched.

## Native combat verification follow-up, 2026-11-10

The subsequent source-level check is documented in
[`NATIVE_COMBAT_VERIFICATION_20261110.md`](NATIVE_COMBAT_VERIFICATION_20261110.md).
It establishes **chr/col +0x04 = signed base HP damage**, **+0x05 = SP
pressure**, **+0x07 = hit-stun contribution**, and **+0x0E = signed
damage-gate class index** (in addition to its visual-effect use).
It also verifies the two 4×4 nature tables and 16-byte gate-category table
against the actual original ARM9 image, the additive 25% damage branches,
the downstream HP/SP application, and source-level cancel/status flag
paths. The old `jpower.damage1/5` attribution remains refuted.
`jus_formats/chrbin.py` and `jus_package/movecombat.py` now
use the corrected terminology while preserving existing edit keys.

## Still unresolved / follow-up evidence needed

1. Prove `koma.bin +0x0B` low-nibble sex flag and `+0x0A` interpretation with local decompiled consumers before surfacing editors for these bytes.
2. Derive exact `chr_b` base stat, tier and movement parameter meanings from the local attack/movement consumers, rather than transferring claims from `Combat-Formats.md`.
3. Continue from the verified damage/SP/hit-stun paths to guard-gauge ownership, full status callbacks, impact priorities, knockback integrator, and exact cancel timing. The formula core and field offsets are now source-verified; **frame-perfect aggregate outcomes are not**.
4. If expanded user-facing panels are wanted, wire `native_card_nature` into the Koma inspector after its concurrent GUI edits settle; the read-only accessor is available now.
5. Treat append-only experiment logs, legacy/retracted notes and measured state captures in the attachment as leads, not replacements for current Editor tests and original-code trace.

**No original game files, reverse-engineering exports, or in-progress GUI files were modified.**
