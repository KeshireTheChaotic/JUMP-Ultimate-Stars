
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02157edc(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b65cc();
  DAT_020afcb8 = piVar3[0x29];
  FUN_02043264(0);
  iVar1 = FUN_0203b414(2);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  FUN_020735e4();
  _DAT_021d514c = 0;
  func_0x021b7260(1);
  func_0x021b7260(2,0);
  func_0x021b7260(8,0);
  func_0x021b7260(4,0);
  func_0x021b7260(0x10000,0);
  func_0x021b526c(1);
  if (piVar3[0x24] != 0) {
    FUN_0215a86c();
  }
  if (piVar3[0x25] != 0) {
    FUN_0215955c();
  }
  if ((int *)piVar3[0x14] != (int *)0x0) {
    (**(code **)(*(int *)piVar3[0x14] + 8))();
  }
  if (piVar3[0x23] != 0) {
    FUN_0206ae98();
  }
  if ((int *)piVar3[7] != (int *)0x0) {
    (**(code **)(*(int *)piVar3[7] + 8))();
  }
  if (piVar3[0x22] != 0) {
    func_0x021bd500();
  }
  iVar1 = 0;
  do {
    if ((int *)piVar3[iVar1 + 2] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[iVar1 + 2] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  iVar1 = 0;
  do {
    if ((int *)piVar3[iVar1 + 8] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[iVar1 + 8] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if ((int *)*piVar3 != (int *)0x0) {
    (**(code **)(*(int *)*piVar3 + 8))();
  }
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(piVar3[1] + 4) + 0xc))();
  FUN_0201b244(piVar3);
  return;
}

