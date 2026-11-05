
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ec4e4(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_0380fff4;
  *(ushort *)(_DAT_0380fff4 + 0x52e) =
       *(ushort *)(_DAT_0380fff4 + 0x52e) & ~(ushort)(1 << (param_1 & 0xff)) |
       (ushort)(param_2 << (param_1 & 0xff));
  if ((*(ushort *)(iVar1 + 0x52e) & ~*(ushort *)(iVar1 + 0x532)) == 0) {
    _DAT_048080ae = 8;
  }
  else {
    _DAT_048080ac = 8;
  }
  return;
}

