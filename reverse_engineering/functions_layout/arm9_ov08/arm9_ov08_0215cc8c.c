
void FUN_0215cc8c(void)

{
  int iVar1;
  int iVar2;
  
  if ((byte)(DAT_0216e784 - 0xbU) < 3) {
    FUN_0215cd10();
    return;
  }
  iVar1 = FUN_021622d4();
  iVar2 = FUN_020507a8(DAT_0216e790,0x1d);
  iVar2 = (uint)DAT_0216e78c + iVar2;
  if (iVar2 == 2) {
    if (*(char *)(iVar1 + 0xf5) == '\0') {
      DAT_0216e784 = 3;
    }
    else {
      DAT_0216e784 = 2;
    }
  }
  else if (iVar2 == 6) {
    if (*(char *)(iVar1 + 0xf6) == '\0') {
      DAT_0216e784 = 8;
    }
    else {
      DAT_0216e784 = 7;
    }
  }
  else {
    DAT_0216e784 = (&DAT_0216aab8)[iVar2];
  }
  FUN_0215cd10();
  return;
}

