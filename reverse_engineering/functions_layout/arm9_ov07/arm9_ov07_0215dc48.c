
void FUN_0215dc48(undefined4 *param_1)

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
  func_0x021b65cc();
  FUN_020735e4();
  FUN_02150b4c(*param_1);
  FUN_02078f88(param_1[0x1a]);
  FUN_0207698c(param_1[0x19]);
  FUN_020763e0(param_1[0x18]);
  if (param_1[0x1c] != 0) {
    func_0x021bab64();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 8))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 8))();
  }
  if (param_1[0x1d] != 0) {
    FUN_0206ae98();
  }
  if (param_1[0x1e] != 0) {
    FUN_0206ae98();
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 0xc))();
  }
  FUN_02150dbc(param_1[1]);
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(param_1[1] + 4) + 0xc))();
  FUN_0201b244(param_1);
  return;
}

