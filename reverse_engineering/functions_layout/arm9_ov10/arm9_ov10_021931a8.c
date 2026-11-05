
int FUN_021931a8(void)

{
  int iVar1;
  
  if (DAT_021a9d28 == 0) {
    DAT_021a9d28 = DAT_021a8538;
  }
  iVar1 = FUN_021930d0();
  while (iVar1 == -0x1a) {
    FUN_02052ea0(100);
    iVar1 = FUN_021930d0();
  }
  iVar1 = FUN_021919c8();
  if (-1 < iVar1) {
    FUN_021912ec();
    FUN_02191330(0);
    if (*(int *)(DAT_021a9d20 + 0x28) == 0) {
      (**(code **)(DAT_021a9d20 + 0x1c))(DAT_021a9d50);
    }
    DAT_021a9d20 = 0;
  }
  return iVar1;
}

