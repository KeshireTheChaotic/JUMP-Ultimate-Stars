
void FUN_02164cc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02073fe4();
  if ((iVar1 != 0) && (iVar1 = FUN_020882c4(), iVar1 != 0)) {
    FUN_02088290();
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar3 + 0x40) + 4));
    iVar1 = FUN_020883d8();
    if ((iVar1 == 0) || (iVar1 = FUN_02088394(), iVar1 != 0)) {
      uVar5 = FUN_020883d8();
      uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
      bVar4 = (int)uVar5 != 0;
      if (bVar4) {
        uVar2 = 0x4a;
      }
      if (!bVar4) {
        uVar2 = 0x51;
      }
      func_0x021bac28(*(undefined4 *)(iVar3 + 0x54),uVar2,0,0,0,0,0,0);
      while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar3 + 0x54)), iVar1 == 0) {
        (*DAT_020a0e18)();
      }
      FUN_02164e54(iVar3);
    }
    else {
      FUN_02086c94();
    }
    FUN_02088330();
  }
  return;
}

