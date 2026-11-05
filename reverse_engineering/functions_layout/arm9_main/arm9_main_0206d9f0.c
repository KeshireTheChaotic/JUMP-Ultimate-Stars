
/* JUS-SCENE jus_Overlay_SelectSlot2 [scene-map] overlay loader structure (Scene -> overlay map:
   which overlays are resident while each game scene runs.) */

void jus_Overlay_SelectSlot2(int param_1)

{
  if (DAT_020afcac == param_1) {
    return;
  }
  if (DAT_020afcac != -1) {
    FS_UnloadOverlay(0,*(undefined4 *)(&DAT_0209e2e8 + DAT_020afcac * 4));
  }
  FS_LoadOverlay(0,*(undefined4 *)(&DAT_0209e2e8 + param_1 * 4));
  DAT_020afcac = param_1;
  return;
}

