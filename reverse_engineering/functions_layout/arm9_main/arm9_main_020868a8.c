
void FUN_020868a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + 0x22) = 1;
  FUN_02086998();
  iVar1 = thunk_FUN_0208c51c();
  if (((iVar1 != 0) || (iVar1 = FUN_02088394(), iVar1 != 0)) && (*(char *)(param_1 + 0x21) == '\0'))
  {
    iVar1 = func_0x021bacf4(*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      func_0x021bace0(*(undefined4 *)(param_1 + 8));
      while (iVar1 = func_0x021bad2c(*(undefined4 *)(param_1 + 8)), iVar1 == 0) {
        (*DAT_020a0e18)();
      }
    }
    FUN_0207342c(0x78,0xb);
    uVar4 = thunk_FUN_0208c51c();
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    bVar3 = (int)uVar4 != 0;
    if (bVar3) {
      uVar2 = 0x48;
    }
    if (!bVar3) {
      uVar2 = 0x4a;
    }
    func_0x021bac28(*(undefined4 *)(param_1 + 8),uVar2,0,0,0,0,0,0);
    while (iVar1 = func_0x021bad2c(*(undefined4 *)(param_1 + 8)), iVar1 == 0) {
      (*DAT_020a0e18)();
    }
  }
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 0xc));
  }
  return;
}

