
undefined4 FUN_02162dc4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r10;
  bool in_ZR;
  
  if (in_ZR) {
                    /* WARNING: Jumptable at 0x02162dc8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(unaff_r10 & 0x900))();
    return uVar1;
  }
  if (*(char *)(param_1 + 0xa4) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0xad) != '\0') {
    if (*(int *)(param_1 + 0xb0) < 1) {
      iVar2 = FUN_02159868(param_1);
      if (iVar2 != 0) {
        FUN_020876ac();
        FUN_0208712c();
        *(undefined4 *)(param_1 + 0xb0) = 1;
      }
    }
    else {
      iVar2 = FUN_02162afc(param_1,1);
      if (iVar2 != 0) {
        return 0;
      }
      iVar2 = FUN_020876f8(0);
      if (iVar2 == 0) {
        iVar2 = FUN_02088360();
        if (iVar2 != 0) {
          FUN_02088330();
          FUN_02162b54(param_1);
          return 0;
        }
      }
      else {
        uVar3 = FUN_02086d80();
        uVar5 = 1;
        uVar3 = (1 << (uVar3 & 0xff)) - 1;
        for (uVar6 = 1; uVar4 = FUN_02086d80(), uVar6 < uVar4; uVar6 = uVar6 + 1) {
          iVar2 = FUN_02088310(uVar6);
          if (iVar2 != 0) {
            uVar5 = uVar5 | 1 << (uVar6 & 0xff);
          }
        }
        if (uVar3 == (uVar3 & uVar5)) {
          FUN_020882e0();
          FUN_02087160();
          FUN_02162b54(param_1);
          return 0;
        }
      }
    }
    iVar2 = FUN_021598b8();
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0xfffffffe;
      FUN_021586bc(*(undefined4 *)(param_1 + 0xa8),1);
      uVar1 = FUN_021586a4(*(undefined4 *)(param_1 + 0xa8));
      FUN_0207342c(0x78,0xb);
      func_0x021bac28(uVar1,0x51,0,0,0,0,0,0);
      while (iVar2 = func_0x021bad2c(uVar1), iVar2 == 0) {
        (*DAT_020a0e18)();
      }
      return 0;
    }
  }
  return 1;
}

