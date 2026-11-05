
void FUN_02037e98(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  if ((undefined4 *)param_2[1] == (undefined4 *)0x0) {
    *param_1 = piVar1;
  }
  else {
    *(undefined4 *)param_2[1] = piVar1;
  }
  if (*piVar1 == 0) {
    param_1[1] = param_2;
  }
  else {
    *(int **)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = param_2[1];
  *param_2 = *piVar1;
  *piVar1 = (int)param_2;
  param_2[1] = (int)piVar1;
  return;
}

