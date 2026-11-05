
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e937c(ushort param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0380fff4;
  *(ushort *)(_DAT_0380fff4 + 0x5f0) = (param_1 & 0xfff8) + 5;
  *(ushort *)(iVar1 + 0x5f2) = param_2 | 1;
  return;
}

