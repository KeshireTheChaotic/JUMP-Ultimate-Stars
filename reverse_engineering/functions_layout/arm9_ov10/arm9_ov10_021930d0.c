
int FUN_021930d0(void)

{
  int iVar1;
  
  if (DAT_021a9d30 == 0) {
    iVar1 = FUN_0219133c();
    if (iVar1 == 0) {
      iVar1 = -0x1a;
    }
    else {
      FUN_02199b70(0);
      iVar1 = 0;
    }
  }
  else {
    iVar1 = FUN_0219312c();
    if (iVar1 == 0) {
      FUN_02192fec(DAT_021a9d30);
      iVar1 = FUN_021930a4(DAT_021a9d30);
      if (iVar1 != 0) {
        DAT_021a9d30 = 0;
      }
      iVar1 = -0x1a;
    }
    FUN_02192e0c();
  }
  return iVar1;
}

