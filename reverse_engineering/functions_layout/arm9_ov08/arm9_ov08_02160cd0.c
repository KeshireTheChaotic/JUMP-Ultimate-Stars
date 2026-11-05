
void FUN_02160cd0(void)

{
  int iVar1;
  
  iVar1 = FUN_02163614();
  if (iVar1 == 0) {
    DAT_0216e7d8 = 1;
    FUN_02162378(7);
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    DAT_0216e7d8 = 3;
    FUN_02162378(6);
  }
  FUN_02163624();
  FUN_02157088(0x2160c81);
  return;
}

