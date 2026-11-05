
undefined4
FUN_0218a394(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_02002068(s_socket____connection_021a6678,s_gt2Callback_c_021a665c,0,0x3d);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    return 1;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return 1;
  }
  if ((param_7 == 0) || (param_6 == 0)) {
    param_6 = 0;
    param_7 = 0;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  (**(code **)(param_1 + 0x20))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
  if ((*(int *)(param_1 + 0x14) == 0) || (*(int *)(param_1 + 0x1c) != 0)) {
    return 1;
  }
  FUN_0218c0e4(param_1);
  return 0;
}

