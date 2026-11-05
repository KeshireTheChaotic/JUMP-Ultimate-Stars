
void FUN_02166414(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    iVar1 = FUN_020736a4();
    if ((iVar1 == 0x30) || (iVar1 = FUN_020736a4(), iVar1 == 0x31)) {
      FUN_0207367c(8);
    }
    FUN_020735e4();
    FUN_0206c5b4();
    DAT_020afcb8 = (uint)*(byte *)((int)piVar3 + 0x95);
    FUN_02041f7c(DAT_020a0f64,0);
    FUN_02041f60(DAT_020a0f64,0);
    iVar1 = FUN_0203b414(3);
    piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x94))(piVar2,0);
    if (piVar3[0x1d] != 0) {
      FUN_0206ae98();
    }
    if (piVar3[0x1e] != 0) {
      FUN_0206b138();
    }
    if (piVar3[0x1f] != 0) {
      FUN_02165634();
    }
    iVar1 = 0;
    do {
      if (piVar3[iVar1 + 0x18] != 0) {
        FUN_02074608();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    if ((int *)piVar3[0xd] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[0xd] + 8))();
    }
    if ((int *)piVar3[0xb] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[0xb] + 8))();
    }
    if (piVar3[0x1c] != 0) {
      FUN_02168fc0();
    }
    iVar1 = 0;
    do {
      if ((int *)piVar3[iVar1 + 8] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[iVar1 + 8] + 8))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    if (piVar3[7] != 0) {
      FUN_02034d7c();
    }
    iVar1 = 0;
    do {
      if ((int *)piVar3[iVar1 + 3] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[iVar1 + 3] + 0xc))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
    DAT_02093c04 = DAT_02093c04 + 1;
    (**(code **)(**(int **)(*piVar3 + 4) + 0xc))();
    if ((int *)piVar3[2] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[2] + 8))();
    }
    (**(code **)(*(int *)piVar3[1] + 8))();
    func_0x021b65cc();
    FUN_0201b244(piVar3);
  }
  return;
}

