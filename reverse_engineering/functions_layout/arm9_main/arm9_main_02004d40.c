
char * FUN_02004d40(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      pcVar2 = param_1 + 1;
      if (cVar1 == *param_2) {
        pcVar4 = pcVar2;
        pcVar3 = param_2;
        do {
          pcVar3 = pcVar3 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          if (cVar1 != *pcVar3) break;
        } while (cVar1 != '\0');
        if (*pcVar3 == '\0') {
          return param_1;
        }
      }
      param_1 = pcVar2;
      cVar1 = *pcVar2;
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}

