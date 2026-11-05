
void FUN_021af908(int param_1)

{
  if (*(int **)(param_1 + 0x94) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x128))();
  return;
}

