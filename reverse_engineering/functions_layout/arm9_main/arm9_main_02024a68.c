
void FUN_02024a68(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xec))();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_02011b38();
  }
  piVar2 = *(int **)(iVar1 + 4);
  FUN_02024770(piVar2,*(undefined4 *)(param_1 + 4));
  if ((*(byte *)((int)piVar2 + 0x29) & 0x7f) >> 6 != 0) {
    return;
  }
  iVar1 = (**(code **)(*piVar2 + 0xac))();
  if (iVar1 == 1) {
    FUN_02028868(piVar2);
    return;
  }
  return;
}

