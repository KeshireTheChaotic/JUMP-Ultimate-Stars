
void FUN_0214d1e0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  DAT_020afcb8 = piVar2[0xf];
  FUN_020735e4();
  if (piVar2[2] != 0) {
    (**(code **)(**(int **)(piVar2[2] + 4) + 0xc))();
  }
  if (piVar2[6] != 0) {
    FUN_0207535c();
  }
  if ((int *)piVar2[10] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[10] + 8))();
  }
  if ((int *)piVar2[9] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[9] + 8))();
  }
  if (piVar2[7] != 0) {
    FUN_0214f488();
  }
  if (piVar2[8] != 0) {
    func_0x021c32bc();
  }
  if ((int *)piVar2[3] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[3] + 0xc))();
  }
  if ((int *)piVar2[4] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[4] + 0xc))();
  }
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*piVar2 + 4) + 0xc))();
  (**(code **)(*(int *)piVar2[1] + 8))();
  FUN_0201b244(piVar2);
  func_0x021b65cc();
  return;
}

