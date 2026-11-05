
undefined4 FUN_037fcc6c(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int extraout_r1;
  
  uVar1 = OS_DisableInterrupts();
  while( true ) {
    if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x14)) {
      FUN_038078c0(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c));
      *(undefined4 *)(*(int *)(param_1 + 0x10) + extraout_r1 * 4) = param_2;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      FUN_037fc460(param_1 + 8);
      OS_RestoreInterrupts(uVar1);
      return 1;
    }
    if ((param_3 & 1) == 0) break;
    FUN_037fc4dc(param_1);
  }
  OS_RestoreInterrupts(uVar1);
  return 0;
}

