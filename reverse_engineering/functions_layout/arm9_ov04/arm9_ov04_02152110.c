
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02152110(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar3 = 0;
  do {
    (*DAT_020a0e18)();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  FUN_02073ebc(3,1);
  while (iVar1 = FUN_0207382c(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  FUN_0214e4b8(*(undefined4 *)(iVar2 + 8));
  iVar1 = 0;
  do {
    if (*(int *)(iVar2 + 0xc0 + iVar1 * 4) != 0) {
      FUN_02150d6c();
      *(undefined4 *)(iVar2 + 0xc0 + iVar1 * 4) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (*(int *)(iVar2 + 0xb0) != 0) {
    func_0x021bd500();
  }
  if (*(int *)(iVar2 + 0xbc) != 0) {
    FUN_0206ae98();
  }
  FUN_0214fb48(iVar2);
  FUN_0201b244(iVar2);
  return;
}

