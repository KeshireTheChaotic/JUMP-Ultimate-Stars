
uint FUN_0200b778(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_2 & 0x7fffffff) >> 0x14;
  uVar2 = 0x41e - uVar1;
  if (uVar2 == 0 || 0x41e < uVar1) {
    return ~((int)param_2 >> 0x1f) + 0x80000000;
  }
  if (0x1f < (int)uVar2) {
    return 0;
  }
  uVar1 = (param_2 << 0xb | 0x80000000 | param_1 >> 0x15) >> (uVar2 & 0xff);
  if ((int)param_2 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}

