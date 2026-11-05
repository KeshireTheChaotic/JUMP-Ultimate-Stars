
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_027ec78c(ushort *param_1)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
  iVar2 = _DAT_0380fff4;
  piVar9 = (int *)(_DAT_0380fff4 + 0x31c);
  if ((*param_1 & 1) == 0) {
    iVar7 = _DAT_0380fff4;
    if (*(ushort *)(_DAT_0380fff4 + 0x52c) < 2) {
      uVar3 = 1;
    }
    else {
      uVar6 = 0;
      uVar8 = 0;
      psVar1 = (short *)*piVar9;
      for (uVar3 = 1; uVar3 < *(ushort *)(iVar2 + 0x322); uVar3 = uVar3 + 1) {
        if (psVar1[0xe] == 0) {
          if (uVar6 == 0) {
            uVar6 = uVar3;
          }
        }
        else {
          iVar7 = FUN_027e9cfc(psVar1 + 0x10,param_1);
          if (iVar7 != 0) {
            return uVar3;
          }
          uVar8 = uVar8 + 1;
          iVar7 = _DAT_0380fff4;
          if (*(ushort *)(_DAT_0380fff4 + 0x52c) <= uVar8) break;
        }
        psVar1 = psVar1 + 0xe;
      }
      if (uVar6 != 0) {
        uVar3 = uVar6;
      }
    }
    if (*(ushort *)(iVar7 + 0x322) <= uVar3) {
      iVar7 = *piVar9;
      uVar6 = 0x10000;
      uVar3 = 0;
      for (uVar8 = 1; uVar8 < *(ushort *)(iVar2 + 0x322); uVar8 = uVar8 + 1) {
        iVar5 = iVar7 + uVar8 * 0x1c;
        if (((*(ushort *)(iVar7 + uVar8 * 0x1c) < 0x30) && (*(short *)(iVar5 + 0x16) == 0)) &&
           (uVar4 = (uint)*(ushort *)(iVar5 + 0x18), uVar4 < uVar6)) {
          uVar3 = uVar8;
          uVar6 = uVar4;
        }
      }
      if (uVar3 == 0) {
        return 0xff;
      }
    }
    FUN_027ebc18(uVar3,param_1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

