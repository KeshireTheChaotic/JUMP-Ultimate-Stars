
void FUN_0215f68c(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 1] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  FUN_0201b244(param_1);
  return;
}

