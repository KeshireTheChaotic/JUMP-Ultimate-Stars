
uint FUN_0200c914(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 0x80000000) != 0) {
    if (param_1 << 1 < 0xff000001) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  if (param_1 >> 0x17 < 0x9f) {
    return (param_1 << 8 | 0x80000000) >> (0x9e - (param_1 >> 0x17) & 0xff);
  }
  return 0xffffffff;
}

