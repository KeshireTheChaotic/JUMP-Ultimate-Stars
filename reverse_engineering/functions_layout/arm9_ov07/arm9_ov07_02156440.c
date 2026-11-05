
void FUN_02156440(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  if (piVar3[0x2b] < 1) {
    func_0x0219d6c4();
    uVar2 = FUN_0214dd50();
    FUN_0214dd60(uVar2,0x10);
  }
  else {
    iVar1 = func_0x0219b614();
    if (iVar1 != 0) {
      func_0x0219d6c4();
    }
    func_0x0219b614();
    func_0x0219a564();
    FUN_02087600();
    uVar2 = FUN_0214dd50();
    FUN_0214dd6c(uVar2,0xf);
  }
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  if ((int *)piVar3[1] != (int *)0x0) {
    (**(code **)(*(int *)piVar3[1] + 8))();
  }
  if ((int *)piVar3[2] != (int *)0x0) {
    (**(code **)(*(int *)piVar3[2] + 8))();
  }
  FUN_02150dbc(*piVar3);
  if ((0 < piVar3[0x2b]) && (iVar1 = func_0x0219a93c(), iVar1 == 0)) {
    func_0x0219bf68();
  }
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*piVar3 + 4) + 0xc))();
  FUN_0201b244(piVar3);
  return;
}

