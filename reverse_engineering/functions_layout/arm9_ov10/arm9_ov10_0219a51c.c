
undefined4 FUN_0219a51c(int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
      if (param_1 == *(char *)(DAT_0214ccf8 + iVar1 + 0x8e4)) {
        return 1;
      }
    }
  }
  return 0;
}

