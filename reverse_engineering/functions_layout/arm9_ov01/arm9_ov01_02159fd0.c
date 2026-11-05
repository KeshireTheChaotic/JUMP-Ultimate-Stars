
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02159fd0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    if (piVar3[0xb9] != 0) {
      FUN_02165634();
    }
    if (piVar3[0xbb] != 0) {
      FUN_02086838();
    }
    if (piVar3[0xbc] != 0) {
      FUN_021695d4();
    }
    piVar2 = (int *)FUN_0214d37c(_DAT_021d5140);
    (**(code **)(*piVar2 + 0x54))(piVar2,piVar3[0x53]);
    FUN_02157528(0);
    if (piVar3[0x51] != 0) {
      (**(code **)(**(int **)(piVar3[0x51] + 4) + 0xc))();
    }
    if (piVar3[0x52] != 0) {
      (**(code **)(**(int **)(piVar3[0x52] + 4) + 0xc))();
    }
    FUN_02041f7c(DAT_020a0f64,0);
    iVar1 = FUN_0203b424(3);
    piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x94))(piVar2,0);
    iVar1 = FUN_0203b3f4();
    FUN_021500b0(*(undefined4 *)(iVar1 + 0x88),0,0);
    iVar1 = FUN_0203b3f4();
    FUN_021500b0(*(undefined4 *)(iVar1 + 0x88),1,0);
    func_0x021b65cc();
    DAT_020afcb8 = (uint)*(byte *)((int)piVar3 + 0x311);
    FUN_020735e4();
    iVar1 = 0;
    do {
      if (piVar3[iVar1 + 0x2c] != 0) {
        FUN_02042660(DAT_020a0f64);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x25);
    if (piVar3[0xbd] != 0) {
      FUN_0215eda8();
    }
    if (piVar3[0xba] != 0) {
      FUN_0215e2c8();
    }
    if (piVar3[0xb7] != 0) {
      FUN_0206ae98();
    }
    if (piVar3[0xb6] != 0) {
      func_0x021bab64();
    }
    if (piVar3[0xb5] != 0) {
      FUN_02078f88();
    }
    if (piVar3[0xb3] != 0) {
      FUN_0207698c();
    }
    if (piVar3[0xb4] != 0) {
      FUN_0207698c();
    }
    if (piVar3[0xb2] != 0) {
      FUN_020763e0();
    }
    if (piVar3[0xab] != 0) {
      FUN_0201b268();
    }
    if (piVar3[0xac] != 0) {
      FUN_0201b268();
    }
    if (piVar3[0xad] != 0) {
      FUN_0201b268();
    }
    if (piVar3[0xae] != 0) {
      FUN_0201b268();
    }
    _DAT_021d5154 = 0;
    func_0x021b526c(1);
    func_0x021b526c(2);
    _DAT_021d514c = 0;
    func_0x021b7260(1);
    func_0x021b7260(2,0);
    func_0x021b7260(8,0);
    func_0x021b7260(4,0);
    func_0x021b7260(0x10000,0);
    iVar1 = 0;
    do {
      if ((int *)piVar3[iVar1 + 0x56] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[iVar1 + 0x56] + 8))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
    if ((int *)piVar3[0x18] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[0x18] + 8))();
    }
    if (piVar3[0xb8] != 0) {
      FUN_02164c00();
      piVar3[0xb8] = 0;
    }
    if ((int *)piVar3[0x55] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[0x55] + 8))();
    }
    if ((int *)piVar3[0x54] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[0x54] + 8))();
    }
    iVar1 = 0;
    do {
      (**(code **)(*(int *)piVar3[iVar1 + 8] + 8))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iVar1 = 0;
    do {
      (**(code **)(*(int *)piVar3[iVar1 + 2] + 0xc))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    (**(code **)(*(int *)piVar3[1] + 8))();
    DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
    DAT_02093c04 = DAT_02093c04 + 1;
    (**(code **)(**(int **)(*piVar3 + 4) + 0xc))();
    FUN_0201b244(piVar3);
  }
  return;
}

