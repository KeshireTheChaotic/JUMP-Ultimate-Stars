
undefined4 FUN_037fcb54(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  while( true ) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18) * 4);
      }
      OS_RestoreInterrupts(uVar1);
      return 1;
    }
    if ((param_3 & 1) == 0) break;
    FUN_037fc4dc(param_1 + 8);
  }
  OS_RestoreInterrupts(uVar1);
  return 0;
}

