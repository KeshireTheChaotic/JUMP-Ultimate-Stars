
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK OS_InitTick [behavioral] once-only: clears the counter, starts timer 0 (0xC1), enables IE
   bit 3 (timer 0) */

void OS_InitTick(void)

{
                    /* JUS-TAG hw={"TIMER":2} io=["04000100","04000102"] */
  if (DAT_0380845c == 0) {
    DAT_0380845c = 1;
    FUN_037fd690(0);
    DAT_03808464 = 0;
    DAT_03808468 = 0;
    _DAT_04000100 = 0;
    _DAT_04000102 = 0xc1;
    OS_SetIrqFunction(8,OSi_CountUpTick);
    OS_EnableIrqMask(8);
    DAT_03808460 = 0;
  }
  return;
}

