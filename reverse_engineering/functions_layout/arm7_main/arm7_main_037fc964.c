
int FUN_037fc964(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar3 + 100);
    if (iVar3 == param_2) break;
    iVar3 = iVar2;
  }
  iVar1 = *(int *)(iVar3 + 0x60);
  if (*param_1 == iVar3) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 100) = iVar2;
  }
  if (param_1[1] == iVar3) {
    param_1[1] = iVar1;
    return iVar3;
  }
  *(int *)(iVar2 + 0x60) = iVar1;
  return iVar3;
}

