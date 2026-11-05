
int FUN_0203837c(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == '$') {
    iVar2 = FUN_020382fc(param_1 + 1);
    return iVar2;
  }
  if ((*param_1 == '0') && (param_1[1] == 'x' || param_1[1] == 'X')) {
    iVar2 = FUN_020382fc(param_1 + 2);
    return iVar2;
  }
  iVar2 = FUN_02005f14(param_1);
  if (iVar2 != 0) {
    return iVar2;
  }
  cVar1 = *param_1;
  bVar3 = cVar1 == '0';
  if (bVar3) {
    cVar1 = param_1[1];
  }
  iVar2 = 0;
  if (!bVar3 || cVar1 != '\0') {
    iVar2 = param_2;
  }
  return iVar2;
}

