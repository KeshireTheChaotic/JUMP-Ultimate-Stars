
void FUN_02088904(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_0214bea4 != 9) {
    DAT_0214bea4 = 9;
    DAT_0214be78 = param_1;
    if (DAT_0214be8c != (code *)0x0) {
      (*DAT_0214be8c)(s_CommLib__ErrorCode____d_in__s__d_020a0314,param_1,param_2,param_3);
    }
  }
  return;
}

