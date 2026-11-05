
undefined4 FUN_0205ea08(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (param_2 != 0) {
    for (; (piVar1 != (int *)0x0 && (*piVar1 != param_2)); piVar1 = (int *)piVar1[3]) {
    }
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  *(int *)(param_1 + 0x24) = piVar1[1];
  *(int *)(param_1 + 0x28) = piVar1[2];
  *(int *)(param_1 + 0x2c) = piVar1[3];
  return 1;
}

