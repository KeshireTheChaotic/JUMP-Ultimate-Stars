
void FUN_0215ed2c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (param_1[iVar2 + 2] != 0) {
      piVar1 = *(int **)(param_1[iVar2 + 2] + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    }
    if (param_1[iVar2 + 5] != 0) {
      piVar1 = *(int **)(param_1[iVar2 + 5] + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  (**(code **)(**(int **)(param_1[8] + 4) + 0xd8))(*(int **)(param_1[8] + 4),0);
  FUN_020282f4(*(undefined4 *)(*param_1 + 4));
  return;
}

