
undefined4 FUN_0215ef58(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(char *)(param_1 + 0x10) <= iVar1) {
      return 1;
    }
    if (*(char *)(param_1 + iVar1 * 4) < '\0') break;
    iVar1 = iVar1 + 1;
  }
  return 0;
}

