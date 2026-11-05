
void FUN_02075d64(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  FUN_0207597c(piVar2[4]);
  func_0x021bab64(piVar2[3]);
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*piVar2 + 4) + 0xc))();
  (**(code **)(*(int *)piVar2[1] + 8))();
  FUN_0201b244(piVar2);
  FUN_0206dcdc(1);
  return;
}

