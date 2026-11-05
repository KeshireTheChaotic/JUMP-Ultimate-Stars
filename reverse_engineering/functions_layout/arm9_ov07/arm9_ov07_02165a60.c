
void FUN_02165a60(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  func_0x021b65bc();
  uVar2 = 0;
  do {
    (*DAT_020a0e18)();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  FUN_02073ebc(3,1);
  while (iVar1 = FUN_0207382c(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  FUN_020735e4();
  FUN_02150b4c(param_1[4]);
  if (param_1[0xc] != 0) {
    FUN_02078f88();
  }
  if (param_1[0xb] != 0) {
    FUN_0207698c();
  }
  if (param_1[10] != 0) {
    FUN_020763e0();
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 8))();
    param_1[0x10] = 0;
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 8))();
    param_1[0xf] = 0;
  }
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 0xc))();
    param_1[0xe] = 0;
  }
  func_0x021bab64(param_1[3]);
  (**(code **)(*(int *)param_1[2] + 8))();
  (**(code **)(*(int *)param_1[1] + 8))();
  FUN_02150dbc(*param_1);
  FUN_02073778();
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  DAT_020afcb8 = param_1[9];
  (**(code **)(**(int **)(*param_1 + 4) + 0xc))();
  FUN_0201b244(param_1);
  return;
}

