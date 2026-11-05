
void FUN_0214f834(int *param_1)

{
  if ((char)param_1[7] == '\0') {
    if (*param_1 == 0) {
      return;
    }
    (**(code **)(**(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68) + 0x70))();
    FUN_0206c650(*(undefined4 *)(*param_1 + 0xc));
    return;
  }
  if (param_1[3] != 0) {
    (**(code **)(**(int **)(*(int *)(param_1[3] + 4) + 0x68) + 0x70))();
  }
  if (param_1[4] != 0) {
    (**(code **)(**(int **)(*(int *)(param_1[4] + 4) + 0x68) + 0x70))();
  }
  if (param_1[5] == 0) {
    return;
  }
  (**(code **)(**(int **)(*(int *)(param_1[5] + 4) + 0x68) + 0x70))();
  return;
}

