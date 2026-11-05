
void FUN_021567e8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x10) + 0x5c);
  *(undefined2 *)(iVar1 + 0x24) = 0;
  *(undefined2 *)(iVar1 + 0x26) = 0;
  *(short *)(param_1 + 0x9c) = -*(short *)(param_1 + 0x9c);
  iVar1 = FUN_02155c80(*(undefined4 *)(param_1 + 0x7c));
  if (iVar1 == 0) {
    FUN_02083950(*(undefined4 *)(param_1 + 0x7c),1);
    return;
  }
  FUN_02083950(*(undefined4 *)(param_1 + 0x7c),0);
  return;
}

