
void FUN_0215ad30(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  FUN_0207367c(8);
  if ((int *)piVar2[6] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[6] + 8))();
  }
  (**(code **)(*(int *)piVar2[0xd] + 0xc))();
  (**(code **)(*(int *)piVar2[0xe] + 0xc))();
  (**(code **)(*(int *)piVar2[0xc] + 8))();
  (**(code **)(*(int *)piVar2[0xb] + 8))();
  (**(code **)(*(int *)piVar2[10] + 8))();
  FUN_02078f88(piVar2[5]);
  FUN_0207698c(piVar2[4]);
  FUN_020763e0(piVar2[3]);
  FUN_020735e4();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  DAT_020afcb8 = piVar2[0x15];
  (**(code **)(**(int **)(*piVar2 + 4) + 0xc))();
  (**(code **)(*(int *)piVar2[1] + 8))();
  FUN_0201b244(piVar2);
  func_0x021b65cc();
  return;
}

