
longlong FUN_0200b8cc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  
  uVar12 = (param_2 ^ param_4) & 0x80000000;
  uVar5 = param_2 >> 0x14;
  uVar6 = param_1 << 0xb;
  if (uVar5 * 0x200000 == 0 || uVar5 * 0x200000 == -0x200000) {
    if ((uVar5 & 0xfffff7ff) != 0) {
      if (uVar6 != 0 || ((param_2 << 0xb & 0x7fffffff) != 0 || param_1 >> 0x15 != 0)) {
        return 0x7fffffffffffffff;
      }
      iVar10 = (param_4 >> 0x14) * 0x200000;
      if (iVar10 == 0) {
        if ((param_4 << 0xb == 0 && param_3 >> 0x15 == 0) && param_3 << 0xb == 0) {
          return 0x7fffffffffffffff;
        }
      }
      else if ((iVar10 == -0x200000) &&
              (param_3 << 0xb != 0 || ((param_4 << 0xb & 0x7fffffff) != 0 || param_3 >> 0x15 != 0)))
      {
        return 0x7fffffffffffffff;
      }
      goto LAB_0200ba80;
    }
  }
  else {
    uVar7 = param_2 << 0xb | param_1 >> 0x15 | 0x80000000;
    uVar9 = param_4 >> 0x14;
    uVar1 = param_3 << 0xb;
    if (uVar9 * 0x200000 != 0 && uVar9 * 0x200000 != -0x200000) {
      uVar8 = param_4 << 0xb | param_3 >> 0x15 | 0x80000000;
      iVar10 = (uVar9 & 0xfffff7ff) + (uVar5 & 0xfffff7ff);
      lVar3 = (ulonglong)uVar8 * (ulonglong)uVar6 + ((ulonglong)uVar1 * (ulonglong)uVar6 >> 0x20);
      uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
      lVar2 = (ulonglong)uVar1 * (ulonglong)uVar7;
      uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar4 = (ulonglong)uVar8 * (ulonglong)uVar7 +
              (ulonglong)
              CONCAT14(CARRY4(uVar5,uVar9) ||
                       CARRY4(uVar5 + uVar9,(uint)CARRY4((uint)lVar2,(uint)lVar3)),
                       (int)((ulonglong)(lVar3 + lVar2) >> 0x20));
      uVar5 = (uint)lVar4;
      uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((int)(lVar3 + lVar2) != 0 || (int)((ulonglong)uVar1 * (ulonglong)uVar6) != 0) {
        uVar5 = uVar5 | 1;
      }
      if (-1 < lVar4) {
        iVar10 = iVar10 + -1;
        bVar13 = CARRY4(uVar5,uVar5);
        uVar5 = uVar5 * 2;
        uVar9 = uVar9 * 2 + (uint)bVar13;
      }
      iVar11 = iVar10 + -0x3fe;
      if ((iVar11 < 0) || (iVar11 == 0)) {
        if (iVar10 == 0x3ca) {
          return (ulonglong)uVar12 << 0x20;
        }
        if (iVar10 + -0x3ca < 0) {
          return (ulonglong)uVar12 << 0x20;
        }
        return (ulonglong)uVar12 << 0x20;
      }
      if (iVar11 * 0x100000 + 0x100000 < 0) {
        return (ulonglong)(uVar12 | 0x7ff00000) << 0x20;
      }
      uVar6 = uVar5 >> 0xb | uVar9 << 0x15;
      uVar12 = uVar12 | (uVar9 & 0x7fffffff) >> 0xb | iVar11 * 0x100000;
      if (uVar5 << 0x15 == 0) {
        return CONCAT44(uVar12,uVar6);
      }
      if ((uVar5 << 0x15 & 0x80000000) == 0) {
        return CONCAT44(uVar12,uVar6);
      }
      if ((uVar5 & 0x3ff) == 0 && (uVar5 >> 0xb & 1) == 0) {
        return CONCAT44(uVar12,uVar6);
      }
      return CONCAT44(uVar12 + (0xfffffffe < uVar6),uVar6 + 1);
    }
    if ((uVar9 & 0xfffff7ff) != 0) {
      if (uVar1 != 0 || ((param_4 << 0xb & 0x7fffffff) != 0 || param_3 >> 0x15 != 0)) {
        return 0x7fffffffffffffff;
      }
LAB_0200ba80:
      return (ulonglong)(uVar12 | 0x7ff00000) << 0x20;
    }
  }
  return (ulonglong)uVar12 << 0x20;
}

