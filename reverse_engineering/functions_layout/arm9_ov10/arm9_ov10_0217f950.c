
char * FUN_0217f950(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_021a7d14;
  if (param_1 != (char *)0x0) {
    DAT_021a7d14 = param_1;
    pcVar2 = param_1;
  }
  for (; (iVar3 = (int)*DAT_021a7d14, iVar3 != 0 && (iVar3 != param_2));
      DAT_021a7d14 = DAT_021a7d14 + 1) {
  }
  if (DAT_021a7d14 == pcVar2) {
    pcVar2 = (char *)0x0;
  }
  if (iVar3 != 0) {
    pcVar1 = DAT_021a7d14 + 1;
    *DAT_021a7d14 = '\0';
    DAT_021a7d14 = pcVar1;
  }
  return pcVar2;
}

