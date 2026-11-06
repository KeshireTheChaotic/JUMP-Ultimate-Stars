
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f1b30(void)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["048080b4"] */
  iVar1 = _DAT_0380fff4;
  uVar2 = OS_DisableIrqMask(0x1000000);
  if ((*(ushort *)(_DAT_0380fff4 + 0x33a) & 0xff) >> 7 == 0) {
    FUN_027ea0e4(0);
  }
  _DAT_048080b4 = 0xc0;
  *(undefined2 *)(iVar1 + 0x47c) = 0;
  *(undefined2 *)(iVar1 + 0x490) = 0;
  OS_EnableIrqMask(uVar2);
  return;
}

