
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0216b930(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_0216baa0(param_1,&LAB_0216bad4,0,param_4,param_4);
  (**(code **)(*(int *)param_1[8] + 8))();
  (**(code **)(*(int *)param_1[0x1c] + 8))();
  (**(code **)(*(int *)param_1[9] + 8))();
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 0x18] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 0x18] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  (**(code **)(**(int **)(param_1[0x16] + 4) + 0xc))();
  (**(code **)(**(int **)(param_1[0x17] + 4) + 0xc))();
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      if ((int *)param_1[iVar1 * 5 + iVar2 + 0x1d] != (int *)0x0) {
        (**(code **)(*(int *)param_1[iVar1 * 5 + iVar2 + 0x1d] + 8))();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xf);
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  func_0x021b526c(2);
  if (*param_1 != 0) {
    FUN_0206ae98();
  }
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 6] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 6] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  FUN_02075648(param_1[1]);
  FUN_02075758(param_1[2]);
  (**(code **)(*(int *)param_1[5] + 8))();
  FUN_0201b244(param_1);
  func_0x021b65cc();
  return;
}

