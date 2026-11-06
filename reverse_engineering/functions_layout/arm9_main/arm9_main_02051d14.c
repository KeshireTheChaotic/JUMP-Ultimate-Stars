
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK OS_DisableIrqMask [behavioral] IME saved/cleared/restored around IE &= ~r0; returns old
   IE */

void OS_DisableIrqMask(uint param_1)

{
                    /* JUS-TAG hw={"IRQ":2} io=["04000208","04000210"] */
  _DAT_04000210 = _DAT_04000210 & ~param_1;
  return;
}

