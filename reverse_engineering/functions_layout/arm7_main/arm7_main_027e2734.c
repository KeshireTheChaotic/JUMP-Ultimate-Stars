
undefined2 *
FUN_027e2734(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
            undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
            undefined2 param_9,undefined4 param_10)

{
  ushort uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x102;
  param_1[7] = 10;
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[10] = param_4;
  param_1[0xb] = param_5;
  param_1[0xc] = param_6;
  param_1[0xd] = param_7;
  param_1[0xe] = param_8;
  param_1[0xf] = param_9;
  *(undefined4 *)(param_1 + 0x10) = param_10;
  uVar1 = param_1[7];
  param_1[uVar1 + 8] = param_1[6];
  param_1[uVar1 + 9] = 1;
  FUN_027e0654();
  return param_1 + uVar1 + 8;
}

