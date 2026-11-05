
undefined8 FUN_0200b890(uint param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0x41e;
  if (-1 < (int)param_1) {
    iVar1 = LZCOUNT(param_1);
    param_1 = param_1 << iVar1;
    iVar1 = 0x41e - iVar1;
  }
  return CONCAT44((param_1 & 0x7fffffff) >> 0xb | iVar1 << 0x14,param_1 << 0x15);
}

