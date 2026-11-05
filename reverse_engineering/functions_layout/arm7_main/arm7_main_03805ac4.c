
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03805ac4(ushort param_1,ushort param_2)

{
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  FUN_03805b34(1);
  _DAT_040001c2 = param_1 & 0xff;
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  FUN_03805b34(0);
  _DAT_040001c2 = param_2 & 0xff;
  return;
}

