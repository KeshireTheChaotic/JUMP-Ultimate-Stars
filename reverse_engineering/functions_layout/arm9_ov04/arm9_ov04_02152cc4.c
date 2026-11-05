
void FUN_02152cc4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  func_0x021b65bc();
  FUN_0207372c(0x38);
  if (param_2 == 0) {
    uVar3 = FUN_0214ce64();
    FUN_0214ce74(uVar3,0);
  }
  else if (*(char *)(param_1 + 0xd4) == '\0') {
    uVar2 = 0;
    do {
      (*DAT_020a0e18)();
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
  }
  else {
    FUN_020876ac();
    FUN_0208712c();
    iVar1 = FUN_020876f8();
    if (iVar1 != 0) {
      uVar2 = FUN_020876ac();
      *(byte *)(param_1 + 0xbf) = *(byte *)(param_1 + 0xbf) | (byte)(1 << (uVar2 & 0xff));
      FUN_0215308c(param_1);
    }
    while (*(char *)(param_1 + 0xbe) == '\0') {
      (*DAT_020a0e18)();
    }
    FUN_020882e0();
    FUN_02088330();
  }
  if (*(char *)(param_1 + 0xc0) == '\0') {
    FUN_02073ebc(3,1);
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  while (iVar1 = FUN_0207382c(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  if (*(char *)(param_1 + 0xd4) != '\0') {
    FUN_02086cac(0);
  }
  FUN_0214e4b8(*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 0xb0) != 0) {
    func_0x021bd500();
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_02152680();
  }
  FUN_0214fb48(param_1);
  FUN_0201b244(param_1);
  return;
}

