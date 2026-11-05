
undefined2 * FUN_027e253c(undefined2 *param_1,undefined4 param_2)

{
  ushort uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x20d;
  param_1[7] = 0x10;
  MIi_CpuCopy16(param_2,param_1 + 8,0x20);
  uVar1 = param_1[7];
  param_1[uVar1 + 8] = param_1[6];
  param_1[uVar1 + 9] = 1;
  FUN_027e0654(param_1);
  return param_1 + uVar1 + 8;
}

