
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027e9d38(uint param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 < 0x21) {
    uVar5 = (uint)*(ushort *)(_DAT_0380fff4 + 0x362);
    if (uVar5 == 0) {
      uVar1 = 1;
    }
    else {
      if (*(short *)(_DAT_0380fff4 + 0x404) == 0x13) {
        if (param_1 < uVar5) {
          return 0;
        }
        param_1 = uVar5;
      }
      else if (param_1 != uVar5) {
        return 0;
      }
      iVar7 = _DAT_0380fff4 + 0x364;
      iVar6 = _DAT_0380fff4 + 900;
      for (uVar5 = 0; uVar5 < param_1; uVar5 = uVar5 + 1) {
        uVar2 = FUN_027e93b0(iVar6);
        iVar6 = iVar6 + 1;
        uVar3 = FUN_027e93b0(param_2);
        param_2 = param_2 + 1;
        uVar4 = FUN_027e93b0(iVar7);
        iVar7 = iVar7 + 1;
        if ((uVar3 | uVar2) != (uVar4 | uVar2)) {
          return 0;
        }
      }
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

