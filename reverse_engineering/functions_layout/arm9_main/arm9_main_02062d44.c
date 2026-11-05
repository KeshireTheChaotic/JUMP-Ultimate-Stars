
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02062d44(void)

{
  bool bVar1;
  int iVar2;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fffa8"] */
  bVar1 = true;
  if ((int)(_DAT_027fffa8 & 0x8000) >> 0xf != 0) {
    iVar2 = FUN_020618f0();
    while (iVar2 == 4) {
      FUN_0205529c(0xa3a47);
      iVar2 = FUN_020618f0();
    }
    if (iVar2 == 0) {
      bVar1 = false;
    }
  }
  if (bVar1) {
    FUN_02062cc4(1,1);
  }
  FUN_02055684();
  return;
}

