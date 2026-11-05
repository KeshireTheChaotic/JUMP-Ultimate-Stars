
undefined8 FUN_0200b850(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0x80000000;
  if ((int)uVar2 < 0) {
    param_1 = -param_1;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = param_1 << LZCOUNT(param_1);
  return CONCAT44(uVar2 | (uVar1 & 0x7fffffff) >> 0xb | (0x41e - LZCOUNT(param_1)) * 0x100000,
                  uVar1 << 0x15);
}

