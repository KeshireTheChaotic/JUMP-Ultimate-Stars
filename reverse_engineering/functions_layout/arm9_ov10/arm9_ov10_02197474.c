
void FUN_02197474(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_4 * 2;
  iVar1 = param_5 + iVar6;
  iVar2 = iVar1 + iVar6;
  iVar3 = iVar2 + iVar6;
  iVar4 = iVar3 + iVar6;
  iVar7 = iVar4 + iVar6;
  FUN_02051890(param_2,param_5,iVar6);
  FUN_02051890(param_3,iVar2,iVar6);
  *(undefined2 *)(iVar2 + iVar6) = 1;
  iVar5 = FUN_02197bec(param_5,param_4);
  while (0 < iVar5) {
    FUN_0219765c(iVar1,iVar2,param_5,iVar7,param_4,iVar7 + iVar6);
    FUN_02051890(param_5,iVar2,iVar6);
    FUN_02051890(iVar7,param_5,iVar6);
    FUN_02197954(iVar7,iVar1,iVar3,param_4);
    FUN_02197a80(iVar7,iVar4,iVar7,param_4);
    FUN_02051890(iVar3,iVar4,iVar6);
    FUN_02051890(iVar7,iVar3,iVar6);
    iVar5 = FUN_02197bec(param_5,param_4);
  }
  FUN_02197b70(iVar4,iVar4,param_3,param_4);
  FUN_0219765c(0,iVar4,param_3,param_1,param_4,iVar7 + iVar6);
  return;
}

