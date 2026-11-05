
uint FUN_0200bfb4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if ((int)(param_1 ^ param_2) < 0) {
    param_2 = param_2 ^ 0x80000000;
    if (param_1 < param_2) {
      uVar4 = param_1 - param_2 ^ 0x80000000;
      param_1 = param_1 - uVar4;
      param_2 = param_2 + uVar4;
    }
    uVar4 = param_1 >> 0x17;
    uVar1 = param_1 << 8 | 0x80000000;
    if ((uVar4 & 0xff) == 0 || (uVar4 & 0xff) == 0xff) {
      uVar1 = 0x80000000;
      if (uVar4 < 0x100) {
        uVar1 = 0;
      }
      if ((uVar4 & 0xff) == 0) {
        if ((param_2 >> 0x17 & 0xff) == 0) {
          param_2 = 0;
        }
        return param_2;
      }
      if ((param_1 & 0x7fffff) == 0) {
        uVar4 = param_2 >> 0x17 & 0xff;
        if ((uVar4 == 0) || (uVar4 < 0xff)) goto LAB_0200cee8;
        if ((param_2 & 0x7fffff) == 0) {
          return 0x7fffffff;
        }
      }
    }
    else {
      uVar7 = param_2 >> 0x17;
      uVar2 = param_2 << 8 | 0x80000000;
      if ((uVar7 & 0xff) != 0) {
        uVar7 = uVar4 - uVar7;
        if (uVar7 == 0) {
          iVar6 = uVar1 - uVar2;
          if (iVar6 == 0) {
            return 0;
          }
          iVar5 = (uVar4 & 0xfffffeff) - LZCOUNT(iVar6);
          if (iVar5 < 1) {
            return 0;
          }
          return (uVar4 & 0x100) << 0x17 | (iVar6 << LZCOUNT(iVar6) & 0x7fffffffU) >> 8 |
                 iVar5 * 0x800000;
        }
        uVar3 = uVar2 >> (uVar7 & 0xff);
        if (uVar2 << (0x20 - uVar7 & 0xff) != 0) {
          uVar3 = uVar3 | 1;
        }
        uVar1 = uVar1 - uVar3;
        if ((int)uVar1 < 0) {
          uVar7 = (uVar1 & 0x7fffffff) >> 8;
          uVar4 = uVar7 | uVar4 << 0x17;
          if ((uVar1 & 0x80) == 0) {
            return uVar4;
          }
          if ((uVar1 & 0x7f) != 0 || (uVar7 & 1) != 0) {
            uVar4 = uVar4 + 1;
          }
          return uVar4;
        }
        uVar7 = uVar1 << LZCOUNT(uVar1);
        iVar6 = (uVar4 & 0xfffffeff) - LZCOUNT(uVar1);
        if (iVar6 < 1) {
          return 0;
        }
        uVar1 = (uVar7 & 0x7fffffff) >> 8;
        uVar4 = (uVar4 & 0x100) << 0x17 | uVar1 | iVar6 * 0x800000;
        if ((uVar7 & 0xff) == 0) {
          return uVar4;
        }
        if ((uVar7 & 0x80) == 0) {
          return uVar4;
        }
        if ((uVar7 & 0x7f) != 0 || (uVar1 & 1) != 0) {
          uVar4 = uVar4 + 1;
        }
        return uVar4;
      }
      if (uVar7 < 0x100) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x80000000;
      }
      if ((uVar7 & 0xff) == 0) {
        return param_1 & 0x7fffff | (uVar4 & 0xff) << 0x17 | uVar1;
      }
      uVar1 = uVar1 ^ 0x80000000;
      if ((param_2 & 0x7fffff) == 0) {
LAB_0200cee8:
        return uVar1 | 0x7f800000;
      }
    }
    return 0x7fffffff;
  }
  iVar6 = param_1 - param_2;
  if (param_1 < param_2) {
    param_1 = param_1 - iVar6;
    param_2 = param_2 + iVar6;
  }
  uVar4 = param_1 >> 0x17;
  uVar1 = param_1 << 8 | 0x80000000;
  if ((uVar4 & 0xff) == 0 || (uVar4 & 0xff) == 0xff) {
    uVar1 = 0x80000000;
    if (uVar4 < 0x100) {
      uVar1 = 0;
    }
    if ((uVar4 & 0xff) == 0) {
      if ((param_2 >> 0x17 & 0xff) == 0) {
        param_2 = 0;
      }
      return param_2;
    }
    if ((param_1 & 0x7fffff) != 0) {
      return 0x7fffffff;
    }
    uVar4 = param_2 >> 0x17 & 0xff;
    if ((uVar4 == 0) || (uVar4 < 0xff)) goto LAB_0200c1f0;
  }
  else {
    uVar7 = param_2 >> 0x17;
    uVar2 = param_2 << 8 | 0x80000000;
    if ((uVar7 & 0xff) != 0) {
      uVar7 = uVar4 - uVar7;
      if ((uVar7 != 0) &&
         (iVar6 = uVar2 << (0x20 - uVar7 & 0xff), uVar2 = uVar2 >> (uVar7 & 0xff), iVar6 != 0)) {
        uVar2 = uVar2 | 1;
      }
      uVar7 = uVar1 + uVar2;
      if (CARRY4(uVar1,uVar2)) {
        uVar7 = uVar7 & 1 | uVar7 >> 1;
        uVar4 = uVar4 + 1;
        if ((uVar4 & 0xff) == 0xff) {
          if (uVar4 < 0x100) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0x80000000;
          }
          return uVar4 | 0x7f800000;
        }
      }
      uVar1 = (uVar7 & 0x7fffffff) >> 8;
      uVar4 = uVar1 | uVar4 << 0x17;
      if ((uVar7 & 0x80) == 0) {
        return uVar4;
      }
      if ((uVar7 & 0x7f) != 0 || (uVar1 & 1) != 0) {
        uVar4 = uVar4 + 1;
      }
      return uVar4;
    }
    if (uVar4 < 0x100) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x80000000;
    }
    if ((uVar7 & 0xff) == 0) {
      return param_1 & 0x7fffff | (uVar4 & 0xff) << 0x17 | uVar1;
    }
  }
  if ((param_2 & 0x7fffff) != 0) {
    return 0x7fffffff;
  }
LAB_0200c1f0:
  return uVar1 | 0x7f800000;
}

