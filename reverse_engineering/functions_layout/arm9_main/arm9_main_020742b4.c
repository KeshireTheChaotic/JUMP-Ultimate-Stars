
int FUN_020742b4(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  do {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      param_3 = (int)*param_2;
    }
    if (cVar1 == '\0' && param_3 == 0) {
      return 0;
    }
    if (cVar1 != '\0') {
      param_3 = (int)*param_1;
      param_1 = param_1 + 1;
    }
    iVar2 = (int)*param_2;
    if (cVar1 == '\0') {
      param_3 = 0;
    }
    bVar3 = iVar2 == 0;
    if (bVar3) {
      iVar2 = 0;
    }
    iVar2 = param_3 - iVar2;
    if (!bVar3) {
      param_2 = param_2 + 1;
    }
    param_3 = 0;
  } while (iVar2 == 0);
  return iVar2;
}

