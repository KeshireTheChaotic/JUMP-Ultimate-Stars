
char * FUN_020024b0(int param_1,char param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + param_3);
  while( true ) {
    if (param_3 == 0) {
      return (char *)0x0;
    }
    pcVar1 = pcVar1 + -1;
    if (*pcVar1 == param_2) break;
    param_3 = param_3 + -1;
  }
  return pcVar1;
}

