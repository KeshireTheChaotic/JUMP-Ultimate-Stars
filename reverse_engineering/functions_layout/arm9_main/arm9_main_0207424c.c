
void thunk_FUN_02074258(char *param_1,char *param_2)

{
  for (; *param_2 != '\0'; param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  return;
}

