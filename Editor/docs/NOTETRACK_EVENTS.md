# ALMT NoteTrack command enumeration — 2026-11-04

This is the **complete recognized battle-overlay NoteTrack opcode catalog** (46 opcode forms), not a claim that every game behavior is fully understood. The catalog is compiled from `jus_formats/notetrack.py`, validated against supplied game data.

| Opcode | Category | Editor name | Argument layout | Supplied-corpus count | What the dispatcher does |
|---|---|---|---|---:|---|
| `0x0000` | Branch / conditional | `branch_on_input` | `bbBBB` | 89 | target, gate, input_mask_index, window, min_count: branch when the input (mask table 0x02171098) is seen min_count times within window |
| `0x0001` | Branch / conditional | `branch_input_charge` | `BBHHHHHHH` | 81 | multi-threshold input/charge branch (cond 1) |
| `0x0002` | Branch / conditional | `branch` | `bb` | 445 | target, gate: branch immediately (gate -1 = always; else every gate+1 calls) |
| `0x0003` | Branch / conditional | `branch_if_grounded` | `bb` | 336 | target (cond 2: state+0x78 bit 1) |
| `0x0004` | Branch / conditional | `branch_if_airborne` | `bb` | 36 | target (cond 4: state+0x78 bit 1 clear) |
| `0x0005` | Branch / conditional | `branch_if_hit_contact` | `bb` | 360 | target (cond 6: state+0x158 & 0xF) |
| `0x0006` | Branch / conditional | `branch_now` | `Bb` | 58 | target (unsigned): branch immediately |
| `0x0007` | Branch / conditional | `branch_if_flag` | `bB` | 58 | target, flag_index (cond 3: FUN_020838C4(obj, flag<<8)) |
| `0x0008` | Branch / conditional | `branch_cond8` | `bb` | 15 | target, param (cond 8: contact & state+0x15C/0x164 bit 5) |
| `0x0009` | Branch / conditional | `branch_cond9` | `bb` | 52 | target (cond 9: state+0x40 bit 17) |
| `0x000A` | Branch / conditional | `branch_if_wall` | `bb` | 54 | target (cond 5: state+0x78 bit 2 or 3) |
| `0x000B` | Branch / conditional | `branch_cond11` | `bbh` | 1 | target, param, value (cond 11: owner query 0x40) |
| `0x000C` | Branch / conditional | `branch_cond10` | `bb` | 50 | target (cond 10: state+0x28 != 0) |
| `0x000D` | Branch / conditional | `branch_if_query41` | `bb` | 17 | target: if owner query 0x41 |
| `0x000E` | Branch / conditional | `branch_query42` | `bBbB` | 5 | arg1, target1, arg2, target2: owner query 0x42(arg2) → branch target2, else query 0x42(arg1) → branch target1 |
| `0x000F` | Branch / conditional | `branch_if_query43` | `bb` | 7 | target: if owner query 0x43 |
| `0x0010` | Branch / conditional | `branch_if_global` | `bb` | 67 | target: if global battle flag (DAT_020A0DA8) bit 0 |
| `0x0011` | Branch / conditional | `branch_cond7` | `bb` | 0 | target (cond 7) |
| `0x0012` | Branch / conditional | `branch_on_input2` | `bbBBB` | 42 | unused, target, input_mask_index, window, min_count |
| `0x0013` | Branch / conditional | `set_pending_label` | `bb` | 18 | label stored for 0x0014 |
| `0x0014` | Branch / conditional | `branch_pending_label` | `bb` | 42 | branch to the label stored by 0x0013 |
| `0x0015` | Branch / conditional | `branch_cond12` | `bbh` | 10 | target, param, value (cond 12: owner query 0x44) |
| `0x0016` | Branch / conditional | `branch_if_button` | `bB` | 11 | target, input_mask_index (cond 13: held, or grounded) |
| `0x0017` | Branch / conditional | `branch_on_direction` | `bb8B` | 22 | unused, unused, target per stick direction (8, mirrored by facing) |
| `0x0018` | Branch / conditional | `branch_if_query45` | `Bb` | 13 | target, arg: owner query 0x45 |
| `0x0019` | Branch / conditional | `branch_cond14` | `bb` | 0 | target, param (cond 14: contact and owner query 0x46) |
| `0x001A` | Branch / conditional | `branch_cond15` | `bb` | 4 | target (cond 15: owner query 0x47) |
| `0x001B` | Branch / conditional | `branch_if_query48` | `bb` | 1 | target: if owner query 0x48 |
| `0x001C` | Branch / conditional | `branch_cond16` | `bb` | 7 | target (cond 16: state+0x78 bit 0) |
| `0x001D` | Branch / conditional | `branch_query49` | `bBbB` | 1 | like 0x000E with owner query 0x49 |
| `0x0100` | Physics / state | `stop_motion` | `h` | 1,895 | clear velocity (+0x24/+0x26), set physics flag 0x1000 |
| `0x0101` | Physics / state | `set_physics_bit1` | `h` | 699 | nonzero: set physics +0x34 bit 1 (restored when the track ends) |
| `0x0102` | Physics / state | `set_state_flag_26` | `h` | 1,274 | nonzero: set state+0x78 bit 26 (restored at end) |
| `0x0103` | Physics / state | `set_velocity` | `bb` | 1,611 | vx*32 (mirrored by facing), vy*-126 → physics +0x2C/+0x2E |
| `0x0104` | Physics / state | `set_velocity_for` | `bbBB` | 441 | vx, vy, frames, pad: velocity re-applied for N frames |
| `0x0105` | Physics / state | `watch_state_bits` | `h` | 21 | 0 = enable watch of state+0x78 bits 2/3 |
| `0x0106` | Physics / state | `set_object_flag` | `h` | 46 | FUN_0207D11C(obj, value != 0) (restored at end) |
| `0x0107` | Physics / state | `watch_flag_0x400` | `h` | 1 | 0 = enable watch of FUN_020838C4(obj, 0x400) |
| `0x0200` | Presentation | `screen_effect` | `BBBB` | 100 | FUN_021520DC(a, b, c) |
| `0x0201` | Presentation | `show_model` | `h` | 137 | nonzero: make the animated object visible |
| `0x0300` | Character action | `chara_action` | `hhhhhhh` | 3,912 | sub_code, a1..a6 → battle character callback (FUN_02157A44 switch) |
| `0x0301` | Character action | `end_track` | `h` | 735 | hide object and stop note processing |
| `0x0302` | Character action | `set_object_flag_29` | `h` | 430 | nonzero: FUN_0207CE7C (flag 0x20000000), 0 clears it |
| `0x0400` | Audio | `play_se` | `h` | 3,283 | sound: SEQ_BATTLE (SSAR 0x7A) sequence index |
| `0x0401` | Audio | `play_chara_se` | `h` | 443 | sound: character's SSAR (chr_b.bin record +0x1E) sequence index |
| `0x0402` | Audio | `play_special_se` | `h` | 861 | sound: special-move SSAR (record +0x20) sequence index |

## Character action (`0x0300`) subcodes

The `0x0300` opcode has a signed 16-bit **secondary action subcode** plus six parameters. In the scanned data subcodes 0–33 are observed. Not all have a verified gameplay name. The editor intentionally preserves unlabeled numeric subcodes rather than fabricating names.

| Subcode | Events in sampled corpus | Verified semantic label |
|---:|---:|---|
| 0 (`0x00`) | 18 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 1 (`0x01`) | 686 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 2 (`0x02`) | 1268 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 3 (`0x03`) | 185 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 4 (`0x04`) | 206 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 5 (`0x05`) | 955 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 6 (`0x06`) | 33 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 7 (`0x07`) | 2 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 8 (`0x08`) | 2 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 9 (`0x09`) | 4 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 10 (`0x0A`) | 81 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 11 (`0x0B`) | 60 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 12 (`0x0C`) | 2 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 13 (`0x0D`) | 54 | Select pursuer animations (effect slots A/B) |
| 14 (`0x0E`) | 54 | Set pursuer target (x, y, snap) |
| 15 (`0x0F`) | 3 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 16 (`0x10`) | 2 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 17 (`0x11`) | 3 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 18 (`0x12`) | 1 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 19 (`0x13`) | 3 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 20 (`0x14`) | 3 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 21 (`0x15`) | 151 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 22 (`0x16`) | 28 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 23 (`0x17`) | 31 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 24 (`0x18`) | 57 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 25 (`0x19`) | 1 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 26 (`0x1A`) | 1 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 27 (`0x1B`) | 4 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 28 (`0x1C`) | 2 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 29 (`0x1D`) | 3 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 30 (`0x1E`) | 3 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 31 (`0x1F`) | 1 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 32 (`0x20`) | 3 | Handler seen in ov06; gameplay meaning not yet fully verified |
| 33 (`0x21`) | 2 | Handler seen in ov06; gameplay meaning not yet fully verified |

## Marker is a separate ALMT property, not a NoteTrack opcode

* Marker values label positions in the current animation; a NoteTrack conditional branch calls the seek dispatcher to jump to a marker value.
* `0xFF80`–`0xFF8F`: on change, automatically seek to matching `0xFF00`–`0xFF0F` Marker label.
* Jump lookup `FUN_0201F93C` searches the table `{u16 tick, u16 value}` and seeks to its key tick.
* Not every automatic branch executes in every state: `FUN_0201F7EC` checks a player suppression flag.

## Notes

Corpus scope: 1,210 relevant ALMT files reachable from the selected `data.zip` archives; 1,842 NoteTracks; 17,791 commands. 44 of 46 defined opcodes appear in this subset. No unknown opcodes were encountered. This is narrower than the full 1,547-file format round-trip corpus.
The GUI does not evaluate runtime conditions, pursuer movement, audio synthesis, or marker control-flow during scrubbing. It displays the key timeline and explicit jump arcs as metadata.
For audio: opcode `0x0400` indexes `SEQ_BATTLE`; `0x0401` uses the character SSAR chosen by the character metadata; `0x0402` uses the special-move SSAR. The current editor resolves symbol names when available but does not synthesize SDAT sequences.

## Important remaining unknowns

* Semantics of many `chara_action` subcodes; `0x0D`/`0x0E` (pursuer animation selection and target) are confirmed, not the entire action family.
* Several conditional-branch tests have only inferred labels. The ALMT editor cannot simulate input, hit-contact, wall, physics, and object state yet.
* EffectFlags property bit interpretations; `LifeType`, `PatternNo` and object-specific property consumers need battle-overlay validation.
* ALOD property descriptor semantics and ALTM move/property composition; these are not decoded enough for unconditional new-character authoring.
* Character identity registration and cross-file references (ChrBin tables, chr_b.bin, archive IDs, koma/ability metadata) are not supported as a complete create-new-character workflow.
* ALAR2 flag-bit-1 split lifecycle and attributes bits 24/25; DSIG v2 b7; alternate DSTX 0x04/0x06 panel layout.
* In-game rendering parity: blend/priority and one ChrWin off-texture piece; pursuer interpolation/facing; unusual effect dispatch paths.
* Full audible playback through SDAT SSAR/SSEQ/SWAR synthesizer and exact character metadata-based sound archive association.
