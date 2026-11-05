
/* JUS-SCENE FS_UnloadOverlay [scene-map] overlay loader structure (Scene -> overlay map: which
   overlays are resident while each game scene runs.) */

undefined4 FS_UnloadOverlay(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_30 [48];
  
  iVar1 = FS_LoadOverlayInfo(auStack_30,param_1,param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_020649cc(auStack_30), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

