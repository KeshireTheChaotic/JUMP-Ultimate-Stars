
int * FUN_0201248c(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[7] == param_2 || param_1[7] == 0) {
    return param_1;
  }
  iVar4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x74))();
  for (piVar2 = (int *)FUN_02024008(param_1[7]);
      (piVar2 != (int *)0x0 &&
      ((iVar3 = (**(code **)(*piVar2 + 0x74))(), iVar1 != iVar3 ||
       (iVar4 = iVar4 + 1, piVar2 != param_1)))); piVar2 = (int *)piVar2[3]) {
  }
  if (iVar4 == 0) {
    return (int *)0x0;
  }
  piVar2 = (int *)FUN_02023fb0(param_2,iVar1,iVar4 + -1);
  return piVar2;
}

