
int * FUN_021934a4(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    if (iVar1 == param_2) break;
    param_1 = (int *)(iVar1 + 0x7c);
    iVar1 = *(int *)(iVar1 + 0x7c);
  }
  return param_1;
}

