
undefined4 FUN_0218b550(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_1c [2];
  
  if (param_4 < 7) {
    iVar1 = FUN_0218bcc0();
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  uVar2 = FUN_0218bd38(param_3,3);
  uVar3 = FUN_0218bd38(param_3,5);
  iVar1 = FUN_0218bbfc(param_1,uVar3);
  if (iVar1 == 0) {
    return 0;
  }
  if (uVar2 == *(ushort *)(param_1 + 0x66)) {
    FUN_0218b624(param_1);
    iVar1 = FUN_0218b810(param_1,param_2,param_3 + 7,param_4 + -7);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_0218b644(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  iVar1 = FUN_0218bd24(uVar2);
  if (iVar1 < 0) {
    FUN_0218b624(param_1);
    return 1;
  }
  iVar1 = FUN_0218b6f4(param_1,param_2,uVar2,param_3 + 7,param_4 + -7,local_1c);
  if (iVar1 == 0) {
    return 0;
  }
  if ((local_1c[0] == 0) || (iVar1 = FUN_0218bca4(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

