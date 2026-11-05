
void FUN_037ffcd0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  for (uVar3 = param_1; ((int)uVar2 < 0x10 && (uVar3 != 0)); uVar3 = uVar3 >> 1) {
    if ((uVar3 & 1) != 0) {
      iVar1 = uVar2 * 0x54;
      if ((DAT_03808a84 & 1 << (uVar2 & 0xff)) == 0) {
        if ((code *)(&DAT_03808af0)[uVar2 * 0x15] != (code *)0x0) {
          (*(code *)(&DAT_03808af0)[uVar2 * 0x15])
                    (&DAT_03808aa8 + iVar1,0,(&DAT_03808af4)[uVar2 * 0x15]);
        }
        FUN_037ff104(uVar2,0);
        (&DAT_03808aca)[iVar1] = 0;
        FUN_037ffe90(&DAT_03808aa8 + iVar1);
        (&DAT_03808aab)[iVar1] = (&DAT_03808aab)[iVar1] & 7;
        (&DAT_03808aab)[iVar1] = (&DAT_03808aab)[iVar1] & 0xfe;
      }
    }
    uVar2 = uVar2 + 1;
  }
  if ((param_2 & 1) == 0) {
    DAT_03808a84 = DAT_03808a84 | param_1;
  }
  else {
    DAT_03808a80 = DAT_03808a80 | param_1;
  }
  return;
}

