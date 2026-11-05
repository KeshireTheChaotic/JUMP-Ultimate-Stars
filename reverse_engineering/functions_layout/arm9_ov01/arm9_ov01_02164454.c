
int FUN_02164454(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + param_2 * 0x10;
  return iVar1 + param_3 * 4 + *(int *)(iVar1 + param_3 * 4);
}

