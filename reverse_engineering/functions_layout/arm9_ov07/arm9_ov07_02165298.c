
void FUN_02165298(int *param_1)

{
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 8))();
  }
  FUN_02150dbc(*param_1);
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  DAT_020afcb8 = param_1[2];
  (**(code **)(**(int **)(*param_1 + 4) + 0xc))();
  FUN_0201b244(param_1);
  return;
}

