
uint FUN_0200c8e0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 & 0x7fffffff) >> 0x17;
  uVar2 = 0x9e - uVar1;
  if (uVar2 == 0 || 0x9e < uVar1) {
    return ~((int)param_1 >> 0x1f) + 0x80000000;
  }
  uVar1 = (param_1 << 8 | 0x80000000) >> (uVar2 & 0xff);
  if ((int)param_1 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}

