
void FUN_021c2024(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_021c1f38(param_1 + 5,param_1 + 0xb,param_1 + 1,param_1 + 0xc,param_1 + 0xd,param_3,param_4,
               param_5);
  uVar1 = FUN_021c1eb4(&local_38,param_2,param_1[5],param_1[0xb],param_1[1]);
  *param_1 = local_38;
  param_1[2] = local_34;
  param_1[3] = local_30;
  param_1[4] = local_2c;
  param_1[6] = local_28;
  param_1[7] = local_24;
  param_1[8] = local_20;
  param_1[9] = local_1c;
  param_1[10] = local_18;
  param_1[0xe] = *(undefined4 *)(param_3 + 0x10);
  param_1[0xf] = param_3;
  param_1[0x10] = param_2;
  param_1[0x11] = uVar1;
  FUN_021c1dfc(param_1,param_4,param_5);
  return;
}

