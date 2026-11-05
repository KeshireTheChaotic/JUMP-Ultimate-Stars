
uint FUN_0200c954(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 & 0x80000000;
  if ((int)uVar3 < 0) {
    param_1 = -param_1;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = param_1 << LZCOUNT(param_1);
  uVar1 = (uVar2 & 0x7fffffff) >> 8;
  uVar3 = uVar3 | uVar1 | (0x9e - LZCOUNT(param_1)) * 0x800000;
  if ((uVar2 & 0xff) == 0) {
    return uVar3;
  }
  if ((uVar2 & 0x80) == 0) {
    return uVar3;
  }
  if ((uVar2 & 0x7f) != 0 || (uVar1 & 1) != 0) {
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}

