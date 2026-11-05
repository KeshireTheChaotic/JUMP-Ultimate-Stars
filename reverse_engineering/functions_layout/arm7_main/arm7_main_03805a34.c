
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_03805a34(ushort param_1)

{
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  FUN_03805b34(1);
  _DAT_040001c2 = param_1 & 0xff | 0x80;
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  FUN_03805b34(0);
  _DAT_040001c2 = 0;
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  return 0;
}

