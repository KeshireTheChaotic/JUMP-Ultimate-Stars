
undefined4 FUN_0218a0e8(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    FUN_02002068(s_connection_021a666c,s_gt2Callback_c_021a665c,0,0x101);
    return 1;
  }
  puVar1 = (undefined4 *)FUN_020012d8(*(undefined4 *)(param_1 + 0x98),param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  if ((param_4 == 0) || (param_3 == 0)) {
    param_3 = 0;
    param_4 = 0;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  *(int *)(*(int *)(param_1 + 8) + 0x1c) = *(int *)(*(int *)(param_1 + 8) + 0x1c) + 1;
  (*(code *)*puVar1)(param_1,param_2,param_3,param_4,param_5);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  *(int *)(*(int *)(param_1 + 8) + 0x1c) = *(int *)(*(int *)(param_1 + 8) + 0x1c) + -1;
  if ((*(int *)(*(int *)(param_1 + 8) + 0x14) == 0) || (*(int *)(*(int *)(param_1 + 8) + 0x1c) != 0)
     ) {
    return 1;
  }
  FUN_0218c0e4();
  return 0;
}

