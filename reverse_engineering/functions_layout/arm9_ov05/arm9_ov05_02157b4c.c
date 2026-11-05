
void FUN_02157b4c(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    FUN_020282f4(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
    return;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
  return;
}

