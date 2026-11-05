
void FUN_0215a168(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  if (piVar1[0x2b] < 0) {
    if ((code *)piVar1[0x2f] != (code *)0x0) {
      (*(code *)piVar1[0x2f])();
    }
  }
  else if ((code *)piVar1[0x2e] != (code *)0x0) {
    (*(code *)piVar1[0x2e])();
  }
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  if (piVar1[0x2b] < 0) {
    FUN_02158d24(*(undefined1 *)((int)piVar1 + 0xa5));
  }
  else {
    FUN_02158d24(0);
    FUN_0208c11c();
    FUN_0208bd0c();
    FUN_0208bce4();
    DAT_020afe98 = FUN_0208c11c();
    DAT_020afe90 = FUN_0208bd0c();
    DAT_020afe94 = FUN_0208bd0c();
  }
  if ((int *)piVar1[1] != (int *)0x0) {
    (**(code **)(*(int *)piVar1[1] + 8))();
  }
  FUN_02088330();
  FUN_020882e0();
  FUN_02150dbc(*piVar1);
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*piVar1 + 4) + 0xc))();
  FUN_0201b244(piVar1);
  FUN_0201ad30(DAT_020a0dd8,1,1);
  return;
}

