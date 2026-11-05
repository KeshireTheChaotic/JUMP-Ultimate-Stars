
void FUN_02074374(char *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int extraout_r1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1;
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  iVar3 = param_3;
  if (param_2 < 0) {
    param_2 = -param_2;
    for (pcVar2 = DAT_0209e73c; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
      *param_1 = *pcVar2;
      param_1 = param_1 + 1;
    }
  }
  while (iVar3 + -1 != 0) {
    iVar4 = iVar4 * 10;
    iVar3 = iVar3 + -1;
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = FUN_0200d12c(param_2,iVar4);
    FUN_0200d12c(uVar1,10);
    iVar4 = FUN_0200d12c(iVar4,10);
    if ((param_4 != 0 || extraout_r1 != 0) || (param_3 == 0)) {
      param_4 = 1;
      for (pcVar2 = (&PTR_DAT_0209e740)[extraout_r1]; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
        *param_1 = *pcVar2;
        param_1 = param_1 + 1;
      }
    }
  }
  *param_1 = '\0';
  return;
}

