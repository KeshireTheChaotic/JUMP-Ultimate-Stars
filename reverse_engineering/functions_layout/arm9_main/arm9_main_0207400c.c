
void FUN_0207400c(char *param_1,char *param_2)

{
  for (; *param_2 != '\0'; param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *param_1 = '\0';
  return;
}

