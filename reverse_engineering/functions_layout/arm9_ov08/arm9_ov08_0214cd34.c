
uint FUN_0214cd34(void)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  
  if (DAT_0216c1c8 == 0) {
    iVar2 = 0;
    FUN_0214cf04(&local_18,0,0xc);
    iVar1 = FUN_0205611c(&local_18);
    if (iVar1 == 0) {
      iVar2 = local_18 * 0x400 + local_14 * 8 + local_10;
    }
    DAT_0216c1e4 = 0x5d588b65;
    DAT_0216c1e8 = 0x269ec3;
    DAT_0216c1c8 = 1;
    DAT_0216c1e0 = iVar2;
  }
  DAT_0216c1e0 = DAT_0216c1e8 + DAT_0216c1e0 * DAT_0216c1e4;
  return (DAT_0216c1e0 >> 0x10) * 0x7fff >> 0x10;
}

