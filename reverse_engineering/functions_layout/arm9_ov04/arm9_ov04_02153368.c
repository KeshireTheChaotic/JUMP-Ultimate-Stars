
int FUN_02153368(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (3 < iVar1) {
      return -1;
    }
    if (*(short *)(param_1 + iVar1 * 2) == 0) break;
    iVar1 = (iVar1 + 1) * 0x1000000 >> 0x18;
  }
  return iVar1;
}

