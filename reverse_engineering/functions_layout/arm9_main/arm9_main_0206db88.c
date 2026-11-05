
/* JUS-SCENE jus_Overlay_SelectEngine [scene-map] overlay loader structure (Scene -> overlay map:
   which overlays are resident while each game scene runs.) */

void jus_Overlay_SelectEngine(int param_1)

{
  undefined1 auStack_60 [8];
  int local_58;
  int local_54;
  undefined1 auStack_34 [4];
  int local_30;
  int local_2c;
  int local_28;
  
  if (DAT_020afca4 != param_1) {
    if (param_1 == 0) {
      if (DAT_020afca0 != 0) {
        FUN_0201a2ec();
        DAT_020afca0 = 0;
      }
    }
    else {
      thunk_EXT_FUN_021b4498(DAT_020a0f64);
      FUN_02042c2c(DAT_020a0f64);
      FUN_02042c74(DAT_020a0f64);
    }
    if (DAT_020afca4 != -1) {
      FS_UnloadOverlay(0,*(undefined4 *)(&DAT_0209e2e0 + DAT_020afca4 * 4));
    }
    FS_LoadOverlay(0,*(undefined4 *)(&DAT_0209e2e0 + param_1 * 4));
    if (param_1 == 0) {
      FUN_02042c48(DAT_020a0f64);
      FUN_02042ba0(DAT_020a0f64);
      thunk_EXT_FUN_021b433c(DAT_020a0f64);
    }
    else {
      FS_LoadOverlayInfo(auStack_34,0,0xc);
      FS_LoadOverlayInfo(auStack_60,0,0xd);
      DAT_020afca0 = FUN_0201a274(local_30 + local_58 + local_54,
                                  (local_2c + local_28) - (local_58 + local_54));
    }
    DAT_020afca4 = param_1;
  }
  return;
}

