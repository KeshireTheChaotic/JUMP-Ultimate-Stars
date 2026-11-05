
/* JUS-SCENE jus_Scene_Update [scene-map] overlay loader structure (Scene -> overlay map: which
   overlays are resident while each game scene runs.) */

void jus_Scene_Update(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_02070f44();
  if (DAT_020afcb4 == 0) {
    bVar2 = false;
  }
  else if (*(int *)(*(int *)(DAT_020afcb4 + 4) + 0x224) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (DAT_020afcb4 = 0, DAT_020afcc3 == '\0')) {
    (*DAT_020a0e18)();
    (*DAT_020a0e18)();
    iVar3 = FUN_0203b3e4();
    FUN_0206e468(*(undefined4 *)(iVar3 + 0x88),0x3f,0);
    iVar3 = FUN_0203b3f4();
    FUN_0206e468(*(undefined4 *)(iVar3 + 0x88),0x3f,0);
    iVar3 = FUN_0203b3e4();
    FUN_0206e494(*(undefined4 *)(iVar3 + 0x88),0xfffffff0);
    iVar3 = FUN_0203b3f4();
    FUN_0206e494(*(undefined4 *)(iVar3 + 0x88),0xfffffff0);
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    iVar3 = FUN_0203b3e4();
    FUN_0206e4a8(*(undefined4 *)(iVar3 + 0x88),&local_c,&local_10,&local_14);
    local_1c = 0;
    local_18 = 0;
    iVar3 = FUN_0203b3f4();
    puVar4 = &local_1c;
    FUN_0206e4a8(*(undefined4 *)(iVar3 + 0x88),&local_18);
    FUN_0206e064();
    (*DAT_020a0e18)();
    (*DAT_020a0e18)();
    iVar3 = FUN_02086bd4();
    if ((iVar3 == 0) || (iVar3 = FUN_02086c4c(), iVar3 == 0)) {
      bVar2 = false;
    }
    else {
      DAT_020afe3c = 0x2a;
      bVar2 = true;
    }
    if (bVar2) {
      return;
    }
    if (DAT_020afe3c == 0xe) {
      puVar4 = (undefined4 *)(int)cRam020afd3d;
    }
    if (DAT_020afe3c == 0xe && puVar4 == (undefined4 *)&DataAbort) {
      DAT_020afcbc = 0;
      DAT_020afcc3 = '\x01';
    }
    (**(code **)(DAT_020afe3c * 0xc + 0x209e330))(&DAT_020afccc + DAT_020afe3c * 8,DAT_020afcb8);
  }
  if (DAT_020afcb4 == 0) {
    iVar3 = FUN_0206da48(0);
    if (iVar3 != 0) {
      FUN_02070fd4();
      iVar3 = func_0x0219ad18();
      if (iVar3 != 0) {
        FUN_02070fe8();
      }
    }
    iVar3 = FUN_02070f88();
    cVar1 = '\0';
    if (iVar3 != 0) {
      cVar1 = DAT_020afcc3;
    }
    if (iVar3 != 0 && cVar1 != '\0') {
      jus_Overlay_SelectScene(1);
      DAT_020afcb4 = AutoSaveLoad::AutoSave_Add(DAT_020afcbc);
    }
    else {
      DAT_020afcc3 = '\0';
      iVar3 = DAT_020afe3c * 0xc;
      if (*(int *)(&DAT_0209e334 + iVar3) != -1) {
        jus_Overlay_SelectScene();
      }
      jus_Overlay_SelectSlot2(0);
      DAT_020afcb4 = (**(code **)(&DAT_0209e32c + iVar3))();
      DAT_020afcc2 = 0;
    }
  }
  return;
}

