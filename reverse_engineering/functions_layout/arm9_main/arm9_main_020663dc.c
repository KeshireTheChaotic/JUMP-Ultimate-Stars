
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020663dc(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"GX_3D":1} io=["040004d0"] */
  if (DAT_0209dd40 == -1) {
    MIi_CpuClear32(0,0x4000330,0x10);
    MIi_CpuClear32(0,0x4000360,0x60);
  }
  else {
    FUN_0205142c(DAT_0209dd40,0x4000330,0,0x10,0,0);
    FUN_02051688(DAT_0209dd40,0x4000360,0,0x60);
  }
  iVar1 = 0;
  do {
    _DAT_040004d0 = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  return;
}

