
/* JUS-SDK SND_SetOutputSelector [behavioral] SOUNDCNT_H = left | right << 2 | ch1 << 4 | ch3 << 5,
   keeping the enable bit */

void SND_SetOutputSelector(byte param_1,char param_2,char param_3,char param_4)

{
                    /* JUS-TAG hw={"SOUND":1} io=["04000501"] */
  DAT_04000501 = param_1 | ((DAT_04000501 & 0x80) != 0) << 7 | param_4 << 5 | param_3 << 4 |
                           param_2 << 2;
  return;
}

