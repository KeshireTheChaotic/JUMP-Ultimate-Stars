
void FUN_0214dc38(void)

{
  int *unaff_r4;
  int iVar1;
  
  *(byte *)((int)unaff_r4 + 0x56) = *(byte *)((int)unaff_r4 + 0x56) & 0xfb;
  FUN_0207120c(1,0);
  func_0x021bab64(unaff_r4[0xe]);
  FUN_02152360(unaff_r4[0x11]);
  FUN_0207597c(unaff_r4[0x10]);
  FUN_021517b8(unaff_r4[0xf]);
  if (unaff_r4[5] != 0) {
    (**(code **)(**(int **)(unaff_r4[5] + 4) + 0xc))();
  }
  iVar1 = 0;
  do {
    if ((int *)unaff_r4[iVar1 + 6] != (int *)0x0) {
      (**(code **)(*(int *)unaff_r4[iVar1 + 6] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 0;
  do {
    if (unaff_r4[iVar1 + 9] != 0) {
      FUN_02034d7c();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if ((int *)unaff_r4[4] != (int *)0x0) {
    (**(code **)(*(int *)unaff_r4[4] + 0xc))();
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

