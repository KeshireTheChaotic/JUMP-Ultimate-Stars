
void FUN_020222cc(int param_1)

{
  int iVar1;
  
  FUN_02027a1c();
  if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    while (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x44) = 0;
      iVar1 = *(int *)(iVar1 + 0x4c);
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x48);
    if (iVar1 == param_1) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        *(undefined4 *)(*(int *)(iVar1 + 0x44) + 0x48) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 0x44) + 0x48) = *(undefined4 *)(iVar1 + 0x4c);
      }
    }
    else {
      while (*(int *)(iVar1 + 0x4c) != param_1) {
        iVar1 = *(int *)(iVar1 + 0x4c);
      }
      *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    }
    (**(code **)(**(int **)(param_1 + 0x50) + 0x58))();
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

