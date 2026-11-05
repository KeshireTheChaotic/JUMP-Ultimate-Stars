
void FUN_02154fd4(undefined4 *param_1)

{
  int iVar1;
  
  func_0x021b65bc();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  FUN_02073ebc(3,1);
  while (iVar1 = FUN_0207382c(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  FUN_020735e4();
  FUN_02150b4c(*param_1);
  func_0x021a3248();
  if (param_1[0x12] != 0) {
    func_0x021bab64();
  }
  if (param_1[0x11] != 0) {
    func_0x021bd500();
  }
  if (param_1[0x13] != 0) {
    FUN_0206ae98();
  }
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 7] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 7] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 8))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 8))();
  }
  if ((int *)param_1[0x16] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x16] + 8))();
  }
  FUN_02150f1c();
  FUN_02150dbc(param_1[1]);
  if ((param_1[0x4b] != 0) && (iVar1 = func_0x0219a93c(), iVar1 == 0)) {
    func_0x0219bf68();
  }
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(param_1[1] + 4) + 0xc))();
  FUN_0201b244(param_1);
  FUN_0201ad30(DAT_020a0dd8,1,1);
  return;
}

