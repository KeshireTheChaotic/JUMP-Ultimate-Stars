
void FUN_021bd500(undefined4 *param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1[2] + 4) + 0xc))();
  (**(code **)(**(int **)(param_1[1] + 4) + 0xc))();
  iVar1 = 0;
  do {
    (**(code **)(*(int *)param_1[iVar1 + 9] + 8))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (param_1[3] != 0) {
    (**(code **)(**(int **)(param_1[3] + 4) + 0xc))();
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 8))();
  }
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 8))();
  }
  (**(code **)(*(int *)param_1[0xc] + 0xc))();
  (**(code **)(*(int *)param_1[0xd] + 0xc))();
  (**(code **)(*(int *)param_1[6] + 8))();
  (**(code **)(*(int *)param_1[7] + 8))();
  (**(code **)(*(int *)param_1[8] + 8))();
  (**(code **)(*(int *)*param_1 + 8))();
  FUN_0201b244(param_1);
  return;
}

