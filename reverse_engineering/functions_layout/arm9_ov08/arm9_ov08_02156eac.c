
undefined4 FUN_02156eac(void)

{
  int iVar1;
  
  iVar1 = FUN_0214f1dc(DAT_0216e6e8);
  if (iVar1 == 0) {
    DAT_0216e6e4 = 1;
    return 1;
  }
  if ((*(char *)(DAT_0216e6e8 + 0x116) == '\x01') ||
     ((byte)(*(char *)(DAT_0216e6e8 + 0x116) - 3U) < 3)) {
    return 0;
  }
  return 2;
}

