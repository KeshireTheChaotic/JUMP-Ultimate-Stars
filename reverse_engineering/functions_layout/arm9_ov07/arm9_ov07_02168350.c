
void FUN_02168350(int *param_1)

{
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xc))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 0xc))();
  }
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 8))();
  }
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 8))();
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 8))();
  }
  FUN_02075168(param_1[0x10]);
  if (param_1[0x11] != 0) {
    func_0x021bab64();
  }
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*param_1 + 4) + 0xc))();
  DAT_020afcb8 = param_1[9];
  (**(code **)(*(int *)param_1[1] + 8))();
  FUN_0201b244(param_1);
  return;
}

