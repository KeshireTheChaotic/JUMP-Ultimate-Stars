
/* JUS-SCENE jus_Overlay_SelectScene [scene-map] overlay loader structure (Scene -> overlay map:
   which overlays are resident while each game scene runs.) */

void jus_Overlay_SelectScene(int param_1)

{
  if (DAT_020afca8 == param_1) {
    return;
  }
  if (DAT_020afca8 != -1) {
    FS_UnloadOverlay(0,*(undefined4 *)(&DAT_0209e2f0 + DAT_020afca8 * 4));
  }
  FS_LoadOverlay(0,*(undefined4 *)(&DAT_0209e2f0 + param_1 * 4));
  DAT_020afca8 = param_1;
  if ((param_1 == 6) && (DAT_020afea0 != 3)) {
    jus_Overlay_SelectEngine(1);
    return;
  }
  jus_Overlay_SelectEngine(0);
  return;
}

