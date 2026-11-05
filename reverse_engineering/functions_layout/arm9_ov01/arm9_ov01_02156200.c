
void FUN_02156200(int param_1)

{
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_02078f88();
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_0207698c();
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_020763e0();
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  return;
}

