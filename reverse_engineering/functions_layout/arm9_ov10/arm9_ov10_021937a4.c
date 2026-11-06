
int * FUN_021937a4(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*DAT_021a9da0)(0,param_1 + 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1 + 4;
    piVar1 = piVar1 + 1;
  }
  return piVar1;
}

