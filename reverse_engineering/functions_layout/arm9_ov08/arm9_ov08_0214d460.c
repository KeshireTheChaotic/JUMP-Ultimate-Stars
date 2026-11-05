
void FUN_0214d460(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0214ce14(1);
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_0214ce14(param_2);
  param_1[3] = uVar1;
  param_1[4] = 0;
  uVar1 = FUN_0214ce14(param_3);
  param_1[5] = uVar1;
  uVar1 = FUN_0214ce14(param_4);
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 7) = param_5;
  *(undefined1 *)((int)param_1 + 0xf) = param_6;
  FUN_0214cf10(param_1 + 8,param_7,8);
  return;
}

