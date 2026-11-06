
void FUN_037ffdc8(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (; ((int)uVar2 < 0x10 && (param_1 != 0)); param_1 = param_1 >> 1) {
    if (((param_1 & 1) != 0) && (iVar1 = uVar2 * 0x54, (DAT_03808a84 & 1 << (uVar2 & 0xff)) == 0)) {
      if ((code *)(&DAT_03808af0)[uVar2 * 0x15] != (code *)0x0) {
        (*(code *)(&DAT_03808af0)[uVar2 * 0x15])
                  (&DAT_03808aa8 + iVar1,0,(&DAT_03808af4)[uVar2 * 0x15]);
      }
      SND_StopChannel(uVar2,0);
      (&DAT_03808aca)[iVar1] = 0;
      FUN_037ffe90(&DAT_03808aa8 + iVar1);
      (&DAT_03808aab)[iVar1] = (&DAT_03808aab)[iVar1] & 7;
      (&DAT_03808aab)[iVar1] = (&DAT_03808aab)[iVar1] & 0xfe;
    }
    uVar2 = uVar2 + 1;
  }
  return;
}

