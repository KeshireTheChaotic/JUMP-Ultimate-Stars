
uint FUN_0200c5ac(uint param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar6 = param_1 >> 0x17 & 0xff;
  if (uVar6 == 0 || uVar6 == 0xff) {
    uVar5 = (param_1 ^ param_2) & 0x80000000;
    if (uVar6 != 0) {
      if ((param_1 & 0x7fffff) != 0) {
        return 0x7fffffff;
      }
      uVar6 = param_2 >> 0x17 & 0xff;
      if ((uVar6 != 0) && (0xfe < uVar6)) {
        if ((param_2 & 0x7fffff) == 0) {
          return 0x7fffffff;
        }
        return 0x7fffffff;
      }
      goto LAB_0200c810;
    }
    uVar6 = param_2 >> 0x17 & 0xff;
    if (uVar6 == 0) {
      return 0x7fffffff;
    }
    if (uVar6 < 0xff) {
      return 0;
    }
  }
  else {
    uVar7 = param_2 >> 0x17 & 0xff;
    if (uVar7 != 0 && uVar7 != 0xff) {
      uVar5 = param_1 & 0xffffff | 0x800000;
      uVar9 = param_2 & 0xffffff | 0x800000;
      if (uVar5 < uVar9) {
        uVar5 = uVar5 << 1;
        uVar6 = uVar6 - 1;
      }
      uVar3 = (uint)*(byte *)((uVar9 >> 0xf) + 0x200c560);
      uVar3 = uVar3 * (uVar3 * ((int)-uVar9 >> 1) + 0x80000000 >> 6) >> 0xe;
      lVar1 = (ulonglong)(uVar3 * 0x4000 + (uVar3 * (-uVar9 * uVar3 >> 0xc) >> 0xf)) *
              (ulonglong)uVar5;
      uVar4 = (uint)lVar1;
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar3 = uVar2;
      if ((int)((param_1 | 0x800000) ^ (param_2 | 0x800000)) < 0) {
        uVar3 = uVar2 | 0x80000000;
      }
      iVar8 = (uVar6 - uVar7) + 0x7e;
      if (iVar8 < 0) {
        return uVar3 & 0x80000000;
      }
      if (0xfd < iVar8) {
        if ((uVar3 & 0x80000000) == 0) {
          uVar6 = 0x7f800000;
        }
        else {
          uVar6 = 0xff800000;
        }
        return uVar6;
      }
      uVar3 = uVar3 + iVar8 * 0x800000;
      if (uVar4 >> 0x1c != 7) {
        return uVar3 - ((int)uVar4 >> 0x1f);
      }
      if ((int)(uVar9 * (uVar2 * 2 + 1) + uVar5 * -0x1000000) < 0) {
        uVar3 = uVar3 + 1;
      }
      return uVar3;
    }
    uVar5 = (param_1 ^ param_2) & 0x80000000;
    if (uVar7 == 0) {
LAB_0200c810:
      return uVar5 | 0x7f800000;
    }
  }
  if ((param_2 & 0x7fffff) == 0) {
    return 0;
  }
  return 0x7fffffff;
}

