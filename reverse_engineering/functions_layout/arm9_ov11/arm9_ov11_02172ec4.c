
void FUN_02172ec4(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x24) + 4) + 0xc))();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 8))();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  uVar1 = 0;
  param_1 = param_1 + 0xa8;
  do {
    FUN_0217d888(param_1);
    FUN_0217cfc0(param_1);
    FUN_0217e370(param_1);
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_02174e1c();
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_021790fc();
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_0202899c();
      (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x14) + 0xc))();
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_02020934();
      (**(code **)(**(int **)(param_1 + 0x18) + 8))();
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x10c;
  } while (uVar1 < 4);
  FUN_02176830();
  return;
}

