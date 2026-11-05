
void FUN_02037b98(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1[1] == 0) {
    param_1[1] = param_2;
    *param_1 = param_2;
    param_2[1] = 0;
    *param_2 = 0;
    return;
  }
  param_2[1] = param_1[1];
  *param_2 = 0;
  *(undefined4 **)param_1[1] = param_2;
  param_1[1] = param_2;
  return;
}

