
undefined2 * FUN_027e2260(undefined2 *param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  short sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x245;
  sVar2 = FUN_038078c0(param_2 + 1,2);
  param_1[7] = sVar2 + 1;
  param_1[8] = (short)param_2;
  MIi_CpuCopy16(param_3,param_1 + 9,param_2);
  uVar1 = param_1[7];
  param_1[uVar1 + 8] = param_1[6];
  param_1[uVar1 + 9] = 1;
  FUN_027e0654(param_1);
  return param_1 + uVar1 + 8;
}

