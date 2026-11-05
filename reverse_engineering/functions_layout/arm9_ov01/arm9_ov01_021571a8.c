
int FUN_021571a8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x304);
  if (iVar1 == 0) {
    iVar1 = FUN_02071f10(param_2);
    return iVar1;
  }
  if (iVar1 == 1) {
    return *(int *)(param_1 + 0x2ac) + param_2 * 0x5c;
  }
  if (iVar1 == 2) {
    iVar1 = FUN_02072070(param_2);
    return iVar1;
  }
  return 0;
}

