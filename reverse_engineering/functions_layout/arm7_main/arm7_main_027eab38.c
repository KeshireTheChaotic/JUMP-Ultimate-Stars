
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eab38(uint param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = _DAT_0380fff4;
  bVar2 = false;
  if (param_1 < 0x21) {
    if ((*(short *)(_DAT_0380fff4 + 0x34c) == 0x40) && (*(short *)(_DAT_0380fff4 + 0x32e) == 1)) {
      if (*(ushort *)(_DAT_0380fff4 + 0x362) != param_1) {
        return 6;
      }
      if (*(short *)(_DAT_0380fff4 + 0x3d6) != 0) {
        bVar2 = true;
      }
    }
    iVar6 = _DAT_0380fff4 + 0x364;
    for (uVar5 = 0; uVar5 < param_1; uVar5 = uVar5 + 1) {
      uVar4 = FUN_027e93b0(param_2);
      FUN_027e93d0(iVar6 + uVar5,uVar4);
      param_2 = param_2 + 1;
    }
    for (; uVar5 < 0x20; uVar5 = uVar5 + 1) {
      FUN_027e93d0(iVar3 + 0x364 + uVar5,0);
    }
    *(short *)(iVar3 + 0x362) = (short)param_1;
    if (bVar2) {
      iVar6 = *(int *)(_DAT_0380fff4 + 0x4ac);
      uVar1 = *(ushort *)(iVar3 + 0x3d6);
      for (uVar5 = 0; uVar5 < param_1; uVar5 = uVar5 + 1) {
        uVar4 = FUN_027e93b0(iVar3 + 0x364 + uVar5);
        FUN_027e93d0(iVar6 + 0x26 + (uint)uVar1 + uVar5,uVar4);
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 5;
  }
  return uVar4;
}

