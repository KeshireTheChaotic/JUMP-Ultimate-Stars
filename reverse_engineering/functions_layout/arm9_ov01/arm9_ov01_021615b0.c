
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021615b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  if (piVar3[0xf] != 0) {
    FUN_02165634();
  }
  if (piVar3[0x11] != 0) {
    FUN_02086838();
  }
  DAT_02093bcc = piVar3[0x1f];
  func_0x021b65cc();
  FUN_020735e4();
  FUN_02157528(0);
  FUN_02041f7c(DAT_020a0f64,0);
  iVar1 = FUN_0203b424(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  FUN_02043264(0);
  iVar1 = FUN_0203b3f4();
  FUN_021500b0(*(undefined4 *)(iVar1 + 0x88),0,0);
  if (piVar3[0x10] != 0) {
    func_0x021bab64();
  }
  if (piVar3[0xe] != 0) {
    FUN_0206ae98();
  }
  if (piVar3[0xc] != 0) {
    func_0x021c32bc();
  }
  if (piVar3[0xd] != 0) {
    FUN_02075168();
  }
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  _DAT_021d514c = 0;
  func_0x021b7260(1);
  func_0x021b7260(2,0);
  func_0x021b7260(8,0);
  func_0x021b7260(4,0);
  func_0x021b7260(0x10000,0);
  if ((int *)piVar3[0x12] != (int *)0x0) {
    (**(code **)(*(int *)piVar3[0x12] + 8))();
  }
  if ((int *)piVar3[0xb] != (int *)0x0) {
    (**(code **)(*(int *)piVar3[0xb] + 8))();
  }
  iVar1 = 0;
  do {
    if ((int *)piVar3[iVar1 + 8] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[iVar1 + 8] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 0;
  do {
    if ((int *)piVar3[iVar1 + 4] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[iVar1 + 4] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  DAT_020afcb8 = (int)*(char *)((int)piVar3 + 0xae);
  (**(code **)(**(int **)(*piVar3 + 4) + 0xc))();
  (**(code **)(*(int *)piVar3[1] + 8))();
  FUN_0201b244(piVar3);
  func_0x021b65cc();
  return;
}

