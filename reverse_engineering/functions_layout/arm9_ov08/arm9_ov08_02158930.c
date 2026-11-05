
void FUN_02158930(void)

{
  int iVar1;
  int local_18;
  int local_14;
  
  iVar1 = FUN_02154488();
  if (iVar1 == 0) {
    FUN_02162378(7);
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    FUN_0206a4f8(&local_18);
    if (DAT_0216e72c != '\0') {
      if (local_14 == 0 && local_18 == 0) {
        FUN_02162378(9);
        FUN_02154464(0xffffffff);
        return;
      }
    }
    FUN_02162378(6);
    FUN_02158780();
    DAT_0216e730 = 1;
  }
  FUN_02157088(0x2158915);
  return;
}

