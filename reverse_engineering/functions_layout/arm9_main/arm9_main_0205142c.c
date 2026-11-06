
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* JUS-SDK MI_DmaFillAsync [behavioral] source = DMAxFILL, control 0x85000000 | size/4 (32-bit
   fill), with IRQ when a callback is given */

void MI_DmaFillAsync(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,code *param_5,
                    undefined4 param_6)

{
  undefined4 uVar1;
  
                    /* JUS-TAG hw={"DMA":1} io=["040000e0"] */
  if (param_4 != 0) {
    MI_WaitDma();
    if (param_5 == (code *)0x0) {
      uVar1 = OS_DisableInterrupts();
      *(undefined4 *)(param_1 * 4 + 0x40000e0) = param_3;
      MIi_DmaSetParams_noInt(param_1,param_1 * 4 + 0x40000e0,param_2,param_4 >> 2 | 0x85000000);
      OS_RestoreInterrupts(uVar1);
      return;
    }
    OSi_EnterDmaCallback(param_1,param_5,param_6);
    uVar1 = OS_DisableInterrupts();
    *(undefined4 *)(param_1 * 4 + 0x40000e0) = param_3;
    MIi_DmaSetParams_noInt(param_1,param_1 * 4 + 0x40000e0,param_2,param_4 >> 2 | 0xc5000000);
    OS_RestoreInterrupts(uVar1);
    return;
  }
  if (param_5 == (code *)0x0) {
    return;
  }
  (*param_5)(param_6);
  return;
}

