
char * FUN_02001e6c(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  pcVar2 = param_1;
  while (iVar1 = (int)cVar3, iVar1 != 0) {
    if ((-1 < iVar1) && (iVar1 < 0x80)) {
      cVar3 = *(char *)(iVar1 + 0x208d420);
    }
    *pcVar2 = cVar3;
    pcVar2 = pcVar2 + 1;
    cVar3 = *pcVar2;
  }
  return param_1;
}

