
longlong FUN_0200b3a0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if ((int)(param_2 ^ param_4) < 0) {
    param_4 = param_4 ^ 0x80000000;
    uVar7 = param_1 - param_3;
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      uVar8 = param_2 - (param_4 + (param_3 > param_1)) ^ 0x80000000;
      bVar10 = CARRY4(param_3,uVar7);
      param_3 = param_3 + uVar7;
      param_4 = param_4 + uVar8 + (uint)bVar10;
      bVar10 = param_1 < uVar7;
      param_1 = param_1 - uVar7;
      param_2 = param_2 - (uVar8 + bVar10);
    }
    uVar8 = param_2 >> 0x14;
    param_2 = param_2 << 0xb;
    uVar6 = param_1 >> 0x15;
    uVar3 = param_2 | 0x80000000 | uVar6;
    uVar7 = param_1 * 0x800;
    if (uVar8 * 0x200000 == 0 || uVar8 * 0x200000 == -0x200000) {
      uVar3 = 0x80000000;
      if (uVar8 < 0x800) {
        uVar3 = 0;
      }
      if ((uVar8 & 0xfffff7ff) == 0) {
        if ((param_4 >> 0x14 & 0xfffff7ff) == 0) {
          param_4 = 0;
          param_3 = 0;
        }
        return CONCAT44(param_4,param_3);
      }
      if (uVar7 == 0 && ((param_2 & 0x7fffffff) == 0 && uVar6 == 0)) {
        iVar9 = (param_4 >> 0x14) * 0x200000;
        if ((iVar9 == 0) || (iVar9 != -0x200000)) {
          return (ulonglong)(uVar3 | 0x7ff00000) << 0x20;
        }
        if ((param_3 & 0x1fffff) == 0 && ((param_4 & 0xfffff) == 0 && param_3 >> 0x15 == 0)) {
          return 0x7fffffffffffffff;
        }
      }
      return 0x7fffffffffffffff;
    }
    uVar2 = param_4 << 0xb | 0x80000000 | param_3 >> 0x15;
    uVar5 = param_3 * 0x800;
    if ((param_4 >> 0x14 & 0x7ff) == 0) {
      return CONCAT44((param_2 & 0x7fffffff) >> 0xb | uVar8 << 0x14,
                      param_1 & 0x1fffff | uVar6 << 0x15);
    }
    uVar6 = uVar8 - (param_4 >> 0x14);
    if (uVar6 == 0) {
      uVar6 = uVar7 + param_3 * -0x800;
      uVar3 = uVar3 - (uVar2 + (uVar7 < uVar5));
      if (uVar3 == 0 && uVar6 == 0) {
        return 0;
      }
      uVar7 = uVar8 & 0xfffff7ff;
      if ((int)uVar3 < 0) {
        uVar5 = uVar3;
        if (-1 < (int)uVar3) {
          uVar7 = uVar7 - 1;
          uVar5 = uVar7;
        }
        if (uVar5 == 0) {
          return 0;
        }
        goto LAB_0200be00;
      }
      uVar5 = uVar6;
      if (uVar3 == 0) {
        uVar7 = uVar7 - 0x20;
        uVar5 = 0;
        uVar3 = uVar6;
        if (-1 < (int)uVar6) goto LAB_0200bdb4;
      }
      else {
LAB_0200bdb4:
        uVar6 = 0x20 - LZCOUNT(uVar3);
        uVar3 = uVar3 << LZCOUNT(uVar3) | uVar5 >> (uVar6 & 0xff);
        uVar6 = 0x20 - uVar6;
        uVar7 = uVar7 - uVar6;
        uVar5 = uVar5 << (uVar6 & 0xff);
      }
      uVar6 = uVar5;
      if ((int)uVar7 < 1) {
        return 0;
      }
LAB_0200be00:
      return CONCAT44((uVar8 & 0x800) << 0x14 | (uVar3 & 0x7fffffff) >> 0xb | uVar7 << 0x14,
                      uVar6 >> 0xb | uVar3 << 0x15);
    }
    if ((int)uVar6 < 0x21) {
      uVar4 = uVar5 >> (uVar6 & 0xff) | uVar2 << (0x20 - uVar6 & 0xff);
      if (uVar5 << (0x20 - uVar6 & 0xff) != 0) {
        uVar4 = uVar4 | 1;
      }
      uVar6 = (uVar2 >> (uVar6 & 0xff)) + (uint)(uVar7 < uVar4);
    }
    else {
      if (0x37 < (int)uVar6) {
        uVar6 = 0x3f;
      }
      uVar4 = uVar2 >> (uVar6 - 0x20 & 0xff);
      if (uVar5 != 0 || uVar2 << (0x20 - (uVar6 - 0x20) & 0xff) != 0) {
        uVar4 = uVar4 | 1;
      }
      uVar6 = (uint)(uVar7 < uVar4);
    }
    uVar3 = uVar3 - uVar6;
    uVar7 = uVar7 - uVar4;
    if ((int)uVar3 < 0) goto LAB_0200bd38;
    uVar5 = uVar8 & 0xfffff7ff;
    uVar6 = uVar7;
    if (uVar3 == 0) {
      uVar5 = uVar5 - 0x20;
      uVar6 = 0;
      uVar3 = uVar7;
      if (-1 < (int)uVar7) goto LAB_0200be40;
    }
    else {
LAB_0200be40:
      uVar7 = 0x20 - LZCOUNT(uVar3);
      uVar3 = uVar3 << LZCOUNT(uVar3) | uVar6 >> (uVar7 & 0xff);
      uVar7 = 0x20 - uVar7;
      uVar5 = uVar5 - uVar7;
      uVar6 = uVar6 << (uVar7 & 0xff);
    }
    uVar7 = uVar6;
    if ((int)uVar5 < 1) {
      return 0;
    }
    uVar8 = uVar5 | uVar8 & 0x800;
LAB_0200bd38:
    uVar6 = uVar7 >> 0xb | uVar3 << 0x15;
    uVar8 = (uVar3 & 0x7fffffff) >> 0xb | uVar8 << 0x14;
    if ((uVar7 & 0x400) == 0) {
      return CONCAT44(uVar8,uVar6);
    }
    if ((uVar7 & 0x3ff) == 0 && (uVar7 >> 0xb & 1) == 0) {
      return CONCAT44(uVar8,uVar6);
    }
    return CONCAT44(uVar8 + (0xfffffffe < uVar6),uVar6 + 1);
  }
  uVar7 = param_1 - param_3;
  iVar9 = param_2 - (param_4 + (param_3 > param_1));
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    bVar10 = CARRY4(param_3,uVar7);
    param_3 = param_3 + uVar7;
    param_4 = param_4 + iVar9 + (uint)bVar10;
    bVar10 = param_1 < uVar7;
    param_1 = param_1 - uVar7;
    param_2 = param_2 - (iVar9 + (uint)bVar10);
  }
  uVar8 = param_2 >> 0x14;
  param_2 = param_2 << 0xb;
  uVar6 = param_1 >> 0x15;
  uVar3 = param_2 | 0x80000000 | uVar6;
  uVar7 = param_1 * 0x800;
  if (uVar8 * 0x200000 == 0 || uVar8 * 0x200000 == -0x200000) {
    uVar3 = 0x80000000;
    if (uVar8 < 0x800) {
      uVar3 = 0;
    }
    if ((uVar8 & 0xfffff7ff) == 0) {
      if ((param_4 >> 0x14 & 0xfffff7ff) == 0) {
        param_4 = 0;
        param_3 = 0;
      }
      return CONCAT44(param_4,param_3);
    }
    if (uVar7 == 0 && ((param_2 & 0x7fffffff) == 0 && uVar6 == 0)) {
      iVar9 = (param_4 >> 0x14) * 0x200000;
      if (((iVar9 == 0) || (iVar9 != -0x200000)) ||
         ((param_3 & 0x1fffff) == 0 && ((param_4 & 0xfffff) == 0 && param_3 >> 0x15 == 0))) {
        return (ulonglong)(uVar3 | 0x7ff00000) << 0x20;
      }
    }
    return 0x7fffffffffffffff;
  }
  uVar5 = param_4 << 0xb | 0x80000000 | param_3 >> 0x15;
  param_3 = param_3 << 0xb;
  if ((param_4 >> 0x14 & 0x7ff) == 0) {
    return CONCAT44((param_2 & 0x7fffffff) >> 0xb | uVar8 << 0x14,param_1 & 0x1fffff | uVar6 << 0x15
                   );
  }
  uVar6 = uVar8 - (param_4 >> 0x14);
  if (uVar6 == 0) {
LAB_0200b45c:
    uVar2 = uVar7 + param_3;
    uVar6 = uVar3 + uVar5 + (uint)CARRY4(uVar7,param_3);
    if (!CARRY4(uVar3,uVar5) && !CARRY4(uVar3 + uVar5,(uint)CARRY4(uVar7,param_3)))
    goto LAB_0200b484;
  }
  else {
    if ((int)uVar6 < 0x21) {
      iVar9 = param_3 << (0x20 - uVar6 & 0xff);
      param_3 = param_3 >> (uVar6 & 0xff) | uVar5 << (0x20 - uVar6 & 0xff);
      uVar5 = uVar5 >> (uVar6 & 0xff);
      if (iVar9 != 0) {
        param_3 = param_3 | 1;
      }
      goto LAB_0200b45c;
    }
    if (0x37 < (int)uVar6) {
      uVar6 = 0x3f;
    }
    uVar4 = uVar5 >> (uVar6 - 0x20 & 0xff);
    if (param_3 != 0 || uVar5 << (0x20 - (uVar6 - 0x20) & 0xff) != 0) {
      uVar4 = uVar4 | 1;
    }
    uVar2 = uVar7 + uVar4;
    uVar6 = uVar3 + CARRY4(uVar7,uVar4);
    if (!CARRY4(uVar3,(uint)CARRY4(uVar7,uVar4))) goto LAB_0200b484;
  }
  uVar8 = uVar8 + 1;
  bVar1 = (byte)uVar6;
  uVar6 = uVar6 >> 1;
  uVar2 = uVar2 & 1 | (uint)(bVar1 & 1) << 0x1f | uVar2 >> 1;
  if ((uVar8 & 0x7ff) == 0x7ff) {
    if (uVar8 < 0x800) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x80000000;
    }
    return (ulonglong)(uVar7 | 0x7ff00000) << 0x20;
  }
LAB_0200b484:
  uVar7 = uVar2 >> 0xb | uVar6 << 0x15;
  uVar8 = (uVar6 & 0x7fffffff) >> 0xb | uVar8 << 0x14;
  if ((uVar2 & 0x400) == 0) {
    return CONCAT44(uVar8,uVar7);
  }
  if ((uVar2 & 0x3ff) == 0 && (uVar2 >> 0xb & 1) == 0) {
    return CONCAT44(uVar8,uVar7);
  }
  return CONCAT44(uVar8 + (0xfffffffe < uVar7),uVar7 + 1);
}

