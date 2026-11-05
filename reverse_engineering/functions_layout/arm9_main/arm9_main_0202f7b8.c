
void FUN_0202f7b8(int param_1,int *param_2)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
  }
  *(int **)(param_1 + 0x14) = param_2;
  if (param_2 == (int *)0x0) {
    return;
  }
  (**(code **)(*param_2 + 8))();
  return;
}

