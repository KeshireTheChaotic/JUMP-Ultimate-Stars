
uint FUN_0200b6c4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_2 & 0x80000000;
  uVar2 = param_2 >> 0x14 & 0xfffff7ff;
  if (uVar2 == 0) {
    return uVar1;
  }
  if (0xffdfffff < (param_2 >> 0x14) << 0x15) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return uVar1 | 0x7f800000;
    }
    return 0x7fffffff;
  }
  iVar3 = uVar2 - 0x380;
  if (uVar2 < 0x380 || iVar3 == 0) {
    if (uVar2 == 0x369) {
      return uVar1;
    }
    if ((int)(uVar2 - 0x369) < 0) {
      return uVar1;
    }
    return uVar1;
  }
  if (0xfe < iVar3) {
    return uVar1 | 0x7f800000;
  }
  uVar1 = uVar1 | (param_2 & 0xfffff) << 3 | param_1 >> 0x1d | iVar3 * 0x800000;
  if (param_1 << 3 == 0) {
    return uVar1;
  }
  if ((param_1 << 3 & 0x80000000) == 0) {
    return uVar1;
  }
  if ((param_1 & 0xfffffff) != 0 || (param_1 >> 0x1d & 1) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

