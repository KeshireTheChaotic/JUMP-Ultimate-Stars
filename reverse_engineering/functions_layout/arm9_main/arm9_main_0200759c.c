
void FUN_0200759c(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)param_1[1] < (uint)(iVar1 + param_3)) {
    param_3 = param_1[1] - iVar1;
  }
  FUN_02005f74(*param_1 + iVar1 * 2,param_2,param_3,iVar1,param_4);
  param_1[2] = param_1[2] + param_3;
  return;
}

