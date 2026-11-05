
int FUN_038007d0(void)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x1f < iVar1) {
      return -1;
    }
    if (((&DAT_03809228)[iVar1 * 0x40] & 1) == 0) break;
    iVar1 = iVar1 + 1;
  }
  (&DAT_03809228)[iVar1 * 0x40] = (&DAT_03809228)[iVar1 * 0x40] & 0xfe | 1;
  return iVar1;
}

