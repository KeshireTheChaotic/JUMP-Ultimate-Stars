
void FUN_0215fef0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = OS_GetTick();
  *param_1 = uVar1 & 3;
  uVar1 = OS_GetTick();
  param_1[1] = uVar1 >> 2 & 3;
  param_1[2] = 0;
  param_1[3] = 0;
  MIi_CpuCopy32(&DAT_02168b94,param_1 + 4,0x40);
  return;
}

