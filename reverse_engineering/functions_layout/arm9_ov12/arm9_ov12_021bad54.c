
int FUN_021bad54(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 * 0x24 + *param_1;
  return iVar1 + 4 + param_3 * 4 + *(int *)(iVar1 + param_3 * 4 + 4);
}

