
undefined4 FUN_02003bb0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)param_1[1] < (uint)(iVar1 + param_3)) {
    param_3 = param_1[1] - iVar1;
  }
  FUN_02002434(*param_1 + iVar1,param_2,param_3,iVar1,param_4);
  param_1[2] = param_1[2] + param_3;
  return 1;
}

