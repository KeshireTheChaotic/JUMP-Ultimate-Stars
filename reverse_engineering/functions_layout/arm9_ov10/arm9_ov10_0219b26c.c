
void FUN_0219b26c(undefined4 param_1)

{
  undefined1 uVar1;
  
  if (DAT_0214ccf8 == 0) {
    return;
  }
  uVar1 = FUN_0217668c();
  FUN_021a1de0(DAT_0214ccf8 + 0x88,uVar1);
  FUN_021a1ea8(DAT_0214ccf8 + 0x88,param_1);
  FUN_021a1e04(DAT_0214ccf8 + 0x88);
  *(undefined1 *)(DAT_0214ccf8 + 0xa50) = uVar1;
  *(undefined1 *)(DAT_0214ccf8 + 0xa51) = *(undefined1 *)(DAT_0214ccf8 + 0xa50);
  return;
}

