
void FUN_0216aaf0(undefined4 *param_1)

{
  int iVar1;
  
  param_1[1] = &LAB_0216ac44;
  param_1[2] = 0;
  (**(code **)(*(int *)param_1[0x26] + 8))();
  (**(code **)(*(int *)param_1[0x24] + 8))();
  (**(code **)(*(int *)param_1[0x25] + 8))();
  (**(code **)(*(int *)param_1[8] + 8))();
  (**(code **)(*(int *)param_1[9] + 8))();
  (**(code **)(*(int *)param_1[7] + 8))();
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 0xd] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 0xd] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 0x12] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 0x12] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x12);
  (**(code **)(**(int **)(param_1[0x11] + 4) + 0xc))();
  (**(code **)(*(int *)param_1[10] + 8))();
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 4] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 4] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  FUN_0216d330(*param_1);
  (**(code **)(*(int *)param_1[3] + 8))();
  FUN_0201b244(param_1);
  func_0x021b65cc();
  return;
}

