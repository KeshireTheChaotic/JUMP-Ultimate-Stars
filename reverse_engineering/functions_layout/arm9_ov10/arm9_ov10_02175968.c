
void FUN_02175968(void)

{
  int iVar1;
  
  if (DAT_021a73f4 != 0) {
    if (*(short *)(DAT_021a73f4 + 4) == 1) {
      DAT_021a73f4 = 0;
      return;
    }
    iVar1 = FUN_02067574();
    while (iVar1 == 0) {
      FUN_02052ea0(10);
      iVar1 = FUN_02067574();
    }
    DAT_021a73f4 = 0;
  }
  return;
}

