
void FUN_0214dc8c(void)

{
  int *unaff_r4;
  int iVar1;
  
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

