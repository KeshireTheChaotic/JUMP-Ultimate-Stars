
undefined2 * FUN_027e2bdc(undefined2 *param_1,undefined2 param_2,undefined4 param_3)

{
  ushort uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 3;
  param_1[7] = 0x22;
  param_1[8] = param_2;
  param_1[9] = 0;
  MIi_CpuCopy16(param_3,param_1 + 10,0x44);
  uVar1 = param_1[7];
  param_1[uVar1 + 8] = param_1[6];
  param_1[uVar1 + 9] = 5;
  FUN_027e0654(param_1);
  return param_1 + uVar1 + 8;
}

