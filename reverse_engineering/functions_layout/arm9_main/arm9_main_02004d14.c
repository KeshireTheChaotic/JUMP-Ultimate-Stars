
char * FUN_02004d14(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (param_1 = param_1 + 1, cVar1 != '\0') {
    if (cVar1 == param_2) {
      return param_1 + -1;
    }
    cVar1 = *param_1;
  }
  if (param_2 == '\0') {
    return param_1 + -1;
  }
  return (char *)0x0;
}

