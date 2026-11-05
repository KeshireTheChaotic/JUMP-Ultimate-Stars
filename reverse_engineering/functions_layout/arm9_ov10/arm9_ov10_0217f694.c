
void FUN_0217f694(int *param_1,int param_2)

{
  *(int *)(param_2 + 0x20) = *param_1;
  *param_1 = param_2;
  if (param_1[1] == 0) {
    param_1[1] = param_2;
  }
  param_1[2] = param_1[2] + 1;
  return;
}

