
void FUN_021559fc(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  (**(code **)(**(int **)(param_1[2] + 4) + 0xd8))();
  FUN_02028384(*(undefined4 *)(*param_1 + 4),FUN_02155a88);
  return;
}

