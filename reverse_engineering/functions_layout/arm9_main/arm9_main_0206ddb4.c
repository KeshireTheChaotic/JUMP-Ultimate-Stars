
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0206ddb4(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fffa8"] */
  bVar1 = false;
  DAT_020afca8 = 0xffffffff;
  DAT_020afcac = 0xffffffff;
  jus_Overlay_SelectSlot2(0);
  DAT_020afca4 = 0xffffffff;
  jus_Overlay_SelectEngine(0);
  DAT_020afc9c = '\x01';
  FUN_0206df9c();
  FUN_0206e134();
  FUN_02062da8(FUN_0206dcc8);
  FUN_0208c2f8();
  while (iVar3 = (**(code **)(*DAT_020a0f64 + 0x18))(), iVar3 == 0) {
    iVar3 = FUN_02086bd4();
    if ((iVar3 == 0) && (DAT_020afc9c != '\0')) {
      piVar2 = (int *)FUN_02028920(0);
      if (*(int *)(*piVar2 + *(int *)(*piVar2 + 0x70) * 4 + 0x18) == 0xc300) {
        piVar2 = (int *)FUN_02028920(0);
        iVar3 = *piVar2;
        if ((*(uint *)(iVar3 + *(int *)(iVar3 + 0x70) * 4 + 0x18) &
             ~*(uint *)(iVar3 + *(int *)(iVar3 + 0x74) * 4 + 0x18) & 0xc300) != 0) {
          FUN_0206dcec(0);
        }
      }
    }
    if (((int)(_DAT_027fffa8 & 0x8000) >> 0xf == 1) && (DAT_020afc9c != '\0')) {
      iVar3 = FUN_02086c14();
      if (iVar3 == 0) {
        if (!bVar1) {
          FUN_0207336c(0);
          FUN_020733b8(0);
          FUN_02042b58(DAT_020a0f64,0);
          bVar1 = true;
        }
      }
      else {
        if (bVar1) {
          FUN_02071e90();
          FUN_02042b58(DAT_020a0f64,1);
          bVar1 = false;
        }
        if (!bVar1) {
          FUN_0208c2fc();
          iVar3 = FUN_0208c30c();
          if (iVar3 == 0) {
            FUN_020616a8(0xc,0,0);
          }
        }
      }
    }
    if ((bVar1) && ((int)(_DAT_027fffa8 & 0x8000) >> 0xf == 0)) {
      FUN_02071e90();
      FUN_02042b58(DAT_020a0f64,1);
      bVar1 = false;
    }
    (*DAT_020a0e18)();
  }
  return;
}

