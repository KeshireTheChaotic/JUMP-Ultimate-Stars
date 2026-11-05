
void FUN_021c32bc(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_021c4728();
  iVar1 = FUN_0203b414(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  if (param_1[0x24] != 0) {
    FUN_02083464();
    param_1[0x24] = 0;
  }
  if (param_1[0x1c] != 0) {
    FUN_02075168();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 8))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 8))();
  }
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 0x14] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 0x14] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 8))();
  }
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 0x10] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 0x10] + 8))();
      param_1[iVar1 + 0x10] = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 3] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  iVar1 = 0;
  do {
    if (param_1[iVar1 + 0xe] != 0) {
      FUN_02034d7c();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  FUN_0201b244(param_1);
  return;
}

