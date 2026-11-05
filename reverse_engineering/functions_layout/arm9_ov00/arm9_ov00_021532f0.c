
void FUN_021532f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x18))();
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
    }
  }
  FUN_02153760(param_1[0x33],param_1[0x2e],param_1[0x2f],param_1[0x30],param_1[0x31],param_1[0x32]);
  iVar1 = 0;
  do {
    if (param_1[iVar1 + 0x34] != 0) {
      FUN_021529e0();
    }
    iVar2 = iVar1 + 1;
    param_1[iVar1 + 0x34] = 0;
    iVar1 = iVar2;
  } while (iVar2 < 2);
  if (param_1[0x3d] != 0) {
    FUN_021529e0();
  }
  if (param_1[0x2d] != 0) {
    FUN_021529e0();
  }
  *param_1 = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x3d] = 0;
  return;
}

