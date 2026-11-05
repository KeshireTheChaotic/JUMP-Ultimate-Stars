
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0216325c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_0203b414(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  func_0x021b65cc();
  FUN_020735e4();
  FUN_02043264(0);
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (piVar3[0x21] != 0) {
    func_0x021bab64();
  }
  if (piVar3[0x24] != 0) {
    FUN_02166154();
  }
  iVar1 = 0;
  do {
    if (piVar3[iVar1 + 0x22] != 0) {
      FUN_0206ae98();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if (piVar3[0x26] != 0) {
    FUN_020763e0();
  }
  if (piVar3[0x25] != 0) {
    FUN_02165370();
  }
  iVar1 = 0;
  do {
    if (piVar3[iVar1 + 0x1b] != 0) {
      (**(code **)(**(int **)(piVar3[iVar1 + 0x1b] + 4) + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (piVar3[0x2a] != 0) {
    FUN_02075168();
  }
  if (piVar3[0x2b] != 0) {
    FUN_0216d474();
  }
  if (piVar3[0x2c] != 0) {
    FUN_02075848();
  }
  if (piVar3[0x2d] != 0) {
    FUN_0216d330();
  }
  if (piVar3[0x2e] != 0) {
    FUN_02074504();
  }
  if ((int *)piVar3[2] != (int *)0x0) {
    (**(code **)(*(int *)piVar3[2] + 8))();
  }
  if ((int *)piVar3[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)piVar3[0x1e] + 8))();
  }
  iVar1 = 0;
  do {
    if ((int *)piVar3[iVar1 + 9] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[iVar1 + 9] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 0;
  do {
    if (piVar3 != (int *)0xfffffff4) {
      (**(code **)(*(int *)piVar3[iVar1 + 3] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*piVar3 + 4) + 0xc))();
  (**(code **)(*(int *)piVar3[1] + 8))();
  FUN_0201b244(piVar3);
  return;
}

