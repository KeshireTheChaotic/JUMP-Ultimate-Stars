
ulonglong FUN_0200d534(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  uVar5 = param_2 ^ param_4;
  uVar7 = param_2 >> 0x13 & 0xffe;
  if (uVar7 == 0 || uVar7 == 0xffe) {
    if (uVar7 == 0) {
      if ((param_4 >> 0x13 & 0xffe) == 0) goto LAB_0200d864;
      if ((param_4 & 0x7fffffff) < 0x7ff00000 ||
          (param_4 & 0x7fffffff) == 0x7ff00000 && param_3 == 0) {
        return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
      }
    }
    else if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      if ((param_4 & 0x7fffffff) < 0x7ff00000) {
        return CONCAT44(param_4 & 0x80000000 ^ param_2,param_1);
      }
      if (param_3 == 0 && (param_4 & 0xfffff) == 0) goto LAB_0200d864;
    }
    else {
      if ((param_2 & 0x80000) == 0) goto LAB_0200d864;
      if ((param_4 & 0x7fffffff) < 0x7ff00000 ||
          (param_4 & 0x7fffffff) == 0x7ff00000 && param_3 == 0) {
        return CONCAT44(param_2,param_1);
      }
    }
  }
  else {
    param_2 = param_2 & 0x1fffff | 0x100000;
    iVar8 = (int)uVar5 >> 0x1f;
    uVar5 = param_4 >> 0x13 & 0xffe;
    if (uVar5 != 0 && uVar5 != 0xffe) {
      uVar4 = param_4 & 0x1fffff | 0x100000;
      iVar8 = (uVar7 - iVar8) - uVar5;
      bVar9 = uVar4 <= param_2;
      if (param_2 == uVar4) {
        bVar9 = param_3 <= param_1;
      }
      if (!bVar9) {
        bVar9 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        param_2 = param_2 * 2 + (uint)bVar9;
        iVar8 = iVar8 + -2;
      }
      uVar5 = (uint)*(byte *)((uVar4 >> 0xc) + 0x200d56c);
      uVar7 = -param_3;
      iVar1 = uVar4 + (param_3 != 0);
      iVar3 = -iVar1;
      uVar5 = (uVar5 * iVar3 + 0x20000000 >> 7) * uVar5 >> 0xd;
      uVar5 = uVar5 * 0x4000 + (uVar5 * (uVar5 * (iVar1 * -0x400 | uVar7 >> 0x16) >> 0x10) >> 0x10);
      uVar6 = (uint)((ulonglong)(param_2 << 10 | param_1 >> 0x16) * (ulonglong)uVar5 >> 0x20);
      uVar2 = (ulonglong)uVar5 *
              (ulonglong)
              (((uint)((ulonglong)uVar7 * (ulonglong)uVar6) >> 0x1a |
               (iVar3 * uVar6 + (int)((ulonglong)uVar7 * (ulonglong)uVar6 >> 0x20)) * 0x40) +
              param_1 * 4);
      uVar5 = (uint)(uVar2 >> 0x20);
      uVar4 = uVar5 + uVar6 * 0x1000000;
      uVar5 = (uVar6 >> 8) + (uint)CARRY4(uVar5,uVar6 * 0x1000000);
      if (0x7ff < iVar8) {
        return (ulonglong)(iVar8 << 0x1f | 0x7ff00000) << 0x20;
      }
      if ((int)(iVar8 + 0x7fcU) < 0) {
        return (ulonglong)(uint)(iVar8 << 0x1f) << 0x20;
      }
      iVar8 = (uVar5 | iVar8 << 0x1f) + (iVar8 + 0x7fcU & 0xfffffffe) * 0x80000;
      if (((uVar2 & 0x80000000) == 0) &&
         (uVar6 = uVar4 * 2 | 1,
         -1 < (int)(uVar6 * -(iVar3 + (uint)(uVar7 != 0)) +
                    (int)((ulonglong)param_3 * (ulonglong)uVar6 +
                          ((ulonglong)(param_3 * (uVar5 * 2 - ((int)uVar4 >> 0x1f))) << 0x20) >>
                         0x20) + param_1 * -0x200000))) {
        return CONCAT44(iVar8,uVar4);
      }
      return CONCAT44(iVar8 + (uint)(0xfffffffe < uVar4),uVar4 + 1);
    }
    if (uVar5 == 0) {
      return (ulonglong)(iVar8 * -0x80000000 | 0x7ff00000) << 0x20;
    }
    if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
      return (ulonglong)(uint)(iVar8 * -0x80000000) << 0x20;
    }
  }
  if ((param_4 & 0x80000) != 0) {
    return CONCAT44(param_4,param_3);
  }
LAB_0200d864:
  return CONCAT44(param_2,param_1) | 0x7ff8000000000000;
}

