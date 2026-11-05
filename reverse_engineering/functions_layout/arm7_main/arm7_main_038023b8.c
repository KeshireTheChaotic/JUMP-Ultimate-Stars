
void FUN_038023b8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x24;
    (&DAT_03808fe8)[iVar1] = (&DAT_03808fe8)[iVar1] & 0xfe;
    (&DAT_03808fe9)[iVar1] = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  do {
    (&DAT_03809228)[iVar2 * 0x40] = (&DAT_03809228)[iVar2 * 0x40] & 0xfe;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return;
}

