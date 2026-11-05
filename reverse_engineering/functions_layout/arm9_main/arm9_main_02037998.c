
void FUN_02037998(int param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))();
  }
  *(int **)(param_1 + 0x5c) = param_2;
  return;
}

