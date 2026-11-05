
int FUN_0205386c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  do {
    iVar1 = iVar3;
    if (iVar1 == 0) {
      return 0;
    }
    iVar3 = *(int *)(iVar1 + 0x80);
  } while (iVar1 != param_2);
  iVar2 = *(int *)(iVar1 + 0x7c);
  if (*param_1 == iVar1) {
    *param_1 = iVar3;
  }
  else {
    *(int *)(iVar2 + 0x80) = iVar3;
  }
  if (param_1[1] == iVar1) {
    param_1[1] = iVar2;
  }
  else {
    *(int *)(iVar3 + 0x7c) = iVar2;
  }
  return iVar1;
}

