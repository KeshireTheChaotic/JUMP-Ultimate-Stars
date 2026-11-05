
uint FUN_0205ec00(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = ~(param_3 - 1U) & param_1[1] - param_2;
  if (uVar1 < *param_1) {
    return 0;
  }
  if ((param_1[-1] & 1) != 0) {
    MIi_CpuClear32(0,uVar1,param_1[1] - uVar1);
  }
  param_1[1] = uVar1;
  return uVar1;
}

