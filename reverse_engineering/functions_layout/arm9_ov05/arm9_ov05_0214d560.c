
int FUN_0214d560(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + (param_2 + param_3 * 5) * 4 + 0x14);
  if (*(int *)(param_1 + 0xc0) == iVar1) {
    return *(int *)(param_1 + 0xb8);
  }
  if (*(int *)(param_1 + 0xc4) == iVar1) {
    iVar1 = *(int *)(param_1 + 0xbc);
  }
  return iVar1;
}

