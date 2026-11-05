
void FUN_021b3700(int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*param_1 + 4);
  if (piVar1 == (int *)0x0) {
    while (piVar1 = (int *)(*(uint *)(*param_1 + 8) & 0xfffffffe), *param_1 != *piVar1) {
      *param_1 = (int)piVar1;
    }
    *param_1 = (int)piVar1;
    return;
  }
  while ((int *)*piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
  }
  *param_1 = (int)piVar1;
  return;
}

