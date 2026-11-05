
int * FUN_02041204(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  return param_1 + (iVar1 + -1) * 2 + 4;
}

