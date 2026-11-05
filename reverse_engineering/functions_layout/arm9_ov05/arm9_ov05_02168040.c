
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02168040(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0216812c(param_1,&LAB_0216815c,0,param_4,param_4);
  (**(code **)(*(int *)param_1[0xf] + 8))();
  (**(code **)(*(int *)param_1[0x10] + 8))();
  (**(code **)(*(int *)param_1[0x11] + 8))();
  (**(code **)(*(int *)param_1[6] + 8))();
  (**(code **)(*(int *)param_1[7] + 8))();
  (**(code **)(*(int *)param_1[8] + 8))();
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (*param_1 != 0) {
    FUN_0206ae98();
  }
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 4] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 4] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  (**(code **)(*(int *)param_1[3] + 8))();
  FUN_0201b244(param_1);
  func_0x021b65cc();
  return;
}

