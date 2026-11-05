
longlong FUN_0200bc6c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  if (-1 < (int)(param_2 ^ param_4)) {
    uVar6 = param_1 - param_3;
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      uVar9 = param_2 - (param_4 + (param_3 > param_1)) ^ 0x80000000;
      bVar10 = CARRY4(param_3,uVar6);
      param_3 = param_3 + uVar6;
      param_4 = param_4 + uVar9 + (uint)bVar10;
      bVar10 = param_1 < uVar6;
      param_1 = param_1 - uVar6;
      param_2 = param_2 - (uVar9 + bVar10);
    }
    uVar9 = param_2 >> 0x14;
    param_2 = param_2 << 0xb;
    uVar5 = param_1 >> 0x15;
    uVar2 = param_2 | 0x80000000 | uVar5;
    uVar6 = param_1 * 0x800;
    if (uVar9 * 0x200000 == 0 || uVar9 * 0x200000 == -0x200000) {
      uVar2 = 0x80000000;
      if (uVar9 < 0x800) {
        uVar2 = 0;
      }
      if ((uVar9 & 0xfffff7ff) == 0) {
        if ((param_4 >> 0x14 & 0xfffff7ff) == 0) {
          param_4 = 0;
          param_3 = 0;
        }
        return CONCAT44(param_4,param_3);
      }
      if (uVar6 == 0 && ((param_2 & 0x7fffffff) == 0 && uVar5 == 0)) {
        iVar8 = (param_4 >> 0x14) * 0x200000;
        if ((iVar8 == 0) || (iVar8 != -0x200000)) {
          return (ulonglong)(uVar2 | 0x7ff00000) << 0x20;
        }
        if ((param_3 & 0x1fffff) == 0 && ((param_4 & 0xfffff) == 0 && param_3 >> 0x15 == 0)) {
          return 0x7fffffffffffffff;
        }
      }
      return 0x7fffffffffffffff;
    }
    uVar4 = param_4 << 0xb | 0x80000000 | param_3 >> 0x15;
    uVar7 = param_3 * 0x800;
    if ((param_4 >> 0x14 & 0x7ff) == 0) {
      return CONCAT44((param_2 & 0x7fffffff) >> 0xb | uVar9 << 0x14,
                      param_1 & 0x1fffff | uVar5 << 0x15);
    }
    uVar5 = uVar9 - (param_4 >> 0x14);
    if (uVar5 == 0) {
      uVar5 = uVar6 + param_3 * -0x800;
      uVar2 = uVar2 - (uVar4 + (uVar6 < uVar7));
      if (uVar2 == 0 && uVar5 == 0) {
        return 0;
      }
      uVar6 = uVar9 & 0xfffff7ff;
      if ((int)uVar2 < 0) {
        uVar7 = uVar2;
        if (-1 < (int)uVar2) {
          uVar6 = uVar6 - 1;
          uVar7 = uVar6;
        }
        if (uVar7 == 0) {
          return 0;
        }
        goto LAB_0200be00;
      }
      uVar7 = uVar5;
      if (uVar2 == 0) {
        uVar6 = uVar6 - 0x20;
        uVar7 = 0;
        uVar2 = uVar5;
        if (-1 < (int)uVar5) goto LAB_0200bdb4;
      }
      else {
LAB_0200bdb4:
        uVar5 = 0x20 - LZCOUNT(uVar2);
        uVar2 = uVar2 << LZCOUNT(uVar2) | uVar7 >> (uVar5 & 0xff);
        uVar5 = 0x20 - uVar5;
        uVar6 = uVar6 - uVar5;
        uVar7 = uVar7 << (uVar5 & 0xff);
      }
      uVar5 = uVar7;
      if ((int)uVar6 < 1) {
        return 0;
      }
LAB_0200be00:
      return CONCAT44((uVar9 & 0x800) << 0x14 | (uVar2 & 0x7fffffff) >> 0xb | uVar6 << 0x14,
                      uVar5 >> 0xb | uVar2 << 0x15);
    }
    if ((int)uVar5 < 0x21) {
      uVar3 = uVar7 >> (uVar5 & 0xff) | uVar4 << (0x20 - uVar5 & 0xff);
      if (uVar7 << (0x20 - uVar5 & 0xff) != 0) {
        uVar3 = uVar3 | 1;
      }
      uVar5 = (uVar4 >> (uVar5 & 0xff)) + (uint)(uVar6 < uVar3);
    }
    else {
      if (0x37 < (int)uVar5) {
        uVar5 = 0x3f;
      }
      uVar3 = uVar4 >> (uVar5 - 0x20 & 0xff);
      if (uVar7 != 0 || uVar4 << (0x20 - (uVar5 - 0x20) & 0xff) != 0) {
        uVar3 = uVar3 | 1;
      }
      uVar5 = (uint)(uVar6 < uVar3);
    }
    uVar2 = uVar2 - uVar5;
    uVar6 = uVar6 - uVar3;
    if ((int)uVar2 < 0) goto LAB_0200bd38;
    uVar7 = uVar9 & 0xfffff7ff;
    uVar5 = uVar6;
    if (uVar2 == 0) {
      uVar7 = uVar7 - 0x20;
      uVar5 = 0;
      uVar2 = uVar6;
      if (-1 < (int)uVar6) goto LAB_0200be40;
    }
    else {
LAB_0200be40:
      uVar6 = 0x20 - LZCOUNT(uVar2);
      uVar2 = uVar2 << LZCOUNT(uVar2) | uVar5 >> (uVar6 & 0xff);
      uVar6 = 0x20 - uVar6;
      uVar7 = uVar7 - uVar6;
      uVar5 = uVar5 << (uVar6 & 0xff);
    }
    uVar6 = uVar5;
    if ((int)uVar7 < 1) {
      return 0;
    }
    uVar9 = uVar7 | uVar9 & 0x800;
LAB_0200bd38:
    uVar5 = uVar6 >> 0xb | uVar2 << 0x15;
    uVar9 = (uVar2 & 0x7fffffff) >> 0xb | uVar9 << 0x14;
    if ((uVar6 & 0x400) == 0) {
      return CONCAT44(uVar9,uVar5);
    }
    if ((uVar6 & 0x3ff) == 0 && (uVar6 >> 0xb & 1) == 0) {
      return CONCAT44(uVar9,uVar5);
    }
    return CONCAT44(uVar9 + (0xfffffffe < uVar5),uVar5 + 1);
  }
  param_4 = param_4 ^ 0x80000000;
  uVar6 = param_1 - param_3;
  iVar8 = param_2 - (param_4 + (param_3 > param_1));
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    bVar10 = CARRY4(param_3,uVar6);
    param_3 = param_3 + uVar6;
    param_4 = param_4 + iVar8 + (uint)bVar10;
    bVar10 = param_1 < uVar6;
    param_1 = param_1 - uVar6;
    param_2 = param_2 - (iVar8 + (uint)bVar10);
  }
  uVar9 = param_2 >> 0x14;
  param_2 = param_2 << 0xb;
  uVar5 = param_1 >> 0x15;
  uVar2 = param_2 | 0x80000000 | uVar5;
  uVar6 = param_1 * 0x800;
  if (uVar9 * 0x200000 == 0 || uVar9 * 0x200000 == -0x200000) {
    uVar2 = 0x80000000;
    if (uVar9 < 0x800) {
      uVar2 = 0;
    }
    if ((uVar9 & 0xfffff7ff) == 0) {
      if ((param_4 >> 0x14 & 0xfffff7ff) == 0) {
        param_4 = 0;
        param_3 = 0;
      }
      return CONCAT44(param_4,param_3);
    }
    if (uVar6 == 0 && ((param_2 & 0x7fffffff) == 0 && uVar5 == 0)) {
      iVar8 = (param_4 >> 0x14) * 0x200000;
      if (((iVar8 == 0) || (iVar8 != -0x200000)) ||
         ((param_3 & 0x1fffff) == 0 && ((param_4 & 0xfffff) == 0 && param_3 >> 0x15 == 0))) {
        return (ulonglong)(uVar2 | 0x7ff00000) << 0x20;
      }
    }
    return 0x7fffffffffffffff;
  }
  uVar7 = param_4 << 0xb | 0x80000000 | param_3 >> 0x15;
  param_3 = param_3 << 0xb;
  if ((param_4 >> 0x14 & 0x7ff) == 0) {
    return CONCAT44((param_2 & 0x7fffffff) >> 0xb | uVar9 << 0x14,param_1 & 0x1fffff | uVar5 << 0x15
                   );
  }
  uVar5 = uVar9 - (param_4 >> 0x14);
  if (uVar5 == 0) {
LAB_0200b45c:
    uVar4 = uVar6 + param_3;
    uVar5 = uVar2 + uVar7 + (uint)CARRY4(uVar6,param_3);
    if (!CARRY4(uVar2,uVar7) && !CARRY4(uVar2 + uVar7,(uint)CARRY4(uVar6,param_3)))
    goto LAB_0200b484;
  }
  else {
    if ((int)uVar5 < 0x21) {
      iVar8 = param_3 << (0x20 - uVar5 & 0xff);
      param_3 = param_3 >> (uVar5 & 0xff) | uVar7 << (0x20 - uVar5 & 0xff);
      uVar7 = uVar7 >> (uVar5 & 0xff);
      if (iVar8 != 0) {
        param_3 = param_3 | 1;
      }
      goto LAB_0200b45c;
    }
    if (0x37 < (int)uVar5) {
      uVar5 = 0x3f;
    }
    uVar3 = uVar7 >> (uVar5 - 0x20 & 0xff);
    if (param_3 != 0 || uVar7 << (0x20 - (uVar5 - 0x20) & 0xff) != 0) {
      uVar3 = uVar3 | 1;
    }
    uVar4 = uVar6 + uVar3;
    uVar5 = uVar2 + CARRY4(uVar6,uVar3);
    if (!CARRY4(uVar2,(uint)CARRY4(uVar6,uVar3))) goto LAB_0200b484;
  }
  uVar9 = uVar9 + 1;
  bVar1 = (byte)uVar5;
  uVar5 = uVar5 >> 1;
  uVar4 = uVar4 & 1 | (uint)(bVar1 & 1) << 0x1f | uVar4 >> 1;
  if ((uVar9 & 0x7ff) == 0x7ff) {
    if (uVar9 < 0x800) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x80000000;
    }
    return (ulonglong)(uVar6 | 0x7ff00000) << 0x20;
  }
LAB_0200b484:
  uVar6 = uVar4 >> 0xb | uVar5 << 0x15;
  uVar9 = (uVar5 & 0x7fffffff) >> 0xb | uVar9 << 0x14;
  if ((uVar4 & 0x400) == 0) {
    return CONCAT44(uVar9,uVar6);
  }
  if ((uVar4 & 0x3ff) == 0 && (uVar4 >> 0xb & 1) == 0) {
    return CONCAT44(uVar9,uVar6);
  }
  return CONCAT44(uVar9 + (0xfffffffe < uVar6),uVar6 + 1);
}

