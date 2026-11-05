
bool FUN_02074178(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*param_2 != '\0' && (iVar1 < param_3 * 2))) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + 1;
  }
  *param_1 = '\0';
  return *param_2 != '\0';
}

