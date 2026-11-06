
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* JUS-SDK MI_DmaCopy32Async [behavioral] control 0x84000000 | size/4 (32-bit copy), with IRQ
   0xC4000000 when a callback is given */

void MI_DmaCopy32Async(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                      code *param_5,undefined4 param_6)

{
  MIi_CheckDma9(param_1,param_2,param_4,0);
  if (param_4 != 0) {
    MI_WaitDma(param_1);
    if (param_5 == (code *)0x0) {
      MIi_DmaSetParams(param_1,param_2,param_3,param_4 >> 2 | 0x84000000);
      return;
    }
    OSi_EnterDmaCallback(param_1,param_5,param_6);
    MIi_DmaSetParams(param_1,param_2,param_3,param_4 >> 2 | 0xc4000000);
    return;
  }
  if (param_5 == (code *)0x0) {
    return;
  }
  (*param_5)(param_6);
  return;
}

