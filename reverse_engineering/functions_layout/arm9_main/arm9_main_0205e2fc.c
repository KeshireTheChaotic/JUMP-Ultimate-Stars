
void FUN_0205e2fc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 ushort param_5)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[8] = 0;
  param_1[8] = param_1[8] & 0xffffff00;
  param_1[8] = param_1[8] | param_5 & 0xff;
  FUN_0205e2cc(param_1 + 3,4);
  if (DAT_020aeb4c == 0) {
    FUN_0205e2cc(&DAT_020aeb50,4);
    DAT_020aeb4c = 1;
  }
  uVar1 = FUN_0205e388(param_1);
  FUN_0205e240(uVar1,param_1);
  return;
}

