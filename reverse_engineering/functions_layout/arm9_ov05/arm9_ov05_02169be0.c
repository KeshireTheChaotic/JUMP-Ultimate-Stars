
void FUN_02169be0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(int **)(param_1 + 4))[4];
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x194))();
  if (*(int *)(iVar2 + 100) == iVar1) {
    return;
  }
  *(int *)(iVar2 + 100) = iVar1;
  FUN_02169624(iVar2);
  return;
}

