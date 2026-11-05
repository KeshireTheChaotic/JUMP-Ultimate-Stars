
undefined4 FUN_021cf6d0(uint param_1)

{
  int iVar1;
  
  if (DAT_021d7bf0 != 3) {
    return 0xfffffffe;
  }
  if (DAT_021d66d4 == 3) {
    return 0xfffffffa;
  }
  if (param_1 == DAT_021d7be0) {
    return 0xffffffff;
  }
  iVar1 = FUN_021cf138();
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_021cf84c(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *(char *)(iVar1 + 4) = (char)param_1;
  *(char *)(iVar1 + 5) = (char)param_1;
  *(undefined4 *)(iVar1 + 0xc) = 2;
  *(int *)(iVar1 + 8) = 1 << (param_1 & 0xff);
  (*DAT_021d7be4)(param_1,7,iVar1,DAT_021d7be8);
  DAT_021d66d4 = DAT_021d66d4 + 1;
  return 0;
}

