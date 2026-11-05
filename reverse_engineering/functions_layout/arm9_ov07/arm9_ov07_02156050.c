
void FUN_02156050(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = func_0x0219b620();
  if (iVar1 < 0) {
    return;
  }
  if (*(short *)(iVar2 + 0x110) != 0) {
    *(undefined1 *)(iVar2 + 0x12) = 1;
    *(short *)(iVar2 + 0x110) = *(short *)(iVar2 + 0x110) + -1;
    if (*(short *)(iVar2 + 0x110) == 0) {
      func_0x0219b2e4();
      func_0x0219ccbc();
      FUN_02088808();
      *(undefined4 *)(iVar2 + 0xac) = 2;
      *(undefined1 *)(iVar2 + 0xa8) = 1;
      FUN_020282f4(*(undefined4 *)(param_1 + 4));
      return;
    }
    return;
  }
  iVar1 = func_0x0219b1f8();
  if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(iVar2 + 0x12) = 1;
  uVar3 = 0;
  do {
    (*DAT_020a0e18)();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x3c);
  func_0x0219b2e4(1);
  while (iVar1 = func_0x0219b36c(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  iVar1 = func_0x0219b408();
  if (iVar1 != 0) {
    func_0x0219b1c4(1);
    func_0x0219ccbc();
    FUN_02088808();
    *(undefined4 *)(iVar2 + 0xac) = 1;
    *(undefined1 *)(iVar2 + 0xa8) = 1;
    FUN_020282f4(*(undefined4 *)(param_1 + 4));
    return;
  }
  iVar1 = func_0x0219b614();
  if (iVar1 == 0) {
    func_0x0219b1c4(1);
    func_0x0219b26c(0);
  }
  *(undefined1 *)(iVar2 + 0x12) = 0;
  FUN_021586bc(*(undefined4 *)(iVar2 + 0xa4));
  FUN_0207342c(0x78,2);
  return;
}

