
void FUN_021512bc(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 local_8 [2];
  
  local_8[0] = *param_2;
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar1 + 0x10))(piVar1,local_8);
  return;
}

