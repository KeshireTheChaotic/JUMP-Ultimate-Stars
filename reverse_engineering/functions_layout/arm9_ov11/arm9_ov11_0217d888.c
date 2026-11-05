
void FUN_0217d888(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 == (int *)0x0) {
    return;
  }
  *(undefined4 *)(**(int **)(piVar1[1] + 0x10) + 0xe4) = 0;
  FUN_0201b244();
  (**(code **)(*piVar1 + 8))();
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

