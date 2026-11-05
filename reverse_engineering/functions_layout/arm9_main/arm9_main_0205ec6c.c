
uint FUN_0205ec6c(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar3 = ~(param_3 - 1U) & (param_3 - 1U) + uVar1;
  uVar2 = param_2 + uVar3;
  if (param_1[1] < uVar2) {
    return 0;
  }
  if ((param_1[-1] & 1) != 0) {
    MIi_CpuClear32(0,uVar1,uVar2 - uVar1);
  }
  *param_1 = uVar2;
  return uVar3;
}

