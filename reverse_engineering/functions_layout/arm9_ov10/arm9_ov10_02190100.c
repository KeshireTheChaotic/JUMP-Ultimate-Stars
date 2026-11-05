
int * FUN_02190100(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_020aab7c;
  while( true ) {
    if (iVar2 == 0) {
      return (int *)0x0;
    }
    piVar3 = *(int **)(iVar2 + 0xa4);
    if (((piVar3 != (int *)0x0) && (*piVar3 != 0)) &&
       (iVar1 = FUN_0219014c(param_1,param_2,piVar3), iVar1 != 0)) break;
    iVar2 = *(int *)(iVar2 + 0x68);
  }
  return piVar3;
}

