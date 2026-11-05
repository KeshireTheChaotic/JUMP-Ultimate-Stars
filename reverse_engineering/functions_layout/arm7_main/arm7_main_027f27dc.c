
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f27dc(void)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = _DAT_0380fff4 + 0x4e4;
  uVar3 = 0;
  do {
    psVar2 = (short *)(iVar4 + uVar3 * 0x18);
    sVar1 = *(short *)(iVar4 + uVar3 * 0x18);
    if ((sVar1 != 0) && (*psVar2 = sVar1 + -1, *psVar2 == 0)) {
      FUN_037f89b8(_DAT_0380fff4 + 0x188,*(undefined4 *)(psVar2 + 10));
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return;
}

