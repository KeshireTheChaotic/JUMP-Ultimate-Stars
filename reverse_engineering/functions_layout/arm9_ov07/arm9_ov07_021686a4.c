
void FUN_021686a4(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(iVar7 + 0x28) != 0) {
    *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + -1;
  }
  if (*(int *)(iVar7 + 0x28) == 0) {
    FUN_0207382c();
  }
  bVar1 = false;
  iVar2 = FUN_020876f8();
  if (iVar2 == 0) {
    iVar2 = FUN_02088360();
    if (iVar2 != 0) {
      bVar1 = true;
      FUN_02088330();
    }
  }
  else {
    iVar2 = 0;
    for (uVar8 = 1; uVar3 = FUN_02086d80(), uVar8 < uVar3; uVar8 = uVar8 + 1) {
      iVar4 = FUN_02088310(uVar8);
      if (iVar4 != 0) {
        iVar2 = iVar2 + 1;
      }
    }
    iVar4 = FUN_02086d80();
    if ((iVar2 == iVar4 + -1) && (*(int *)(iVar7 + 0x30) != 0)) {
      FUN_020876ac();
      uVar5 = FUN_02070cdc();
      uVar6 = FUN_020876ac();
      FUN_02086e04(uVar5,uVar6);
      (*DAT_020a0e18)();
      OS_GetTick();
      FUN_020870e8();
      FUN_02168674(8);
      FUN_020872d4();
      FUN_02168674(8);
      FUN_02087160();
      FUN_020882e0();
      bVar1 = true;
    }
  }
  if (bVar1) {
    *(undefined4 *)(iVar7 + 0x2c) = 1;
    FUN_0208c1f0();
    for (uVar8 = DAT_020afe90 - DAT_020afec3; (int)uVar8 < DAT_020afe90; uVar8 = uVar8 + 1) {
      DAT_020afec2 = DAT_020afec2 | (byte)(1 << (uVar8 & 0xff));
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02168858);
    return;
  }
  iVar2 = FUN_0208c220();
  if ((iVar2 == 0) && (iVar2 = FUN_0208c244(), iVar2 == 0)) {
    return;
  }
  if (DAT_020afeb9 == '\0') {
    FUN_0208b784(1);
    DAT_020afeb8 = 0;
  }
  *(undefined4 *)(iVar7 + 0x24) = 2;
  DAT_020afeb9 = 0;
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02168858);
  return;
}

