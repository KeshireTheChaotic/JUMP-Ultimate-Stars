
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_037fbbdc(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* JUS-TAG hw={"IRQ":2} io=["04000208","04000214"] */
  uVar1 = _DAT_04000214;
  _DAT_04000214 = param_1;
  return uVar1;
}

