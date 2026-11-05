
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215b478(undefined4 *param_1)

{
  int iVar1;
  
  *(undefined1 *)((int)param_1 + 0x71) = 1;
  func_0x021b65bc();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  FUN_02073ebc(3,1);
  while (iVar1 = FUN_0207382c(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  if ((*(char *)((int)param_1 + 0x72) != '\0') &&
     (FUN_02158d24(*(char *)((int)param_1 + 0x73) != '\0'), *(char *)((int)param_1 + 0x73) != '\0'))
  {
    FUN_02086c24();
  }
  FUN_020735e4();
  *(undefined1 *)(DAT_020a0f64 + 0x430) = 0;
  FUN_02150b4c(*param_1);
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  func_0x021b526c(2);
  if (param_1[0x1a] != 0) {
    func_0x021bab64();
  }
  if (param_1[0x18] != 0) {
    func_0x021bd500();
  }
  if (param_1[0x19] != 0) {
    FUN_0206ae98();
  }
  if (param_1[0x12] != 0) {
    FUN_0201b268();
  }
  if (param_1[0x13] != 0) {
    FUN_0201b268();
  }
  if (param_1[0x14] != 0) {
    FUN_0201b268();
  }
  FUN_02150f1c();
  if (param_1[10] != 0) {
    FUN_02034d7c();
  }
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 8] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 8] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if (param_1[0x1f] != 0) {
    FUN_02159ac0();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 8))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 8))();
  }
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(param_1[1] + 4) + 0xc))();
  FUN_0201b244(param_1);
  return;
}

