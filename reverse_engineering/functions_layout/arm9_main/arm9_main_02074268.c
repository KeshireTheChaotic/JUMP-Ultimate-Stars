
void FUN_02074268(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*param_2 == '\0') {
      return;
    }
    if (param_3 * 2 <= iVar1) break;
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + 1;
  }
  return;
}

