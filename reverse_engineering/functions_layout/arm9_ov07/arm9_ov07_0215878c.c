
void FUN_0215878c(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  FUN_02073ebc(3,1);
  while (iVar1 = FUN_0207382c(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  FUN_020735e4();
  FUN_02150b4c(*puVar3);
  pcVar2 = *(code **)(puVar3[0x1f] + 0x30);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined4 *)(puVar3[0x1f] + 0x14),puVar3[0x1a]);
  }
  if (puVar3[0x1a] != 0) {
    func_0x021bab64();
  }
  if (puVar3[0x18] != 0) {
    func_0x021bd500();
  }
  if (puVar3[0x19] != 0) {
    FUN_0206ae98();
  }
  iVar1 = 0;
  do {
    if ((int *)puVar3[iVar1 + 7] != (int *)0x0) {
      (**(code **)(*(int *)puVar3[iVar1 + 7] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  FUN_02150f1c();
  pcVar2 = *(code **)(puVar3[0x1f] + 0x1c);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined4 *)(puVar3[0x1f] + 0x14));
  }
  if ((int *)puVar3[2] != (int *)0x0) {
    (**(code **)(*(int *)puVar3[2] + 8))();
  }
  if ((int *)puVar3[3] != (int *)0x0) {
    (**(code **)(*(int *)puVar3[3] + 8))();
  }
  FUN_02150dbc(puVar3[1]);
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(puVar3[1] + 4) + 0xc))();
  FUN_0201b244(puVar3);
  return;
}

