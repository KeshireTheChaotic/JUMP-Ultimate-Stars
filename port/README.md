# Native port

The Windows host now uses external game data by default. Point it at the extracted
filesystem root containing `copyright/`, `title/`, `opening/`, `topmenu/`, etc.
Keep `.aar` archives intact, including their nested members. No game assets are shipped.

From this directory:

```powershell
dotnet run --project src/Jus.Host -- --data "D:\Library\Development\JUS\data"
```

Data selection order is `--data <directory>`, then `JUS_DATA`, then `Data` beside
`JUS.exe`. Explicit relative paths resolve against the working directory.
Missing directories/files are errors; there is no automatic ROM fallback.
`--rom <file>` explicitly selects the old ROM provider, ignoring `JUS_DATA`.
Combining `--rom` and `--data` is an error. `JUS_ROM` and ancestor ROM discovery
are no longer used by the game host. The separate ROM tooling retains its discovery.

To extract your own ROM to a **new** directory (the extractor overwrites existing files):

```powershell
dotnet run --project src/Jus.Port -- extract "D:\JUS-Data" "D:\MyGames\JUS.nds"
```

Saves and logs remain at `%LOCALAPPDATA%\JUS`. Use `--save-seed <JUS.sav>` to
seed a first run from an existing save. An existing local save takes precedence;
the seed is never written. External mode does not search for a ROM or save.
Explicit ROM mode retains the adjacent `JUS.sav` seed when no seed is specified.
Startup data-source errors are recorded in `jus.log` and return exit code 2.

This first implementation replaces the file source, not the asset formats or
game logic. ALAR/DSCP decoding and resource IDs are unchanged. Changes to external
archives take effect when they are loaded again; restart the host for a clean reload.
There is no loose-member override, live reload, pack manifest, or Editor launch integration yet.

Validation:

```powershell
dotnet test Jus.slnx -m:1
```

Synthetic source-selection and path tests need no assets. Existing integration
tests and the extraction/parity test use your local `JUS.nds` (ancestor lookup or
`JUS_ROOT`); some existing save tests also need `JUS.sav`. The parity test extracts
to a temporary directory and compares every named file and Copyright rendering.
