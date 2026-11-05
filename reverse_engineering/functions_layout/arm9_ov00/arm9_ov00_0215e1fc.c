
void FUN_0215e1fc(int *param_1)

{
  int iVar1;
  
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 8))();
  }
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 2] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 2] + 8))();
    }
    if ((int *)param_1[iVar1 + 5] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 5] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (param_1[0x17] != 0) {
    (**(code **)(**(int **)(param_1[0x17] + 4) + 0xc))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  FUN_0201b244(param_1);
  return;
}

