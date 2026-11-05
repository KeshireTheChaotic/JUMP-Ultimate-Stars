
void FUN_02027d84(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
  }
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}

