
void FUN_020884e4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_02087724();
  if (iVar1 == 2) {
    return;
  }
  iVar1 = FUN_020876f8();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 != 0x70000004) {
      return;
    }
    iVar1 = (**(code **)*param_1)();
    if (iVar1 != 0x1b && iVar1 != 0x23) {
      return;
    }
    uVar2 = (**(code **)(*param_1 + 4))();
    uVar3 = FUN_02086d80();
    if (uVar2 < uVar3) {
      uVar2 = (*(code *)((undefined4 *)*param_1)[1])();
      *(byte *)(iRam02088658 + 2) = *(byte *)(iRam02088658 + 2) | (byte)(1 << (uVar2 & 0xff));
      (**(code **)*param_1)();
      (**(code **)(*param_1 + 4))();
      return;
    }
    (**(code **)*param_1)();
    (**(code **)(*param_1 + 4))();
    return;
  }
  iVar1 = (**(code **)(*param_1 + 8))();
  if (iVar1 != 0x70000004) {
    return;
  }
  iVar1 = (**(code **)*param_1)();
  if (iVar1 == 0x1b) {
    iVar1 = (**(code **)(*param_1 + 4))();
    if (iVar1 == 0) {
      uVar4 = FUN_020876ac();
      FUN_02086e38(param_3,uVar4);
      return;
    }
    return;
  }
  if (iVar1 != 0x23) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 4))();
  if (iVar1 == 0) {
    uVar4 = FUN_020876ac();
    FUN_02086e04(param_2,uVar4);
    return;
  }
  return;
}

