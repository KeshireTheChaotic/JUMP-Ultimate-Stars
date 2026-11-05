
undefined4 FUN_0218bac0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  if (*(int *)(param_1 + 0xc) != 2) {
    iVar1 = FUN_0218bcc0();
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  if (0x1f < param_3) {
    FUN_02189bd4(auStack_48);
    FUN_02189c7c(auStack_28);
    FUN_02189bd4(param_1 + 0x68,auStack_28);
    iVar1 = FUN_0218ae1c(param_1,auStack_48,auStack_28);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 3;
    return 1;
  }
  iVar1 = FUN_0218bcc0();
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

