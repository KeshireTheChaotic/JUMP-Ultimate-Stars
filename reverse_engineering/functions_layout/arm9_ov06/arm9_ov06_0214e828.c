
void FUN_0214e828(int *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x99) != '\0') {
    (**(code **)(*(int *)param_1[0x13] + 8))();
    (**(code **)(*(int *)param_1[0x14] + 8))();
    iVar1 = 0;
    do {
      if ((int *)param_1[iVar1 + 7] != (int *)0x0) {
        (**(code **)(*(int *)param_1[iVar1 + 7] + 8))();
      }
      if ((int *)param_1[iVar1 + 0xd] != (int *)0x0) {
        (**(code **)(*(int *)param_1[iVar1 + 0xd] + 8))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    if ((int *)param_1[0x15] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x15] + 8))();
    }
    if ((int *)param_1[0x16] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x16] + 8))();
    }
    if ((int *)param_1[0x17] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x17] + 8))();
    }
    (**(code **)(*(int *)param_1[6] + 8))();
    if ((int *)param_1[4] != (int *)0x0) {
      (**(code **)(*(int *)param_1[4] + 8))();
    }
    if ((int *)param_1[5] != (int *)0x0) {
      (**(code **)(*(int *)param_1[5] + 8))();
    }
    (**(code **)(*(int *)param_1[0x18] + 8))();
    (**(code **)(*(int *)param_1[0x19] + 8))();
    iVar1 = 0;
    do {
      (**(code **)(*(int *)param_1[iVar1 + 0x1a] + 8))();
      (**(code **)(*(int *)param_1[iVar1 + 0x1e] + 8))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    if (*param_1 != 0) {
      FUN_0206ae98();
    }
    (**(code **)(*(int *)param_1[0x22] + 0xc))();
  }
  (**(code **)(*(int *)param_1[1] + 8))();
  FUN_0201b244(param_1);
  return;
}

