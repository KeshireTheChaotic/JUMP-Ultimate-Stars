
undefined4 FUN_02053b24(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 <= *(int *)(param_1 + 0x1c)) {
    do {
      if ((param_3 & 1) == 0) {
        OS_RestoreInterrupts(uVar1);
        return 0;
      }
      FUN_02053290(param_1);
      iVar2 = *(int *)(param_1 + 0x14);
    } while (iVar2 <= *(int *)(param_1 + 0x1c));
  }
  FUN_0200d12c(*(int *)(param_1 + 0x18) + iVar2 + -1);
  *(undefined4 *)(param_1 + 0x18) = extraout_r1;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18) * 4) = param_2;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  FUN_02053210(param_1 + 8);
  OS_RestoreInterrupts(uVar1);
  return 1;
}

