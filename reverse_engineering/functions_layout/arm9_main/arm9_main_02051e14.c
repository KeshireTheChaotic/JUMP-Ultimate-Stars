
/* JUS-SDK OSi_EnterDmaCallback [behavioral] stores callback/arg per DMA channel and enables IE bit
   8 + dmaNo */

void OSi_EnterDmaCallback(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  (&DAT_020aaaf8)[param_1 * 3] = param_2;
  (&DAT_020aab00)[param_1 * 3] = param_3;
  uVar1 = OS_EnableIrqMask(1 << (param_1 + 8U & 0xff));
  (&DAT_020aaafc)[param_1 * 3] = uVar1 & 1 << (param_1 + 8U & 0xff);
  return;
}

