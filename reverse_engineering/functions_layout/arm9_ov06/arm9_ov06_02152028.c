
void FUN_02152028(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (int)*(char *)(DAT_02172968 + 0x30);
  while( true ) {
    if (3 < iVar3) {
      return;
    }
    iVar2 = iVar1 + 1 >> 0x1f;
    iVar1 = ((uint)((iVar1 + 1) * 0x40000000 + iVar2) >> 0x1e | iVar2 << 2) - iVar2;
    iVar2 = FUN_02152078(iVar1);
    if (iVar2 != 0) break;
    iVar3 = iVar3 + 1;
  }
  return;
}

