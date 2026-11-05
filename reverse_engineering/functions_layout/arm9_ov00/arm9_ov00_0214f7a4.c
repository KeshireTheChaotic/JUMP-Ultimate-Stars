
void FUN_0214f7a4(int *param_1)

{
  if ((char)param_1[7] == '\0') {
    if (*param_1 == 0) {
      return;
    }
    FUN_0214f768(*param_1,0x19);
    return;
  }
  if (param_1[3] != 0) {
    (**(code **)(**(int **)(*(int *)(param_1[3] + 4) + 0x68) + 0x6c))();
  }
  if (param_1[4] != 0) {
    (**(code **)(**(int **)(*(int *)(param_1[4] + 4) + 0x68) + 0x6c))();
  }
  if (param_1[5] == 0) {
    return;
  }
  (**(code **)(**(int **)(*(int *)(param_1[5] + 4) + 0x68) + 0x6c))();
  return;
}

