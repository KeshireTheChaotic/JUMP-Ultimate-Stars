
void FUN_02004bf4(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  do {
    pcVar2 = param_1;
    param_1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  for (; param_3 != 0; param_3 = param_3 + -1) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    if (*pcVar2 == '\0') break;
    pcVar2 = pcVar2 + 1;
  }
  *pcVar2 = '\0';
  return;
}

