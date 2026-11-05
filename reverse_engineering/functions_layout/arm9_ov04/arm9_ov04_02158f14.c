
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02158f14(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  if (param_1[6] != 0) {
    FUN_0206ae98();
  }
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  FUN_0201b244(param_1);
  return;
}

