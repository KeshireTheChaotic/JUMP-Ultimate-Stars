
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02051d14(uint param_1)

{
                    /* JUS-TAG hw={"IRQ":2} io=["04000208","04000210"] */
  _DAT_04000210 = _DAT_04000210 & ~param_1;
  return;
}

