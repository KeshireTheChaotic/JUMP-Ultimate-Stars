
uint FUN_0200c9e4(uint param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  uVar4 = (param_1 ^ param_2) & 0x80000000;
  uVar5 = param_1 >> 0x17 & 0xff;
  if (uVar5 == 0 || uVar5 == 0xff) {
    if (uVar5 != 0) {
      if ((param_1 & 0x7fffff) != 0) {
        return 0x7fffffff;
      }
      uVar5 = param_2 >> 0x17 & 0xff;
      if (uVar5 == 0) {
        if (param_2 * 0x200 == 0) {
          return 0x7fffffff;
        }
      }
      else if ((0xfe < uVar5) && (param_2 * 0x200 != 0)) {
        return 0x7fffffff;
      }
      goto LAB_0200cb40;
    }
  }
  else {
    uVar6 = param_2 >> 0x17 & 0xff;
    if (uVar6 != 0 && uVar6 != 0xff) {
      iVar7 = uVar5 + uVar6;
      lVar1 = (ulonglong)(param_2 << 8 | 0x80000000) * (ulonglong)(param_1 << 8 | 0x80000000);
      uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
      if (-1 < lVar1) {
        uVar5 = uVar5 * 2;
        iVar7 = iVar7 + -1;
      }
      iVar8 = iVar7 + -0x7f;
      if (iVar8 < 0) {
        if (iVar7 == 0x67) {
          return uVar4;
        }
        if (iVar7 + -0x67 < 0) {
          return uVar4;
        }
        return uVar4;
      }
      if (0xfd < iVar8) {
        return uVar4 | 0x7f800000;
      }
      uVar4 = (uVar4 | uVar5 >> 8) + iVar8 * 0x800000;
      if ((uVar5 & 0x80) == 0) {
        return uVar4;
      }
      bVar2 = (int)lVar1 == 0;
      bVar3 = (uVar5 & 0x7f) == 0;
      bVar9 = bVar2 && bVar3;
      if (bVar2 && bVar3) {
        bVar9 = (uVar4 & 1) == 0;
      }
      if (!bVar9) {
        uVar4 = uVar4 + 1;
      }
      return uVar4;
    }
    if (uVar6 != 0) {
      if ((param_2 & 0x7fffff) != 0) {
        return 0x7fffffff;
      }
LAB_0200cb40:
      return uVar4 | 0x7f800000;
    }
  }
  return uVar4;
}

