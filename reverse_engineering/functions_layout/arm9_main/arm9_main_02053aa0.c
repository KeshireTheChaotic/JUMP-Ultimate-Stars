
undefined4 FUN_02053aa0(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  if (*(int *)(param_1 + 0x1c) == 0) {
    do {
      if ((param_3 & 1) == 0) {
        OS_RestoreInterrupts(uVar1);
        return 0;
      }
      FUN_02053290(param_1 + 8);
    } while (*(int *)(param_1 + 0x1c) == 0);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18) * 4);
  }
  OS_RestoreInterrupts(uVar1);
  return 1;
}

