
int thunk_FUN_020579f8(char *param_1,char *param_2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (int)*param_1;
    if ((iVar1 != *param_2) || (iVar1 == 0)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return iVar1 - *param_2;
}

