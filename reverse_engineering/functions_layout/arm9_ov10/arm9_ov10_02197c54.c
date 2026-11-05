
int FUN_02197c54(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; (uint)LZCOUNT(param_1) < 0x20;
      param_1 = param_1 & ~(1 << (0x1fU - LZCOUNT(param_1) & 0xff))) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

