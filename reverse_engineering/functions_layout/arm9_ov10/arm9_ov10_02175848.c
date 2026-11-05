
int FUN_02175848(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  
  iVar1 = (*DAT_021a73f0)(param_1,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_02051890(param_2,iVar1,param_4);
    (*DAT_021a73ec)(param_1,param_2,param_3);
  }
  return iVar1;
}

