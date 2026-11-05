
void FUN_02166fd4(void)

{
  int unaff_r4;
  
  FUN_02167204();
  FUN_020735e4();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  DAT_020afcb8 = *(int *)(unaff_r4 + 0x34) << 0x10 | *(uint *)(unaff_r4 + 0x18) & 0xffff;
  (**(code **)(**(int **)(*(int *)(unaff_r4 + 0x1c) + 4) + 0xc))();
  (**(code **)(**(int **)(unaff_r4 + 0x20) + 8))();
  FUN_0201b244();
  return;
}

