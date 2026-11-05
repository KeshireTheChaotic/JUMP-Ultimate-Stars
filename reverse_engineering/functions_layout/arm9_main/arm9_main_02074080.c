
void FUN_02074080(char *param_1,char *param_2,char *param_3,char *param_4,int param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  
  pcVar7 = DAT_0209e738;
  iVar3 = FUN_02074294(param_2);
  iVar4 = FUN_02074294(param_3);
  iVar4 = iVar3 + iVar4;
  if (param_5 < iVar4) {
    iVar3 = iVar3 + 1;
  }
  for (; cVar2 = *param_2, cVar2 != '\0'; param_2 = param_2 + 2) {
    cVar1 = *param_4;
    bVar8 = cVar2 == cVar1;
    if (bVar8) {
      cVar2 = param_2[1];
      cVar1 = param_4[1];
    }
    if (bVar8 && cVar2 == cVar1) {
      param_2 = param_2 + 2;
      iVar6 = iVar3;
      while ((iVar3 = iVar6, *param_3 != '\0' && (iVar3 = iVar6 + 1, iVar6 < param_5))) {
        cVar2 = *param_3;
        pcVar5 = param_3 + 1;
        param_3 = param_3 + 2;
        *param_1 = cVar2;
        param_1[1] = *pcVar5;
        param_1 = param_1 + 2;
        iVar6 = iVar3;
      }
      if (param_5 < iVar4) {
        for (; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
          *param_1 = *pcVar7;
          param_1 = param_1 + 1;
        }
      }
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1 = param_1 + 2;
  }
  *param_1 = '\0';
  return;
}

