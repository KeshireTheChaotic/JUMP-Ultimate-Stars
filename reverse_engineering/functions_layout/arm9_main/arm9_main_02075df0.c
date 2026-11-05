
undefined4 FUN_02075df0(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = Record::RecordLoad(&DAT_020b02b8);
  if (iVar1 == 3) {
    FUN_02073ebc(2,1);
    uVar2 = func_0x021ba49c(1,1,1);
    func_0x021bac28(uVar2,0x13,0,0,0,0,0,0,in_r3);
    while (iVar1 = func_0x021bad2c(uVar2), iVar1 == 0) {
      FUN_0207382c();
      (*DAT_020a0e18)();
    }
    func_0x021bab64(uVar2);
    uVar2 = 0;
  }
  else if (iVar1 == 4) {
    FUN_02073ebc(2,1);
    uVar2 = func_0x021ba49c(1,1,1);
    func_0x021bac28(uVar2,0x14,0,0,0,0,0,0,in_r3);
    do {
      FUN_0207382c();
      (*DAT_020a0e18)();
    } while( true );
  }
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  return uVar2;
}

