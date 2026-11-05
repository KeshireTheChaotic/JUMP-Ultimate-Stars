
undefined4 FUN_0218a438(int param_1)

{
  if (param_1 == 0) {
    FUN_02002068(s_socket_021a6654,s_gt2Callback_c_021a665c,0,0x1b);
    return 1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return 1;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  (**(code **)(param_1 + 0x24))(param_1);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  if ((*(int *)(param_1 + 0x14) == 0) || (*(int *)(param_1 + 0x1c) != 0)) {
    return 1;
  }
  FUN_0218c0e4(param_1);
  return 0;
}

