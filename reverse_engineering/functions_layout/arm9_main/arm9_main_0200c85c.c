
longlong FUN_0200c85c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 0x80000000;
  uVar2 = param_1 >> 0x17 & 0xff;
  if (uVar2 == 0) {
    return (ulonglong)uVar1 << 0x20;
  }
  if (uVar2 != 0xff) {
    return CONCAT44(uVar1 | (param_1 & 0x7fffff) >> 3 | (uVar2 + 0x380) * 0x100000,param_1 << 0x1d);
  }
  if ((param_1 & 0x7fffff) == 0) {
    return (ulonglong)(uVar1 | 0x7ff00000) << 0x20;
  }
  return 0x7fffffffffffffff;
}

