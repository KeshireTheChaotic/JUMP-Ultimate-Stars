
void FUN_02039230(int param_1)

{
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 4) + 8))();
  return;
}

