
undefined4 FUN_021cf68c(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_021d7bf0 != 3) {
    return 0xfffffffe;
  }
  iVar1 = FUN_021cf138();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  (*DAT_021d7be4)(param_1,9,iVar1,DAT_021d7be8);
  DAT_021d66d4 = DAT_021d66d4 + -1;
  return 0;
}

