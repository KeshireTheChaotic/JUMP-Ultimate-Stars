
void FUN_02051688(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
                    /* JUS-TAG hw={"DMA":1} io=["040000e0"] */
  if (param_4 == 0) {
    return;
  }
  do {
  } while ((*(uint *)(&DAT_040000b0 + (param_1 * 3 + 2) * 4) & 0x80000000) != 0);
  uVar1 = OS_DisableInterrupts();
  *(undefined4 *)(param_1 * 4 + 0x40000e0) = param_3;
  FUN_01ff8bc4(param_1,param_1 * 4 + 0x40000e0,param_2,param_4 >> 2 | 0x85000000);
  OS_RestoreInterrupts(uVar1);
  do {
  } while ((*(uint *)(&DAT_040000b0 + (param_1 * 3 + 2) * 4) & 0x80000000) != 0);
  return;
}

