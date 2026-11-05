
void FUN_037ffbec(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 0x54;
    if ((((((&DAT_03808aab)[iVar1] & 1) != 0) && ((&DAT_03808aa9)[iVar1] == '\0')) &&
        (param_1 <= (uint)(&DAT_03808aec)[uVar2 * 0x15])) &&
       ((uint)(&DAT_03808aec)[uVar2 * 0x15] <= param_2)) {
      (&DAT_03808aab)[iVar1] = (&DAT_03808aab)[iVar1] & 0xfd;
      FUN_037ff104(uVar2,0);
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x10);
  return;
}

