
void FUN_02155c20(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  if (piVar2[0x17c] < 0) {
    func_0x0219af04();
    uVar1 = FUN_0214dd50();
    FUN_0214dd60(uVar1,0xe);
  }
  else if (piVar2[0x17c] == 0x7ff0) {
    func_0x0219af04();
    uVar1 = FUN_0214dd50();
    FUN_0214dd60(uVar1,0x11);
  }
  else {
    uVar1 = FUN_0214dd50();
    FUN_0214dda4(uVar1,piVar2[0x17d]);
    uVar1 = FUN_0214dd50();
    FUN_0214dd60(uVar1,0x12);
  }
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (**(code **)(*(int *)piVar2[1] + 8))();
  FUN_02150dbc(*piVar2);
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*piVar2 + 4) + 0xc))();
  FUN_0201b244(piVar2);
  return;
}

