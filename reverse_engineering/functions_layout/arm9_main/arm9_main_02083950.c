
void FUN_02083950(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 100) + 0x5c))();
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0207aa20(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_0207506c(*(int *)(param_1 + 0x20),param_2);
  return;
}

