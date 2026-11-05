
void FUN_021542e0(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
  (**(code **)(*piVar1 + 0x148))(piVar1,0x10);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  FUN_02154ac4(param_1);
  return;
}

