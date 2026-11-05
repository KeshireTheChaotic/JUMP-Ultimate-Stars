
int FUN_021c1d80(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  iVar1 = param_4 * 4;
  iVar2 = param_3 * 4 + iVar1;
  param_1[2] = param_2 + iVar2;
  iVar2 = iVar2 + iVar1;
  param_1[3] = param_2 + iVar2;
  iVar2 = iVar2 + (param_3 + 1) * 4;
  param_1[6] = param_2 + iVar2;
  iVar2 = iVar2 + iVar1;
  param_1[8] = param_2 + iVar2;
  iVar2 = iVar2 + param_4 * 8;
  param_1[4] = param_2 + iVar2;
  iVar1 = (param_3 + 1) * 2;
  iVar2 = iVar2 + iVar1;
  param_1[5] = param_2 + iVar2;
  iVar2 = iVar2 + iVar1;
  param_1[7] = param_2 + iVar2;
  return iVar2 + param_4 * 2;
}

