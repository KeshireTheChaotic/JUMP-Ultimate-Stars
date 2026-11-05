
void FUN_02082be4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    FUN_02082d2c(param_1);
    iVar1 = *param_1;
  }
  (**(code **)(*(int *)param_1[8] + 8))();
  (**(code **)(*(int *)param_1[9] + 8))();
  FUN_0201b244(param_1);
  return;
}

