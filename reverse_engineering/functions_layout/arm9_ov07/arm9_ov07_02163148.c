
void FUN_02163148(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  if (piVar2[0x2c] < 0) {
    uVar1 = FUN_0214dd50();
    FUN_0214dd60(uVar1,7);
  }
  else {
    uVar1 = FUN_0214dd50();
    FUN_0214dd6c(uVar1,7);
  }
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  FUN_02158d24(*(undefined1 *)((int)piVar2 + 0xae));
  if ((int *)piVar2[1] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[1] + 8))();
  }
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*piVar2 + 4) + 0xc))();
  FUN_0201b244(piVar2);
  return;
}

