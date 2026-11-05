
int FUN_0219c9e4(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (3 < iVar2) {
      return -1;
    }
    iVar1 = FUN_0219caf4(iVar2);
    if (iVar1 == 0xff) break;
    iVar2 = iVar2 + 1;
  }
  *(undefined1 *)(DAT_0214ccf8 + iVar2 + 0x8e0) = param_1;
  return iVar2;
}

