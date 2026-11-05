
void FUN_0215cb48(int param_1)

{
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 8))();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xc))();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 8))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_0214f4c0(param_1 + 0x28);
  return;
}

