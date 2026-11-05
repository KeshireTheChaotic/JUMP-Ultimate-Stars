
int FUN_02074310(char *param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      param_4 = (int)*param_2;
    }
    if ((cVar1 == '\0' && param_4 == 0) || (param_3 * 2 <= iVar3)) {
      return 0;
    }
    if (cVar1 != '\0') {
      param_4 = (int)*param_1;
      param_1 = param_1 + 1;
    }
    iVar2 = (int)*param_2;
    if (cVar1 == '\0') {
      param_4 = 0;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      param_2 = param_2 + 1;
    }
    iVar2 = param_4 - iVar2;
    param_4 = 0;
    iVar3 = iVar3 + 1;
  } while (iVar2 == 0);
  return iVar2;
}

