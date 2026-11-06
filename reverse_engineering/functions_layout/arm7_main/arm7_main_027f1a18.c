
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f1a18(void)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["048080b4"] */
  iVar1 = _DAT_0380fff4;
  psVar3 = (short *)(_DAT_0380fff4 + 0x42c);
  uVar2 = OS_DisableIrqMask(0x1000000);
  if (*(short *)(_DAT_0380fff4 + 0x350) == 1) {
    _DAT_048080b4 = 9;
    if (*(short *)(iVar1 + 0x454) != 0) {
      FUN_027f19a0(2);
    }
    FUN_027f15cc(2,1);
  }
  else {
    _DAT_048080b4 = 1;
  }
  if (*psVar3 != 0) {
    FUN_027f19a0(0);
  }
  FUN_027f15cc(0,1);
  OS_EnableIrqMask(uVar2);
  return;
}

