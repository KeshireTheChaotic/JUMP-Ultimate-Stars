
void FUN_0215fda0(int *param_1)

{
  int iVar1;
  
  FUN_02028330(*(undefined4 *)(*param_1 + 4));
  iVar1 = 2;
  do {
    FUN_02028330(*(undefined4 *)(param_1[iVar1 + 1] + 4));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  (**(code **)(**(int **)(param_1[1] + 4) + 0xd8))(*(int **)(param_1[1] + 4),1);
  (**(code **)(**(int **)(param_1[2] + 4) + 0xd8))(*(int **)(param_1[2] + 4),1);
  return;
}

