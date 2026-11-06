
/* JUS-SDK SND_SetChannelTimer [behavioral] SOUNDxTMR (+8) = 0x10000 - timer */

void SND_SetChannelTimer(int param_1,short param_2)

{
                    /* JUS-TAG hw={"SOUND":1} io=["04000408"] */
  *(short *)(param_1 * 0x10 + 0x4000408) = -param_2;
  return;
}

