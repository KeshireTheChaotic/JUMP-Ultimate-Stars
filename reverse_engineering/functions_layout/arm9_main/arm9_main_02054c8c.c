
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK OS_InitTick [behavioral] once-only: clears the counter, starts timer 0 (0xC1), enables IE
   bit 3 (timer 0) */

void OS_InitTick(void)

{
                    /* JUS-TAG hw={"TIMER":2} io=["04000100","04000102"] */
  if (DAT_020aae88 == 0) {
    DAT_020aae88 = 1;
    FUN_02054b18(0);
    DAT_020aae90 = 0;
    DAT_020aae94 = 0;
    _DAT_04000100 = 0;
    _DAT_04000102 = 0xc1;
    OS_SetIrqFunction(8,OSi_CountUpTick);
    OS_EnableIrqMask(8);
    DAT_020aae8c = 0;
    return;
  }
  return;
}

