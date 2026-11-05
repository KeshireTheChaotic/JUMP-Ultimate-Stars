
int FUN_02036430(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[0xc] != 0) {
    return param_1[0xc];
  }
  iVar1 = (**(code **)(*param_1 + 0x3c))();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x3c))();
  iVar1 = (**(code **)(*piVar2 + 100))();
  return iVar1;
}

