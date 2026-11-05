
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f631c(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  
                    /* JUS-TAG hw={"SPI":2} io=["040001c0","040001c2"] */
  if (param_2 != 0) {
    if (param_1 >> 8 < (param_1 + param_2) - 1 >> 8) {
      param_2 = 0x100 - (param_1 & 0xff) & 0xffff;
    }
    do {
    } while ((_DAT_040001c0 & 0x80) != 0);
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    for (iVar1 = 0; iVar1 < (int)(param_2 - 1); iVar1 = iVar1 + 1) {
    }
    _DAT_040001c0 = 0x8100;
    _DAT_040001c2 = (ushort)*(byte *)(param_3 + iVar1);
  }
  return;
}

