
void FUN_0217f4cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_4 != 0) || (DAT_020a05c0 == 1)) {
    FUN_02001ecc();
    *param_1 = param_3;
    param_1[1] = param_2;
    param_1[0x10] = 0;
    param_1[0x11] = param_5;
    param_1[0x12] = param_6;
    param_1[10] = 0;
    uVar1 = FUN_02001b94(2,2);
    param_1[8] = uVar1;
    FUN_0217f62c(param_1 + 5);
    FUN_0217f62c(param_1 + 2);
  }
  return;
}

