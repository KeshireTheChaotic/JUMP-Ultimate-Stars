
int FUN_0218a910(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  short local_20 [2];
  int local_1c;
  uint local_18;
  
  iVar1 = FUN_0218c310(param_3,&local_18,local_20);
  if (((iVar1 == 0) || (local_18 == 0)) || (local_20[0] == 0)) {
    return 4;
  }
  if ((local_18 & 0xe0) == 0xe0) {
    return 4;
  }
  iVar1 = FUN_0218a7e8(param_1,&local_1c,local_18,local_20[0]);
  if (iVar1 == 0) {
    *(undefined4 *)(local_1c + 0x20) = param_6;
    iVar1 = FUN_0218a758(local_1c,param_4,param_5,param_7);
    if (iVar1 != 0) {
      FUN_0218bf18(local_1c);
      return iVar1;
    }
    if (param_8 == 0) {
      if (param_2 != (int *)0x0) {
        *param_2 = local_1c;
      }
      return 0;
    }
    *(int *)(local_1c + 0x24) = *(int *)(local_1c + 0x24) + 1;
    while (FUN_0218aa20(param_1), *(int *)(local_1c + 0xc) < 5) {
      thunk_FUN_02052ea0(1);
    }
    *(int *)(local_1c + 0x24) = *(int *)(local_1c + 0x24) + -1;
    if (*(int *)(local_1c + 0xc) == 5) {
      *param_2 = local_1c;
    }
    iVar1 = *(int *)(local_1c + 0x18);
  }
  return iVar1;
}

