
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02086838(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    FUN_02086cac(0);
    if (*(char *)((int)param_1 + 0x22) != '\0') {
      iVar1 = thunk_FUN_0208c51c();
      if ((iVar1 == 0) && (iVar1 = FUN_02088394(), iVar1 == 0)) {
        FUN_02086c94();
      }
      else {
        FUN_02086d30();
        iVar1 = thunk_FUN_0208c51c();
        if (iVar1 == 0) {
          FUN_02086c24();
        }
      }
    }
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 8))();
    }
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 8))();
    }
    _DAT_0214be18 = 0;
    FUN_0201b244(param_1);
  }
  return;
}

