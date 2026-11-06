
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fa92c(void)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808210","04808244"] */
  uVar1 = OS_DisableIrqMask(0x1000000);
  for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
  }
  _DAT_04808244 = 0;
  FUN_037fa418();
  OS_EnableIrqMask(uVar1);
  return;
}

