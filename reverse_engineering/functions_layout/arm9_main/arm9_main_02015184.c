
void FUN_02015184(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if ((*(byte *)((int)piVar1 + 0x29) & 0x7f) >> 6 == 0) {
    (**(code **)(*piVar1 + 0xe4))();
    return;
  }
  return;
}

