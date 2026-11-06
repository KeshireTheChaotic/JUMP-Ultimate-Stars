
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK OS_ResetRequestIrqMask [behavioral] IME saved/cleared/restored around IF = r0 (write 1 to
   clear); returns old IF */

undefined4 OS_ResetRequestIrqMask(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* JUS-TAG hw={"IRQ":2} io=["04000208","04000214"] */
  uVar1 = _DAT_04000214;
  _DAT_04000214 = param_1;
  return uVar1;
}

