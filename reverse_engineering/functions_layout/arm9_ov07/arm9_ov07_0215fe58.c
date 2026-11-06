
undefined4 FUN_0215fe58(int *param_1)

{
  uint uVar1;
  
  *param_1 = *param_1 + 1;
  if (3 < *param_1) {
    *param_1 = 0;
    param_1[1] = param_1[1] + 1;
    if (3 < param_1[1]) {
      param_1[1] = 0;
    }
    if (param_1[1] == param_1[2]) {
      uVar1 = OS_GetTick();
      param_1[2] = uVar1 & 3;
      param_1[1] = param_1[2];
    }
  }
  if ((param_1[param_1[1] * 4 + *param_1 + 4] == 0) || (param_1[3] != 0)) {
    return 0;
  }
  return 1;
}

