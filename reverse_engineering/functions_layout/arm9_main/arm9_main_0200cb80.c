
uint FUN_0200cb80(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 < 0x7f800000) {
    uVar6 = param_1 >> 0x17;
    if (uVar6 == 0) {
      return 0;
    }
    uVar1 = param_1 & 0x807fffff | 0x800000;
    iVar5 = (int)uVar6 >> 1;
    if (!(bool)((byte)uVar6 & 1)) {
      iVar5 = iVar5 + -1;
      uVar1 = uVar1 << 1;
    }
    iVar2 = uVar1 << 1;
    uVar1 = 0;
    iVar3 = 0;
    uVar6 = 0x1000000;
    do {
      iVar4 = iVar3 + uVar6;
      if (iVar4 <= iVar2) {
        iVar3 = iVar4 + uVar6;
        iVar2 = iVar2 - iVar4;
        uVar1 = uVar1 + uVar6;
      }
      iVar2 = iVar2 * 2;
      uVar6 = uVar6 >> 1;
    } while (uVar6 != 0);
    if (iVar2 == 0) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return (uVar1 >> 1) + (uint)((byte)uVar1 & 1) + 0x1f800000 + iVar5 * 0x800000;
  }
  if (param_1 == 0x7f800000) {
    return 0x7f800000;
  }
  if (((param_1 & 0x80000000) == 0) || ((param_1 & 0x7fffffff) >> 0x17 != 0)) {
    DAT_020a0c10 = 0x21;
    return param_1 | 0x7fc00000;
  }
  return 0;
}

