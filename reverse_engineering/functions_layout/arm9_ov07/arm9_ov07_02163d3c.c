
void FUN_02163d3c(int *param_1)

{
  int iVar1;
  
  if (param_1[0x19] != 0) {
    FUN_0206ae98();
  }
  if (param_1[0x18] != 0) {
    FUN_02075168();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 1] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  FUN_0201b244(param_1);
  return;
}

