
void FUN_02004bcc(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  do {
    pcVar2 = param_1;
    param_1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return;
}

