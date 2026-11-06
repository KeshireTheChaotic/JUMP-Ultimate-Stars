# Mission-first Level and Screen Element Atlas (read-only runtime preview)

This change is based on `main` commit `1aa08d3` and **does not** import the older
standalone Missions and Level workspaces. It leaves the existing MissionPanel,
archive Apply/Save pipeline, and all animation/effect-loop code untouched.

## Level workspace

The **left sidebar lists J-Galaxy missions by planet**, not stage archives.
Selecting a mission reads its battle/mission definition `+0x75` to load the
assigned stage and presents its objective and reward editor in the Mission tab.
Every shipped stage is covered by at least one mission; stage resources are
inspected through the selected mission. Tile editing remains ALTM-only.

The Stage runtime tab provides a frame scrubber and Play/Pause projection (one
simulated game tick per displayed preview step, throttled to 30 steps/sec for
large maps), with `.mob` and
`.bin` parsed by the existing `jus_formats.stagephysics` module. In the viewport,
BG layers use their traced position records, floor paths use their speed and
waypoints, gimmicks and spawns are positioned from their decoded coordinates.
For `BgAnim` type 2, the rendered background uses an **approximate wrapped
band-scroll preview**; this is not a pixel-identical DS scanline implementation.
Palette fade/rotation is now an opt-in, non-destructive DSIG re-render; parallax
camera X/Y transforms are projected with a clamped linear model. Those projections
still need GPU camera/origin validation. Sprite-loop artwork and collision grid
hitboxes need further traces. Type 5 sprite cell
loops are projected as labeled cell references.

`Stage tick` and **Project** control the visual preview. The read-only runtime
dock accepts comma-separated floor IDs and gimmick IDs as *manual scenario
inputs from tick 0*. No scripted combat is inferred. Item placement uses a
reproducible local random seed, not the original RNG/eligibility filter; the
runtime four-item cap and spawn interval are honored. Gimmick hazard spawns
show the most recent candidate position; hazard lifetime remains unmodeled.
The executable environment gate is `definition[0x7C] & 0x02`. When false, the
preview does not activate floor paths and gimmick events.

None of these preview controls write `.bin`, `.mob`, or `.cam` data.

## Screen workspace

The two navigation modes are independent:

- **Screens:** ALTM background maps with the existing dual 256×192 screen preview.
- **Elements:** nested AAR archives containing DSTX sprite-cell dictionaries;
  the selected resource has a thumbnail *cell atlas* and numeric cell selector.

ALMT motion data, when present, selects/animates those cells. The cell grid
alone is **not** authored ALMT playback. No guessed menu-object positions or
animation timings are written to disk. Frame/cell browsing is inspection-only.

## Evidence boundaries

Stage records, counts, floor types 0–5, BG animation headers, item intervals,
gimmick types 0–11 and mission environment gates come from the reverse-engineered
ARM9/overlay-6 consumers and stage asset consistency. The input screenshot or
static archive cannot establish real combat trigger timestamps or RNG state.
Use these previews as deterministic diagnostics, not emulator-accurate battle
replay. In-game validation remains a separate task.