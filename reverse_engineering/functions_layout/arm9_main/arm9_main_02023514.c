
void FUN_02023514(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x54)) {
    return;
  }
  if (*(int **)(param_1 + 0x60) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x60) + 0xa8))();
  (**(code **)(**(int **)(param_1 + 0x60) + 0xb0))(*(int **)(param_1 + 0x60),param_2);
  return;
}

