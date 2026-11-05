
void FUN_02150dec(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  FUN_020735e4();
  if ((int *)piVar2[0x13] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[0x13] + 8))();
  }
  if (piVar2[0x14] != 0) {
    FUN_0206ae98();
  }
  iVar1 = 0;
  do {
    if (piVar2[iVar1 + 0x15] != 0) {
      FUN_0206b138();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  iVar1 = 0;
  do {
    if ((int *)piVar2[iVar1 + 2] != (int *)0x0) {
      (**(code **)(*(int *)piVar2[iVar1 + 2] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  iVar1 = 0;
  do {
    if ((int *)piVar2[iVar1 + 0xe] != (int *)0x0) {
      (**(code **)(*(int *)piVar2[iVar1 + 0xe] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  iVar1 = 0;
  do {
    if ((int *)piVar2[iVar1 + 10] != (int *)0x0) {
      (**(code **)(*(int *)piVar2[iVar1 + 10] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  DAT_020afcb8 = (uint)*(byte *)((int)piVar2 + 0x82);
  (**(code **)(**(int **)(*piVar2 + 4) + 0xc))();
  (**(code **)(*(int *)piVar2[1] + 8))();
  FUN_0201b244(piVar2);
  return;
}

