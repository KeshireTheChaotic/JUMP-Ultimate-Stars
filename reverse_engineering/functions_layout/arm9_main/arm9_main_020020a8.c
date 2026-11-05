
int FUN_020020a8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1[9] - param_1[7] != 0) {
    param_1[10] = param_1[9] - param_1[7];
    if (-1 < (int)(param_1[1] << 0x13)) {
      FUN_0200208c(param_1[7],param_1 + 10);
    }
    iVar1 = (*(code *)param_1[0x10])(*param_1,param_1[7],param_1 + 10,param_1[0x12]);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1[10];
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    param_1[6] = param_1[6] + param_1[10];
  }
  FUN_02002090(param_1);
  return 0;
}

