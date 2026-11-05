
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214ed70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  if (*(char *)((int)puVar3 + 0xae) == '\0') {
    uVar1 = 3;
  }
  else {
    uVar1 = 1;
  }
  FUN_02073ebc(uVar1,1);
  while (iVar2 = FUN_0207382c(), iVar2 == 0) {
    (*DAT_020a0e18)();
  }
  FUN_020735e4();
  FUN_02150b4c(*puVar3);
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (puVar3[0x21] != 0) {
    func_0x021bab64();
  }
  if (puVar3[0x20] != 0) {
    func_0x021bd500();
  }
  if (puVar3[0x22] != 0) {
    FUN_0206ae98();
  }
  if ((int *)puVar3[2] != (int *)0x0) {
    (**(code **)(*(int *)puVar3[2] + 8))();
  }
  if ((int *)puVar3[3] != (int *)0x0) {
    (**(code **)(*(int *)puVar3[3] + 8))();
  }
  if ((int *)puVar3[0x1f] != (int *)0x0) {
    (**(code **)(*(int *)puVar3[0x1f] + 8))();
  }
  iVar2 = 0;
  do {
    if ((int *)puVar3[iVar2 + 7] != (int *)0x0) {
      (**(code **)(*(int *)puVar3[iVar2 + 7] + 0xc))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  FUN_02150dbc(puVar3[1]);
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(puVar3[1] + 4) + 0xc))();
  FUN_0201b244(puVar3);
  return;
}

