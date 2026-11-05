
int FUN_0219cb14(uint param_1)

{
  int iVar1;
  
  if (DAT_0214ccf8 != 0) {
    for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
      if (param_1 == *(byte *)(DAT_0214ccf8 + iVar1 + 0x8e0)) {
        return iVar1;
      }
    }
  }
  return -1;
}

