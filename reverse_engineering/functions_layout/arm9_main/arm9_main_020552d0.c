
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020552d0(undefined4 param_1)

{
  undefined2 uVar1;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":2} io=["027ffc20","027ffc40"] */
  if (_DAT_027ffc40 == 2) {
    FUN_02055684();
  }
  uVar1 = FUN_02051fa0();
  FUN_02061dc0(uVar1);
  MI_StopDma(0);
  MI_StopDma(1);
  MI_StopDma(2);
  MI_StopDma(3);
  OS_SetIrqMask(0x40000);
  OS_ResetRequestIrqMask(0xffffffff);
  _DAT_027ffc20 = param_1;
  FUN_02055350(0x10);
  FUN_01ff9254();
  return;
}

