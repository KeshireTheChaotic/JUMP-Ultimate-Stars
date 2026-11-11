# Native combat code verification — 2026-11-10

**Purpose:** Reconcile `jus-research-main.zip`'s damage, knockback, status,
guard/SP and cancel descriptions against the *local* original JUS ARM9 and ov06
Ghidra layout exports. Do not treat the attachment's assertions, emulator
measurements or generated tables as authoritative over original game code.

Primary path: `D:/Library/Development/JUS/reverse_engineering/functions_layout/`.
Verified ROM bytes: `reverse_engineering/verified_binaries/52e262163e0d304c/arm9.bin`.
Data corpus: `D:/Library/Development/JUS/Data/chr/ChrBin.aar` (2,837 col
records). Code/ROM/data were read, not edited. The prior format comparison
is in `JUS_RESEARCH_RECONCILIATION_20261110.md`.

## Results by claim

| Research claim / game-data field | Result and proof | Editor interpretation |
|---|---|---|
| **HP base is a signed byte at chr/col +0x04** | **VERIFIED IN CODE**: `arm9_main/arm9_main_020823e4.c`, line `iVar4 = (int)*(char *)(*(int *)(param_2 + 0x10) + 4)`; `arm9_main_02080f14.c` passes the hit's record through the element pointer. | Added `ColRecord.base_damage` / editable `base_damage` field. This is an *input*, not post-buff final HP loss. |
| **chr/col +0x05 is SP damage / pressure, not base HP damage** | **VERIFIED IN CODE**: `arm9_main_02080f14.c` loads signed `(record + 5)`, multiplies by `0x100`, and adds it to the second class-indexed contribution array (`work+0xEC`). `arm9_ov06_0215a978.c` consumes folded `work+0x138` via `FUN_020781E4`. | New `ColRecord.sp_pressure`; existing `contact` edit key and `direct_contact_magnitude` remain **compatibility aliases**, with corrected human-readable label. Do not silently rename the serialized offset. |
| **chr/col +0x07 contributes to hitstun** | **VERIFIED IN CODE**: `arm9_main_02080f14.c` adds signed `(record+7)` to defender work `+0x171`; `arm9_ov06_0215a978.c` uses that byte in its reaction duration expression, clamps result 16–60 and stores it at fighter `+0x115`. | Added `hitstun_contribution`; existing `accumulator` key remains compatible, now labelled *Hit-stun contribution*. Do not claim that +0x07 alone gives the final frame count. |
| **Damage formula: two 8.8 multipliers, nature, additive 25% gates** | **VERIFIED IN CODE** at `main 020823E4`: base`<<8`, adjust sequentially by scratch `+0x184/+0x186`; calculate nature delta via `0x0209FEF4` or `0x0209FF14`; read opponent gate word `+0x44`; accumulate conditional `±(scaled_base*0x40 >>8)` terms; output `(scaled_base+terms)>>2`. Crit/rand branch can double the base before these steps. | Source semantics documented; **no guessed fixed final damage calculation** introduced into the Editor. Flat -2 damage reduction from older research is refuted. |
| **Nature tables** | **BYTE-VERIFIED AGAINST ORIGINAL `arm9.bin`** at `0x0209FEF4` and `0x0209FF14`: both exactly 4×4 unsigned 8.8 values `0x100` / `0x180` as described in attached `confirmed-facts/damage.md`; attack/defense category 3 has no advantage. | Keep nature as a conditional input, not a damage-table substitution. No ROM copy needed at runtime for Editor diagnostic labels. |
| **Damage class index at chr/col +0x0E** | **VERIFIED**: `main 020823E4` reads this as **signed s8**, only indices 0–15 address the 16-byte table at `0x02092E68` (ROM bytes are `[1,1] + [2]*10 + [0]*4`). The same source byte has independent visual-effect use in `main 02080F14`. | Added read-only `ColRecord.damage_gate_category` returning category 0, 1, 2 or `None` for out-of-range indices. This is **not** `chr/col +0x00` precedence class and not a physical-button or ALMT move ID. |
| **Gate bits +0x44** | **VERIFIED BY CONTROL FLOW**: `0x4000` adds 25%, `0x0040` subtracts 25%, both require the record/element condition. Category-1 bits `0x1000` / `0x0010` add/subtract; category-2 bits `0x2000` / `0x0020` add/subtract. Multiple terms combine additively; source `main 020823E4`. | No class-gate editing is offered until their owner ability/activation mechanism is traced. |
| **Knockback source coefficients** | **VERIFIED IN CODE** `main 02080F14`: signed `chr/col +0x0C/+0x0D`; X base `kbX*0x80`, Y base `kbY*(-0x9E)`, with downstream Y factor `0xDF/0x100`. Reaction class `+0x01==6` consults HP-band table `0x0209FB64`; flags, facing/relative side and weight bits alter the outcome. Staged velocity added to work `+0x148/+0x14A`. | Existing `signed_knockback` stays. The archive's tabulated *first-frame* velocities depend on drag, gravity, floor and current motion, so they are **not** now accepted as universal constants. |
| **Signed status lane** | **VERIFIED** `main 02080F14`: signed `chr/col +0x03` selects positive `+0x172` or negative `+0x173` work lane, retaining the smaller signed entry. **STATUS DISPATCH VERIFIED** `ov06 02158B20` calls `02158ED0`; `02158ED0` indexes status definitions at `DAT_02172984+4` and installs timed state/handlers. | Existing signed status field and 16 reaction selectors remain separate. Numeric status IDs are **not** assumed to be named ailments without callback proof. |
| **Status duration / cancel gate** | **VERIFIED IN CODE** `ov06 02158ED0`: the table's positive initial duration is adjusted using a signed divide-by-10 and an owner/global two-times coefficient. `ov06 0215986C` consults a status-immunity bitset via `02158EB0` and clears timer `+0x0E` when blocked. | Runtime-dependent duration and immunity cannot be reconstructed from the raw status byte alone. |
| **HP/SP apply and conditional halve** | **VERIFIED** `ov06 0215A978`: folded HP work `+0x134` is sent through `FUN_020783B8`; folded SP work `+0x138` is negated into `FUN_020781E4`. Before HP apply, work `+0x134` is halved when `FUN_02159A10` or `FUN_021598D0` fires. Those read fighter `+0x88` equal to `0x23` or `0x0B`, respectively. `main 020781E4` handles positive/negative meter carry and 0x6400 thresholds. | The specific halve state IDs are **verified**, their human-facing names and the full guard-gauge model are **not**. Do not label this branch a universal block/guard reduction. |
| **Cancel windows / button mapping** | **PARTIALLY VERIFIED**: NoteTrack character-action callback `ov06 02157A44` case 1 sets fighter `+0xF3`, case 0x15 sets `+0xF4`; move start clears both and buffer `+0xC8` in `02159EF8`. The attack-state handler reads the ground/air input selectors `0215A720` / `0215A8C0`, the buffered follow-up and mask at fighter `+0xC0/+0xC4`, and dispatches the native move table at `0x021712B8`. | The **flag/dispatch** claim is source-supported. The archive's universal "earliest key + 2 frames" timing is **not proved for every form/state** by this static check. Retain original NoteTrack events, do not fabricate extra ALMT buttons. |

## Research contradictions to avoid

1. `docs/formats/Combat-Formats.md` labels `bin/jpower.bin` as a damage table. It is **refuted** by ov05 `021653AC` / `021646F4`: 311 Koma acquisition/evolution rows × 0x130 bytes. The verified base damage is in `chr/col` byte +0x04, not `jpower.damage1/5`. The attached `confirmed-facts/damage.md` includes that incorrect design-time attribution, even though its *runtime formula* is largely correct.
2. Earlier Editor descriptions gave `chr/col +0x05` the vague label **contact magnitude**. The separate code paths identify it as an **SP pending contribution**. It must not be used as final HP loss.
3. Some older research interprets `chr/col +0x03` as a projectile identifier, `+0x05` as a duration multiplier and `+0x07` as arbitrary hit modifier. These are contradicted by direct collision code.
4. A raw `chr/col` record is 20 bytes. The overlapping signed **32-bit** word at +0x04 is used by ov11's AI scorer, whereas **signed byte** +0x04 is the HP damage input. Changing one byte necessarily changes the 32-bit interpretation; the overlap is not two independent fields.
5. `chr/col +0x0E` is read in two contexts: animation/impact visual routing *and* damage gate categorization. Neither use authorizes renaming it to an unrelated universal enum.

## Editor changes and validation

Changed:
- `jus_formats/chrbin.py`: native `base_damage`, `sp_pressure`,
  `hitstun_contribution`, `damage_gate_category` accessors; one new
  `base_damage` editable field; corrected legacy field labels.
- `jus_package/movecombat.py`: the move's combat-record summary now shows
  HP base, SP pressure and signed hitstun distinctly.
- `tests/test_native_combat_damage_verification.py`: original-export
  call-site assertions, ROM nature/class table assertions, 2,837-row original
  corpus round-trip and signed-field surgical-edit tests.

Run from `Editor/`:

```powershell
py -3 -m unittest tests.test_native_combat_damage_verification tests.test_chrbin_native_semantics tests.test_inspector_combat_edit tests.test_research_nature_reconciliation -q
```

This explicitly verifies *native parser correctness* and source/table consistency.
It is not a frame-perfect battle emulator validation.

## Remaining verification work, in priority order

1. Find and trace the native producer of each defender gate bit at scratch
   `+0x44` and the two attacker 8.8 multipliers, joining ability records and
   gameplay modes **without hard-coding inferred associations**.
2. Trace the exact SP-gauge ownership and guard state transitions, including
   automatic guard cost, block-to-SP side effects and meter UI reconciliation.
3. Trace the full status dispatcher callbacks for names, effects, stacking,
   immunity and per-tick expiry; the numeric duration mechanism is not a full
   status effect semantic model.
4. Verify collision class 6 HP-band and weight-scaling table values in
   `arm9.bin`, and the downstream movement integrator, before treating the
   external `knockback-table.json` as an exhaustive physics oracle.
5. Test per-form cancel event frame/animation clock, buffer queue lifetime,
   and input-state transitions before importing `cancel-table.json` window
   onset values as exact for every character.

No edited `chr/col` corpus was written back. Current working GUI files,
ROM, decompiler exports and the native port remain untouched.
