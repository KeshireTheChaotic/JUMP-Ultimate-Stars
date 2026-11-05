
void FUN_021539b8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 2] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 2] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  (**(code **)(*(int *)param_1[1] + 0xc))();
  (**(code **)(*(int *)*param_1 + 8))();
  FUN_0201b244(param_1);
  return;
}

