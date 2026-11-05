
void FUN_0215dafc(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_021622d4();
  if (*(byte *)(iVar1 + 0xf6) != param_1) {
    *(char *)(DAT_0216e794 + 0x43) = (char)param_1;
    FUN_021622ac(param_1);
    FUN_0215d660();
  }
  return;
}

