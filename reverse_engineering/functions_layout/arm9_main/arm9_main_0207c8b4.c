
void FUN_0207c8b4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    FUN_0207ccd4(param_1);
    iVar1 = *param_1;
  }
  iVar1 = param_1[4];
  while (iVar1 != 0) {
    FUN_0207ccd4(param_1);
    iVar1 = param_1[4];
  }
  if (param_1[0x3d] != 0) {
    FUN_0207be94();
    param_1[0x3d] = 0;
  }
  if (param_1[0x3b] != 0) {
    FUN_0207ae9c();
    param_1[0x3b] = 0;
  }
  if (param_1[0x3c] != 0) {
    FUN_02082be4();
    param_1[0x3c] = 0;
  }
  if ((int *)param_1[0x38] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x38] + 8))();
    param_1[0x38] = 0;
  }
  if ((int *)param_1[0x39] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x39] + 8))();
    param_1[0x39] = 0;
  }
  FUN_0201b244(param_1);
  return;
}

