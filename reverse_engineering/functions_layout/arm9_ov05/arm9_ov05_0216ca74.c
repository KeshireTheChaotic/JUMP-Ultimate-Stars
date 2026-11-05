
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0216ca74(int *param_1)

{
  int iVar1;
  
  param_1[2] = (int)FUN_0216cb6c;
  param_1[3] = 0;
  FUN_02150104();
  (**(code **)(*(int *)param_1[0x1c] + 8))();
  (**(code **)(*(int *)param_1[0x1d] + 8))();
  (**(code **)(*(int *)param_1[9] + 8))();
  (**(code **)(*(int *)param_1[10] + 8))();
  (**(code **)(*(int *)param_1[0xb] + 8))();
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (*param_1 != 0) {
    FUN_0206ae98();
  }
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 5] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 5] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  FUN_02075648(param_1[1]);
  (**(code **)(*(int *)param_1[4] + 8))();
  FUN_0201b244(param_1);
  func_0x021b65cc();
  return;
}

