
void FUN_021566a4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(*(int *)(*(int *)(iVar1 + 8) + 4) + 0x224) == 0) {
    return;
  }
  FUN_0214d348(*(undefined4 *)(iVar1 + 4),2);
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

