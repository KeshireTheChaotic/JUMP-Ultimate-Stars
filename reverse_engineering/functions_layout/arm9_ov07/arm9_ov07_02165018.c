
void FUN_02165018(int *param_1)

{
  FUN_02150b4c(param_1[3]);
  FUN_02150b4c(param_1[4]);
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 8))();
  }
  func_0x021bab64(param_1[2]);
  FUN_02150f1c();
  (**(code **)(*(int *)param_1[1] + 8))();
  FUN_02150dbc(*param_1);
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*param_1 + 4) + 0xc))();
  FUN_0201b244(param_1);
  return;
}

