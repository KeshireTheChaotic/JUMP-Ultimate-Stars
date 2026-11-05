
int FUN_0219b4f4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0214ccf8 == 0) {
    return 0;
  }
  if (param_1 == 0xff) {
    return 0;
  }
  iVar2 = (int)*(char *)(DAT_0214ccf8 + param_1 + 0x8dc);
  if (iVar2 < 0) {
    return DAT_0214ccf8 + 0x88;
  }
  iVar1 = FUN_02176654();
  if (iVar1 == 0) {
    return 0;
  }
  return iVar2 * 0x50 + DAT_0214ccf8 + 0x8ec;
}

