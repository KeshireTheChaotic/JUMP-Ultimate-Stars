
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02163820(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    FUN_02043264(0);
    iVar1 = FUN_0203b414(3);
    piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x94))(piVar2,0);
    if (piVar3[0x36] != 0) {
      FUN_02165634();
    }
    if (piVar3[0x37] != 0) {
      FUN_02086838();
    }
    DAT_020afcb8 = (uint)*(byte *)((int)piVar3 + 0xe2);
    FUN_020735e4();
    if (piVar3[0x35] != 0) {
      FUN_0206ae98();
    }
    if (piVar3[0x34] != 0) {
      func_0x021bab64();
    }
    if (piVar3[0x33] != 0) {
      func_0x021bd500();
    }
    _DAT_021d5154 = 0;
    func_0x021b526c(1);
    iVar1 = 0;
    do {
      if ((int *)piVar3[iVar1 + 0x1f] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[iVar1 + 0x1f] + 8))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    do {
      if ((int *)piVar3[iVar1 + 0x1b] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[iVar1 + 0x1b] + 8))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iVar1 = 0;
    do {
      if ((int *)piVar3[iVar1 + 7] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[iVar1 + 7] + 8))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x14);
    iVar1 = 0;
    do {
      if ((int *)piVar3[iVar1 + 5] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[iVar1 + 5] + 8))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    do {
      if ((int *)piVar3[iVar1 + 2] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[iVar1 + 2] + 0xc))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    func_0x021b65cc();
    (**(code **)(*(int *)piVar3[1] + 8))();
    DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
    DAT_02093c04 = DAT_02093c04 + 1;
    (**(code **)(**(int **)(*piVar3 + 4) + 0xc))();
    FUN_0201b244(piVar3);
  }
  return;
}

