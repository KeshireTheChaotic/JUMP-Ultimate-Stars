
void FUN_021604c8(void)

{
  int iVar1;
  int local_8 [2];
  
  DAT_0216e7cc = DAT_0216e7cc + 1;
  if (0xb3 < DAT_0216e7cc) {
    FUN_02157038(0,local_8);
    iVar1 = FUN_0215701c();
    if (((iVar1 != 0) && (iVar1 == 1)) && (local_8[0] != 0)) {
      FUN_02157088(0x215798d);
      return;
    }
    FUN_02157088(0x2160589);
  }
  return;
}

