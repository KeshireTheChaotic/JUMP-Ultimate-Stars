
undefined2 *
FUN_027e2a54(undefined2 *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  ushort uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 6;
  param_1[7] = 5;
  MIi_CpuCopy16(param_2,param_1 + 8);
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  uVar1 = param_1[7];
  param_1[uVar1 + 8] = param_1[6];
  param_1[uVar1 + 9] = 3;
  FUN_027e0654(param_1);
  return param_1 + uVar1 + 8;
}

