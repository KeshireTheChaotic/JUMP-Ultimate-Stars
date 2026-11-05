
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0205142c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,code *param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  
                    /* JUS-TAG hw={"DMA":1} io=["040000e0"] */
  if (param_4 != 0) {
    FUN_02051314();
    if (param_5 == (code *)0x0) {
      uVar1 = OS_DisableInterrupts();
      *(undefined4 *)(param_1 * 4 + 0x40000e0) = param_3;
      FUN_01ff8c24(param_1,param_1 * 4 + 0x40000e0,param_2,param_4 >> 2 | 0x85000000);
      OS_RestoreInterrupts(uVar1);
      return;
    }
    FUN_02051e14(param_1,param_5,param_6);
    uVar1 = OS_DisableInterrupts();
    *(undefined4 *)(param_1 * 4 + 0x40000e0) = param_3;
    FUN_01ff8c24(param_1,param_1 * 4 + 0x40000e0,param_2,param_4 >> 2 | 0xc5000000);
    OS_RestoreInterrupts(uVar1);
    return;
  }
  if (param_5 == (code *)0x0) {
    return;
  }
  (*param_5)(param_6);
  return;
}

