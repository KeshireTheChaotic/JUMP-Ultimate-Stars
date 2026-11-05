
void FUN_02028488(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x208);
  iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x200);
  if (iVar1 < 0x40) {
    *(int *)(param_1 + 0x200 + iVar2 * 4) = *(int *)(param_1 + 0x200 + iVar2 * 4) + 1;
    *(undefined4 *)(param_1 + *(int *)(param_1 + 0x208) * 0x100 + iVar1 * 4) = param_2;
    return;
  }
  return;
}

