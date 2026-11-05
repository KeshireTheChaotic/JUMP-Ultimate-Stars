
undefined4 FUN_0218a278(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    FUN_02002068(s_connection_021a666c,s_gt2Callback_c_021a665c,0,0x94);
    return 1;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 1;
  }
  if ((param_3 == 0) || (param_2 == 0)) {
    param_2 = 0;
    param_3 = 0;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  *(int *)(*(int *)(param_1 + 8) + 0x1c) = *(int *)(*(int *)(param_1 + 8) + 0x1c) + 1;
  (**(code **)(param_1 + 0x2c))(param_1,param_2,param_3,param_4);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  *(int *)(*(int *)(param_1 + 8) + 0x1c) = *(int *)(*(int *)(param_1 + 8) + 0x1c) + -1;
  if ((*(int *)(*(int *)(param_1 + 8) + 0x14) == 0) || (*(int *)(*(int *)(param_1 + 8) + 0x1c) != 0)
     ) {
    return 1;
  }
  FUN_0218c0e4();
  return 0;
}

