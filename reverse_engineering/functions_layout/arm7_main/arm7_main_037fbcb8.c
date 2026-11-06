
/* JUS-SDK OSi_EnterTimerCallback [behavioral] called by OSi_CountUpTick with timer number 0, a
   handler and an argument */

void OSi_EnterTimerCallback(int param_1,undefined4 param_2,undefined4 param_3)

{
  (&DAT_03808280)[param_1 * 3] = param_2;
  (&DAT_03808288)[param_1 * 3] = param_3;
  OS_EnableIrqMask(1 << (param_1 + 3U & 0xff));
  (&DAT_03808284)[param_1 * 3] = 1;
  return;
}

