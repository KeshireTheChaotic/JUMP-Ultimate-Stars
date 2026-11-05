
void FUN_02074024(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  for (; cVar2 = *param_2, cVar2 != '\0'; param_2 = param_2 + 1) {
    cVar1 = *param_4;
    bVar3 = cVar2 == cVar1;
    if (bVar3) {
      cVar2 = param_2[1];
      cVar1 = param_4[1];
    }
    if (bVar3 && cVar2 == cVar1) {
      param_2 = param_2 + 2;
      for (; *param_3 != '\0'; param_3 = param_3 + 1) {
        *param_1 = *param_3;
        param_1 = param_1 + 1;
      }
    }
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *param_1 = '\0';
  return;
}

