
void FUN_0214dcfc(void)

{
  int *unaff_r4;
  
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

