
/* JUS-SDK SND_Disable [behavioral] SOUNDCNT_H (0x04000501) &= ~0x80 (master enable off) */

void SND_Disable(void)

{
                    /* JUS-TAG hw={"SOUND":1} io=["04000501"] */
  DAT_04000501 = DAT_04000501 & 0x7f;
  return;
}

