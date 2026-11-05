
void FUN_0217cfc0(int param_1)

{
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x34) + 4) + 0x10) + 4) + 0xe4) = 0;
  FUN_0201b244();
  (**(code **)(**(int **)(param_1 + 0x34) + 8))();
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

