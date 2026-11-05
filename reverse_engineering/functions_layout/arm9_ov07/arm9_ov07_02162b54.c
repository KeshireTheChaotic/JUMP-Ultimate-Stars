
void FUN_02162b54(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  
  FUN_021586bc(*(undefined4 *)(param_1 + 0xa8),1);
  *(undefined1 *)(param_1 + 0xad) = 0;
  FUN_020876ac();
  FUN_0208712c();
  (*(code *)*_FUN_02162dc4)();
  puVar1 = _FUN_02162dc4;
  while( true ) {
    uVar2 = FUN_020876ac();
    iVar3 = FUN_02088310(uVar2 ^ 1);
    if (iVar3 != 0) {
      FUN_020882e0();
      iVar3 = FUN_02071f08();
      uVar4 = FUN_02070fd4();
      func_0x0219bacc(uVar4,iVar3 + 0x40);
      uVar4 = FUN_02071f10(*(undefined1 *)(FUN_02162dc4 + 0x24));
      FUN_02051890(uVar4,param_1 + 0xc0,0x5c);
      uVar4 = FUN_02071f08();
      FUN_02051890(uVar4,param_1 + 0x11c,0x4c);
      uVar4 = FUN_020876ac();
      FUN_02086e04(param_1 + 0x11c,uVar4);
      (*(code *)*_FUN_02162dc4)();
      uVar4 = FUN_020876ac();
      FUN_02086e38(param_1 + 0xc0,uVar4);
      puVar1 = _FUN_02162dc4;
      while( true ) {
        bVar7 = *(int *)(param_1 + 0xb8) != 0;
        iVar3 = 0;
        if (bVar7) {
          iVar3 = *(int *)(param_1 + 0xb4);
        }
        if (bVar7 && iVar3 != 0) break;
        iVar3 = FUN_02162afc(param_1,1);
        if (iVar3 != 0) {
          return;
        }
        (*(code *)*puVar1)();
      }
      FUN_020876ac();
      FUN_0208712c();
      (*(code *)*_FUN_02162dc4)();
      iVar3 = FUN_020876ac();
      puVar1 = _FUN_02162dc4;
      if (iVar3 == 0) {
        while( true ) {
          iVar6 = 1;
          iVar3 = FUN_02088310(1);
          if (iVar3 != 0) {
            iVar6 = 2;
          }
          if (iVar6 == 2) break;
          iVar3 = FUN_02162afc(param_1,1);
          if (iVar3 != 0) {
            return;
          }
          (*(code *)*puVar1)();
        }
        thunk_FUN_0208c17c();
      }
      else {
        while (iVar3 = FUN_021598b8(), iVar3 == 0) {
          iVar3 = FUN_02162afc(param_1,0);
          if (iVar3 != 0) {
            return;
          }
          (*(code *)*puVar1)();
        }
      }
      FUN_02158d24(1);
      FUN_02086c24();
      FUN_02070cdc(*(undefined4 *)(param_1 + 0xbc));
      iVar3 = FUN_02072134();
      if (iVar3 < 0) {
        iVar3 = FUN_02072090();
      }
      uVar4 = FUN_02070cdc(*(undefined4 *)(param_1 + 0xbc));
      uVar5 = FUN_02070ca4(*(undefined4 *)(param_1 + 0xbc));
      FUN_02151888(iVar3,uVar4,uVar5,4);
      iVar6 = FUN_02162dc4;
      *(undefined1 *)(FUN_02162dc4 + 0x20) = 2;
      *(char *)(iVar6 + 0x24) = (char)iVar3;
      uVar4 = FUN_021586a4(*(undefined4 *)(param_1 + 0xa8));
      func_0x021bac28(uVar4,0x4d,0,0,0,0,0,0);
      puVar1 = _FUN_02162dc4;
      while (iVar3 = func_0x021bad2c(uVar4), iVar3 == 0) {
        (*(code *)*puVar1)();
      }
      return;
    }
    iVar3 = FUN_02162afc(param_1,1);
    if (iVar3 != 0) break;
    (*(code *)*puVar1)();
  }
  return;
}

