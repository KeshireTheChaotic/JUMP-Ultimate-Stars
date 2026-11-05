
undefined4
FUN_02189f0c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 *param_6)

{
  undefined4 uVar1;
  
  *param_6 = 0;
  if (param_1 == 0) {
    FUN_02002068(s_socket_021a6654,s_gt2Callback_c_021a665c,0,0x197);
    return 1;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return 1;
  }
  if ((param_5 == 0) || (param_4 == 0)) {
    param_4 = 0;
    param_5 = 0;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  uVar1 = (**(code **)(param_1 + 0x30))(param_1,param_2,param_3,param_4,param_5);
  *param_6 = uVar1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  if ((*(int *)(param_1 + 0x14) == 0) || (*(int *)(param_1 + 0x1c) != 0)) {
    return 1;
  }
  FUN_0218c0e4(param_1);
  return 0;
}

