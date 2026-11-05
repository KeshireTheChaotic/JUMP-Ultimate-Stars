
undefined4 FUN_021618e0(void)

{
  int iVar1;
  
  *(undefined1 *)(DAT_0216e7ec + 0x1e4c) = 1;
  FUN_02058b2c(DAT_0216e7ec + 0x168c);
  if (*(short *)(DAT_0216e7ec + 0x168c) != 2) {
    iVar1 = FUN_02059470(0x2161851);
    if (iVar1 != 2) {
      return 0;
    }
    do {
      FUN_02058b2c(DAT_0216e7ec + 0x168c);
    } while (*(short *)(DAT_0216e7ec + 0x168c) != 2);
  }
  iVar1 = FUN_02059428(0x2161851);
  if (iVar1 == 2) {
    return 1;
  }
  return 0;
}

