
void FUN_03802864(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x40;
  if ((&DAT_03809a28)[param_1 * 0x40] != '\0') {
    FUN_037fd998(iVar1 + 0x3809a3c);
    (&DAT_03809a29)[iVar1] = (&DAT_03809a29)[iVar1] + '\x01';
    (&DAT_03809a28)[iVar1] = 0;
  }
  return;
}

