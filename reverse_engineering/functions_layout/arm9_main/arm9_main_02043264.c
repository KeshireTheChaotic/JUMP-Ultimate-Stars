
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02043264(int param_1)

{
  _DAT_04000304 = _DAT_04000304 & 0x7fff | (ushort)(param_1 == 0) << 0xf;
  return;
}

