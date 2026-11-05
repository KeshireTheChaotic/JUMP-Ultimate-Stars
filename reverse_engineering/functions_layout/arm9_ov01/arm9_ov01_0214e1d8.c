
void FUN_0214e1d8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  if (piVar2[8] != 0) {
    (**(code **)(**(int **)(piVar2[8] + 4) + 0xc))();
  }
  if (piVar2[6] != 0) {
    (**(code **)(**(int **)(piVar2[6] + 4) + 0xc))();
  }
  iVar1 = 0;
  do {
    FUN_02072870(iVar1,(int)(short)(&DAT_020aff3c)[iVar1]);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  if (piVar2[0xc] != 0) {
    func_0x021bab64();
  }
  if ((int *)piVar2[4] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[4] + 8))();
  }
  if (piVar2[10] != 0) {
    FUN_021681d8();
  }
  if (piVar2[0xb] != 0) {
    FUN_0214f488();
  }
  if ((int *)piVar2[2] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[2] + 0xc))();
  }
  if ((int *)piVar2[3] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[3] + 0xc))();
  }
  func_0x021b65cc();
  (**(code **)(*(int *)piVar2[1] + 8))();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*piVar2 + 4) + 0xc))();
  FUN_0201b244(piVar2);
  return;
}

