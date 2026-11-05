
bool FUN_0214d958(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  DAT_0216ad50 = 0;
  do {
    uVar1 = FUN_0214d508(0);
    if ((uVar1 & 1 << (iVar3 + 1U & 0xff)) == 0) {
      uVar2 = FUN_0208a4dc(iVar3 + 1U);
      FUN_020517fc(uVar2,0,6);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  FUN_0214d14c();
  uVar1 = 0;
  while ((uVar1 < 0xb4 && (iVar3 = FUN_0214d4f8(), iVar3 != 4))) {
    iVar3 = FUN_0214d4f8();
    if (iVar3 == 7) {
      return false;
    }
    (*DAT_020a0e18)();
    uVar1 = uVar1 + 1;
  }
  uVar1 = 0;
  while ((uVar1 < 0xb4 && (iVar3 = FUN_0214d4f8(), iVar3 != 5))) {
    iVar3 = FUN_0214d4f8();
    if (iVar3 == 7) {
      return false;
    }
    (*DAT_020a0e18)();
    uVar1 = uVar1 + 1;
  }
  iVar3 = FUN_0214d4f8();
  return iVar3 == 5;
}

