
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK OSi_CountUpTick [behavioral] timer-0 IRQ handler: 64-bit counter += 1, restarts timer 0
   (TM0CNT_H = 0xC1) when asked */

void OSi_CountUpTick(void)

{
  bool bVar1;
  
                    /* JUS-TAG hw={"TIMER":2} io=["04000100","04000102"] */
  bVar1 = 0xfffffffe < DAT_020aae90;
  DAT_020aae90 = DAT_020aae90 + 1;
  DAT_020aae94 = DAT_020aae94 + (uint)bVar1;
  if (DAT_020aae8c != 0) {
    _DAT_04000100 = 0;
    _DAT_04000102 = 0xc1;
    DAT_020aae8c = 0;
  }
  OSi_EnterTimerCallback(0,OSi_CountUpTick,0);
  return;
}

