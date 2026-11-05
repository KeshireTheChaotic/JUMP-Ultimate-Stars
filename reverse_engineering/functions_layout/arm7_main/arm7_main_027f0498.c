
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_027f0498(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = _DAT_0380fff4;
  FUN_027e93d0(param_1,0xdd);
  FUN_027e93d0(param_1 + 1,*(short *)(_DAT_0380fff4 + 0x3e4) + 8U & 0xff);
  FUN_027e93d0(param_1 + 2,0);
  FUN_027e93d0(param_1 + 3,9);
  FUN_027e93d0(param_1 + 4,0xbf);
  FUN_027e93d0(param_1 + 5,0);
  FUN_027e93d0(param_1 + 6,*(ushort *)(iVar2 + 0x33c) & 0xff);
  FUN_027e93d0(param_1 + 7,(int)(uint)*(ushort *)(iVar2 + 0x33c) >> 8);
  uVar1 = _DAT_0380fff0;
  FUN_027e93d0(param_1 + 8,_DAT_0380fff0 & 0xff);
  FUN_027e93d0(param_1 + 9,uVar1 >> 8);
  iVar4 = 10;
  if (*(short *)(iVar2 + 0x3e4) != 0) {
    iVar5 = *(int *)(iVar2 + 0x3e0);
    if ((*(ushort *)(iVar2 + 0x3e6) & 1) != 0) {
      iVar5 = iVar5 + 1;
    }
    for (uVar6 = 0; uVar6 < *(ushort *)(iVar2 + 0x3e4); uVar6 = uVar6 + 1) {
      uVar3 = FUN_027e93b0(iVar5);
      FUN_027e93d0(param_1 + iVar4,uVar3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 1;
    }
  }
  return iVar4;
}

