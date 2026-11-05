
void FUN_0205ed74(int *param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 0;
  uVar5 = 0;
  iVar3 = 1;
  while (param_5 != 0) {
    iVar2 = FUN_0205ee80(param_2,param_3,param_5,&param_5,iVar4,uVar5);
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    iVar3 = iVar3 + 1;
  }
  cVar1 = *(char *)(*param_2 + 1);
  *param_1 = iVar4;
  param_1[1] = (iVar3 + -1) * (param_4 + cVar1) - param_4;
  return;
}

