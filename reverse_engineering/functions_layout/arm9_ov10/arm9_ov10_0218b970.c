
undefined4 FUN_0218b970(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1[3] != 3) {
    iVar1 = FUN_0218bcc0();
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  if (param_3 < 0x20) {
    iVar1 = FUN_0218bcc0();
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  iVar1 = FUN_02189ba8(param_2,param_1 + 0x1a);
  if (iVar1 == 0) {
    iVar1 = FUN_0218bcc0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  if (*(int *)(param_1[2] + 0x20) != 0) {
    param_1[3] = 4;
    iVar1 = FUN_02001ed8();
    iVar1 = FUN_0218a394(param_1[2],param_1,*param_1,*(undefined2 *)(param_1 + 1),
                         iVar1 - param_1[0x23],param_2 + 0x20,param_3 + -0x20);
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  iVar1 = FUN_0218ab00(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0218a4f0(param_1);
  return 1;
}

