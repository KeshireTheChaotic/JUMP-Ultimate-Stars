
void FUN_020295d0(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0201a228(4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
    *(int **)(param_2 + 0xdc) = piVar1;
  }
  return;
}

