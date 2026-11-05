
undefined4 FUN_02162f28(void)

{
  int iVar1;
  
  *(undefined1 *)(DAT_0216e800 + 0x1b84) = 1;
  FUN_02058b2c(DAT_0216e800 + 0x13b8);
  if (*(short *)(DAT_0216e800 + 0x13b8) != 2) {
    iVar1 = FUN_02059470(0x2162ea9);
    if (iVar1 != 2) {
      return 0;
    }
    do {
      FUN_02058b2c(DAT_0216e800 + 0x13b8);
    } while (*(short *)(DAT_0216e800 + 0x13b8) != 2);
  }
  iVar1 = FUN_02059428(0x2162ea9);
  if (iVar1 != 2) {
    return 0;
  }
  if (*(int *)(DAT_0216e800 + 0x1b80) != 0) {
    thunk_FUN_02167764(0);
  }
  do {
  } while (*(char *)(DAT_0216e800 + 0x1b84) != '\x02');
  FUN_02166b5c(&DAT_0216e800);
  return 1;
}

