
int * FUN_02186c88(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*param_1 + 0x434);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((piVar1[3] == param_2) && (*piVar1 == 0x69)) break;
    piVar1 = (int *)piVar1[0xf];
  }
  return piVar1;
}

