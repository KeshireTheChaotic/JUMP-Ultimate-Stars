
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f1ad0(void)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["048080b4"] */
  iVar1 = _DAT_0380fff4;
  uVar2 = OS_DisableIrqMask(0x1000000);
  _DAT_048080b4 = 2;
  if (*(short *)(iVar1 + 0x468) != 0) {
    FUN_037fb040();
  }
  OS_EnableIrqMask(uVar2);
  return;
}

