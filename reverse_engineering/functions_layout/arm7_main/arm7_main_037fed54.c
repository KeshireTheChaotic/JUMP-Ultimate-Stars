
/* JUS-SDK SND_SetMasterVolume [behavioral] SOUNDCNT_L (0x04000500) = r0 (master volume) */

void SND_SetMasterVolume(undefined1 param_1)

{
                    /* JUS-TAG hw={"SOUND":1} io=["04000500"] */
  DAT_04000500 = param_1;
  return;
}

