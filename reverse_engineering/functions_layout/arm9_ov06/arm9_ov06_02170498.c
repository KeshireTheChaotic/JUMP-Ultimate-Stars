
void FUN_02170498(int *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(**(int **)(*param_1 + 4) + 0xc))();
  }
  if (param_1[1] != 0) {
    (**(code **)(**(int **)(param_1[1] + 4) + 0xc))();
  }
  if (param_1[2] != 0) {
    (**(code **)(**(int **)(param_1[2] + 4) + 0xc))();
  }
  FUN_0201b244(param_1);
  return;
}

