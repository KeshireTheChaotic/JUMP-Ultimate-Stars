
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021571f8(int param_1)

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
  iVar1 = thunk_FUN_0208c51c();
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_020a0f64 + 0x430) = 0;
  }
  FUN_02150b4c(*puVar3);
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  pcVar2 = *(code **)(puVar3[0x1c] + 0x2c);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined4 *)(puVar3[0x1c] + 0x10),puVar3[0x19]);
  }
  if (puVar3[0x19] != 0) {
    func_0x021bab64();
  }
  if (puVar3[0x17] != 0) {
    func_0x021bd500();
  }
  if (puVar3[0x18] != 0) {
    FUN_0206ae98();
  }
  if (puVar3[0x12] != 0) {
    FUN_0201b268();
  }
  if (puVar3[0x13] != 0) {
    FUN_0201b268();
  }
  FUN_02150f1c();
  if (puVar3[10] != 0) {
    FUN_02034d7c();
  }
  iVar1 = 0;
  do {
    if ((int *)puVar3[iVar1 + 8] != (int *)0x0) {
      (**(code **)(*(int *)puVar3[iVar1 + 8] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  pcVar2 = *(code **)(puVar3[0x1c] + 0x18);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined4 *)(puVar3[0x1c] + 0x10));
  }
  if ((int *)puVar3[2] != (int *)0x0) {
    (**(code **)(*(int *)puVar3[2] + 8))();
  }
  if ((int *)puVar3[3] != (int *)0x0) {
    (**(code **)(*(int *)puVar3[3] + 8))();
  }
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(puVar3[1] + 4) + 0xc))();
  FUN_0201b244(puVar3);
  return;
}

