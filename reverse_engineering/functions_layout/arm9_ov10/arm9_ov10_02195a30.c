
int FUN_02195a30(char *param_1)

{
  char *pcVar1;
  
  for (pcVar1 = param_1; (*pcVar1 != '.' && (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
  }
  return (int)pcVar1 - (int)param_1;
}

