
undefined2 * FUN_027e20a0(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  ushort uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  uVar1 = param_1[7];
  param_1[uVar1 + 8] = param_1[6];
  param_1[uVar1 + 9] = param_3;
  FUN_027e0654();
  return param_1 + uVar1 + 8;
}

