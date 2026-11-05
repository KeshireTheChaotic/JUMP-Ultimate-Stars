
undefined4 FUN_02189298(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int local_18;
  int local_14 [2];
  
  local_18 = 0;
  local_14[0] = 0;
  iVar1 = FUN_02001cbc(param_2,0,&local_18,local_14);
  if (iVar1 == -1) {
    FUN_02189470(param_1,s_Error_connecting_021a63f8);
    FUN_0218913c(param_1,5,s_There_was_an_error_checking_for_a_021a640c);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  if (0 < iVar1) {
    if (local_14[0] != 0) {
      FUN_02189470(param_1,s_Connection_rejected_021a6444);
      *param_3 = 4;
      return 0;
    }
    if (local_18 != 0) {
      FUN_02189470(param_1,s_Connection_accepted_021a645c);
      *param_3 = 3;
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}

