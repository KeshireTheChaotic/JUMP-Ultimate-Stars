
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_02064efc(int param_1)

{
  ushort uVar1;
  
  uVar1 = _DAT_04000004 & 8;
  if (param_1 == 0) {
    _DAT_04000004 = _DAT_04000004 & 0xfff7;
  }
  else {
    _DAT_04000004 = _DAT_04000004 | 8;
  }
  return uVar1;
}

