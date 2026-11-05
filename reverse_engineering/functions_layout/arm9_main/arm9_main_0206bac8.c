
void FUN_0206bac8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1[iVar1 + 8] != 0) {
      if ((undefined4 *)param_1[iVar1 + 0x14] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[iVar1 + 0x14] = param_1[iVar1 + 0xd];
        param_1[iVar1 + 0x14] = 0;
      }
      if ((iVar1 == 0) && (param_1[0x12] != 0)) {
        func_0x021b70f8();
        param_1[0x12] = 0;
      }
      FUN_0202899c(param_1[iVar1 + 8]);
      (**(code **)(**(int **)param_1[iVar1 + 8] + 0xc))();
      param_1[iVar1 + 8] = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (param_1[0xc] != 0) {
    if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x18] = param_1[0x11];
      param_1[0x18] = 0;
    }
    if (param_1[0x13] != 0) {
      func_0x021b3bc8();
      param_1[0x13] = 0;
    }
    FUN_02020934(param_1[0xc]);
    (**(code **)(*(int *)param_1[0xc] + 8))();
    param_1[0xc] = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(**(int **)(param_1[1] + 4) + 0xc))();
    param_1[1] = 0;
  }
  (**(code **)(*(int *)*param_1 + 8))();
  FUN_0201b244(param_1);
  return;
}

