
undefined4 FUN_021cf4f8(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_3 != 0x10) {
    return 0;
  }
  if ((*(byte *)(param_2 + 8) != param_1) || (*(char *)(param_2 + 9) != DAT_021d7be0)) {
    return 0;
  }
  if (*(char *)(param_2 + 5) != '\x10') {
    uVar1 = FUN_021ceefc(param_2,param_4);
    return uVar1;
  }
  if (DAT_021d7bec == 0) {
    uVar1 = FUN_021cf05c(param_2,param_4);
    return uVar1;
  }
  uVar1 = FUN_021cef50(param_2,param_4);
  return uVar1;
}

