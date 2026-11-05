
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020508a0(void)

{
  do {
  } while ((_DAT_04000280 & 0x8000) != 0);
  return _DAT_040002a0 + 0x80000 >> 0x14 |
         (_DAT_040002a4 + (uint)(0xfff7ffff < _DAT_040002a0)) * 0x1000;
}

