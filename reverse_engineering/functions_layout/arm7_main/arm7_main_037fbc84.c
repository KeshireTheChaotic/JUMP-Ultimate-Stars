
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK OS_SetIrqMask [behavioral] IME saved/cleared/restored around IE = r0; returns old IE */

undefined4 OS_SetIrqMask(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* JUS-TAG hw={"IRQ":2} io=["04000208","04000210"] */
  uVar1 = _DAT_04000210;
  _DAT_04000210 = param_1;
  return uVar1;
}

