
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215512c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  if (piVar2[0x1d] != 0) {
    FUN_0215608c();
  }
  FUN_020735e4();
  if ((int *)piVar2[10] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[10] + 8))();
  }
  if (piVar2[0x1e] != 0) {
    FUN_0207597c();
  }
  if (piVar2[0x1c] != 0) {
    func_0x021bab64();
  }
  if ((int *)piVar2[0xb] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[0xb] + 8))();
  }
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (piVar2[0x18] != 0) {
    func_0x021bd500();
  }
  if (piVar2[0x19] != 0) {
    FUN_0206ae98();
  }
  iVar1 = 0;
  do {
    if (piVar2[iVar1 + 0x1a] != 0) {
      FUN_0206b138();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if ((int *)piVar2[1] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[1] + 8))();
  }
  if ((int *)piVar2[0x17] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[0x17] + 8))();
  }
  iVar1 = 0;
  do {
    if ((int *)piVar2[iVar1 + 7] != (int *)0x0) {
      (**(code **)(*(int *)piVar2[iVar1 + 7] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if (piVar2[9] != 0) {
    FUN_02034d7c();
  }
  iVar1 = 0;
  do {
    if ((int *)piVar2[iVar1 + 2] != (int *)0x0) {
      (**(code **)(*(int *)piVar2[iVar1 + 2] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  DAT_020afcb8 = piVar2[0x1f];
  (**(code **)(**(int **)(*piVar2 + 4) + 0xc))();
  FUN_0201b244(piVar2);
  return;
}

