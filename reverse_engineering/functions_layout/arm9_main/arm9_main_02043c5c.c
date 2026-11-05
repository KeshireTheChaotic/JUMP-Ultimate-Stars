
int FUN_02043c5c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
  return iVar1 + (((int)(uint)*(ushort *)(iVar1 + param_2 * 2) >> 1) + 1) * 2;
}

