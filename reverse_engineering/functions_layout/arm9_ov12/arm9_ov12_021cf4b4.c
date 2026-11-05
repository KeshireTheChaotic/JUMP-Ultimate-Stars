
int FUN_021cf4b4(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_021d66e4;
  if (0x1f < param_1) {
    return 0;
  }
  if (param_1 == DAT_021d7be0) {
    return 0;
  }
  if (DAT_021d66e4 == 0) {
    return 0;
  }
  DAT_021d66e4 = *(undefined4 *)(DAT_021d66e4 + 0x14);
  FUN_021cf398(iVar1);
  *(int *)(iVar1 + 0x14) = DAT_021d66e8;
  DAT_021d66e8 = iVar1;
  return iVar1;
}

