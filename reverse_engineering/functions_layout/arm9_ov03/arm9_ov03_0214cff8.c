
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214cff8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  FUN_02043264(0);
  FUN_02041f7c(DAT_020a0f64,0);
  if ((*(code **)(&DAT_0215d2ac + (uint)*(byte *)(piVar2 + 7) * 4) != (code *)0x0) &&
     (*(char *)((int)piVar2 + 0x1f) == '\0')) {
    iVar1 = (**(code **)(&DAT_0215d2ac + (uint)*(byte *)(piVar2 + 7) * 4))(param_1);
    piVar2[2] = iVar1;
    FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_0214d1ac);
    return;
  }
  if ((piVar2[6] & 4U) == 0) {
    FUN_0207367c(8);
    FUN_0207372c(8);
    FUN_020735e4();
  }
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  if ((int *)piVar2[4] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[4] + 0xc))();
    piVar2[4] = 0;
  }
  if (piVar2[3] != 0) {
    (**(code **)(**(int **)(piVar2[3] + 4) + 0xc))();
    piVar2[3] = 0;
  }
  if ((int *)piVar2[1] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[1] + 8))();
    piVar2[1] = 0;
  }
  if (*piVar2 != 0) {
    (**(code **)(**(int **)(*piVar2 + 4) + 0xc))();
    *piVar2 = 0;
  }
  FUN_0201b244(piVar2);
  _DAT_021d514c = 0;
  func_0x021b7260(1);
  func_0x021b7260(2,0);
  func_0x021b7260(8,0);
  func_0x021b7260(4,0);
  func_0x021b7260(0x10000,0);
  func_0x021b7260(0x20,0);
  func_0x021b7260(0x10000,0);
  func_0x021b65cc();
  return;
}

