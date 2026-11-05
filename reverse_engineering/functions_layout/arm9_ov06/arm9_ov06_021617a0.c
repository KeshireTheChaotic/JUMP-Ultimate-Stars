
void FUN_021617a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + param_2 * 8);
  if (*(int *)(param_1 + 0x14) != iVar1) {
    *(int *)(param_1 + 0x14) = iVar1;
    FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
  }
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + param_3 * 8);
  if (*(int *)(param_1 + 0x1c) == iVar1) {
    return;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
  return;
}

