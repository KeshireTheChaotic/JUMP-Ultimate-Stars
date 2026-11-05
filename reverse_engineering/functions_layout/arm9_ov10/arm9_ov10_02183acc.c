
undefined4
FUN_02183acc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int *param_6,char *param_7)

{
  int iVar1;
  
  iVar1 = FUN_02001a88(param_2,param_3,param_4,0);
  if (iVar1 == -1) {
    iVar1 = FUN_020019e0(param_2);
    if (((iVar1 != -6) && (iVar1 != -0x1a)) && (iVar1 != -0x4c)) {
      if ((*param_7 == 'P') && (param_7[1] == 'R')) {
        return 3;
      }
      FUN_0218913c(param_1,5,s_There_was_an_error_sending_on_a_s_021a536c);
      FUN_02183f3c(param_1,3,0);
      return 3;
    }
    *param_6 = 0;
    *param_5 = 0;
  }
  else if (iVar1 == 0) {
    FUN_02189470(param_1,s_SENDXXXX__s___Connection_closed_021a5394,param_7);
    *param_6 = 0;
    *param_5 = 1;
  }
  else {
    *param_6 = iVar1;
    *param_5 = 0;
  }
  return 0;
}

