
void FUN_0214dce0(int *param_1)

{
  int *unaff_r4;
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))();
  }
  FUN_02064790(0xffffffff);
  DAT_020afcb8 = (uint)*(byte *)((int)unaff_r4 + 0x57);
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*unaff_r4 + 4) + 0xc))();
  (**(code **)(*(int *)unaff_r4[1] + 8))();
  FUN_0201b244();
  return;
}

