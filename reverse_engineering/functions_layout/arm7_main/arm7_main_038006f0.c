
void FUN_038006f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x54;
    (&DAT_03808aa8)[iVar1] = (char)iVar2;
    (&DAT_03808aab)[iVar1] = (&DAT_03808aab)[iVar1] & 7;
    (&DAT_03808aab)[iVar1] = (&DAT_03808aab)[iVar1] & 0xfe;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  DAT_03808a84 = 0;
  DAT_03808a80 = 0;
  return;
}

