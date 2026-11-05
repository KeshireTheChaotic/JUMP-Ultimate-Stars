
void FUN_02160c80(void)

{
  int iVar1;
  
  iVar1 = FUN_02163600();
  if (iVar1 == 0) {
    if (DAT_0216e7d8 == '\x01') {
      FUN_02157088(0x2160ef9);
      return;
    }
    FUN_02162378(0xb);
    FUN_02154434();
    DAT_0216e7d8 = '\0';
    FUN_02162f14(0x2160d51);
    FUN_02157088(0x2160f7d);
  }
  return;
}

