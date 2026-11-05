
undefined4 * FUN_02014210(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  FUN_02014268(param_1 + 4);
  FUN_02014268(param_1 + 7);
  FUN_02014280(param_1 + 10);
  FUN_02014280(param_1 + 0xd);
  uVar1 = FUN_0201a228((param_2 + 1) * 0x80);
  *param_1 = uVar1;
  return param_1;
}

