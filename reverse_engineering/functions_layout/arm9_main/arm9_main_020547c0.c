
int * FUN_020547c0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)0x0;
  for (piVar2 = param_1; (piVar2 != (int *)0x0 && (piVar2 < param_2)); piVar2 = (int *)piVar2[1]) {
    piVar1 = piVar2;
  }
  param_2[1] = (int)piVar2;
  *param_2 = (int)piVar1;
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)param_2;
    if ((int *)((int)param_2 + param_2[2]) == piVar2) {
      param_2[2] = param_2[2] + piVar2[2];
      piVar2 = (int *)piVar2[1];
      param_2[1] = (int)piVar2;
      if (piVar2 != (int *)0x0) {
        *piVar2 = (int)param_2;
      }
    }
  }
  if (piVar1 == (int *)0x0) {
    return param_2;
  }
  piVar1[1] = (int)param_2;
  if ((int *)((int)piVar1 + piVar1[2]) != param_2) {
    return param_1;
  }
  piVar1[2] = piVar1[2] + param_2[2];
  piVar1[1] = (int)piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)piVar1;
  }
  return param_1;
}

