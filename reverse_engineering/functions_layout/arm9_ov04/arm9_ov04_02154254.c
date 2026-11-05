
void FUN_02154254(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 8))();
  }
  if (param_1[0xf] != 0) {
    FUN_0206ae98();
  }
  if (param_1[0xb] != 0) {
    FUN_0206ae98();
  }
  iVar1 = 0;
  do {
    if (param_1[iVar1 + 0xc] != 0) {
      FUN_0206ae98();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  FUN_0201b244(param_1);
  return;
}

