
void FUN_02083464(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  while (iVar1 != 0) {
    FUN_02083648();
    iVar1 = param_1[3];
  }
  FUN_02083de0(param_1);
  FUN_0207ab9c();
  FUN_0207c8b4(param_1[0x23]);
  (**(code **)(*(int *)*param_1 + 8))();
  (**(code **)(*(int *)param_1[1] + 8))();
  (**(code **)(*(int *)param_1[2] + 8))();
  FUN_0201b244(param_1);
  return;
}

