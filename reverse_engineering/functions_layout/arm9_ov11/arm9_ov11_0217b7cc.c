
int FUN_0217b7cc(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + param_2 * 4 + 8);
  if (iVar1 < 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + iVar1;
  }
  return param_1;
}

