
void FUN_020239b0(int param_1,int *param_2)

{
  if (param_2 == *(int **)(param_1 + 0x68)) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x68) + 0xc))();
  *(int **)(param_1 + 0x68) = param_2;
  return;
}

