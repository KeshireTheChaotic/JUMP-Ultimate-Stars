
void FUN_02168c90(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    FUN_02168f88();
    iVar1 = *param_1;
  }
  (**(code **)(*(int *)param_1[6] + 8))();
  FUN_0201b244(param_1);
  return;
}

