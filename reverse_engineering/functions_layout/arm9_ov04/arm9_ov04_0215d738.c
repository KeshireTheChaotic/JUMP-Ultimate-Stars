
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215d738(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0214f984();
  func_0x021b65bc();
  uVar2 = 0;
  do {
    (*DAT_020a0e18)();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  FUN_02073ebc(3,1);
  while (iVar1 = FUN_0207382c(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  FUN_02086cac(0);
  FUN_0214e4b8(*(undefined4 *)(param_1 + 8));
  FUN_0214e4b8(*(undefined4 *)(param_1 + 0xc));
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_0215a55c();
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_0215a87c();
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_0215aa98();
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_02150d6c();
  }
  if (*(int *)(param_1 + 200) != 0) {
    FUN_0215cb38();
  }
  FUN_0214fb48(param_1);
  FUN_0201b244(param_1);
  return;
}

