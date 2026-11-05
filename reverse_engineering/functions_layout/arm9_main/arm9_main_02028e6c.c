
void FUN_02028e6c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0201a228(4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
    *(int **)(param_1 + 0xdc) = piVar1;
  }
  *(int **)(param_1 + 0xdc) = piVar1;
  return;
}

