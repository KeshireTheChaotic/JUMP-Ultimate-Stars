
undefined4 FUN_02159d98(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(char *)(param_1 + 0xa4) == '\0') {
    if (*(int *)(param_1 + 0xac) < 1) {
      iVar3 = FUN_02159868();
      if (iVar3 != 0) {
        FUN_020876ac();
        FUN_0208712c();
        *(undefined4 *)(param_1 + 0xac) = 1;
      }
    }
    else {
      iVar3 = FUN_02086c4c();
      if (iVar3 == 0) {
        iVar3 = FUN_020882c4();
        if (iVar3 == 0) {
          bVar1 = false;
        }
        else {
          FUN_02088290();
          FUN_02086c94();
          *(undefined1 *)(param_1 + 0xa5) = 0;
          bVar1 = true;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xa5) = 0;
        bVar1 = true;
      }
      if (bVar1) {
        return 0;
      }
      iVar3 = FUN_020876f8(0);
      if (iVar3 == 0) {
        iVar3 = FUN_02088360();
        if (iVar3 != 0) {
          FUN_02088330();
          FUN_020882e0();
          *(undefined1 *)(param_1 + 0xa4) = 1;
        }
      }
      else {
        iVar3 = FUN_02086d60();
        iVar4 = FUN_02086d80();
        uVar5 = FUN_02086d80();
        uVar8 = 1;
        uVar5 = (1 << (uVar5 & 0xff)) - 1U | ((1 << (iVar3 - iVar4 & 0xffU)) + -1) * 0x10;
        for (uVar9 = 1; uVar6 = FUN_02086d80(), uVar9 < uVar6; uVar9 = uVar9 + 1) {
          iVar7 = FUN_02088310(uVar9);
          if (iVar7 != 0) {
            uVar8 = uVar8 | 1 << (uVar9 & 0xff);
          }
        }
        for (uVar9 = 4; (int)uVar9 < (int)((iVar3 - iVar4) + 4U); uVar9 = uVar9 + 1) {
          iVar7 = FUN_02088310(uVar9);
          if (iVar7 != 0) {
            uVar8 = uVar8 | 1 << (uVar9 & 0xff);
          }
        }
        if (uVar5 == (uVar5 & uVar8)) {
          FUN_020882e0();
          FUN_02087160();
          *(undefined1 *)(param_1 + 0xa4) = 1;
          FUN_020882e0();
          FUN_02087160();
          *(undefined1 *)(param_1 + 0xa4) = 1;
        }
      }
    }
    iVar3 = FUN_021598b8();
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
      FUN_021586bc(*(undefined4 *)(param_1 + 0xa8),1);
      uVar2 = FUN_021586a4(*(undefined4 *)(param_1 + 0xa8));
      FUN_0207342c(0x78,0xb);
      func_0x021bac28(uVar2,0x51,0,0,0,0,0,0);
      while (iVar3 = func_0x021bad2c(uVar2), iVar3 == 0) {
        (*DAT_020a0e18)();
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

