
void FUN_0215ad9c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != -0x7ffef000) {
    return;
  }
  iVar1 = (**(code **)*param_2)();
  if (iVar1 != 4) {
    return;
  }
  FUN_0207342c(0x78,0);
  iVar1 = FUN_0215aabc(piVar2);
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(*piVar2 + 0xa4) = 2;
  FUN_021586ac(*piVar2);
  return;
}

