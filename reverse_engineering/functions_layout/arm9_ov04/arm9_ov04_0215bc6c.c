
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215bc6c(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != -0x7ffef000) {
    return;
  }
  uVar2 = (**(code **)*param_2)();
  if ((uVar2 & 4) == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,0);
  if (*(int *)(*(int *)(param_1 + 4) + 0x124) == 0) {
    uVar3 = FUN_0214ce64();
    FUN_0214ce74(uVar3,2);
  }
  else {
    uVar3 = FUN_0214ce64();
    FUN_0214ce74(uVar3,1);
  }
  FUN_0214f984();
  func_0x021b65bc();
  uVar2 = 0;
  do {
    (*DAT_020a0e18)();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  FUN_02073ebc(3,1);
  while (iVar4 = FUN_0207382c(), iVar4 == 0) {
    (*DAT_020a0e18)();
  }
  FUN_0214e4b8(*(undefined4 *)(iVar1 + 8));
  FUN_0214e4b8(*(undefined4 *)(iVar1 + 0xc));
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (*(int *)(iVar1 + 0xb8) != 0) {
    FUN_0215a55c();
  }
  if (*(int *)(iVar1 + 0xbc) != 0) {
    FUN_0215a87c();
  }
  if (*(int *)(iVar1 + 0xc0) != 0) {
    FUN_0215aa98();
  }
  if (*(int *)(iVar1 + 0xc4) != 0) {
    FUN_02150d6c();
  }
  if (*(int *)(iVar1 + 200) != 0) {
    FUN_02152680();
  }
  iVar4 = 0;
  do {
    if (*(int *)(iVar1 + iVar4 * 4 + 0xcc) != 0) {
      FUN_0206ae98();
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  if (*(int *)(iVar1 + 0xd4) != 0) {
    FUN_0206ae98();
  }
  FUN_0214fb48(iVar1);
  FUN_0201b244(iVar1);
  return;
}

