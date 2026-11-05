
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_037fbc84(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* JUS-TAG hw={"IRQ":2} io=["04000208","04000210"] */
  uVar1 = _DAT_04000210;
  _DAT_04000210 = param_1;
  return uVar1;
}

