
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_037fbc10(uint param_1)

{
  uint uVar1;
  
                    /* JUS-TAG hw={"IRQ":2} io=["04000208","04000210"] */
  uVar1 = _DAT_04000210;
  _DAT_04000210 = _DAT_04000210 & ~param_1;
  return uVar1;
}

