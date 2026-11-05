
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02062a84(undefined4 param_1,undefined4 param_2)

{
  do {
  } while ((_DAT_040001a4 & 0x80000000) != 0);
  DAT_040001a1 = 0xc0;
  DAT_040001a8 = (char)((uint)param_1 >> 0x18);
  DAT_040001a9 = (char)((uint)param_1 >> 0x10);
  DAT_040001aa = (char)((uint)param_1 >> 8);
  DAT_040001ab = (char)param_1;
  DAT_040001ac = (char)((uint)param_2 >> 0x18);
  DAT_040001ad = (char)((uint)param_2 >> 0x10);
  DAT_040001ae = (char)((uint)param_2 >> 8);
  DAT_040001af = (char)param_2;
  return;
}

