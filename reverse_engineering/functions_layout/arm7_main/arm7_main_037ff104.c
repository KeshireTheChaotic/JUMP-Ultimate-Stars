
/* JUS-SDK SND_StopChannel [behavioral] SOUNDxCNT: clear the start bit (31), set hold (15) when
   flags & 1 */

void SND_StopChannel(int param_1,uint param_2)

{
  uint uVar1;
  
                    /* JUS-TAG hw={"SOUND":1} io=["04000400"] */
  uVar1 = *(uint *)(param_1 * 0x10 + 0x4000400) & 0x7fffffff;
  if ((param_2 & 1) != 0) {
    uVar1 = uVar1 | 0x8000;
  }
  *(uint *)(param_1 * 0x10 + 0x4000400) = uVar1;
  return;
}

