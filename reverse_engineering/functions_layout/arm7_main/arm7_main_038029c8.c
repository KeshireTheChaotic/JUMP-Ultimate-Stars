
void FUN_038029c8(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    (&DAT_03809a28)[iVar1 * 0x40] = 0;
    (&DAT_03809a29)[iVar1 * 0x40] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}

