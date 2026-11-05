
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_027f0604(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = _DAT_0380fff4;
  FUN_027e93d0(param_1,1);
  iVar4 = 2;
  uVar3 = 0;
  do {
    uVar1 = 1 << (uVar3 & 0xff);
    if ((*(ushort *)(iVar2 + 0x3a6) & uVar1) != 0) {
      if ((*(ushort *)(iVar2 + 0x3a4) & uVar1) == 0) {
        FUN_027e93d0(param_1 + iVar4,(&DAT_027f7ce4)[uVar3] & 0xff);
      }
      else {
        FUN_027e93d0(param_1 + iVar4,(&DAT_027f7ce4)[uVar3] & 0xff | 0x80);
      }
      iVar4 = iVar4 + 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  FUN_027e93d0(param_1 + 1,iVar4 - 2U & 0xff);
  return iVar4;
}

