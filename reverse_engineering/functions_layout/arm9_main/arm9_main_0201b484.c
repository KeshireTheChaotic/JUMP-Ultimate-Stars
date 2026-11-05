
int * FUN_0201b484(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (piVar1 + -1 != (int *)0x0) {
      (**(code **)(piVar1[-1] + 0x1c))();
    }
    piVar1 = (int *)iVar2;
  }
  return param_1;
}

