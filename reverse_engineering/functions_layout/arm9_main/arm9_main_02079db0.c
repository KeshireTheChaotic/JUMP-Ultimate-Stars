
void FUN_02079db0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (param_2 == 0) {
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    FUN_020282f4(*(undefined4 *)(param_1 + 4));
    return;
  }
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  FUN_02028330(*(undefined4 *)(param_1 + 4));
  return;
}

