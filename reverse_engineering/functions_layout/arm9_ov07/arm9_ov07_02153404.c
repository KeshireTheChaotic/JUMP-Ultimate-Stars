
void FUN_02153404(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  FUN_02073ebc(3,1);
  while (iVar1 = FUN_0207382c(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  FUN_020735e4();
  FUN_02150b4c(*puVar2);
  if (puVar2[0x1d] != 0) {
    func_0x021bd500();
  }
  iVar1 = 0;
  do {
    if ((int *)puVar2[iVar1 + 7] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[iVar1 + 7] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if ((int *)puVar2[2] != (int *)0x0) {
    (**(code **)(*(int *)puVar2[2] + 8))();
  }
  if ((int *)puVar2[3] != (int *)0x0) {
    (**(code **)(*(int *)puVar2[3] + 8))();
  }
  FUN_02150dbc(puVar2[1]);
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(puVar2[1] + 4) + 0xc))();
  FUN_0201b244(puVar2);
  return;
}

