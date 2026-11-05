
void FUN_02152518(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(iVar3 + 0x3c);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  }
  iVar1 = *(int *)(iVar3 + 0x28);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = *(int **)(iVar1 + 4);
  (**(code **)(*piVar2 + 0x148))(piVar2,0x10);
  return;
}

