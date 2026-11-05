
void FUN_021579b8(void)

{
  int iVar1;
  
  iVar1 = FUN_02166314(1);
  if ((iVar1 == 0) && (iVar1 = FUN_02166314(0), iVar1 == 0)) {
    iVar1 = FUN_0215701c();
    if (iVar1 == 0) {
      FUN_0215707c(0,1);
      FUN_02157088(&LAB_02157f40_1);
      return;
    }
    if (iVar1 != 1) {
      return;
    }
    FUN_0215707c(1,1);
    FUN_02157088(0x215fbd1);
  }
  return;
}

