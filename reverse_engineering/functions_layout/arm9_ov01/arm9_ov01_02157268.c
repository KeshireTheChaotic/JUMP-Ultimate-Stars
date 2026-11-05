
int FUN_02157268(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x304);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return *(int *)(*(int *)(param_1 + 0x2b4) + param_2 * 4);
    }
    if (iVar1 != 2) {
      return 0;
    }
  }
  return param_2;
}

