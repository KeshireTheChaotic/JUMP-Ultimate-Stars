
undefined4 FUN_0218ba2c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_30 [36];
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_0218bcc0();
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  if (param_3 < 0x40) {
    iVar1 = FUN_0218bcc0();
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  iVar1 = FUN_02189ba8(param_2,param_1 + 0x68);
  if (iVar1 != 0) {
    FUN_02189bd4(auStack_30,param_2 + 0x20);
    iVar1 = FUN_0218adc0(param_1,auStack_30,*(undefined4 *)(param_1 + 0x38),
                         *(undefined4 *)(param_1 + 0x3c));
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_02175814();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    return 1;
  }
  iVar1 = FUN_0218bcc0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

