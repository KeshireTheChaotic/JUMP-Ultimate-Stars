
undefined4 FUN_02175918(void)

{
  int iVar1;
  
  if (DAT_021a73f4 == 0) {
    return 1;
  }
  if (*(short *)(DAT_021a73f4 + 4) == 8) {
    return 0;
  }
  if (*(short *)(DAT_021a73f4 + 4) == 1) {
    DAT_021a73f4 = 0;
    return 1;
  }
  *(undefined2 *)(DAT_021a73f4 + 4) = 5;
  iVar1 = FUN_02067574();
  if (iVar1 == 0) {
    return 0;
  }
  DAT_021a73f4 = 0;
  return 1;
}

