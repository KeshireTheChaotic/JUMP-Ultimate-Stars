
void FUN_02161800(int param_1,int param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    return;
  }
  if (param_2 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    FUN_020282f4(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
    return;
  }
  FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  return;
}

