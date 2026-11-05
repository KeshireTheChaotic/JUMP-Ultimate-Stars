
void FUN_02163440(int *param_1)

{
  int iVar1;
  
  if (param_1[5] != 0) {
    for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(param_1 + 7); iVar1 = iVar1 + 1) {
      if (*(int *)(param_1[5] + iVar1 * 0x14) != 0) {
        FUN_02083648();
      }
    }
    FUN_0201b268(param_1[5]);
  }
  if (param_1[3] != 0) {
    FUN_02083648();
  }
  if (param_1[6] != 0) {
    FUN_02170498();
  }
  if (param_1[2] != 0) {
    FUN_02034d7c();
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

