
void FUN_0219a4e0(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (3 < iVar1) {
      return;
    }
    if (*(char *)(DAT_0214ccf8 + iVar1 + 0x8e4) < '\0') break;
    iVar1 = iVar1 + 1;
  }
  *(undefined1 *)(DAT_0214ccf8 + iVar1 + 0x8e4) = param_1;
  return;
}

