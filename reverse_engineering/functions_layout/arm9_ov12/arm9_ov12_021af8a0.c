
void FUN_021af8a0(int param_1)

{
  if (*(int **)(param_1 + 0x90) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x90) + 0x128))();
  return;
}

