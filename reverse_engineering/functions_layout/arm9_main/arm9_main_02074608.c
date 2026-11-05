
void FUN_02074608(int *param_1)

{
  uint uVar1;
  
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 8))();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0xc))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
  }
  if (param_1[0x15] != 0) {
    FUN_02034d7c();
  }
  if (param_1[4] != 0) {
    FUN_02034d7c();
  }
  uVar1 = 0;
  do {
    if (param_1[uVar1 + 5] != 0) {
      FUN_02034d7c();
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  if (param_1[0x16] != 0) {
    FUN_02034d7c();
  }
  uVar1 = 0;
  do {
    if (param_1[uVar1 + 0x17] != 0) {
      FUN_02034d7c();
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  if (param_1[0x1f] != 0) {
    FUN_02010824(FUN_02074540);
    (**(code **)(*(int *)param_1[0x1f] + 8))();
  }
  if (param_1[0x20] != 0) {
    FUN_02010824(FUN_02074540);
    (**(code **)(*(int *)param_1[0x20] + 8))();
  }
  FUN_0201b244(param_1);
  return;
}

